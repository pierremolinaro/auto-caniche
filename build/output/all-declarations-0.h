#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//LEXIQUE lexicalAnalyzer
//
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S                                             
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S                                           
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S                                                  
//----------------------------------------------------------------------------------------------------------------------

class cTokenFor_lexicalAnalyzer : public cToken {
  public: C_String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_lexicalAnalyzer (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S                                                
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_lexicalAnalyzer : public C_Lexique {
//--- Constructors
  public: C_Lexique_lexicalAnalyzer (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: C_Lexique_lexicalAnalyzer (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ C_Lexique_lexicalAnalyzer (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
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
  public: static int16_t search_into_keyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: C_String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Unicode test functions

//--- Indexing directory
  protected: virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected: virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public: virtual int16_t terminalVocabularyCount (void) const { return 36 ; }

//--- Get Token String
  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected: void enterToken (cTokenFor_lexicalAnalyzer & ioToken) ;

//--- Style name for Latex
  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumTypeList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumTypeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumTypeList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumTypeList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEnumListName,
                                                 const class GALGAS_lstringlist & in_mEnumConstantList,
                                                 const class GALGAS_bool & in_mGenerateCode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumTypeList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumTypeList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumTypeList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstringlist & inOperand1,
                                                                      const class GALGAS_bool & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumTypeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumTypeList add_operation (const GALGAS_enumTypeList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_enumTypeList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumConstantListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumListNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerateCodeAtIndex (class GALGAS_bool constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumListNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumTypeList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumTypeList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumTypeList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumTypeList ;
 
} ; // End of GALGAS_enumTypeList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumTypeList : public cGenericAbstractEnumerator {
  public: cEnumerator_enumTypeList (const GALGAS_enumTypeList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEnumListName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mEnumConstantList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mGenerateCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumTypeList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumTypeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mEnumListName ;
  public: inline GALGAS_lstring readProperty_mEnumListName (void) const {
    return mProperty_mEnumListName ;
  }

  public: GALGAS_lstringlist mProperty_mEnumConstantList ;
  public: inline GALGAS_lstringlist readProperty_mEnumConstantList (void) const {
    return mProperty_mEnumConstantList ;
  }

  public: GALGAS_bool mProperty_mGenerateCode ;
  public: inline GALGAS_bool readProperty_mGenerateCode (void) const {
    return mProperty_mGenerateCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumTypeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumTypeList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumListName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumListName = inValue ;
  }

  public: inline void setter_setMEnumConstantList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumConstantList = inValue ;
  }

  public: inline void setter_setMGenerateCode (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateCode = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumTypeList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumTypeList_2D_element (const GALGAS_lstring & in_mEnumListName,
                                          const GALGAS_lstringlist & in_mEnumConstantList,
                                          const GALGAS_bool & in_mGenerateCode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumTypeList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumTypeList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstringlist & inOperand1,
                                                                       const class GALGAS_bool & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumTypeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumTypeList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumVarDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumVarDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumVarDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumVarDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEnumTypeName,
                                                 const class GALGAS_lstring & in_mEnumVarName,
                                                 const class GALGAS_lstring & in_mConstantName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumVarDeclarationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumVarDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumVarDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumVarDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumVarDeclarationList add_operation (const GALGAS_enumVarDeclarationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_enumVarDeclarationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumVarNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumVarDeclarationList ;
 
} ; // End of GALGAS_enumVarDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumVarDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_enumVarDeclarationList (const GALGAS_enumVarDeclarationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEnumTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mEnumVarName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mConstantName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumVarDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumVarDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumVarDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumVarDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mEnumTypeName ;
  public: inline GALGAS_lstring readProperty_mEnumTypeName (void) const {
    return mProperty_mEnumTypeName ;
  }

  public: GALGAS_lstring mProperty_mEnumVarName ;
  public: inline GALGAS_lstring readProperty_mEnumVarName (void) const {
    return mProperty_mEnumVarName ;
  }

  public: GALGAS_lstring mProperty_mConstantName ;
  public: inline GALGAS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumVarDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumVarDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumTypeName = inValue ;
  }

  public: inline void setter_setMEnumVarName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumVarName = inValue ;
  }

  public: inline void setter_setMConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumVarDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumVarDeclarationList_2D_element (const GALGAS_lstring & in_mEnumTypeName,
                                                    const GALGAS_lstring & in_mEnumVarName,
                                                    const GALGAS_lstring & in_mConstantName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumVarDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumVarDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumVarDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumVarDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @eventDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_eventDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_eventDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_eventDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEventName,
                                                 const class GALGAS_eventArgumentList & in_mEventArgumentList,
                                                 const class GALGAS_instructionList & in_mEventInstructionList,
                                                 const class GALGAS_expressionList & in_mEnsureExpressionList,
                                                 const class GALGAS_location & in_mEndOfEnsureExpressionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_eventDeclarationList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_eventDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_eventDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_eventArgumentList & inOperand1,
                                                                              const class GALGAS_instructionList & inOperand2,
                                                                              const class GALGAS_expressionList & inOperand3,
                                                                              const class GALGAS_location & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_eventDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_eventArgumentList & inOperand1,
                                                     const class GALGAS_instructionList & inOperand2,
                                                     const class GALGAS_expressionList & inOperand3,
                                                     const class GALGAS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_eventDeclarationList add_operation (const GALGAS_eventDeclarationList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_eventDeclarationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_eventArgumentList constinArgument1,
                                                      class GALGAS_instructionList constinArgument2,
                                                      class GALGAS_expressionList constinArgument3,
                                                      class GALGAS_location constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_eventArgumentList & outArgument1,
                                                 class GALGAS_instructionList & outArgument2,
                                                 class GALGAS_expressionList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_eventArgumentList & outArgument1,
                                                class GALGAS_instructionList & outArgument2,
                                                class GALGAS_expressionList & outArgument3,
                                                class GALGAS_location & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_eventArgumentList & outArgument1,
                                                      class GALGAS_instructionList & outArgument2,
                                                      class GALGAS_expressionList & outArgument3,
                                                      class GALGAS_location & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfEnsureExpressionListAtIndex (class GALGAS_location constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnsureExpressionListAtIndex (class GALGAS_expressionList constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventArgumentListAtIndex (class GALGAS_eventArgumentList constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventInstructionListAtIndex (class GALGAS_instructionList constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_eventArgumentList & outArgument1,
                                              class GALGAS_instructionList & outArgument2,
                                              class GALGAS_expressionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_eventArgumentList & outArgument1,
                                             class GALGAS_instructionList & outArgument2,
                                             class GALGAS_expressionList & outArgument3,
                                             class GALGAS_location & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnsureExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_mEnsureExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_mEventArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_mEventInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEventNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_eventDeclarationList ;
 
} ; // End of GALGAS_eventDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_eventDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_eventDeclarationList (const GALGAS_eventDeclarationList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEventName (LOCATION_ARGS) const ;
  public: class GALGAS_eventArgumentList current_mEventArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_instructionList current_mEventInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_expressionList current_mEnsureExpressionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfEnsureExpressionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_eventDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @eventArgumentList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_eventArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_eventArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_eventArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mArgumentTypeName,
                                                 const class GALGAS_lstring & in_mArgumentVarName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_eventArgumentList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_eventArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_eventArgumentList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_eventArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_eventArgumentList add_operation (const GALGAS_eventArgumentList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_eventArgumentList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentVarNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_eventArgumentList ;
 
} ; // End of GALGAS_eventArgumentList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_eventArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_eventArgumentList (const GALGAS_eventArgumentList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mArgumentTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mArgumentVarName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_eventArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventArgumentList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_expressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_expressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabel,
                                                 const class GALGAS_expression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_expressionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_expression & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_expressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_expression & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_expressionList add_operation (const GALGAS_expressionList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_expressionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_expression constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_expression & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_expression & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_expression & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_expression constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_expression & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_expression & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_expression getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_expressionList ;
 
} ; // End of GALGAS_expressionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_expressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_expressionList (const GALGAS_expressionList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabel (LOCATION_ARGS) const ;
  public: class GALGAS_expression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_expressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_instructionList constructor_listWithValue (const class GALGAS_instruction & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_instruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_instructionList add_operation (const GALGAS_instructionList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_instructionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_instruction constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_instruction & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_instruction & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_instruction constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_instruction & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionList ;
 
} ; // End of GALGAS_instructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_instructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_instructionList (const GALGAS_instructionList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @eventDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_eventDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mEventName ;
  public: inline GALGAS_lstring readProperty_mEventName (void) const {
    return mProperty_mEventName ;
  }

  public: GALGAS_eventArgumentList mProperty_mEventArgumentList ;
  public: inline GALGAS_eventArgumentList readProperty_mEventArgumentList (void) const {
    return mProperty_mEventArgumentList ;
  }

  public: GALGAS_instructionList mProperty_mEventInstructionList ;
  public: inline GALGAS_instructionList readProperty_mEventInstructionList (void) const {
    return mProperty_mEventInstructionList ;
  }

  public: GALGAS_expressionList mProperty_mEnsureExpressionList ;
  public: inline GALGAS_expressionList readProperty_mEnsureExpressionList (void) const {
    return mProperty_mEnsureExpressionList ;
  }

  public: GALGAS_location mProperty_mEndOfEnsureExpressionList ;
  public: inline GALGAS_location readProperty_mEndOfEnsureExpressionList (void) const {
    return mProperty_mEndOfEnsureExpressionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_eventDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_eventDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEventName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventName = inValue ;
  }

  public: inline void setter_setMEventArgumentList (const GALGAS_eventArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventArgumentList = inValue ;
  }

  public: inline void setter_setMEventInstructionList (const GALGAS_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventInstructionList = inValue ;
  }

  public: inline void setter_setMEnsureExpressionList (const GALGAS_expressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnsureExpressionList = inValue ;
  }

  public: inline void setter_setMEndOfEnsureExpressionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfEnsureExpressionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_eventDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_eventDeclarationList_2D_element (const GALGAS_lstring & in_mEventName,
                                                  const GALGAS_eventArgumentList & in_mEventArgumentList,
                                                  const GALGAS_instructionList & in_mEventInstructionList,
                                                  const GALGAS_expressionList & in_mEnsureExpressionList,
                                                  const GALGAS_location & in_mEndOfEnsureExpressionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_eventDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_eventDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_eventArgumentList & inOperand1,
                                                                               const class GALGAS_instructionList & inOperand2,
                                                                               const class GALGAS_expressionList & inOperand3,
                                                                               const class GALGAS_location & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_eventDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_eventDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @eventArgumentList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_eventArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mArgumentTypeName ;
  public: inline GALGAS_lstring readProperty_mArgumentTypeName (void) const {
    return mProperty_mArgumentTypeName ;
  }

  public: GALGAS_lstring mProperty_mArgumentVarName ;
  public: inline GALGAS_lstring readProperty_mArgumentVarName (void) const {
    return mProperty_mArgumentVarName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_eventArgumentList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_eventArgumentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMArgumentTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeName = inValue ;
  }

  public: inline void setter_setMArgumentVarName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentVarName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_eventArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_eventArgumentList_2D_element (const GALGAS_lstring & in_mArgumentTypeName,
                                               const GALGAS_lstring & in_mArgumentVarName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_eventArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_eventArgumentList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_eventArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_eventArgumentList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventArgumentList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_instruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_instruction (const class cPtr_instruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instruction extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @instruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_instruction : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_instruction mProperty_mInstruction ;
  public: inline GALGAS_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_instructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_instructionList_2D_element (const GALGAS_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instructionList_2D_element constructor_new (const class GALGAS_instruction & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_expression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_expression (const class cPtr_expression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expression extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expression : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_expression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: inline GALGAS_lstring readProperty_mLabel (void) const {
    return mProperty_mLabel ;
  }

  public: GALGAS_expression mProperty_mExpression ;
  public: inline GALGAS_expression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_expressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabel (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabel = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_expressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_expressionList_2D_element (const GALGAS_lstring & in_mLabel,
                                            const GALGAS_expression & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_expression & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_machineList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_machineList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMachineName,
                                                 const class GALGAS_enumVarDeclarationList & in_mEnumVarDeclarationList,
                                                 const class GALGAS_expressionList & in_mInvariantExpressionList,
                                                 const class GALGAS_eventDeclarationList & in_mEventList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineList extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_machineList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_enumVarDeclarationList & inOperand1,
                                                                     const class GALGAS_expressionList & inOperand2,
                                                                     const class GALGAS_eventDeclarationList & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_machineList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_enumVarDeclarationList & inOperand1,
                                                     const class GALGAS_expressionList & inOperand2,
                                                     const class GALGAS_eventDeclarationList & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_machineList add_operation (const GALGAS_machineList & inOperand,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_machineList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_enumVarDeclarationList constinArgument1,
                                                      class GALGAS_expressionList constinArgument2,
                                                      class GALGAS_eventDeclarationList constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_enumVarDeclarationList & outArgument1,
                                                 class GALGAS_expressionList & outArgument2,
                                                 class GALGAS_eventDeclarationList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_enumVarDeclarationList & outArgument1,
                                                class GALGAS_expressionList & outArgument2,
                                                class GALGAS_eventDeclarationList & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_enumVarDeclarationList & outArgument1,
                                                      class GALGAS_expressionList & outArgument2,
                                                      class GALGAS_eventDeclarationList & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumVarDeclarationListAtIndex (class GALGAS_enumVarDeclarationList constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventListAtIndex (class GALGAS_eventDeclarationList constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInvariantExpressionListAtIndex (class GALGAS_expressionList constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_enumVarDeclarationList & outArgument1,
                                              class GALGAS_expressionList & outArgument2,
                                              class GALGAS_eventDeclarationList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_enumVarDeclarationList & outArgument1,
                                             class GALGAS_expressionList & outArgument2,
                                             class GALGAS_eventDeclarationList & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_mEnumVarDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_mEventListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_mInvariantExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_machineList ;
 
} ; // End of GALGAS_machineList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_machineList : public cGenericAbstractEnumerator {
  public: cEnumerator_machineList (const GALGAS_machineList & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMachineName (LOCATION_ARGS) const ;
  public: class GALGAS_enumVarDeclarationList current_mEnumVarDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_expressionList current_mInvariantExpressionList (LOCATION_ARGS) const ;
  public: class GALGAS_eventDeclarationList current_mEventList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_machineList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMachineName ;
  public: inline GALGAS_lstring readProperty_mMachineName (void) const {
    return mProperty_mMachineName ;
  }

  public: GALGAS_enumVarDeclarationList mProperty_mEnumVarDeclarationList ;
  public: inline GALGAS_enumVarDeclarationList readProperty_mEnumVarDeclarationList (void) const {
    return mProperty_mEnumVarDeclarationList ;
  }

  public: GALGAS_expressionList mProperty_mInvariantExpressionList ;
  public: inline GALGAS_expressionList readProperty_mInvariantExpressionList (void) const {
    return mProperty_mInvariantExpressionList ;
  }

  public: GALGAS_eventDeclarationList mProperty_mEventList ;
  public: inline GALGAS_eventDeclarationList readProperty_mEventList (void) const {
    return mProperty_mEventList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_machineList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_machineList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMachineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMachineName = inValue ;
  }

  public: inline void setter_setMEnumVarDeclarationList (const GALGAS_enumVarDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumVarDeclarationList = inValue ;
  }

  public: inline void setter_setMInvariantExpressionList (const GALGAS_expressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInvariantExpressionList = inValue ;
  }

  public: inline void setter_setMEventList (const GALGAS_eventDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_machineList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_machineList_2D_element (const GALGAS_lstring & in_mMachineName,
                                         const GALGAS_enumVarDeclarationList & in_mEnumVarDeclarationList,
                                         const GALGAS_expressionList & in_mInvariantExpressionList,
                                         const GALGAS_eventDeclarationList & in_mEventList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineList_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_enumVarDeclarationList & inOperand1,
                                                                      const class GALGAS_expressionList & inOperand2,
                                                                      const class GALGAS_eventDeclarationList & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_machineList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_expression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expression_2D_weak (const class GALGAS_expression & inSource) ;

  public: GALGAS_expression_2D_weak & operator = (const class GALGAS_expression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expression bang_expression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expression_2D_weak extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @implicationExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicationExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_implicationExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_implicationExpression (const class cPtr_implicationExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeft (void) const ;

  public: class GALGAS_expression readProperty_mRight (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_implicationExpression extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implicationExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                                     const class GALGAS_expression & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_implicationExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeft (class GALGAS_expression inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRight (class GALGAS_expression inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicationExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicationExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @implicationExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_implicationExpression : public cPtr_expression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_expression mProperty_mLeft ;
  public: GALGAS_expression mProperty_mRight ;

//--- Constructor
  public: cPtr_implicationExpression (const GALGAS_expression & in_mLeft,
                                      const GALGAS_expression & in_mRight
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
// Phase 1: @implicationExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicationExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_implicationExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_implicationExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_implicationExpression_2D_weak (const class GALGAS_implicationExpression & inSource) ;

  public: GALGAS_implicationExpression_2D_weak & operator = (const class GALGAS_implicationExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_implicationExpression bang_implicationExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_implicationExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implicationExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_implicationExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicationExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicationExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalOrExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalOrExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_logicalOrExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_logicalOrExpression (const class cPtr_logicalOrExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeft (void) const ;

  public: class GALGAS_expression readProperty_mRight (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalOrExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalOrExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                                   const class GALGAS_expression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalOrExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeft (class GALGAS_expression inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRight (class GALGAS_expression inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalOrExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalOrExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logicalOrExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_logicalOrExpression : public cPtr_expression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_expression mProperty_mLeft ;
  public: GALGAS_expression mProperty_mRight ;

//--- Constructor
  public: cPtr_logicalOrExpression (const GALGAS_expression & in_mLeft,
                                    const GALGAS_expression & in_mRight
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
// Phase 1: @logicalOrExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalOrExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logicalOrExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_logicalOrExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logicalOrExpression_2D_weak (const class GALGAS_logicalOrExpression & inSource) ;

  public: GALGAS_logicalOrExpression_2D_weak & operator = (const class GALGAS_logicalOrExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logicalOrExpression bang_logicalOrExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalOrExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalOrExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalOrExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalOrExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalOrExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalAndExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalAndExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_logicalAndExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_logicalAndExpression (const class cPtr_logicalAndExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeft (void) const ;

  public: class GALGAS_expression readProperty_mRight (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalAndExpression extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalAndExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                                    const class GALGAS_expression & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalAndExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeft (class GALGAS_expression inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRight (class GALGAS_expression inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalAndExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalAndExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logicalAndExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_logicalAndExpression : public cPtr_expression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_expression mProperty_mLeft ;
  public: GALGAS_expression mProperty_mRight ;

//--- Constructor
  public: cPtr_logicalAndExpression (const GALGAS_expression & in_mLeft,
                                     const GALGAS_expression & in_mRight
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
// Phase 1: @logicalAndExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalAndExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logicalAndExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_logicalAndExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logicalAndExpression_2D_weak (const class GALGAS_logicalAndExpression & inSource) ;

  public: GALGAS_logicalAndExpression_2D_weak & operator = (const class GALGAS_logicalAndExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logicalAndExpression bang_logicalAndExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalAndExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalAndExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalAndExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalAndExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalAndExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonRightOperand reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonRightOperand : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_comparisonRightOperand (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonRightOperand (const class cPtr_comparisonRightOperand * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonRightOperand class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonRightOperand ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonRightOperand class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_comparisonRightOperand : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_comparisonRightOperand (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonRightOperand_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonRightOperand_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_comparisonRightOperand_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_comparisonRightOperand_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonRightOperand_2D_weak (const class GALGAS_comparisonRightOperand & inSource) ;

  public: GALGAS_comparisonRightOperand_2D_weak & operator = (const class GALGAS_comparisonRightOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonRightOperand bang_comparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonRightOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonRightOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonRightOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonRightOperand_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonRightOperand_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                        Phase 1: @enumComparisonOperator enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumComparisonOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_enumComparisonOperator (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_notEqual
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumComparisonOperator extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumComparisonOperator constructor_equal (LOCATION_ARGS) ;

  public: static class GALGAS_enumComparisonOperator constructor_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumComparisonOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_equal () const ;

  public: VIRTUAL_IN_DEBUG bool optional_notEqual () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumComparisonOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumComparisonOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_instruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_instruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_instruction_2D_weak (const class GALGAS_instruction & inSource) ;

  public: GALGAS_instruction_2D_weak & operator = (const class GALGAS_instruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_instruction bang_instruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentSourceExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_assignmentSourceExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentSourceExpression (const class cPtr_assignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignmentSourceExpression : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_assignmentSourceExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentSourceExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_assignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentSourceExpression_2D_weak (const class GALGAS_assignmentSourceExpression & inSource) ;

  public: GALGAS_assignmentSourceExpression_2D_weak & operator = (const class GALGAS_assignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentSourceExpression bang_assignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assertInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assertInstruction : public GALGAS_instruction {
//--------------------------------- Default constructor
  public: GALGAS_assertInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assertInstruction (const class cPtr_assertInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mAssertInstructionLocation (void) const ;

  public: class GALGAS_expression readProperty_mAssertExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assertInstruction extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assertInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_expression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assertInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAssertExpression (class GALGAS_expression inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssertInstructionLocation (class GALGAS_location inArgument0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assertInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assertInstruction : public cPtr_instruction {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mAssertInstructionLocation ;
  public: GALGAS_expression mProperty_mAssertExpression ;

//--- Constructor
  public: cPtr_assertInstruction (const GALGAS_location & in_mAssertInstructionLocation,
                                  const GALGAS_expression & in_mAssertExpression
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
// Phase 1: @assertInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assertInstruction_2D_weak : public GALGAS_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assertInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assertInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assertInstruction_2D_weak (const class GALGAS_assertInstruction & inSource) ;

  public: GALGAS_assertInstruction_2D_weak & operator = (const class GALGAS_assertInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assertInstruction bang_assertInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assertInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assertInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assertInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifInstruction : public GALGAS_instruction {
//--------------------------------- Default constructor
  public: GALGAS_ifInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_ifInstruction (const class cPtr_ifInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mIFinstructionLocation (void) const ;

  public: class GALGAS_expression readProperty_mTestExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfTestExpression (void) const ;

  public: class GALGAS_instructionList readProperty_mThenInstructionList (void) const ;

  public: class GALGAS_instructionList readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstruction extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_expression & inOperand1,
                                                             const class GALGAS_location & inOperand2,
                                                             const class GALGAS_instructionList & inOperand3,
                                                             const class GALGAS_instructionList & inOperand4
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_instructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfTestExpression (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIFinstructionLocation (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTestExpression (class GALGAS_expression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMThenInstructionList (class GALGAS_instructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ifInstruction : public cPtr_instruction {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mIFinstructionLocation ;
  public: GALGAS_expression mProperty_mTestExpression ;
  public: GALGAS_location mProperty_mEndOfTestExpression ;
  public: GALGAS_instructionList mProperty_mThenInstructionList ;
  public: GALGAS_instructionList mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_ifInstruction (const GALGAS_location & in_mIFinstructionLocation,
                              const GALGAS_expression & in_mTestExpression,
                              const GALGAS_location & in_mEndOfTestExpression,
                              const GALGAS_instructionList & in_mThenInstructionList,
                              const GALGAS_instructionList & in_mElseInstructionList
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
// Phase 1: @ifInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifInstruction_2D_weak : public GALGAS_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ifInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifInstruction_2D_weak (const class GALGAS_ifInstruction & inSource) ;

  public: GALGAS_ifInstruction_2D_weak & operator = (const class GALGAS_ifInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifInstruction bang_ifInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionValueList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_functionValueList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_functionValueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOperandName,
                                                 const class GALGAS_lstring & in_mResultName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionValueList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionValueList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_functionValueList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionValueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_functionValueList add_operation (const GALGAS_functionValueList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_functionValueList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionValueList ;
 
} ; // End of GALGAS_functionValueList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_functionValueList : public cGenericAbstractEnumerator {
  public: cEnumerator_functionValueList (const GALGAS_functionValueList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOperandName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mResultName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_functionValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionValueList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionValueList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOperandName ;
  public: inline GALGAS_lstring readProperty_mOperandName (void) const {
    return mProperty_mOperandName ;
  }

  public: GALGAS_lstring mProperty_mResultName ;
  public: inline GALGAS_lstring readProperty_mResultName (void) const {
    return mProperty_mResultName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionValueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_functionValueList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperandName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperandName = inValue ;
  }

  public: inline void setter_setMResultName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_functionValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_functionValueList_2D_element (const GALGAS_lstring & in_mOperandName,
                                               const GALGAS_lstring & in_mResultName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionValueList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionValueList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_functionDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_functionDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFunctionName,
                                                 const class GALGAS_lstring & in_mOperandEnumTypeName,
                                                 const class GALGAS_lstring & in_mResultEnumTypeName,
                                                 const class GALGAS_functionValueList & in_mValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDefinitionList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_functionDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_functionValueList & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_functionValueList & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_functionDefinitionList add_operation (const GALGAS_functionDefinitionList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_functionDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_functionValueList constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_functionValueList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_functionValueList & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_functionValueList & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandEnumTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultEnumTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GALGAS_functionValueList constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_functionValueList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_functionValueList & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandEnumTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultEnumTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionDefinitionList ;
 
} ; // End of GALGAS_functionDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_functionDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_functionDefinitionList (const GALGAS_functionDefinitionList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOperandEnumTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mResultEnumTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_functionValueList current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_functionDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: inline GALGAS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GALGAS_lstring mProperty_mOperandEnumTypeName ;
  public: inline GALGAS_lstring readProperty_mOperandEnumTypeName (void) const {
    return mProperty_mOperandEnumTypeName ;
  }

  public: GALGAS_lstring mProperty_mResultEnumTypeName ;
  public: inline GALGAS_lstring readProperty_mResultEnumTypeName (void) const {
    return mProperty_mResultEnumTypeName ;
  }

  public: GALGAS_functionValueList mProperty_mValueList ;
  public: inline GALGAS_functionValueList readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_functionDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMOperandEnumTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperandEnumTypeName = inValue ;
  }

  public: inline void setter_setMResultEnumTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultEnumTypeName = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_functionValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_functionDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_functionDefinitionList_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                    const GALGAS_lstring & in_mOperandEnumTypeName,
                                                    const GALGAS_lstring & in_mResultEnumTypeName,
                                                    const GALGAS_functionValueList & in_mValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_functionValueList & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @scenarioEventSequence list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_scenarioEventSequence : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_scenarioEventSequence (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_scenarioEventSequence (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEventName,
                                                 const class GALGAS_lstringlist & in_mArgumentNameList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_scenarioEventSequence extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_scenarioEventSequence constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_scenarioEventSequence constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstringlist & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_scenarioEventSequence inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_scenarioEventSequence add_operation (const GALGAS_scenarioEventSequence & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_scenarioEventSequence_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mArgumentNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEventNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_scenarioEventSequence ;
 
} ; // End of GALGAS_scenarioEventSequence class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_scenarioEventSequence : public cGenericAbstractEnumerator {
  public: cEnumerator_scenarioEventSequence (const GALGAS_scenarioEventSequence & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEventName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mArgumentNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_scenarioEventSequence_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioEventSequence ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @scenarioEventSequence_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_scenarioEventSequence_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mEventName ;
  public: inline GALGAS_lstring readProperty_mEventName (void) const {
    return mProperty_mEventName ;
  }

  public: GALGAS_lstringlist mProperty_mArgumentNameList ;
  public: inline GALGAS_lstringlist readProperty_mArgumentNameList (void) const {
    return mProperty_mArgumentNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_scenarioEventSequence_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_scenarioEventSequence_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEventName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventName = inValue ;
  }

  public: inline void setter_setMArgumentNameList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_scenarioEventSequence_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_scenarioEventSequence_2D_element (const GALGAS_lstring & in_mEventName,
                                                   const GALGAS_lstringlist & in_mArgumentNameList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_scenarioEventSequence_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_scenarioEventSequence_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_scenarioEventSequence_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_scenarioEventSequence_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @scenarioList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_scenarioList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_scenarioList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_scenarioList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMachineName,
                                                 const class GALGAS_lstring & in_mScenarioName,
                                                 const class GALGAS_scenarioEventSequence & in_mEventSequence
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_scenarioList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_scenarioList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_scenarioList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_scenarioEventSequence & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_scenarioList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_scenarioEventSequence & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_scenarioList add_operation (const GALGAS_scenarioList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_scenarioList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_scenarioEventSequence constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_scenarioEventSequence & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_scenarioEventSequence & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_scenarioEventSequence & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventSequenceAtIndex (class GALGAS_scenarioEventSequence constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMScenarioNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_scenarioEventSequence & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_scenarioEventSequence & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_mEventSequenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_scenarioList ;
 
} ; // End of GALGAS_scenarioList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_scenarioList : public cGenericAbstractEnumerator {
  public: cEnumerator_scenarioList (const GALGAS_scenarioList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMachineName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mScenarioName (LOCATION_ARGS) const ;
  public: class GALGAS_scenarioEventSequence current_mEventSequence (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_scenarioList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @scenarioList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_scenarioList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMachineName ;
  public: inline GALGAS_lstring readProperty_mMachineName (void) const {
    return mProperty_mMachineName ;
  }

  public: GALGAS_lstring mProperty_mScenarioName ;
  public: inline GALGAS_lstring readProperty_mScenarioName (void) const {
    return mProperty_mScenarioName ;
  }

  public: GALGAS_scenarioEventSequence mProperty_mEventSequence ;
  public: inline GALGAS_scenarioEventSequence readProperty_mEventSequence (void) const {
    return mProperty_mEventSequence ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_scenarioList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_scenarioList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMachineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMachineName = inValue ;
  }

  public: inline void setter_setMScenarioName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScenarioName = inValue ;
  }

  public: inline void setter_setMEventSequence (const GALGAS_scenarioEventSequence & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventSequence = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_scenarioList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_scenarioList_2D_element (const GALGAS_lstring & in_mMachineName,
                                          const GALGAS_lstring & in_mScenarioName,
                                          const GALGAS_scenarioEventSequence & in_mEventSequence) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_scenarioList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_scenarioList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_scenarioEventSequence & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_scenarioList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_scenarioList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ast struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ast : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_enumTypeList mProperty_mEnumTypeList ;
  public: inline GALGAS_enumTypeList readProperty_mEnumTypeList (void) const {
    return mProperty_mEnumTypeList ;
  }

  public: GALGAS_machineList mProperty_mMachineList ;
  public: inline GALGAS_machineList readProperty_mMachineList (void) const {
    return mProperty_mMachineList ;
  }

  public: GALGAS_functionDefinitionList mProperty_mFunctionDefinitionList ;
  public: inline GALGAS_functionDefinitionList readProperty_mFunctionDefinitionList (void) const {
    return mProperty_mFunctionDefinitionList ;
  }

  public: GALGAS_scenarioList mProperty_mScenarioList ;
  public: inline GALGAS_scenarioList readProperty_mScenarioList (void) const {
    return mProperty_mScenarioList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ast constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_ast (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumTypeList (const GALGAS_enumTypeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumTypeList = inValue ;
  }

  public: inline void setter_setMMachineList (const GALGAS_machineList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMachineList = inValue ;
  }

  public: inline void setter_setMFunctionDefinitionList (const GALGAS_functionDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionDefinitionList = inValue ;
  }

  public: inline void setter_setMScenarioList (const GALGAS_scenarioList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScenarioList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ast (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ast (const GALGAS_enumTypeList & in_mEnumTypeList,
                      const GALGAS_machineList & in_mMachineList,
                      const GALGAS_functionDefinitionList & in_mFunctionDefinitionList,
                      const GALGAS_scenarioList & in_mScenarioList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ast extractObject (const GALGAS_object & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ast constructor_new (const class GALGAS_enumTypeList & inOperand0,
                                                   const class GALGAS_machineList & inOperand1,
                                                   const class GALGAS_functionDefinitionList & inOperand2,
                                                   const class GALGAS_scenarioList & inOperand3
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ast & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ast class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_decoratedInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedInstruction (const class cPtr_decoratedInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedInstruction : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_generateCCode (const GALGAS_string inIndentationString,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties

//--- Constructor
  public: cPtr_decoratedInstruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedInstruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_decoratedInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedInstruction_2D_weak (const class GALGAS_decoratedInstruction & inSource) ;

  public: GALGAS_decoratedInstruction_2D_weak & operator = (const class GALGAS_decoratedInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedInstruction bang_decoratedInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedInstructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_decoratedInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_decoratedInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_decoratedInstruction & in_mDecoratedInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedInstructionList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedInstructionList constructor_listWithValue (const class GALGAS_decoratedInstruction & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_decoratedInstruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedInstructionList add_operation (const GALGAS_decoratedInstructionList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_decoratedInstructionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_decoratedInstruction constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_decoratedInstruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_decoratedInstruction & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_decoratedInstruction & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDecoratedInstructionAtIndex (class GALGAS_decoratedInstruction constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_decoratedInstruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_decoratedInstruction & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedInstruction getter_mDecoratedInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedInstructionList ;
 
} ; // End of GALGAS_decoratedInstructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_decoratedInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedInstructionList (const GALGAS_decoratedInstructionList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_decoratedInstruction current_mDecoratedInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInstructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedInstructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_decoratedInstruction mProperty_mDecoratedInstruction ;
  public: inline GALGAS_decoratedInstruction readProperty_mDecoratedInstruction (void) const {
    return mProperty_mDecoratedInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDecoratedInstruction (const GALGAS_decoratedInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDecoratedInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_decoratedInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedInstructionList_2D_element (const GALGAS_decoratedInstruction & in_mDecoratedInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedInstructionList_2D_element constructor_new (const class GALGAS_decoratedInstruction & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedInstructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_decoratedExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedExpression (const class cPtr_decoratedExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedExpression : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_generateExpressionCCode (C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties

//--- Constructor
  public: cPtr_decoratedExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_decoratedExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedExpression_2D_weak (const class GALGAS_decoratedExpression & inSource) ;

  public: GALGAS_decoratedExpression_2D_weak & operator = (const class GALGAS_decoratedExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedExpression bang_decoratedExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedExpressionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_decoratedExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_decoratedExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabel,
                                                 const class GALGAS_decoratedExpression & in_mDecoratedExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedExpressionList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedExpressionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_decoratedExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedExpressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_decoratedExpression & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedExpressionList add_operation (const GALGAS_decoratedExpressionList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_decoratedExpressionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_decoratedExpression constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_decoratedExpression & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_decoratedExpression & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_decoratedExpression & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDecoratedExpressionAtIndex (class GALGAS_decoratedExpression constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_decoratedExpression & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_decoratedExpression & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mDecoratedExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedExpressionList ;
 
} ; // End of GALGAS_decoratedExpressionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_decoratedExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedExpressionList (const GALGAS_decoratedExpressionList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabel (LOCATION_ARGS) const ;
  public: class GALGAS_decoratedExpression current_mDecoratedExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedExpressionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedExpressionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: inline GALGAS_lstring readProperty_mLabel (void) const {
    return mProperty_mLabel ;
  }

  public: GALGAS_decoratedExpression mProperty_mDecoratedExpression ;
  public: inline GALGAS_decoratedExpression readProperty_mDecoratedExpression (void) const {
    return mProperty_mDecoratedExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedExpressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabel (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabel = inValue ;
  }

  public: inline void setter_setMDecoratedExpression (const GALGAS_decoratedExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDecoratedExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_decoratedExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedExpressionList_2D_element (const GALGAS_lstring & in_mLabel,
                                                     const GALGAS_decoratedExpression & in_mDecoratedExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedExpressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_decoratedExpression & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedExpressionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_enumConstantMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) ;
  public: GALGAS_enumConstantMap & operator = (const GALGAS_enumConstantMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_enumConstantMap constructor_mapWithMapToOverride (const class GALGAS_enumConstantMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumConstantMap ;
 
} ; // End of GALGAS_enumConstantMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumConstantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@enumConstantMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public: cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                       const GALGAS_uint & in_mIndex
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
// Phase 1: @enumConstantMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedScalarTypeMap unique map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unifiedScalarTypeMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_unifiedScalarTypeMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedScalarTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public: GALGAS_unifiedScalarTypeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_unifiedScalarTypeMap (const GALGAS_unifiedScalarTypeMap & inSource) ;
  public: GALGAS_unifiedScalarTypeMap & operator = (const GALGAS_unifiedScalarTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedScalarTypeMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedScalarTypeMap constructor_emptySharedMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_enumConstantMap constinArgument1,
                                                  class GALGAS_lstringlist constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantMapForKey (class GALGAS_enumConstantMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumConstantListForKey (class GALGAS_lstringlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerateForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_enumConstantMap & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_mConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantListForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_unifiedScalarTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedScalarTypeMap ;
 
} ; // End of GALGAS_unifiedScalarTypeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_unifiedScalarTypeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_unifiedScalarTypeMap (const GALGAS_unifiedScalarTypeMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_enumConstantMap current_mConstantMap (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mEnumConstantList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mGenerate (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedScalarTypeMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@unifiedScalarTypeMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unifiedScalarTypeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_enumConstantMap mProperty_mConstantMap ;
  public: GALGAS_lstringlist mProperty_mEnumConstantList ;
  public: GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public: cMapElement_unifiedScalarTypeMap (const GALGAS_lstring & inKey,
                                            const GALGAS_enumConstantMap & in_mConstantMap,
                                            const GALGAS_lstringlist & in_mEnumConstantList,
                                            const GALGAS_bool & in_mGenerate
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
// Phase 1: @unifiedScalarTypeMap_2D_entry map entry
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedScalarTypeMap_2D_entry : public AC_GALGAS_sharedMapEntry {
//--------------------------------- Default constructor
  public: GALGAS_unifiedScalarTypeMap_2D_entry (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedScalarTypeMap_2D_entry extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedScalarTypeMap_2D_entry constructor_null (LOCATION_ARGS) ;

  public: static class GALGAS_unifiedScalarTypeMap_2D_entry constructor_searchKey (const class GALGAS_unifiedScalarTypeMap & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public: static void class_method_makeEntry (class GALGAS_unifiedScalarTypeMap & ioArgument0,
                                              class GALGAS_lstring constinArgument1,
                                              class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument2
                                              COMMA_LOCATION_ARGS) ;

  public: static void class_method_makeEntryFromString (class GALGAS_unifiedScalarTypeMap & ioArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument2
                                                        COMMA_LOCATION_ARGS) ;

  public: static void class_method_makeOptionalEntry (class GALGAS_unifiedScalarTypeMap & ioArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument2
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_mConstantMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantList (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerate (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedScalarTypeMap_2D_entry class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedScalarTypeMap_2D_entry ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedArgumentList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_decoratedArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_decoratedArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedScalarTypeMap_2D_entry & in_mArgumentTypeProxy,
                                                 const class GALGAS_lstring & in_mArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedArgumentList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedArgumentList constructor_listWithValue (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedArgumentList add_operation (const GALGAS_decoratedArgumentList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_decoratedArgumentList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentTypeProxyAtIndex (class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_entry getter_mArgumentTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedArgumentList ;
 
} ; // End of GALGAS_decoratedArgumentList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_decoratedArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedArgumentList (const GALGAS_decoratedArgumentList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedScalarTypeMap_2D_entry current_mArgumentTypeProxy (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedArgumentList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedArgumentList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mArgumentTypeProxy ;
  public: inline GALGAS_unifiedScalarTypeMap_2D_entry readProperty_mArgumentTypeProxy (void) const {
    return mProperty_mArgumentTypeProxy ;
  }

  public: GALGAS_lstring mProperty_mArgumentName ;
  public: inline GALGAS_lstring readProperty_mArgumentName (void) const {
    return mProperty_mArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedArgumentList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedArgumentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMArgumentTypeProxy (const GALGAS_unifiedScalarTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeProxy = inValue ;
  }

  public: inline void setter_setMArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_decoratedArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedArgumentList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_entry & in_mArgumentTypeProxy,
                                                   const GALGAS_lstring & in_mArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedArgumentList_2D_element constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedArgumentList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @eventMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_eventMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_eventMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_eventMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_eventMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_eventMap (const GALGAS_eventMap & inSource) ;
  public: GALGAS_eventMap & operator = (const GALGAS_eventMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_eventMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_eventMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_eventMap constructor_mapWithMapToOverride (const class GALGAS_eventMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_decoratedArgumentList & inOperand1,
                                                     const class GALGAS_decoratedInstructionList & inOperand2,
                                                     const class GALGAS_decoratedExpressionList & inOperand3,
                                                     const class GALGAS_location & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_decoratedArgumentList constinArgument1,
                                                  class GALGAS_decoratedInstructionList constinArgument2,
                                                  class GALGAS_decoratedExpressionList constinArgument3,
                                                  class GALGAS_location constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDecoratedArgumentListForKey (class GALGAS_decoratedArgumentList constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDecoratedEventInstructionListForKey (class GALGAS_decoratedInstructionList constinArgument0,
                                                                                class GALGAS_string constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfEnsureExpressionListForKey (class GALGAS_location constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnsureDecoratedExpressionListForKey (class GALGAS_decoratedExpressionList constinArgument0,
                                                                                class GALGAS_string constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_decoratedArgumentList & outArgument1,
                                                  class GALGAS_decoratedInstructionList & outArgument2,
                                                  class GALGAS_decoratedExpressionList & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_mDecoratedArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_mDecoratedEventInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnsureExpressionListForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_mEnsureDecoratedExpressionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventMap getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_decoratedArgumentList & outOperand1,
                                                    class GALGAS_decoratedInstructionList & outOperand2,
                                                    class GALGAS_decoratedExpressionList & outOperand3,
                                                    class GALGAS_location & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_eventMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_eventMap ;
 
} ; // End of GALGAS_eventMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_eventMap : public cGenericAbstractEnumerator {
  public: cEnumerator_eventMap (const GALGAS_eventMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_decoratedArgumentList current_mDecoratedArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_decoratedInstructionList current_mDecoratedEventInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_decoratedExpressionList current_mEnsureDecoratedExpressionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfEnsureExpressionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_eventMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@eventMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_eventMap : public cMapElement {
//--- Map attributes
  public: GALGAS_decoratedArgumentList mProperty_mDecoratedArgumentList ;
  public: GALGAS_decoratedInstructionList mProperty_mDecoratedEventInstructionList ;
  public: GALGAS_decoratedExpressionList mProperty_mEnsureDecoratedExpressionList ;
  public: GALGAS_location mProperty_mEndOfEnsureExpressionList ;

//--- Constructor
  public: cMapElement_eventMap (const GALGAS_lstring & inKey,
                                const GALGAS_decoratedArgumentList & in_mDecoratedArgumentList,
                                const GALGAS_decoratedInstructionList & in_mDecoratedEventInstructionList,
                                const GALGAS_decoratedExpressionList & in_mEnsureDecoratedExpressionList,
                                const GALGAS_location & in_mEndOfEnsureExpressionList
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
// Phase 1: @eventMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_eventMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_decoratedArgumentList mProperty_mDecoratedArgumentList ;
  public: inline GALGAS_decoratedArgumentList readProperty_mDecoratedArgumentList (void) const {
    return mProperty_mDecoratedArgumentList ;
  }

  public: GALGAS_decoratedInstructionList mProperty_mDecoratedEventInstructionList ;
  public: inline GALGAS_decoratedInstructionList readProperty_mDecoratedEventInstructionList (void) const {
    return mProperty_mDecoratedEventInstructionList ;
  }

  public: GALGAS_decoratedExpressionList mProperty_mEnsureDecoratedExpressionList ;
  public: inline GALGAS_decoratedExpressionList readProperty_mEnsureDecoratedExpressionList (void) const {
    return mProperty_mEnsureDecoratedExpressionList ;
  }

  public: GALGAS_location mProperty_mEndOfEnsureExpressionList ;
  public: inline GALGAS_location readProperty_mEndOfEnsureExpressionList (void) const {
    return mProperty_mEndOfEnsureExpressionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_eventMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_eventMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDecoratedArgumentList (const GALGAS_decoratedArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDecoratedArgumentList = inValue ;
  }

  public: inline void setter_setMDecoratedEventInstructionList (const GALGAS_decoratedInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDecoratedEventInstructionList = inValue ;
  }

  public: inline void setter_setMEnsureDecoratedExpressionList (const GALGAS_decoratedExpressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnsureDecoratedExpressionList = inValue ;
  }

  public: inline void setter_setMEndOfEnsureExpressionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfEnsureExpressionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_eventMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_eventMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_decoratedArgumentList & in_mDecoratedArgumentList,
                                      const GALGAS_decoratedInstructionList & in_mDecoratedEventInstructionList,
                                      const GALGAS_decoratedExpressionList & in_mEnsureDecoratedExpressionList,
                                      const GALGAS_location & in_mEndOfEnsureExpressionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_eventMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_eventMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_decoratedArgumentList & inOperand1,
                                                                   const class GALGAS_decoratedInstructionList & inOperand2,
                                                                   const class GALGAS_decoratedExpressionList & inOperand3,
                                                                   const class GALGAS_location & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_eventMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_eventMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineVarMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_machineVarMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_machineVarMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_machineVarMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_machineVarMap (const GALGAS_machineVarMap & inSource) ;
  public: GALGAS_machineVarMap & operator = (const GALGAS_machineVarMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineVarMap extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineVarMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_machineVarMap constructor_mapWithMapToOverride (const class GALGAS_machineVarMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaxValueForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeProxyForKey (class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxValueForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_entry getter_mTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarMap getter_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_unifiedScalarTypeMap_2D_entry & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_machineVarMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_machineVarMap ;
 
} ; // End of GALGAS_machineVarMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_machineVarMap : public cGenericAbstractEnumerator {
  public: cEnumerator_machineVarMap (const GALGAS_machineVarMap & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedScalarTypeMap_2D_entry current_mTypeProxy (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mMaxValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_machineVarMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@machineVarMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_machineVarMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mTypeProxy ;
  public: GALGAS_uint mProperty_mMaxValue ;

//--- Constructor
  public: cMapElement_machineVarMap (const GALGAS_lstring & inKey,
                                     const GALGAS_unifiedScalarTypeMap_2D_entry & in_mTypeProxy,
                                     const GALGAS_uint & in_mMaxValue
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
// Phase 1: @machineVarMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mTypeProxy ;
  public: inline GALGAS_unifiedScalarTypeMap_2D_entry readProperty_mTypeProxy (void) const {
    return mProperty_mTypeProxy ;
  }

  public: GALGAS_uint mProperty_mMaxValue ;
  public: inline GALGAS_uint readProperty_mMaxValue (void) const {
    return mProperty_mMaxValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_machineVarMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_machineVarMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTypeProxy (const GALGAS_unifiedScalarTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeProxy = inValue ;
  }

  public: inline void setter_setMMaxValue (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaxValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_machineVarMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_machineVarMap_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_unifiedScalarTypeMap_2D_entry & in_mTypeProxy,
                                           const GALGAS_uint & in_mMaxValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineVarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineVarMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                                        const class GALGAS_uint & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_machineVarMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineVarMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineVarList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_machineVarList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_machineVarList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedScalarTypeMap_2D_entry & in_mTypeProxy,
                                                 const class GALGAS_lstring & in_mVarName,
                                                 const class GALGAS_lstringlist & in_mValueList,
                                                 const class GALGAS_lstring & in_mInitialValueConstantName,
                                                 const class GALGAS_uint & in_mInitialValueConstantIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineVarList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineVarList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_machineVarList constructor_listWithValue (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                        const class GALGAS_lstring & inOperand3,
                                                                        const class GALGAS_uint & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_machineVarList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstringlist & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_uint & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_machineVarList add_operation (const GALGAS_machineVarList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_machineVarList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstringlist constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_uint & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstringlist & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_uint & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstringlist & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_uint & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueConstantIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueConstantNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeProxyAtIndex (class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
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
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_uint & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstringlist & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_uint & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialValueConstantIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInitialValueConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_entry getter_mTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_machineVarList ;
 
} ; // End of GALGAS_machineVarList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_machineVarList : public cGenericAbstractEnumerator {
  public: cEnumerator_machineVarList (const GALGAS_machineVarList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedScalarTypeMap_2D_entry current_mTypeProxy (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mInitialValueConstantName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mInitialValueConstantIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_machineVarList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineVarList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mTypeProxy ;
  public: inline GALGAS_unifiedScalarTypeMap_2D_entry readProperty_mTypeProxy (void) const {
    return mProperty_mTypeProxy ;
  }

  public: GALGAS_lstring mProperty_mVarName ;
  public: inline GALGAS_lstring readProperty_mVarName (void) const {
    return mProperty_mVarName ;
  }

  public: GALGAS_lstringlist mProperty_mValueList ;
  public: inline GALGAS_lstringlist readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

  public: GALGAS_lstring mProperty_mInitialValueConstantName ;
  public: inline GALGAS_lstring readProperty_mInitialValueConstantName (void) const {
    return mProperty_mInitialValueConstantName ;
  }

  public: GALGAS_uint mProperty_mInitialValueConstantIndex ;
  public: inline GALGAS_uint readProperty_mInitialValueConstantIndex (void) const {
    return mProperty_mInitialValueConstantIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_machineVarList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_machineVarList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeProxy (const GALGAS_unifiedScalarTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeProxy = inValue ;
  }

  public: inline void setter_setMVarName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarName = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

  public: inline void setter_setMInitialValueConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValueConstantName = inValue ;
  }

  public: inline void setter_setMInitialValueConstantIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValueConstantIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_machineVarList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_machineVarList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_entry & in_mTypeProxy,
                                            const GALGAS_lstring & in_mVarName,
                                            const GALGAS_lstringlist & in_mValueList,
                                            const GALGAS_lstring & in_mInitialValueConstantName,
                                            const GALGAS_uint & in_mInitialValueConstantIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineVarList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineVarList_2D_element constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_uint & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_machineVarList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineVarList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedScenarioList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedScenarioList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_decoratedScenarioList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_decoratedScenarioList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mScenarioName,
                                                 const class GALGAS_scenarioEventSequence & in_mEventSequence
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedScenarioList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedScenarioList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedScenarioList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_scenarioEventSequence & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedScenarioList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_scenarioEventSequence & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedScenarioList add_operation (const GALGAS_decoratedScenarioList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_decoratedScenarioList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_scenarioEventSequence constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_scenarioEventSequence & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_scenarioEventSequence & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_scenarioEventSequence & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventSequenceAtIndex (class GALGAS_scenarioEventSequence constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMScenarioNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_scenarioEventSequence & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_scenarioEventSequence & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_mEventSequenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedScenarioList ;
 
} ; // End of GALGAS_decoratedScenarioList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_decoratedScenarioList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedScenarioList (const GALGAS_decoratedScenarioList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mScenarioName (LOCATION_ARGS) const ;
  public: class GALGAS_scenarioEventSequence current_mEventSequence (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedScenarioList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedScenarioList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedScenarioList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedScenarioList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mScenarioName ;
  public: inline GALGAS_lstring readProperty_mScenarioName (void) const {
    return mProperty_mScenarioName ;
  }

  public: GALGAS_scenarioEventSequence mProperty_mEventSequence ;
  public: inline GALGAS_scenarioEventSequence readProperty_mEventSequence (void) const {
    return mProperty_mEventSequence ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedScenarioList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedScenarioList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMScenarioName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScenarioName = inValue ;
  }

  public: inline void setter_setMEventSequence (const GALGAS_scenarioEventSequence & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventSequence = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_decoratedScenarioList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedScenarioList_2D_element (const GALGAS_lstring & in_mScenarioName,
                                                   const GALGAS_scenarioEventSequence & in_mEventSequence) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedScenarioList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedScenarioList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_scenarioEventSequence & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedScenarioList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedScenarioList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_machineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_machineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_machineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_machineMap (const GALGAS_machineMap & inSource) ;
  public: GALGAS_machineMap & operator = (const GALGAS_machineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_machineMap constructor_mapWithMapToOverride (const class GALGAS_machineMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_machineVarMap & inOperand1,
                                                     const class GALGAS_machineVarList & inOperand2,
                                                     const class GALGAS_decoratedExpressionList & inOperand3,
                                                     const class GALGAS_eventMap & inOperand4,
                                                     const class GALGAS_decoratedScenarioList & inOperand5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_machineVarMap constinArgument1,
                                                  class GALGAS_machineVarList constinArgument2,
                                                  class GALGAS_decoratedExpressionList constinArgument3,
                                                  class GALGAS_eventMap constinArgument4,
                                                  class GALGAS_decoratedScenarioList constinArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeListForKey (class GALGAS_machineVarList constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeMapForKey (class GALGAS_machineVarMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDecoratedScenarioListForKey (class GALGAS_decoratedScenarioList constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEventMapForKey (class GALGAS_eventMap constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInvariantDecoratedExpressionListForKey (class GALGAS_decoratedExpressionList constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_machineVarMap & outArgument1,
                                                  class GALGAS_machineVarList & outArgument2,
                                                  class GALGAS_decoratedExpressionList & outArgument3,
                                                  class GALGAS_eventMap & outArgument4,
                                                  class GALGAS_decoratedScenarioList & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_mAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarMap getter_mAttributeMapForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_mDecoratedScenarioListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_eventMap getter_mEventMapForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_mInvariantDecoratedExpressionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_machineVarMap & outOperand1,
                                                    class GALGAS_machineVarList & outOperand2,
                                                    class GALGAS_decoratedExpressionList & outOperand3,
                                                    class GALGAS_eventMap & outOperand4,
                                                    class GALGAS_decoratedScenarioList & outOperand5) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_machineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_machineMap ;
 
} ; // End of GALGAS_machineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_machineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_machineMap (const GALGAS_machineMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_machineVarMap current_mAttributeMap (LOCATION_ARGS) const ;
  public: class GALGAS_machineVarList current_mAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_decoratedExpressionList current_mInvariantDecoratedExpressionList (LOCATION_ARGS) const ;
  public: class GALGAS_eventMap current_mEventMap (LOCATION_ARGS) const ;
  public: class GALGAS_decoratedScenarioList current_mDecoratedScenarioList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_machineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@machineMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_machineMap : public cMapElement {
//--- Map attributes
  public: GALGAS_machineVarMap mProperty_mAttributeMap ;
  public: GALGAS_machineVarList mProperty_mAttributeList ;
  public: GALGAS_decoratedExpressionList mProperty_mInvariantDecoratedExpressionList ;
  public: GALGAS_eventMap mProperty_mEventMap ;
  public: GALGAS_decoratedScenarioList mProperty_mDecoratedScenarioList ;

//--- Constructor
  public: cMapElement_machineMap (const GALGAS_lstring & inKey,
                                  const GALGAS_machineVarMap & in_mAttributeMap,
                                  const GALGAS_machineVarList & in_mAttributeList,
                                  const GALGAS_decoratedExpressionList & in_mInvariantDecoratedExpressionList,
                                  const GALGAS_eventMap & in_mEventMap,
                                  const GALGAS_decoratedScenarioList & in_mDecoratedScenarioList
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
// Phase 1: @machineMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_machineVarMap mProperty_mAttributeMap ;
  public: inline GALGAS_machineVarMap readProperty_mAttributeMap (void) const {
    return mProperty_mAttributeMap ;
  }

  public: GALGAS_machineVarList mProperty_mAttributeList ;
  public: inline GALGAS_machineVarList readProperty_mAttributeList (void) const {
    return mProperty_mAttributeList ;
  }

  public: GALGAS_decoratedExpressionList mProperty_mInvariantDecoratedExpressionList ;
  public: inline GALGAS_decoratedExpressionList readProperty_mInvariantDecoratedExpressionList (void) const {
    return mProperty_mInvariantDecoratedExpressionList ;
  }

  public: GALGAS_eventMap mProperty_mEventMap ;
  public: inline GALGAS_eventMap readProperty_mEventMap (void) const {
    return mProperty_mEventMap ;
  }

  public: GALGAS_decoratedScenarioList mProperty_mDecoratedScenarioList ;
  public: inline GALGAS_decoratedScenarioList readProperty_mDecoratedScenarioList (void) const {
    return mProperty_mDecoratedScenarioList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_machineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_machineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAttributeMap (const GALGAS_machineVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeMap = inValue ;
  }

  public: inline void setter_setMAttributeList (const GALGAS_machineVarList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeList = inValue ;
  }

  public: inline void setter_setMInvariantDecoratedExpressionList (const GALGAS_decoratedExpressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInvariantDecoratedExpressionList = inValue ;
  }

  public: inline void setter_setMEventMap (const GALGAS_eventMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEventMap = inValue ;
  }

  public: inline void setter_setMDecoratedScenarioList (const GALGAS_decoratedScenarioList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDecoratedScenarioList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_machineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_machineMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_machineVarMap & in_mAttributeMap,
                                        const GALGAS_machineVarList & in_mAttributeList,
                                        const GALGAS_decoratedExpressionList & in_mInvariantDecoratedExpressionList,
                                        const GALGAS_eventMap & in_mEventMap,
                                        const GALGAS_decoratedScenarioList & in_mDecoratedScenarioList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_machineVarMap & inOperand1,
                                                                     const class GALGAS_machineVarList & inOperand2,
                                                                     const class GALGAS_decoratedExpressionList & inOperand3,
                                                                     const class GALGAS_eventMap & inOperand4,
                                                                     const class GALGAS_decoratedScenarioList & inOperand5
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_machineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedFunctionValueList sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedFunctionValueList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_decoratedFunctionValueList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedFunctionValueList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedFunctionValueList constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedFunctionValueList constructor_sortedListWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2,
                                                                                          const class GALGAS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedFunctionValueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_uint & inOperand3
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_uint & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_uint & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_uint & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_uint & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedFunctionValueList ;
 
} ; // End of GALGAS_decoratedFunctionValueList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_decoratedFunctionValueList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedFunctionValueList (const GALGAS_decoratedFunctionValueList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOperandName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mOperandValue (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mResultName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mResultValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedFunctionValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedFunctionValueList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedFunctionValueList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedFunctionValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOperandName ;
  public: inline GALGAS_lstring readProperty_mOperandName (void) const {
    return mProperty_mOperandName ;
  }

  public: GALGAS_uint mProperty_mOperandValue ;
  public: inline GALGAS_uint readProperty_mOperandValue (void) const {
    return mProperty_mOperandValue ;
  }

  public: GALGAS_lstring mProperty_mResultName ;
  public: inline GALGAS_lstring readProperty_mResultName (void) const {
    return mProperty_mResultName ;
  }

  public: GALGAS_uint mProperty_mResultValue ;
  public: inline GALGAS_uint readProperty_mResultValue (void) const {
    return mProperty_mResultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedFunctionValueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedFunctionValueList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperandName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperandName = inValue ;
  }

  public: inline void setter_setMOperandValue (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperandValue = inValue ;
  }

  public: inline void setter_setMResultName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultName = inValue ;
  }

  public: inline void setter_setMResultValue (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_decoratedFunctionValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedFunctionValueList_2D_element (const GALGAS_lstring & in_mOperandName,
                                                        const GALGAS_uint & in_mOperandValue,
                                                        const GALGAS_lstring & in_mResultName,
                                                        const GALGAS_uint & in_mResultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedFunctionValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedFunctionValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_uint & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_uint & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedFunctionValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedFunctionValueList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_functionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_functionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_functionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_functionMap (const GALGAS_functionMap & inSource) ;
  public: GALGAS_functionMap & operator = (const GALGAS_functionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_functionMap constructor_mapWithMapToOverride (const class GALGAS_functionMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                     const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand2,
                                                     const class GALGAS_decoratedFunctionValueList & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument1,
                                                  class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument2,
                                                  class GALGAS_decoratedFunctionValueList constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDecoratedFunctionValueListForKey (class GALGAS_decoratedFunctionValueList constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandTypeProxyForKey (class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeProxyForKey (class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument1,
                                                  class GALGAS_unifiedScalarTypeMap_2D_entry & outArgument2,
                                                  class GALGAS_decoratedFunctionValueList & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedFunctionValueList getter_mDecoratedFunctionValueListForKey (const class GALGAS_string & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_entry getter_mOperandTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_entry getter_mResultTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_unifiedScalarTypeMap_2D_entry & outOperand1,
                                                    class GALGAS_unifiedScalarTypeMap_2D_entry & outOperand2,
                                                    class GALGAS_decoratedFunctionValueList & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_functionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_functionMap ;
 
} ; // End of GALGAS_functionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_functionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedScalarTypeMap_2D_entry current_mOperandTypeProxy (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedScalarTypeMap_2D_entry current_mResultTypeProxy (LOCATION_ARGS) const ;
  public: class GALGAS_decoratedFunctionValueList current_mDecoratedFunctionValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_functionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@functionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_functionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mOperandTypeProxy ;
  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mResultTypeProxy ;
  public: GALGAS_decoratedFunctionValueList mProperty_mDecoratedFunctionValueList ;

//--- Constructor
  public: cMapElement_functionMap (const GALGAS_lstring & inKey,
                                   const GALGAS_unifiedScalarTypeMap_2D_entry & in_mOperandTypeProxy,
                                   const GALGAS_unifiedScalarTypeMap_2D_entry & in_mResultTypeProxy,
                                   const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
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
// Phase 1: @functionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mOperandTypeProxy ;
  public: inline GALGAS_unifiedScalarTypeMap_2D_entry readProperty_mOperandTypeProxy (void) const {
    return mProperty_mOperandTypeProxy ;
  }

  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mResultTypeProxy ;
  public: inline GALGAS_unifiedScalarTypeMap_2D_entry readProperty_mResultTypeProxy (void) const {
    return mProperty_mResultTypeProxy ;
  }

  public: GALGAS_decoratedFunctionValueList mProperty_mDecoratedFunctionValueList ;
  public: inline GALGAS_decoratedFunctionValueList readProperty_mDecoratedFunctionValueList (void) const {
    return mProperty_mDecoratedFunctionValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOperandTypeProxy (const GALGAS_unifiedScalarTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperandTypeProxy = inValue ;
  }

  public: inline void setter_setMResultTypeProxy (const GALGAS_unifiedScalarTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeProxy = inValue ;
  }

  public: inline void setter_setMDecoratedFunctionValueList (const GALGAS_decoratedFunctionValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDecoratedFunctionValueList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_functionMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_unifiedScalarTypeMap_2D_entry & in_mOperandTypeProxy,
                                         const GALGAS_unifiedScalarTypeMap_2D_entry & in_mResultTypeProxy,
                                         const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                                      const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand2,
                                                                      const class GALGAS_decoratedFunctionValueList & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @analyzeContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_analyzeContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedScalarTypeMap mProperty_mUnifiedScalarTypeMap ;
  public: inline GALGAS_unifiedScalarTypeMap readProperty_mUnifiedScalarTypeMap (void) const {
    return mProperty_mUnifiedScalarTypeMap ;
  }

  public: GALGAS_machineVarMap mProperty_mMachineVarMap ;
  public: inline GALGAS_machineVarMap readProperty_mMachineVarMap (void) const {
    return mProperty_mMachineVarMap ;
  }

  public: GALGAS_functionMap mProperty_mFunctionMap ;
  public: inline GALGAS_functionMap readProperty_mFunctionMap (void) const {
    return mProperty_mFunctionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_analyzeContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_analyzeContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUnifiedScalarTypeMap (const GALGAS_unifiedScalarTypeMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnifiedScalarTypeMap = inValue ;
  }

  public: inline void setter_setMMachineVarMap (const GALGAS_machineVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMachineVarMap = inValue ;
  }

  public: inline void setter_setMFunctionMap (const GALGAS_functionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_analyzeContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_analyzeContext (const GALGAS_unifiedScalarTypeMap & in_mUnifiedScalarTypeMap,
                                 const GALGAS_machineVarMap & in_mMachineVarMap,
                                 const GALGAS_functionMap & in_mFunctionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_analyzeContext extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_analyzeContext constructor_new (const class GALGAS_unifiedScalarTypeMap & inOperand0,
                                                              const class GALGAS_machineVarMap & inOperand1,
                                                              const class GALGAS_functionMap & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_analyzeContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_analyzeContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analyzeContext ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @implicationDecoratedExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicationDecoratedExpression : public GALGAS_decoratedExpression {
//--------------------------------- Default constructor
  public: GALGAS_implicationDecoratedExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_implicationDecoratedExpression (const class cPtr_implicationDecoratedExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_decoratedExpression readProperty_mLeft (void) const ;

  public: class GALGAS_decoratedExpression readProperty_mRight (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_implicationDecoratedExpression extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implicationDecoratedExpression constructor_new (const class GALGAS_decoratedExpression & inOperand0,
                                                                              const class GALGAS_decoratedExpression & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_implicationDecoratedExpression & inOperand) const ;

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
 
} ; // End of GALGAS_implicationDecoratedExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicationDecoratedExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @implicationDecoratedExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_implicationDecoratedExpression : public cPtr_decoratedExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_decoratedExpression mProperty_mLeft ;
  public: GALGAS_decoratedExpression mProperty_mRight ;

//--- Constructor
  public: cPtr_implicationDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
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
// Phase 1: @implicationDecoratedExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicationDecoratedExpression_2D_weak : public GALGAS_decoratedExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_implicationDecoratedExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_implicationDecoratedExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_implicationDecoratedExpression_2D_weak (const class GALGAS_implicationDecoratedExpression & inSource) ;

  public: GALGAS_implicationDecoratedExpression_2D_weak & operator = (const class GALGAS_implicationDecoratedExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_implicationDecoratedExpression bang_implicationDecoratedExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_implicationDecoratedExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implicationDecoratedExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_implicationDecoratedExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicationDecoratedExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicationDecoratedExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalAndDecoratedExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalAndDecoratedExpression : public GALGAS_decoratedExpression {
//--------------------------------- Default constructor
  public: GALGAS_logicalAndDecoratedExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_logicalAndDecoratedExpression (const class cPtr_logicalAndDecoratedExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_decoratedExpression readProperty_mLeft (void) const ;

  public: class GALGAS_decoratedExpression readProperty_mRight (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalAndDecoratedExpression extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalAndDecoratedExpression constructor_new (const class GALGAS_decoratedExpression & inOperand0,
                                                                             const class GALGAS_decoratedExpression & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalAndDecoratedExpression & inOperand) const ;

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
 
} ; // End of GALGAS_logicalAndDecoratedExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalAndDecoratedExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logicalAndDecoratedExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_logicalAndDecoratedExpression : public cPtr_decoratedExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_decoratedExpression mProperty_mLeft ;
  public: GALGAS_decoratedExpression mProperty_mRight ;

//--- Constructor
  public: cPtr_logicalAndDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
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
// Phase 1: @logicalAndDecoratedExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalAndDecoratedExpression_2D_weak : public GALGAS_decoratedExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logicalAndDecoratedExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_logicalAndDecoratedExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logicalAndDecoratedExpression_2D_weak (const class GALGAS_logicalAndDecoratedExpression & inSource) ;

  public: GALGAS_logicalAndDecoratedExpression_2D_weak & operator = (const class GALGAS_logicalAndDecoratedExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logicalAndDecoratedExpression bang_logicalAndDecoratedExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalAndDecoratedExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalAndDecoratedExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalAndDecoratedExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalAndDecoratedExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalAndDecoratedExpression_2D_weak ;

