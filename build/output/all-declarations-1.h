#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @machineVarListForDisplay list                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_machineVarListForDisplay : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_machineVarListForDisplay (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_machineVarListForDisplay (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mAttributeName,
                                                  const class GALGAS_uint & in_mBDDStartIndex,
                                                  const class GALGAS_uint & in_mBDDBitCount,
                                                  const class GALGAS_lstringlist & in_mValueList,
                                                  const class GALGAS_uint & in_mColumnLength
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineVarListForDisplay extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineVarListForDisplay constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_machineVarListForDisplay constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_uint & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2,
                                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                                   const class GALGAS_uint & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_machineVarListForDisplay inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_uint & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_machineVarListForDisplay add_operation (const GALGAS_machineVarListForDisplay & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_uint & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_uint & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               class GALGAS_uint & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_uint & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_uint & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mColumnLengthAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarListForDisplay getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarListForDisplay getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarListForDisplay getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_machineVarListForDisplay ;
 
} ; // End of GALGAS_machineVarListForDisplay class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_machineVarListForDisplay : public cGenericAbstractEnumerator {
  public : cEnumerator_machineVarListForDisplay (const GALGAS_machineVarListForDisplay & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBDDStartIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBDDBitCount (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mColumnLength (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_machineVarListForDisplay_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarListForDisplay ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @machineVarListForDisplay_2D_element struct                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_machineVarListForDisplay_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mAttributeName ;

  public : GALGAS_uint mProperty_mBDDStartIndex ;

  public : GALGAS_uint mProperty_mBDDBitCount ;

  public : GALGAS_lstringlist mProperty_mValueList ;

  public : GALGAS_uint mProperty_mColumnLength ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_machineVarListForDisplay_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_machineVarListForDisplay_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_machineVarListForDisplay_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_machineVarListForDisplay_2D_element (const GALGAS_string & in_mAttributeName,
                                                       const GALGAS_uint & in_mBDDStartIndex,
                                                       const GALGAS_uint & in_mBDDBitCount,
                                                       const GALGAS_lstringlist & in_mValueList,
                                                       const GALGAS_uint & in_mColumnLength) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineVarListForDisplay_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineVarListForDisplay_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                    const class GALGAS_uint & inOperand1,
                                                                                    const class GALGAS_uint & inOperand2,
                                                                                    const class GALGAS_lstringlist & inOperand3,
                                                                                    const class GALGAS_uint & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_machineVarListForDisplay_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mColumnLength (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineVarListForDisplay_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @varList list                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_varList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_varList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_varList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mVarName,
                                                  const class GALGAS_lstringlist & in_mValueList,
                                                  const class GALGAS_uint & in_mBDDStartBitIndex,
                                                  const class GALGAS_uint & in_mBDDBitCount,
                                                  const class GALGAS_uint & in_mInitialValueIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varList extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_varList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                  const class GALGAS_uint & inOperand2,
                                                                  const class GALGAS_uint & inOperand3,
                                                                  const class GALGAS_uint & inOperand4
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_varList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      const class GALGAS_uint & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_varList add_operation (const GALGAS_varList & inOperand,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 class GALGAS_uint & outArgument3,
                                                 class GALGAS_uint & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_uint & outArgument3,
                                                       class GALGAS_uint & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_uint & outArgument2,
                                               class GALGAS_uint & outArgument3,
                                               class GALGAS_uint & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              class GALGAS_uint & outArgument3,
                                              class GALGAS_uint & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartBitIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialValueIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_varList ;
 
} ; // End of GALGAS_varList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_varList : public cGenericAbstractEnumerator {
  public : cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBDDStartBitIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBDDBitCount (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mInitialValueIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_varList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @varList_2D_element struct                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_varList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mVarName ;

  public : GALGAS_lstringlist mProperty_mValueList ;

  public : GALGAS_uint mProperty_mBDDStartBitIndex ;

  public : GALGAS_uint mProperty_mBDDBitCount ;

  public : GALGAS_uint mProperty_mInitialValueIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_varList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_varList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_varList_2D_element (const GALGAS_lstring & in_mVarName,
                                      const GALGAS_lstringlist & in_mValueList,
                                      const GALGAS_uint & in_mBDDStartBitIndex,
                                      const GALGAS_uint & in_mBDDBitCount,
                                      const GALGAS_uint & in_mInitialValueIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varList_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstringlist & inOperand1,
                                                                   const class GALGAS_uint & inOperand2,
                                                                   const class GALGAS_uint & inOperand3,
                                                                   const class GALGAS_uint & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartBitIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialValueIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension getter '@varList displayVarVarInfo' (as function)                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_machineVarListForDisplay extensionGetter_displayVarVarInfo (const class GALGAS_varList & inObject,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@varList displayArgVarVarInfo' (as function)                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_machineVarListForDisplay extensionGetter_displayArgVarVarInfo (const class GALGAS_varList & inObject,
                                                                            const class GALGAS_varList & constinArgument0,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @transitionEventMap map                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_transitionEventMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_transitionEventMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_transitionEventMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_transitionEventMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_transitionEventMap (const GALGAS_transitionEventMap & inSource) ;
  public : GALGAS_transitionEventMap & operator = (const GALGAS_transitionEventMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transitionEventMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transitionEventMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_transitionEventMap constructor_mapWithMapToOverride (const class GALGAS_transitionEventMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_eventArgumentList & inOperand1,
                                                      const class GALGAS_binaryset & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_eventArgumentList constinArgument1,
                                                   class GALGAS_binaryset constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMArgumentListForKey (class GALGAS_eventArgumentList constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransitionBinarySetForKey (class GALGAS_binaryset constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_eventArgumentList & outArgument1,
                                                   class GALGAS_binaryset & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_mArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mTransitionBinarySetForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transitionEventMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_transitionEventMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_transitionEventMap ;
 
} ; // End of GALGAS_transitionEventMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_transitionEventMap : public cGenericAbstractEnumerator {
  public : cEnumerator_transitionEventMap (const GALGAS_transitionEventMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_eventArgumentList current_mArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_binaryset current_mTransitionBinarySet (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transitionEventMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transitionEventMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@transitionEventMap' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_transitionEventMap : public cMapElement {
//--- Map attributes
  public : GALGAS_eventArgumentList mProperty_mArgumentList ;
  public : GALGAS_binaryset mProperty_mTransitionBinarySet ;

//--- Constructor
  public : cMapElement_transitionEventMap (const GALGAS_lstring & inKey,
                                           const GALGAS_eventArgumentList & in_mArgumentList,
                                           const GALGAS_binaryset & in_mTransitionBinarySet
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @transitionEventMap_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_transitionEventMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_eventArgumentList mProperty_mArgumentList ;

  public : GALGAS_binaryset mProperty_mTransitionBinarySet ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transitionEventMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_transitionEventMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_transitionEventMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transitionEventMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_eventArgumentList & in_mArgumentList,
                                                 const GALGAS_binaryset & in_mTransitionBinarySet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transitionEventMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transitionEventMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_eventArgumentList & inOperand1,
                                                                              const class GALGAS_binaryset & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transitionEventMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_mArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mTransitionBinarySet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transitionEventMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transitionEventMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @binarysetList list                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_binarysetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_binarysetList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_binarysetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLabel,
                                                  const class GALGAS_binaryset & in_mSet
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_binarysetList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_binarysetList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_binarysetList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_binaryset & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_binarysetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_binaryset & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_binarysetList add_operation (const GALGAS_binarysetList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_binaryset constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_binaryset & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_binaryset & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_binaryset & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_binaryset & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_binaryset & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mSetAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binarysetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binarysetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binarysetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_binarysetList ;
 
} ; // End of GALGAS_binarysetList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_binarysetList : public cGenericAbstractEnumerator {
  public : cEnumerator_binarysetList (const GALGAS_binarysetList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLabel (LOCATION_ARGS) const ;
  public : class GALGAS_binaryset current_mSet (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_binarysetList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @binarysetList_2D_element struct                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_binarysetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mLabel ;

  public : GALGAS_binaryset mProperty_mSet ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_binarysetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_binarysetList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_binarysetList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_binarysetList_2D_element (const GALGAS_lstring & in_mLabel,
                                            const GALGAS_binaryset & in_mSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_binarysetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_binarysetList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_binaryset & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_binarysetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binarysetList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                     @varMap map                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_varMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_varMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_varMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_varMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_varMap (const GALGAS_varMap & inSource) ;
  public : GALGAS_varMap & operator = (const GALGAS_varMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varMap extractObject (const GALGAS_object & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_varMap constructor_mapWithMapToOverride (const class GALGAS_varMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_enumConstantMap & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      const class GALGAS_uint & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstringlist constinArgument1,
                                                   class GALGAS_enumConstantMap constinArgument2,
                                                   class GALGAS_uint constinArgument3,
                                                   class GALGAS_uint constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBDDBitCountForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBDDStartBitForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstantListForKey (class GALGAS_lstringlist constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstantMapForKey (class GALGAS_enumConstantMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstringlist & outArgument1,
                                                   class GALGAS_enumConstantMap & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   class GALGAS_uint & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartBitForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantListForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_mConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varMap getter_overriddenMap (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_varMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                    const GALGAS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_varMap ;
 
} ; // End of GALGAS_varMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_varMap : public cGenericAbstractEnumerator {
  public : cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mConstantList (LOCATION_ARGS) const ;
  public : class GALGAS_enumConstantMap current_mConstantMap (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBDDStartBit (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBDDBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_varMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Class for element of '@varMap' map                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_varMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstringlist mProperty_mConstantList ;
  public : GALGAS_enumConstantMap mProperty_mConstantMap ;
  public : GALGAS_uint mProperty_mBDDStartBit ;
  public : GALGAS_uint mProperty_mBDDBitCount ;

//--- Constructor
  public : cMapElement_varMap (const GALGAS_lstring & inKey,
                               const GALGAS_lstringlist & in_mConstantList,
                               const GALGAS_enumConstantMap & in_mConstantMap,
                               const GALGAS_uint & in_mBDDStartBit,
                               const GALGAS_uint & in_mBDDBitCount
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @varMap_2D_element struct                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_varMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_lstringlist mProperty_mConstantList ;

  public : GALGAS_enumConstantMap mProperty_mConstantMap ;

  public : GALGAS_uint mProperty_mBDDStartBit ;

  public : GALGAS_uint mProperty_mBDDBitCount ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_varMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_varMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_varMap_2D_element (const GALGAS_lstring & in_lkey,
                                     const GALGAS_lstringlist & in_mConstantList,
                                     const GALGAS_enumConstantMap & in_mConstantMap,
                                     const GALGAS_uint & in_mBDDStartBit,
                                     const GALGAS_uint & in_mBDDBitCount) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varMap_2D_element extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                  const class GALGAS_enumConstantMap & inOperand2,
                                                                  const class GALGAS_uint & inOperand3,
                                                                  const class GALGAS_uint & inOperand4
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartBit (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_mConstantMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Abstract extension method '@expression computeExpressionBDD'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_expression_computeExpressionBDD) (const class cPtr_expression * inObject,
                                                                          const class GALGAS_varMap constinArgument0,
                                                                          const class GALGAS_uint constinArgument1,
                                                                          class GALGAS_binaryset & outArgument2,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeExpressionBDD (const int32_t inClassIndex,
                                                extensionMethodSignature_expression_computeExpressionBDD inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_computeExpressionBDD (const class cPtr_expression * inObject,
                                               const GALGAS_varMap constin_inVarMap,
                                               const GALGAS_uint constin_inVarTotalBDDBitCount,
                                               GALGAS_binaryset & out_outExpressionBDD,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@comparisonRightOperand computeRightOperandBDD'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeRightOperandBDD (const int32_t inClassIndex,
                                                  extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Abstract extension method '@instruction computeInstructionBDD'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_instruction_computeInstructionBDD) (const class cPtr_instruction * inObject,
                                                                            const class GALGAS_uint constinArgument0,
                                                                            const class GALGAS_varMap constinArgument1,
                                                                            const class GALGAS_functionMap constinArgument2,
                                                                            const class GALGAS_uint constinArgument3,
                                                                            class GALGAS_binaryset & ioArgument4,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeInstructionBDD (const int32_t inClassIndex,
                                                 extensionMethodSignature_instruction_computeInstructionBDD inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_computeInstructionBDD (const class cPtr_instruction * inObject,
                                                const GALGAS_uint constin_inVarTotalBDDBitCount,
                                                const GALGAS_varMap constin_inVarMap,
                                                const GALGAS_functionMap constin_inFunctionMap,
                                                const GALGAS_uint constin_inArgOldVarVarBDDBitCount,
                                                GALGAS_binaryset & io_ioArgOldVarVarValueSet,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@instructionList computeInstructionListBDD'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_computeInstructionListBDD (const class GALGAS_instructionList inObject,
                                                const class GALGAS_uint constin_inVarTotalBDDBitCount,
                                                const class GALGAS_varMap constin_inVarMap,
                                                const class GALGAS_functionMap constin_inFunctionMap,
                                                const class GALGAS_uint constin_inArgOldVarVarBDDBitCount,
                                                class GALGAS_binaryset & io_ioArgOldVarVarValueSet,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Abstract extension method '@assignmentSourceExpression computeAssignmentInstructionBDD'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeAssignmentInstructionBDD (const int32_t inClassIndex,
                                                           extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension getter '@decoratedInstructionList generateCCode' (as function)                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_generateCCode (const class GALGAS_decoratedInstructionList & inObject,
                                                   const class GALGAS_string & constinArgument0,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Abstract extension getter '@decoratedInstruction generateCCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_decoratedInstruction_generateCCode) (const class cPtr_decoratedInstruction * inObject,
                                                                                        const class GALGAS_string constinArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateCCode (const int32_t inClassIndex,
                                         enterExtensionGetter_decoratedInstruction_generateCCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_generateCCode (const class cPtr_decoratedInstruction * inObject,
                                                       const GALGAS_string constin_inIndentationString,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Abstract extension getter '@decoratedAssignmentSourceExpression generateSourceExpressionCCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode) (const class cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                                       const class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument0,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateSourceExpressionCCode (const int32_t inClassIndex,
                                                         enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_generateSourceExpressionCCode (const class cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                       const GALGAS_unifiedScalarTypeMap_2D_proxy constin_inTargetTypeProxy,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Abstract extension getter '@decoratedExpression generateExpressionCCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_decoratedExpression_generateExpressionCCode) (const class cPtr_decoratedExpression * inObject,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedExpression_generateExpressionCCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_generateExpressionCCode (const class cPtr_decoratedExpression * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Abstract extension getter '@decoratedComparisonRightOperand generateExpressionCCode'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode) (const class cPtr_decoratedComparisonRightOperand * inObject,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_generateExpressionCCode (const class cPtr_decoratedComparisonRightOperand * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @switchInstruction class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_switchInstruction : public GALGAS_instruction {
//--- Constructor
  public : GALGAS_switchInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_switchInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_switchInstruction * ptr (void) const { return (const cPtr_switchInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_switchInstruction (const cPtr_switchInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_switchCaseList & inOperand2,
                                                                  const class GALGAS_location & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSwitchExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSWITCHinstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_mSwitchCaseList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstruction class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstruction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @switchInstruction class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_switchInstruction : public cPtr_instruction {
//--- Attributes
  public : GALGAS_location mProperty_mSWITCHinstructionLocation ;
  public : GALGAS_lstring mProperty_mVariableName ;
  public : GALGAS_switchCaseList mProperty_mSwitchCaseList ;
  public : GALGAS_location mProperty_mEndOfSwitchExpression ;

//--- Constructor
  public : cPtr_switchInstruction (const GALGAS_location & in_mSWITCHinstructionLocation,
                                   const GALGAS_lstring & in_mVariableName,
                                   const GALGAS_switchCaseList & in_mSwitchCaseList,
                                   const GALGAS_location & in_mEndOfSwitchExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSWITCHinstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseList getter_mSwitchCaseList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfSwitchExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @decoratedComparisonInExpression class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_decoratedComparisonInExpression : public GALGAS_decoratedExpression {
//--- Constructor
  public : GALGAS_decoratedComparisonInExpression (void) ;

//---
  public : inline const class cPtr_decoratedComparisonInExpression * ptr (void) const { return (const cPtr_decoratedComparisonInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedComparisonInExpression (const cPtr_decoratedComparisonInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedComparisonInExpression extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedComparisonInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_enumComparisonOperator & inOperand1,
                                                                                const class GALGAS_decoratedComparisonRightOperand & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedComparisonInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumComparisonOperator getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedComparisonRightOperand getter_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedComparisonInExpression class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedComparisonInExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @decoratedComparisonInExpression class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_decoratedComparisonInExpression : public cPtr_decoratedExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mAttributeName ;
  public : GALGAS_enumComparisonOperator mProperty_mOperator ;
  public : GALGAS_decoratedComparisonRightOperand mProperty_mRightOperand ;

//--- Constructor
  public : cPtr_decoratedComparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                 const GALGAS_enumComparisonOperator & in_mOperator,
                                                 const GALGAS_decoratedComparisonRightOperand & in_mRightOperand
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_enumComparisonOperator getter_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedComparisonRightOperand getter_mRightOperand (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @decoratedConstantAsComparisonRightOperand class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_decoratedConstantAsComparisonRightOperand : public GALGAS_decoratedComparisonRightOperand {
//--- Constructor
  public : GALGAS_decoratedConstantAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedConstantAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedConstantAsComparisonRightOperand * ptr (void) const { return (const cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedConstantAsComparisonRightOperand (const cPtr_decoratedConstantAsComparisonRightOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedConstantAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedConstantAsComparisonRightOperand constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_uint & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedConstantAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mConstantTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mConstantValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedConstantAsComparisonRightOperand class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Pointer class for @decoratedConstantAsComparisonRightOperand class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_decoratedConstantAsComparisonRightOperand : public cPtr_decoratedComparisonRightOperand {
//--- Attributes
  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mConstantTypeProxy ;
  public : GALGAS_lstring mProperty_mConstantName ;
  public : GALGAS_uint mProperty_mConstantValue ;

//--- Constructor
  public : cPtr_decoratedConstantAsComparisonRightOperand (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mConstantTypeProxy,
                                                           const GALGAS_lstring & in_mConstantName,
                                                           const GALGAS_uint & in_mConstantValue
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedScalarTypeMap_2D_proxy getter_mConstantTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mConstantValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @decoratedAttributeAsComparisonRightOperand class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_decoratedAttributeAsComparisonRightOperand : public GALGAS_decoratedComparisonRightOperand {
//--- Constructor
  public : GALGAS_decoratedAttributeAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedAttributeAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedAttributeAsComparisonRightOperand * ptr (void) const { return (const cPtr_decoratedAttributeAsComparisonRightOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedAttributeAsComparisonRightOperand (const cPtr_decoratedAttributeAsComparisonRightOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedAttributeAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedAttributeAsComparisonRightOperand constructor_new (const class GALGAS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedAttributeAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedAttributeAsComparisonRightOperand class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Pointer class for @decoratedAttributeAsComparisonRightOperand class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_decoratedAttributeAsComparisonRightOperand : public cPtr_decoratedComparisonRightOperand {
//--- Attributes
  public : GALGAS_lstring mProperty_mAttributeName ;

//--- Constructor
  public : cPtr_decoratedAttributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @assignmentDecoratedInstruction class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_assignmentDecoratedInstruction : public GALGAS_decoratedInstruction {
//--- Constructor
  public : GALGAS_assignmentDecoratedInstruction (void) ;

//---
  public : inline const class cPtr_assignmentDecoratedInstruction * ptr (void) const { return (const cPtr_assignmentDecoratedInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentDecoratedInstruction (const cPtr_assignmentDecoratedInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentDecoratedInstruction extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentDecoratedInstruction constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_decoratedAssignmentSourceExpression & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentDecoratedInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedAssignmentSourceExpression getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mTargetTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentDecoratedInstruction class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @assignmentDecoratedInstruction class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_assignmentDecoratedInstruction : public cPtr_decoratedInstruction {
//--- Attributes
  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mTargetTypeProxy ;
  public : GALGAS_lstring mProperty_mTargetVarName ;
  public : GALGAS_decoratedAssignmentSourceExpression mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_assignmentDecoratedInstruction (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTargetTypeProxy,
                                                const GALGAS_lstring & in_mTargetVarName,
                                                const GALGAS_decoratedAssignmentSourceExpression & in_mSourceExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedScalarTypeMap_2D_proxy getter_mTargetTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedAssignmentSourceExpression getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @switchDecoratedInstruction class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_switchDecoratedInstruction : public GALGAS_decoratedInstruction {
//--- Constructor
  public : GALGAS_switchDecoratedInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_switchDecoratedInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_switchDecoratedInstruction * ptr (void) const { return (const cPtr_switchDecoratedInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_switchDecoratedInstruction (const cPtr_switchDecoratedInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchDecoratedInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchDecoratedInstruction constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_switchDecoratedCaseList & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchDecoratedInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_switchDecoratedCaseList getter_mSwitchDecoratedCaseList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchDecoratedInstruction class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchDecoratedInstruction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @switchDecoratedInstruction class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_switchDecoratedInstruction : public cPtr_decoratedInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_switchDecoratedCaseList mProperty_mSwitchDecoratedCaseList ;

//--- Constructor
  public : cPtr_switchDecoratedInstruction (const GALGAS_lstring & in_mVarName,
                                            const GALGAS_switchDecoratedCaseList & in_mSwitchDecoratedCaseList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_switchDecoratedCaseList getter_mSwitchDecoratedCaseList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @attributeInDecoratedAssignmentSourceExpression class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_attributeInDecoratedAssignmentSourceExpression : public GALGAS_decoratedAssignmentSourceExpression {
//--- Constructor
  public : GALGAS_attributeInDecoratedAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_attributeInDecoratedAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_attributeInDecoratedAssignmentSourceExpression * ptr (void) const { return (const cPtr_attributeInDecoratedAssignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_attributeInDecoratedAssignmentSourceExpression (const cPtr_attributeInDecoratedAssignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeInDecoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_attributeInDecoratedAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_attributeInDecoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeInDecoratedAssignmentSourceExpression class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Pointer class for @attributeInDecoratedAssignmentSourceExpression class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_attributeInDecoratedAssignmentSourceExpression : public cPtr_decoratedAssignmentSourceExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public : cPtr_attributeInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mVarName
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @cstInDecoratedAssignmentSourceExpression class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_cstInDecoratedAssignmentSourceExpression : public GALGAS_decoratedAssignmentSourceExpression {
//--- Constructor
  public : GALGAS_cstInDecoratedAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_cstInDecoratedAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_cstInDecoratedAssignmentSourceExpression * ptr (void) const { return (const cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_cstInDecoratedAssignmentSourceExpression (const cPtr_cstInDecoratedAssignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_cstInDecoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_cstInDecoratedAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_uint & inOperand1,
                                                                                         const class GALGAS_uint & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_cstInDecoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumCstName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_cstInDecoratedAssignmentSourceExpression class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @cstInDecoratedAssignmentSourceExpression class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_cstInDecoratedAssignmentSourceExpression : public cPtr_decoratedAssignmentSourceExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mEnumCstName ;
  public : GALGAS_uint mProperty_mValue ;
  public : GALGAS_uint mProperty_mBDDBitCount ;

//--- Constructor
  public : cPtr_cstInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mEnumCstName,
                                                          const GALGAS_uint & in_mValue,
                                                          const GALGAS_uint & in_mBDDBitCount
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumCstName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBDDBitCount (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @functionInDecoratedAssignmentSourceExpression class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_functionInDecoratedAssignmentSourceExpression : public GALGAS_decoratedAssignmentSourceExpression {
//--- Constructor
  public : GALGAS_functionInDecoratedAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionInDecoratedAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionInDecoratedAssignmentSourceExpression * ptr (void) const { return (const cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionInDecoratedAssignmentSourceExpression (const cPtr_functionInDecoratedAssignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionInDecoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionInDecoratedAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_decoratedFunctionValueList & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionInDecoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedFunctionValueList getter_mDecoratedFunctionValueList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionInDecoratedAssignmentSourceExpression class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Pointer class for @functionInDecoratedAssignmentSourceExpression class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_functionInDecoratedAssignmentSourceExpression : public cPtr_decoratedAssignmentSourceExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mFunctionName ;
  public : GALGAS_lstring mProperty_mOperandName ;
  public : GALGAS_decoratedFunctionValueList mProperty_mDecoratedFunctionValueList ;

//--- Constructor
  public : cPtr_functionInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                               const GALGAS_lstring & in_mOperandName,
                                                               const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedFunctionValueList getter_mDecoratedFunctionValueList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  GRAMMAR omnibus_grammar
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cGrammar_omnibus_5F_grammar : public cParser_omnibus_5F_syntax {
//------------------------------------- 'assignment_source_expression' non terminal
//--- 'parse' label
  public : virtual void nt_assignment_5F_source_5F_expression_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_assignment_5F_source_5F_expression_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                                C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'comparison_right_operand' non terminal
//--- 'parse' label
  public : virtual void nt_comparison_5F_right_5F_operand_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_comparison_5F_right_5F_operand_ (GALGAS_comparisonRightOperand & outArgument0,
                                                            C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'else_part' non terminal
//--- 'parse' label
  public : virtual void nt_else_5F_part_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_else_5F_part_ (GALGAS_instructionList & outArgument0,
                                          C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_declaration_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                 C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'enum_function' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_function_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_function_ (GALGAS_ast & ioArgument0,
                                              C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_expression & outArgument0,
                                        C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression1' non terminal
//--- 'parse' label
  public : virtual void nt_expression_31__parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_31__ (GALGAS_expression & outArgument0,
                                            C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression2' non terminal
//--- 'parse' label
  public : virtual void nt_expression_32__parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_32__ (GALGAS_expression & outArgument0,
                                            C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression4' non terminal
//--- 'parse' label
  public : virtual void nt_expression_34__parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_34__ (GALGAS_expression & outArgument0,
                                            C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_instruction & outArgument0,
                                         C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_5F_list_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_5F_list_ (GALGAS_instructionList & ioArgument0,
                                                 C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'machine' non terminal
//--- 'parse' label
  public : virtual void nt_machine_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_machine_ (GALGAS_ast & ioArgument0,
                                     C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'scenario' non terminal
//--- 'parse' label
  public : virtual void nt_scenario_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_scenario_ (GALGAS_ast & ioArgument0,
                                      C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & outArgument0,
                                             C_Lexique_lexicalAnalyzer * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_ast & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_ast & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

  public : virtual int32_t select_omnibus_5F_syntax_0 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_1 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_2 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_3 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_4 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_5 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_6 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_7 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_8 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_9 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_10 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_11 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_12 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_13 (C_Lexique_lexicalAnalyzer *) ;

  public : virtual int32_t select_omnibus_5F_syntax_14 (C_Lexique_lexicalAnalyzer *) ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension getter '@varList displayVarInfo' (as function)                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_machineVarListForDisplay extensionGetter_displayVarInfo (const class GALGAS_varList & inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@machineList-element performMachineDynamicAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_performMachineDynamicAnalysis (const class GALGAS_machineList_2D_element inObject,
                                                    const class GALGAS_string constin_inSourceFileName,
                                                    const class GALGAS_unifiedScalarTypeMap constin_inUnifiedScalarTypeMap,
                                                    const class GALGAS_scenarioList constin_inScenarioList,
                                                    const class GALGAS_functionMap constin_inFunctionMap,
                                                    class GALGAS_string & io_ioGenerationString,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Function 'nameForValue'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_nameForValue (const class GALGAS_uint_36__34_ & constinArgument0,
                                           const class GALGAS_varList & constinArgument1,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'addTransitionsToGraphvizString'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_addTransitionsToGraphvizString (const class GALGAS_eventDeclarationList_2D_element constinArgument0,
                                             const class GALGAS_uint constinArgument1,
                                             const class GALGAS_binaryset constinArgument2,
                                             const class GALGAS_varList constinArgument3,
                                             const class GALGAS_uint constinArgument4,
                                             const class GALGAS_varList constinArgument5,
                                             class GALGAS_string & ioArgument6,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'displayArgVarVarValueSet'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayArgVarVarValueSet (const class GALGAS_string constinArgument0,
                                       const class GALGAS_binaryset constinArgument1,
                                       const class GALGAS_varList constinArgument2,
                                       const class GALGAS_varList constinArgument3,
                                       class GALGAS_string & ioArgument4,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'displaySeparator'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displaySeparator (const class GALGAS_machineVarListForDisplay constinArgument0,
                               class GALGAS_string & ioArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'displayValue'                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayValue (const class GALGAS_machineVarListForDisplay constinArgument0,
                           const class GALGAS_uint_36__34_ constinArgument1,
                           class GALGAS_string & ioArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'displayVarNames'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayVarNames (const class GALGAS_machineVarListForDisplay constinArgument0,
                              class GALGAS_string & ioArgument1,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'displayVarValueSet'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayVarValueSet (const class GALGAS_string constinArgument0,
                                 const class GALGAS_binaryset constinArgument1,
                                 const class GALGAS_varList constinArgument2,
                                 class GALGAS_string & ioArgument3,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'displayVarVarValueSet'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayVarVarValueSet (const class GALGAS_string constinArgument0,
                                    const class GALGAS_binaryset constinArgument1,
                                    const class GALGAS_varList constinArgument2,
                                    class GALGAS_string & ioArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern C_BoolCommandLineOption gOption_omnibus_5F_options_generateCCode ;

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
//                                           Routine 'performStaticAnalysis'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_performStaticAnalysis (const class GALGAS_ast constinArgument0,
                                    class GALGAS_unifiedScalarTypeMap & outArgument1,
                                    class GALGAS_functionMap & outArgument2,
                                    class GALGAS_machineMap & outArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'performDisplay'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_performDisplay (const class GALGAS_string constinArgument0,
                             const class GALGAS_binaryset constinArgument1,
                             const class GALGAS_machineVarListForDisplay constinArgument2,
                             class GALGAS_string & ioArgument3,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'performDynamicAnalysis'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_performDynamicAnalysis (const class GALGAS_string constinArgument0,
                                     const class GALGAS_ast constinArgument1,
                                     const class GALGAS_unifiedScalarTypeMap constinArgument2,
                                     const class GALGAS_functionMap constinArgument3,
                                     const class GALGAS_machineMap constinArgument4,
                                     class GALGAS_string & outArgument5,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

