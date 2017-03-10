#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@machineVarListForDisplay' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_machineVarListForDisplay : public cCollectionElement {
  public : GALGAS_machineVarListForDisplay_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_machineVarListForDisplay (const GALGAS_string & in_mAttributeName,
                                                        const GALGAS_uint & in_mBDDStartIndex,
                                                        const GALGAS_uint & in_mBDDBitCount,
                                                        const GALGAS_lstringlist & in_mValueList,
                                                        const GALGAS_uint & in_mColumnLength
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_machineVarListForDisplay::cCollectionElement_machineVarListForDisplay (const GALGAS_string & in_mAttributeName,
                                                                                          const GALGAS_uint & in_mBDDStartIndex,
                                                                                          const GALGAS_uint & in_mBDDBitCount,
                                                                                          const GALGAS_lstringlist & in_mValueList,
                                                                                          const GALGAS_uint & in_mColumnLength
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mBDDStartIndex, in_mBDDBitCount, in_mValueList, in_mColumnLength) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_machineVarListForDisplay::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_machineVarListForDisplay::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_machineVarListForDisplay (mObject.mProperty_mAttributeName, mObject.mProperty_mBDDStartIndex, mObject.mProperty_mBDDBitCount, mObject.mProperty_mValueList, mObject.mProperty_mColumnLength COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_machineVarListForDisplay::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_machineVarListForDisplay * operand = (cCollectionElement_machineVarListForDisplay *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_machineVarListForDisplay) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay::GALGAS_machineVarListForDisplay (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay::GALGAS_machineVarListForDisplay (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarListForDisplay  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineVarListForDisplay::addAssign_operation (const GALGAS_string & inOperand0,
                                                           const GALGAS_uint & inOperand1,
                                                           const GALGAS_uint & inOperand2,
                                                           const GALGAS_lstringlist & inOperand3,
                                                           const GALGAS_uint & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarListForDisplay (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineVarListForDisplay::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                            const GALGAS_uint inOperand1,
                                                            const GALGAS_uint inOperand2,
                                                            const GALGAS_lstringlist inOperand3,
                                                            const GALGAS_uint inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarListForDisplay (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineVarListForDisplay::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                            GALGAS_uint & outOperand1,
                                                            GALGAS_uint & outOperand2,
                                                            GALGAS_lstringlist & outOperand3,
                                                            GALGAS_uint & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineVarListForDisplay::plusAssign_operation (const GALGAS_machineVarListForDisplay inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_machineVarListForDisplay::cEnumerator_machineVarListForDisplay (const GALGAS_machineVarListForDisplay & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay_2D_element cEnumerator_machineVarListForDisplay::current (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_machineVarListForDisplay::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mBDDStartIndex (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mBDDStartIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mBDDBitCount (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mBDDBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_machineVarListForDisplay::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mColumnLength (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mColumnLength ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @machineVarListForDisplay type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarListForDisplay ("machineVarListForDisplay",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_machineVarListForDisplay::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarListForDisplay ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_machineVarListForDisplay::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarListForDisplay (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@varList' list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_varList : public cCollectionElement {
  public : GALGAS_varList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_varList (const GALGAS_lstring & in_mVarName,
                                       const GALGAS_lstringlist & in_mValueList,
                                       const GALGAS_uint & in_mBDDStartBitIndex,
                                       const GALGAS_uint & in_mBDDBitCount,
                                       const GALGAS_uint & in_mInitialValueIndex
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_lstringlist & in_mValueList,
                                                        const GALGAS_uint & in_mBDDStartBitIndex,
                                                        const GALGAS_uint & in_mBDDBitCount,
                                                        const GALGAS_uint & in_mInitialValueIndex
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mValueList, in_mBDDStartBitIndex, in_mBDDBitCount, in_mInitialValueIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_varList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_varList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_varList (mObject.mProperty_mVarName, mObject.mProperty_mValueList, mObject.mProperty_mBDDStartBitIndex, mObject.mProperty_mBDDBitCount, mObject.mProperty_mInitialValueIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_varList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_varList * operand = (cCollectionElement_varList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_varList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList::GALGAS_varList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList::GALGAS_varList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                          const GALGAS_lstringlist & inOperand1,
                                          const GALGAS_uint & inOperand2,
                                          const GALGAS_uint & inOperand3,
                                          const GALGAS_uint & inOperand4
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                           const GALGAS_lstringlist inOperand1,
                                           const GALGAS_uint inOperand2,
                                           const GALGAS_uint inOperand3,
                                           const GALGAS_uint inOperand4,
                                           const GALGAS_uint inInsertionIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           GALGAS_uint & outOperand2,
                                           GALGAS_uint & outOperand3,
                                           GALGAS_uint & outOperand4,
                                           const GALGAS_uint inRemoveIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::plusAssign_operation (const GALGAS_varList inOperand,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_varList::cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element cEnumerator_varList::current (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_varList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varList::current_mBDDStartBitIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBDDStartBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varList::current_mBDDBitCount (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBDDBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varList::current_mInitialValueIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mInitialValueIndex ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @varList type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList ("varList",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@varList displayVarVarInfo'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay extensionGetter_displayVarVarInfo (const GALGAS_varList & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 39)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_1020 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1020.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_1046 = enumerator_1020.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 41)).add_operation (GALGAS_uint ((uint32_t) 5U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 41)) ;
    cEnumerator_lstringlist enumerator_1098 (enumerator_1020.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_1098.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_1131 = enumerator_1098.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 43)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_1046.objectCompare (var_cstNameLength_1131)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_columnLength_1046 = var_cstNameLength_1131 ;
      }
      enumerator_1098.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (GALGAS_string ("old $").add_operation (enumerator_1020.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 49)), enumerator_1020.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_1020.current (HERE).getter_mBDDBitCount (HERE), enumerator_1020.current (HERE).getter_mValueList (HERE), var_columnLength_1046  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 48)) ;
    enumerator_1020.gotoNextObject () ;
  }
  const GALGAS_varList temp_2 = inObject ;
  cEnumerator_varList enumerator_1412 (temp_2, kENUMERATION_UP) ;
  while (enumerator_1412.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_1438 = enumerator_1412.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 56)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 56)) ;
    cEnumerator_lstringlist enumerator_1490 (enumerator_1412.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_1490.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_1523 = enumerator_1490.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 58)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_columnLength_1438.objectCompare (var_cstNameLength_1523)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_columnLength_1438 = var_cstNameLength_1523 ;
      }
      enumerator_1490.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (GALGAS_string ("$").add_operation (enumerator_1412.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 64)), enumerator_1412.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_1412.current (HERE).getter_mBDDBitCount (HERE), enumerator_1412.current (HERE).getter_mValueList (HERE), var_columnLength_1438  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 63)) ;
    enumerator_1412.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension Getter '@varList displayArgVarVarInfo'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay extensionGetter_displayArgVarVarInfo (const GALGAS_varList & inObject,
                                                                      const GALGAS_varList & constinArgument_inArgumentList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 77)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_2032 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2032.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_2058 = enumerator_2032.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 79)).add_operation (GALGAS_uint ((uint32_t) 5U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 79)) ;
    cEnumerator_lstringlist enumerator_2110 (enumerator_2032.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_2110.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_2143 = enumerator_2110.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 81)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_2058.objectCompare (var_cstNameLength_2143)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_columnLength_2058 = var_cstNameLength_2143 ;
      }
      enumerator_2110.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (GALGAS_string ("old $").add_operation (enumerator_2032.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 87)), enumerator_2032.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_2032.current (HERE).getter_mBDDBitCount (HERE), enumerator_2032.current (HERE).getter_mValueList (HERE), var_columnLength_2058  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 86)) ;
    enumerator_2032.gotoNextObject () ;
  }
  const GALGAS_varList temp_2 = inObject ;
  cEnumerator_varList enumerator_2424 (temp_2, kENUMERATION_UP) ;
  while (enumerator_2424.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_2450 = enumerator_2424.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 94)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 94)) ;
    cEnumerator_lstringlist enumerator_2502 (enumerator_2424.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_2502.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_2535 = enumerator_2502.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 96)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_columnLength_2450.objectCompare (var_cstNameLength_2535)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_columnLength_2450 = var_cstNameLength_2535 ;
      }
      enumerator_2502.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (GALGAS_string ("$").add_operation (enumerator_2424.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 102)), enumerator_2424.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_2424.current (HERE).getter_mBDDBitCount (HERE), enumerator_2424.current (HERE).getter_mValueList (HERE), var_columnLength_2450  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 101)) ;
    enumerator_2424.gotoNextObject () ;
  }
  cEnumerator_varList enumerator_2822 (constinArgument_inArgumentList, kENUMERATION_UP) ;
  while (enumerator_2822.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_2848 = enumerator_2822.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 109)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 109)) ;
    cEnumerator_lstringlist enumerator_2900 (enumerator_2822.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_2900.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_2933 = enumerator_2900.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 111)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_columnLength_2848.objectCompare (var_cstNameLength_2933)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_columnLength_2848 = var_cstNameLength_2933 ;
      }
      enumerator_2900.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (GALGAS_string ("$").add_operation (enumerator_2822.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 117)), enumerator_2822.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_2822.current (HERE).getter_mBDDBitCount (HERE), enumerator_2822.current (HERE).getter_mValueList (HERE), var_columnLength_2848  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 116)) ;
    enumerator_2822.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

cMapElement_transitionEventMap::cMapElement_transitionEventMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_eventArgumentList & in_mArgumentList,
                                                                const GALGAS_binaryset & in_mTransitionBinarySet
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mArgumentList (in_mArgumentList),
mProperty_mTransitionBinarySet (in_mTransitionBinarySet) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_transitionEventMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentList.isValid () && mProperty_mTransitionBinarySet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_transitionEventMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_transitionEventMap (mProperty_lkey, mProperty_mArgumentList, mProperty_mTransitionBinarySet COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap::GALGAS_transitionEventMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap::GALGAS_transitionEventMap (const GALGAS_transitionEventMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap & GALGAS_transitionEventMap::operator = (const GALGAS_transitionEventMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap GALGAS_transitionEventMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_transitionEventMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap GALGAS_transitionEventMap::constructor_mapWithMapToOverride (const GALGAS_transitionEventMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_transitionEventMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap GALGAS_transitionEventMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_transitionEventMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_transitionEventMap_searchKey = "there is no '%K' event" ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_transitionEventMap * GALGAS_transitionEventMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_transitionEventMap * result = (cMapElement_transitionEventMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_transitionEventMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_transitionEventMap::cEnumerator_transitionEventMap (const GALGAS_transitionEventMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap_2D_element cEnumerator_transitionEventMap::current (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return GALGAS_transitionEventMap_2D_element (p->mProperty_lkey, p->mProperty_mArgumentList, p->mProperty_mTransitionBinarySet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_transitionEventMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList cEnumerator_transitionEventMap::current_mArgumentList (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return p->mProperty_mArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset cEnumerator_transitionEventMap::current_mTransitionBinarySet (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return p->mProperty_mTransitionBinarySet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @transitionEventMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transitionEventMap ("transitionEventMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transitionEventMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transitionEventMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transitionEventMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transitionEventMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@binarysetList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_binarysetList : public cCollectionElement {
  public : GALGAS_binarysetList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_binarysetList (const GALGAS_lstring & in_mLabel,
                                             const GALGAS_binaryset & in_mSet
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_binarysetList::cCollectionElement_binarysetList (const GALGAS_lstring & in_mLabel,
                                                                    const GALGAS_binaryset & in_mSet
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabel, in_mSet) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_binarysetList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_binarysetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_binarysetList (mObject.mProperty_mLabel, mObject.mProperty_mSet COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_binarysetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_binarysetList * operand = (cCollectionElement_binarysetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_binarysetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList::GALGAS_binarysetList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList::GALGAS_binarysetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList GALGAS_binarysetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_binarysetList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_binarysetList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                const GALGAS_binaryset & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_binarysetList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_binarysetList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                 const GALGAS_binaryset inOperand1,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_binarysetList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_binarysetList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                 GALGAS_binaryset & outOperand1,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList GALGAS_binarysetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList GALGAS_binarysetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList GALGAS_binarysetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_binarysetList::plusAssign_operation (const GALGAS_binarysetList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_binarysetList::cEnumerator_binarysetList (const GALGAS_binarysetList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList_2D_element cEnumerator_binarysetList::current (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_binarysetList::current_mLabel (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject.mProperty_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset cEnumerator_binarysetList::current_mSet (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject.mProperty_mSet ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @binarysetList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetList ("binarysetList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binarysetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binarysetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_varMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantList.isValid () && mProperty_mConstantMap.isValid () && mProperty_mBDDStartBit.isValid () && mProperty_mBDDBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_varMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_varMap (mProperty_lkey, mProperty_mConstantList, mProperty_mConstantMap, mProperty_mBDDStartBit, mProperty_mBDDBitCount COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap::GALGAS_varMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap::GALGAS_varMap (const GALGAS_varMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap & GALGAS_varMap::operator = (const GALGAS_varMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap GALGAS_varMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap GALGAS_varMap::constructor_mapWithMapToOverride (const GALGAS_varMap & inMapToOverride
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap GALGAS_varMap::getter_overriddenMap (C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_varMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_varMap_searchKey = "there is var '%K' key" ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_varMap * GALGAS_varMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                       const GALGAS_string & inKey
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_varMap * result = (cMapElement_varMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_varMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_varMap::cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element cEnumerator_varMap::current (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return GALGAS_varMap_2D_element (p->mProperty_lkey, p->mProperty_mConstantList, p->mProperty_mConstantMap, p->mProperty_mBDDStartBit, p->mProperty_mBDDBitCount) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_varMap::current_mConstantList (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap cEnumerator_varMap::current_mConstantMap (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varMap::current_mBDDStartBit (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBDDStartBit ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varMap::current_mBDDBitCount (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBDDBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @varMap type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap ("varMap",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension method '@expression computeExpressionBDD'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_expression_computeExpressionBDD> gExtensionMethodTable_expression_computeExpressionBDD ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_computeExpressionBDD (const int32_t inClassIndex,
                                                extensionMethodSignature_expression_computeExpressionBDD inMethod) {
  gExtensionMethodTable_expression_computeExpressionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_expression_computeExpressionBDD (void) {
  gExtensionMethodTable_expression_computeExpressionBDD.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expression_computeExpressionBDD (NULL,
                                                            freeExtensionMethod_expression_computeExpressionBDD) ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@comparisonRightOperand computeRightOperandBDD'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD> gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_computeRightOperandBDD (const int32_t inClassIndex,
                                                  extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD inMethod) {
  gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_comparisonRightOperand_computeRightOperandBDD (void) {
  gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_comparisonRightOperand_computeRightOperandBDD (NULL,
                                                                          freeExtensionMethod_comparisonRightOperand_computeRightOperandBDD) ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract extension method '@instruction computeInstructionBDD'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_instruction_computeInstructionBDD> gExtensionMethodTable_instruction_computeInstructionBDD ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_computeInstructionBDD (const int32_t inClassIndex,
                                                 extensionMethodSignature_instruction_computeInstructionBDD inMethod) {
  gExtensionMethodTable_instruction_computeInstructionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_instruction_computeInstructionBDD (void) {
  gExtensionMethodTable_instruction_computeInstructionBDD.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_instruction_computeInstructionBDD (NULL,
                                                              freeExtensionMethod_instruction_computeInstructionBDD) ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionList computeInstructionListBDD'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_computeInstructionListBDD (const GALGAS_instructionList inObject,
                                                const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                const GALGAS_varMap constinArgument_inVarMap,
                                                const GALGAS_functionMap constinArgument_inFunctionMap,
                                                const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionList temp_0 = inObject ;
  cEnumerator_instructionList enumerator_26859 (temp_0, kENUMERATION_UP) ;
  while (enumerator_26859.hasCurrentObject ()) {
    callExtensionMethod_computeInstructionBDD ((const cPtr_instruction *) enumerator_26859.current (HERE).getter_mInstruction (HERE).ptr (), constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, ioArgument_ioArgOldVarVarValueSet, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 806)) ;
    enumerator_26859.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract extension method '@assignmentSourceExpression computeAssignmentInstructionBDD'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD> gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_computeAssignmentInstructionBDD (const int32_t inClassIndex,
                                                           extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD inMethod) {
  gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_assignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentSourceExpression_computeAssignmentInstructionBDD (NULL,
                                                                                       freeExtensionMethod_assignmentSourceExpression_computeAssignmentInstructionBDD) ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension Getter '@decoratedInstructionList generateCCode'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateCCode (const GALGAS_decoratedInstructionList & inObject,
                                             const GALGAS_string & constinArgument_inIndentationString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  const GALGAS_decoratedInstructionList temp_0 = inObject ;
  cEnumerator_decoratedInstructionList enumerator_4108 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4108.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_generateCCode ((const cPtr_decoratedInstruction *) enumerator_4108.current (HERE).getter_mDecoratedInstruction (HERE).ptr (), constinArgument_inIndentationString, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 106)) ;
    enumerator_4108.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract extension getter '@decoratedInstruction generateCCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_decoratedInstruction_generateCCode> gExtensionGetterTable_decoratedInstruction_generateCCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCCode (const int32_t inClassIndex,
                                         enterExtensionGetter_decoratedInstruction_generateCCode inGetter) {
  gExtensionGetterTable_decoratedInstruction_generateCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_decoratedInstruction_generateCCode (void) {
  gExtensionGetterTable_decoratedInstruction_generateCCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_decoratedInstruction_generateCCode (NULL,
                                                               freeExtensionGetter_decoratedInstruction_generateCCode) ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Abstract extension getter '@decoratedAssignmentSourceExpression generateSourceExpressionCCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode> gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateSourceExpressionCCode (const int32_t inClassIndex,
                                                         enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (NULL,
                                                                                              freeExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                 const GALGAS_unifiedScalarTypeMap_2D_proxy in_inTargetTypeProxy,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract extension getter '@decoratedExpression generateExpressionCCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_decoratedExpression_generateExpressionCCode> gExtensionGetterTable_decoratedExpression_generateExpressionCCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedExpression_generateExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedExpression_generateExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_decoratedExpression_generateExpressionCCode (void) {
  gExtensionGetterTable_decoratedExpression_generateExpressionCCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_decoratedExpression_generateExpressionCCode (NULL,
                                                                        freeExtensionGetter_decoratedExpression_generateExpressionCCode) ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension getter '@decoratedComparisonRightOperand generateExpressionCCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode> gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode (void) {
  gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_decoratedComparisonRightOperand_generateExpressionCCode (NULL,
                                                                                    freeExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode) ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionList_2D_element::GALGAS_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionList_2D_element::~ GALGAS_instructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionList_2D_element::GALGAS_instructionList_2D_element (const GALGAS_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionList_2D_element GALGAS_instructionList_2D_element::constructor_new (const GALGAS_instruction & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instructionList_2D_element::objectCompare (const GALGAS_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instruction GALGAS_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @instructionList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionList_2D_element ("instructionList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInstructionList_2D_element::GALGAS_decoratedInstructionList_2D_element (void) :
mProperty_mDecoratedInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInstructionList_2D_element::~ GALGAS_decoratedInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInstructionList_2D_element::GALGAS_decoratedInstructionList_2D_element (const GALGAS_decoratedInstruction & inOperand0) :
mProperty_mDecoratedInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInstructionList_2D_element GALGAS_decoratedInstructionList_2D_element::constructor_new (const GALGAS_decoratedInstruction & inOperand0 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_decoratedInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedInstructionList_2D_element::objectCompare (const GALGAS_decoratedInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedInstruction.objectCompare (inOperand.mProperty_mDecoratedInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedInstructionList_2D_element::isValid (void) const {
  return mProperty_mDecoratedInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedInstructionList_2D_element::drop (void) {
  mProperty_mDecoratedInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInstruction GALGAS_decoratedInstructionList_2D_element::getter_mDecoratedInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @decoratedInstructionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ("decoratedInstructionList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay_2D_element::GALGAS_machineVarListForDisplay_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mBDDStartIndex (),
mProperty_mBDDBitCount (),
mProperty_mValueList (),
mProperty_mColumnLength () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay_2D_element::~ GALGAS_machineVarListForDisplay_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay_2D_element GALGAS_machineVarListForDisplay_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarListForDisplay_2D_element (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                                     GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_machineVarListForDisplay_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mBDDStartIndex.isValid () && mProperty_mBDDBitCount.isValid () && mProperty_mValueList.isValid () && mProperty_mColumnLength.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineVarListForDisplay_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mBDDStartIndex.drop () ;
  mProperty_mBDDBitCount.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mColumnLength.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_machineVarListForDisplay_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_machineVarListForDisplay_2D_element::getter_mBDDStartIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDStartIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_machineVarListForDisplay_2D_element::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_machineVarListForDisplay_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_machineVarListForDisplay_2D_element::getter_mColumnLength (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnLength ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @machineVarListForDisplay-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ("machineVarListForDisplay-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_machineVarListForDisplay_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_machineVarListForDisplay_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarListForDisplay_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_constantAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constantAsComparisonRightOperand * p = (const cPtr_constantAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constantAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_constantAsComparisonRightOperand::objectCompare (const GALGAS_constantAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsComparisonRightOperand::GALGAS_constantAsComparisonRightOperand (void) :
GALGAS_comparisonRightOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_constantAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsComparisonRightOperand::GALGAS_constantAsComparisonRightOperand (const cPtr_constantAsComparisonRightOperand * inSourcePtr) :
GALGAS_comparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constantAsComparisonRightOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mConstantName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constantAsComparisonRightOperand result ;
  if (inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constantAsComparisonRightOperand (inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constantAsComparisonRightOperand * p = (const cPtr_constantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_constantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @constantAsComparisonRightOperand class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_constantAsComparisonRightOperand::cPtr_constantAsComparisonRightOperand (const GALGAS_lstring & in_mConstantName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_comparisonRightOperand (THERE),
mProperty_mConstantName (in_mConstantName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_constantAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;
}

void cPtr_constantAsComparisonRightOperand::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@constantAsComparisonRightOperand:" ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_constantAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constantAsComparisonRightOperand (mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @constantAsComparisonRightOperand type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ("constantAsComparisonRightOperand",
                                                         & kTypeDescriptor_GALGAS_comparisonRightOperand) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_attributeAsComparisonRightOperand::objectCompare (const GALGAS_attributeAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeAsComparisonRightOperand::GALGAS_attributeAsComparisonRightOperand (void) :
GALGAS_comparisonRightOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_attributeAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeAsComparisonRightOperand::GALGAS_attributeAsComparisonRightOperand (const cPtr_attributeAsComparisonRightOperand * inSourcePtr) :
GALGAS_comparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_attributeAsComparisonRightOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName,
                                                                                                    const GALGAS_bool & inAttribute_mHasOldQualifier
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_attributeAsComparisonRightOperand result ;
  if (inAttribute_mAttributeName.isValid () && inAttribute_mHasOldQualifier.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_attributeAsComparisonRightOperand (inAttribute_mAttributeName, inAttribute_mHasOldQualifier COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_attributeAsComparisonRightOperand * p = (const cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_attributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_attributeAsComparisonRightOperand::getter_mHasOldQualifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_attributeAsComparisonRightOperand * p = (const cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    result = p->mProperty_mHasOldQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_attributeAsComparisonRightOperand::getter_mHasOldQualifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasOldQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @attributeAsComparisonRightOperand class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_attributeAsComparisonRightOperand::cPtr_attributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName,
                                                                                const GALGAS_bool & in_mHasOldQualifier
                                                                                COMMA_LOCATION_ARGS) :
cPtr_comparisonRightOperand (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mHasOldQualifier (in_mHasOldQualifier) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_attributeAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_attributeAsComparisonRightOperand (mProperty_mAttributeName, mProperty_mHasOldQualifier COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @attributeAsComparisonRightOperand type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ("attributeAsComparisonRightOperand",
                                                          & kTypeDescriptor_GALGAS_comparisonRightOperand) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_comparisonInExpression::objectCompare (const GALGAS_comparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonInExpression::GALGAS_comparisonInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonInExpression::GALGAS_comparisonInExpression (const cPtr_comparisonInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_comparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonInExpression * p = (const cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_comparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumComparisonOperator GALGAS_comparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumComparisonOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonInExpression * p = (const cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumComparisonOperator cPtr_comparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonRightOperand GALGAS_comparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_comparisonRightOperand result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonInExpression * p = (const cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonRightOperand cPtr_comparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @comparisonInExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_comparisonInExpression::cPtr_comparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_enumComparisonOperator & in_mOperator,
                                                          const GALGAS_comparisonRightOperand & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mOperator (in_mOperator),
mProperty_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_comparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonInExpression (mProperty_mAttributeName, mProperty_mOperator, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @comparisonInExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonInExpression ("comparisonInExpression",
                                               & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_comparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_comparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varAsAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varAsAssignmentSourceExpression * p = (const cPtr_varAsAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varAsAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varAsAssignmentSourceExpression::objectCompare (const GALGAS_varAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAsAssignmentSourceExpression::GALGAS_varAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_varAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAsAssignmentSourceExpression::GALGAS_varAsAssignmentSourceExpression (const cPtr_varAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varAsAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mSourceVarName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varAsAssignmentSourceExpression result ;
  if (inAttribute_mSourceVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varAsAssignmentSourceExpression (inAttribute_mSourceVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varAsAssignmentSourceExpression::getter_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAsAssignmentSourceExpression * p = (const cPtr_varAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAsAssignmentSourceExpression) ;
    result = p->mProperty_mSourceVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varAsAssignmentSourceExpression::getter_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @varAsAssignmentSourceExpression class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varAsAssignmentSourceExpression::cPtr_varAsAssignmentSourceExpression (const GALGAS_lstring & in_mSourceVarName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mSourceVarName (in_mSourceVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varAsAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;
}

void cPtr_varAsAssignmentSourceExpression::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varAsAssignmentSourceExpression:" ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varAsAssignmentSourceExpression (mProperty_mSourceVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @varAsAssignmentSourceExpression type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ("varAsAssignmentSourceExpression",
                                                        & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_constantAsAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constantAsAssignmentSourceExpression * p = (const cPtr_constantAsAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constantAsAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_constantAsAssignmentSourceExpression::objectCompare (const GALGAS_constantAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsAssignmentSourceExpression::GALGAS_constantAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_constantAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsAssignmentSourceExpression::GALGAS_constantAsAssignmentSourceExpression (const cPtr_constantAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constantAsAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mConstantName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_constantAsAssignmentSourceExpression result ;
  if (inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constantAsAssignmentSourceExpression (inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantAsAssignmentSourceExpression::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constantAsAssignmentSourceExpression * p = (const cPtr_constantAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsAssignmentSourceExpression) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_constantAsAssignmentSourceExpression::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @constantAsAssignmentSourceExpression class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_constantAsAssignmentSourceExpression::cPtr_constantAsAssignmentSourceExpression (const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mConstantName (in_mConstantName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_constantAsAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;
}

void cPtr_constantAsAssignmentSourceExpression::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@constantAsAssignmentSourceExpression:" ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_constantAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constantAsAssignmentSourceExpression (mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @constantAsAssignmentSourceExpression type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ("constantAsAssignmentSourceExpression",
                                                             & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionAsAssignmentSourceExpression::objectCompare (const GALGAS_functionAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionAsAssignmentSourceExpression::GALGAS_functionAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionAsAssignmentSourceExpression::GALGAS_functionAsAssignmentSourceExpression (const cPtr_functionAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionAsAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                                          const GALGAS_lstring & inAttribute_mOperandName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionAsAssignmentSourceExpression result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mOperandName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionAsAssignmentSourceExpression (inAttribute_mFunctionName, inAttribute_mOperandName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionAsAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionAsAssignmentSourceExpression * p = (const cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionAsAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionAsAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionAsAssignmentSourceExpression * p = (const cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    result = p->mProperty_mOperandName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionAsAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @functionAsAssignmentSourceExpression class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionAsAssignmentSourceExpression::cPtr_functionAsAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                                                      const GALGAS_lstring & in_mOperandName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mOperandName (in_mOperandName) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionAsAssignmentSourceExpression (mProperty_mFunctionName, mProperty_mOperandName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @functionAsAssignmentSourceExpression type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ("functionAsAssignmentSourceExpression",
                                                             & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assignmentInstruction::objectCompare (const GALGAS_assignmentInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstruction::GALGAS_assignmentInstruction (void) :
GALGAS_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstruction::GALGAS_assignmentInstruction (const cPtr_assignmentInstruction * inSourcePtr) :
GALGAS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstruction GALGAS_assignmentInstruction::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                            const GALGAS_assignmentSourceExpression & inAttribute_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstruction result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstruction (inAttribute_mTargetVarName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_assignmentInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstruction * p = (const cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    result = p->mProperty_mTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_assignmentInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentSourceExpression GALGAS_assignmentInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentSourceExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstruction * p = (const cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentSourceExpression cPtr_assignmentInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @assignmentInstruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentInstruction::cPtr_assignmentInstruction (const GALGAS_lstring & in_mTargetVarName,
                                                        const GALGAS_assignmentSourceExpression & in_mSourceExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_instruction (THERE),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstruction (mProperty_mTargetVarName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @assignmentInstruction type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstruction ("assignmentInstruction",
                                              & kTypeDescriptor_GALGAS_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedComparisonInExpression::objectCompare (const GALGAS_decoratedComparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedComparisonInExpression::GALGAS_decoratedComparisonInExpression (void) :
GALGAS_decoratedExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedComparisonInExpression::GALGAS_decoratedComparisonInExpression (const cPtr_decoratedComparisonInExpression * inSourcePtr) :
GALGAS_decoratedExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedComparisonInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedComparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedComparisonInExpression * p = (const cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedComparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumComparisonOperator GALGAS_decoratedComparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumComparisonOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedComparisonInExpression * p = (const cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumComparisonOperator cPtr_decoratedComparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedComparisonRightOperand GALGAS_decoratedComparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedComparisonRightOperand result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedComparisonInExpression * p = (const cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedComparisonRightOperand cPtr_decoratedComparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @decoratedComparisonInExpression class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedComparisonInExpression::cPtr_decoratedComparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_enumComparisonOperator & in_mOperator,
                                                                            const GALGAS_decoratedComparisonRightOperand & in_mRightOperand
                                                                            COMMA_LOCATION_ARGS) :
cPtr_decoratedExpression (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mOperator (in_mOperator),
mProperty_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedComparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedComparisonInExpression (mProperty_mAttributeName, mProperty_mOperator, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @decoratedComparisonInExpression type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedComparisonInExpression ("decoratedComparisonInExpression",
                                                        & kTypeDescriptor_GALGAS_decoratedExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedComparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedComparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedComparisonInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedConstantAsComparisonRightOperand::objectCompare (const GALGAS_decoratedConstantAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedConstantAsComparisonRightOperand::GALGAS_decoratedConstantAsComparisonRightOperand (void) :
GALGAS_decoratedComparisonRightOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                                                            GALGAS_lstring::constructor_default (HERE),
                                                                            GALGAS_uint::constructor_default (HERE)
                                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedConstantAsComparisonRightOperand::GALGAS_decoratedConstantAsComparisonRightOperand (const cPtr_decoratedConstantAsComparisonRightOperand * inSourcePtr) :
GALGAS_decoratedComparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedConstantAsComparisonRightOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inAttribute_mConstantTypeProxy,
                                                                                                                    const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                    const GALGAS_uint & inAttribute_mConstantValue
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedConstantAsComparisonRightOperand result ;
  if (inAttribute_mConstantTypeProxy.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mConstantValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedConstantAsComparisonRightOperand (inAttribute_mConstantTypeProxy, inAttribute_mConstantName, inAttribute_mConstantValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_decoratedConstantAsComparisonRightOperand::getter_mConstantTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedConstantAsComparisonRightOperand * p = (const cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy cPtr_decoratedConstantAsComparisonRightOperand::getter_mConstantTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedConstantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedConstantAsComparisonRightOperand * p = (const cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedConstantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_decoratedConstantAsComparisonRightOperand::getter_mConstantValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedConstantAsComparisonRightOperand * p = (const cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_decoratedConstantAsComparisonRightOperand::getter_mConstantValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @decoratedConstantAsComparisonRightOperand class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedConstantAsComparisonRightOperand::cPtr_decoratedConstantAsComparisonRightOperand (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mConstantTypeProxy,
                                                                                                const GALGAS_lstring & in_mConstantName,
                                                                                                const GALGAS_uint & in_mConstantValue
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_decoratedComparisonRightOperand (THERE),
mProperty_mConstantTypeProxy (in_mConstantTypeProxy),
mProperty_mConstantName (in_mConstantName),
mProperty_mConstantValue (in_mConstantValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedConstantAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedConstantAsComparisonRightOperand (mProperty_mConstantTypeProxy, mProperty_mConstantName, mProperty_mConstantValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @decoratedConstantAsComparisonRightOperand type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ("decoratedConstantAsComparisonRightOperand",
                                                                  & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedConstantAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedConstantAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedConstantAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedAttributeAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedAttributeAsComparisonRightOperand * p = (const cPtr_decoratedAttributeAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedAttributeAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedAttributeAsComparisonRightOperand::objectCompare (const GALGAS_decoratedAttributeAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeAsComparisonRightOperand::GALGAS_decoratedAttributeAsComparisonRightOperand (void) :
GALGAS_decoratedComparisonRightOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeAsComparisonRightOperand::GALGAS_decoratedAttributeAsComparisonRightOperand (const cPtr_decoratedAttributeAsComparisonRightOperand * inSourcePtr) :
GALGAS_decoratedComparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedAttributeAsComparisonRightOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAttributeAsComparisonRightOperand result ;
  if (inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedAttributeAsComparisonRightOperand (inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedAttributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedAttributeAsComparisonRightOperand * p = (const cPtr_decoratedAttributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedAttributeAsComparisonRightOperand) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedAttributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @decoratedAttributeAsComparisonRightOperand class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedAttributeAsComparisonRightOperand::cPtr_decoratedAttributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_decoratedComparisonRightOperand (THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedAttributeAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;
}

void cPtr_decoratedAttributeAsComparisonRightOperand::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@decoratedAttributeAsComparisonRightOperand:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedAttributeAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedAttributeAsComparisonRightOperand (mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @decoratedAttributeAsComparisonRightOperand type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ("decoratedAttributeAsComparisonRightOperand",
                                                                   & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedAttributeAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedAttributeAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAttributeAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assignmentDecoratedInstruction::objectCompare (const GALGAS_assignmentDecoratedInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentDecoratedInstruction::GALGAS_assignmentDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentDecoratedInstruction::GALGAS_assignmentDecoratedInstruction (const cPtr_assignmentDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentDecoratedInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentDecoratedInstruction GALGAS_assignmentDecoratedInstruction::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inAttribute_mTargetTypeProxy,
                                                                                              const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                              const GALGAS_decoratedAssignmentSourceExpression & inAttribute_mSourceExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_assignmentDecoratedInstruction result ;
  if (inAttribute_mTargetTypeProxy.isValid () && inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentDecoratedInstruction (inAttribute_mTargetTypeProxy, inAttribute_mTargetVarName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_assignmentDecoratedInstruction::getter_mTargetTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentDecoratedInstruction * p = (const cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    result = p->mProperty_mTargetTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy cPtr_assignmentDecoratedInstruction::getter_mTargetTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_assignmentDecoratedInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentDecoratedInstruction * p = (const cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    result = p->mProperty_mTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_assignmentDecoratedInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAssignmentSourceExpression GALGAS_assignmentDecoratedInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedAssignmentSourceExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentDecoratedInstruction * p = (const cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAssignmentSourceExpression cPtr_assignmentDecoratedInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @assignmentDecoratedInstruction class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentDecoratedInstruction::cPtr_assignmentDecoratedInstruction (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTargetTypeProxy,
                                                                          const GALGAS_lstring & in_mTargetVarName,
                                                                          const GALGAS_decoratedAssignmentSourceExpression & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mTargetTypeProxy (in_mTargetTypeProxy),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentDecoratedInstruction (mProperty_mTargetTypeProxy, mProperty_mTargetVarName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @assignmentDecoratedInstruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ("assignmentDecoratedInstruction",
                                                       & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentDecoratedInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_attributeInDecoratedAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_attributeInDecoratedAssignmentSourceExpression * p = (const cPtr_attributeInDecoratedAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_attributeInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_attributeInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInDecoratedAssignmentSourceExpression::GALGAS_attributeInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInDecoratedAssignmentSourceExpression::GALGAS_attributeInDecoratedAssignmentSourceExpression (const cPtr_attributeInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_attributeInDecoratedAssignmentSourceExpression result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_attributeInDecoratedAssignmentSourceExpression (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeInDecoratedAssignmentSourceExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_attributeInDecoratedAssignmentSourceExpression * p = (const cPtr_attributeInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_attributeInDecoratedAssignmentSourceExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @attributeInDecoratedAssignmentSourceExpression class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_attributeInDecoratedAssignmentSourceExpression::cPtr_attributeInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mVarName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_attributeInDecoratedAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;
}

void cPtr_attributeInDecoratedAssignmentSourceExpression::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@attributeInDecoratedAssignmentSourceExpression:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_attributeInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_attributeInDecoratedAssignmentSourceExpression (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @attributeInDecoratedAssignmentSourceExpression type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ("attributeInDecoratedAssignmentSourceExpression",
                                                                       & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_cstInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_cstInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cstInDecoratedAssignmentSourceExpression::GALGAS_cstInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cstInDecoratedAssignmentSourceExpression GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                           GALGAS_uint::constructor_default (HERE),
                                                                           GALGAS_uint::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cstInDecoratedAssignmentSourceExpression::GALGAS_cstInDecoratedAssignmentSourceExpression (const cPtr_cstInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_cstInDecoratedAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_cstInDecoratedAssignmentSourceExpression::getter_mEnumCstName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_cstInDecoratedAssignmentSourceExpression * p = (const cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mEnumCstName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_cstInDecoratedAssignmentSourceExpression::getter_mEnumCstName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumCstName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_cstInDecoratedAssignmentSourceExpression::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_cstInDecoratedAssignmentSourceExpression * p = (const cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_cstInDecoratedAssignmentSourceExpression::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_cstInDecoratedAssignmentSourceExpression::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_cstInDecoratedAssignmentSourceExpression * p = (const cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mBDDBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_cstInDecoratedAssignmentSourceExpression::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @cstInDecoratedAssignmentSourceExpression class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_cstInDecoratedAssignmentSourceExpression::cPtr_cstInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mEnumCstName,
                                                                                              const GALGAS_uint & in_mValue,
                                                                                              const GALGAS_uint & in_mBDDBitCount
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mEnumCstName (in_mEnumCstName),
mProperty_mValue (in_mValue),
mProperty_mBDDBitCount (in_mBDDBitCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_cstInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_cstInDecoratedAssignmentSourceExpression (mProperty_mEnumCstName, mProperty_mValue, mProperty_mBDDBitCount COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @cstInDecoratedAssignmentSourceExpression type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ("cstInDecoratedAssignmentSourceExpression",
                                                                 & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_cstInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_cstInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_cstInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_functionInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionInDecoratedAssignmentSourceExpression::GALGAS_functionInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionInDecoratedAssignmentSourceExpression GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_decoratedFunctionValueList::constructor_emptySortedList (HERE)
                                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionInDecoratedAssignmentSourceExpression::GALGAS_functionInDecoratedAssignmentSourceExpression (const cPtr_functionInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionInDecoratedAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionInDecoratedAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionInDecoratedAssignmentSourceExpression * p = (const cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionInDecoratedAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionInDecoratedAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionInDecoratedAssignmentSourceExpression * p = (const cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mOperandName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionInDecoratedAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunctionValueList GALGAS_functionInDecoratedAssignmentSourceExpression::getter_mDecoratedFunctionValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedFunctionValueList result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionInDecoratedAssignmentSourceExpression * p = (const cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mDecoratedFunctionValueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunctionValueList cPtr_functionInDecoratedAssignmentSourceExpression::getter_mDecoratedFunctionValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedFunctionValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @functionInDecoratedAssignmentSourceExpression class                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionInDecoratedAssignmentSourceExpression::cPtr_functionInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                                                                        const GALGAS_lstring & in_mOperandName,
                                                                                                        const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mOperandName (in_mOperandName),
mProperty_mDecoratedFunctionValueList (in_mDecoratedFunctionValueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionInDecoratedAssignmentSourceExpression (mProperty_mFunctionName, mProperty_mOperandName, mProperty_mDecoratedFunctionValueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @functionInDecoratedAssignmentSourceExpression type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ("functionInDecoratedAssignmentSourceExpression",
                                                                      & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
, C_Lexique_lexicalAnalyzer::kToken_machine_2D_type_2D_name, SHIFT (11)
, END
// State S2 (index = 14)
, C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name, SHIFT (12)
, END
// State S3 (index = 17)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (13)
, END
// State S4 (index = 20)
, C_Lexique_lexicalAnalyzer::kToken_machine_2D_type_2D_name, SHIFT (14)
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
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (26)
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
, C_Lexique_lexicalAnalyzer::kToken__2C_, SHIFT (34)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (31)
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
, C_Lexique_lexicalAnalyzer::kToken__21_, SHIFT (40)
, C_Lexique_lexicalAnalyzer::kToken__2C_, REDUCE (29)
, C_Lexique_lexicalAnalyzer::kToken__3B_, REDUCE (29)
, END
// State S34 (index = 162)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (42)
, END
// State S35 (index = 165)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (43)
, END
// State S36 (index = 168)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (44)
, END
// State S37 (index = 171)
, C_Lexique_lexicalAnalyzer::kToken__3D_, SHIFT (45)
, END
// State S38 (index = 174)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S39 (index = 179)
, C_Lexique_lexicalAnalyzer::kToken__3F_, SHIFT (52)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (39)
, END
// State S40 (index = 184)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (54)
, END
// State S41 (index = 187)
, C_Lexique_lexicalAnalyzer::kToken__2C_, SHIFT (55)
, C_Lexique_lexicalAnalyzer::kToken__3B_, REDUCE (27)
, END
// State S42 (index = 192)
, C_Lexique_lexicalAnalyzer::kToken__2C_, SHIFT (34)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (31)
, END
// State S43 (index = 197)
, C_Lexique_lexicalAnalyzer::kToken_scenario, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_enum, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_function, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_machine, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (2)
, END
// State S44 (index = 208)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (58)
, END
// State S45 (index = 211)
, C_Lexique_lexicalAnalyzer::kToken__2E_, SHIFT (59)
, END
// State S46 (index = 214)
, C_Lexique_lexicalAnalyzer::kToken__3D__3D_, SHIFT (60)
, C_Lexique_lexicalAnalyzer::kToken__21__3D_, SHIFT (61)
, END
// State S47 (index = 219)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S48 (index = 224)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (35)
, C_Lexique_lexicalAnalyzer::kToken_var, SHIFT (22)
, C_Lexique_lexicalAnalyzer::kToken_invariant, SHIFT (23)
, C_Lexique_lexicalAnalyzer::kToken_event, SHIFT (24)
, END
// State S49 (index = 233)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, SHIFT (65)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (45)
, END
// State S50 (index = 258)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7C_, SHIFT (67)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (47)
, END
// State S51 (index = 285)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__26_, SHIFT (69)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (49)
, END
// State S52 (index = 314)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (71)
, END
// State S53 (index = 317)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (72)
, END
// State S54 (index = 320)
, C_Lexique_lexicalAnalyzer::kToken__21_, SHIFT (40)
, C_Lexique_lexicalAnalyzer::kToken__2C_, REDUCE (29)
, C_Lexique_lexicalAnalyzer::kToken__3B_, REDUCE (29)
, END
// State S55 (index = 327)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (74)
, END
// State S56 (index = 330)
, C_Lexique_lexicalAnalyzer::kToken__3B_, SHIFT (75)
, END
// State S57 (index = 333)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (32)
, END
// State S58 (index = 336)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (76)
, END
// State S59 (index = 339)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (77)
, END
// State S60 (index = 342)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (51)
, C_Lexique_lexicalAnalyzer::kToken__2E_, REDUCE (51)
, C_Lexique_lexicalAnalyzer::kToken_old, REDUCE (51)
, END
// State S61 (index = 349)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (52)
, C_Lexique_lexicalAnalyzer::kToken__2E_, REDUCE (52)
, C_Lexique_lexicalAnalyzer::kToken_old, REDUCE (52)
, END
// State S62 (index = 356)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (53)
, C_Lexique_lexicalAnalyzer::kToken__2E_, SHIFT (78)
, C_Lexique_lexicalAnalyzer::kToken_old, SHIFT (79)
, END
// State S63 (index = 363)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (82)
, END
// State S64 (index = 366)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (37)
, END
// State S65 (index = 369)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S66 (index = 374)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (5)
, END
// State S67 (index = 397)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S68 (index = 402)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (6)
, END
// State S69 (index = 427)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S70 (index = 432)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (7)
, END
// State S71 (index = 459)
, C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name, SHIFT (86)
, END
// State S72 (index = 462)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (87)
, END
// State S73 (index = 465)
, C_Lexique_lexicalAnalyzer::kToken__2C_, REDUCE (30)
, C_Lexique_lexicalAnalyzer::kToken__3B_, REDUCE (30)
, END
// State S74 (index = 470)
, C_Lexique_lexicalAnalyzer::kToken__21_, SHIFT (40)
, C_Lexique_lexicalAnalyzer::kToken__2C_, REDUCE (29)
, C_Lexique_lexicalAnalyzer::kToken__3B_, REDUCE (29)
, END
// State S75 (index = 477)
, C_Lexique_lexicalAnalyzer::kToken_scenario, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_enum, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_function, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_machine, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (1)
, END
// State S76 (index = 488)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (89)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (33)
, END
// State S77 (index = 493)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (35)
, C_Lexique_lexicalAnalyzer::kToken_var, SHIFT (22)
, C_Lexique_lexicalAnalyzer::kToken_invariant, SHIFT (23)
, C_Lexique_lexicalAnalyzer::kToken_event, SHIFT (24)
, END
// State S78 (index = 502)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (92)
, END
// State S79 (index = 505)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (54)
, END
// State S80 (index = 508)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (9)
, END
// State S81 (index = 537)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (93)
, END
// State S82 (index = 540)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (8)
, END
// State S83 (index = 569)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (46)
, END
// State S84 (index = 592)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7C_, SHIFT (67)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (47)
, END
// State S85 (index = 619)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__26_, SHIFT (69)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (49)
, END
// State S86 (index = 648)
, C_Lexique_lexicalAnalyzer::kToken__3F_, SHIFT (52)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (39)
, END
// State S87 (index = 653)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (98)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (99)
, END
// State S88 (index = 664)
, C_Lexique_lexicalAnalyzer::kToken__2C_, SHIFT (55)
, C_Lexique_lexicalAnalyzer::kToken__3B_, REDUCE (27)
, END
// State S89 (index = 669)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (104)
, END
// State S90 (index = 672)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (105)
, END
// State S91 (index = 675)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (36)
, END
// State S92 (index = 678)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (10)
, END
// State S93 (index = 707)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (11)
, END
// State S94 (index = 736)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (48)
, END
// State S95 (index = 761)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (50)
, END
// State S96 (index = 788)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (40)
, END
// State S97 (index = 791)
, C_Lexique_lexicalAnalyzer::kToken__3D_, SHIFT (106)
, END
// State S98 (index = 794)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S99 (index = 799)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S100 (index = 804)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (41)
, C_Lexique_lexicalAnalyzer::kToken_ensures, SHIFT (109)
, END
// State S101 (index = 809)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (98)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (99)
, END
// State S102 (index = 820)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (12)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (12)
, END
// State S103 (index = 825)
, C_Lexique_lexicalAnalyzer::kToken__3B_, REDUCE (28)
, END
// State S104 (index = 828)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (112)
, END
// State S105 (index = 831)
, C_Lexique_lexicalAnalyzer::kToken_scenario, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_enum, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_function, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_machine, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (3)
, END
// State S106 (index = 842)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (113)
, C_Lexique_lexicalAnalyzer::kToken__2E_, SHIFT (114)
, END
// State S107 (index = 847)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (13)
, END
// State S108 (index = 858)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (116)
, END
// State S109 (index = 861)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (117)
, END
// State S110 (index = 864)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (118)
, END
// State S111 (index = 867)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (56)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (56)
, END
// State S112 (index = 872)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (89)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (33)
, END
// State S113 (index = 877)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (120)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (15)
, END
// State S114 (index = 890)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (121)
, END
// State S115 (index = 893)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (14)
, END
// State S116 (index = 904)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (98)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (99)
, END
// State S117 (index = 915)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (123)
, END
// State S118 (index = 918)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (35)
, C_Lexique_lexicalAnalyzer::kToken_var, SHIFT (22)
, C_Lexique_lexicalAnalyzer::kToken_invariant, SHIFT (23)
, C_Lexique_lexicalAnalyzer::kToken_event, SHIFT (24)
, END
// State S119 (index = 927)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (34)
, END
// State S120 (index = 930)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (125)
, END
// State S121 (index = 933)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (16)
, END
// State S122 (index = 944)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (126)
, END
// State S123 (index = 947)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S124 (index = 952)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (38)
, END
// State S125 (index = 955)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (128)
, END
// State S126 (index = 958)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_else, SHIFT (129)
, END
// State S127 (index = 971)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (131)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (43)
, END
// State S128 (index = 976)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (17)
, END
// State S129 (index = 987)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (133)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (134)
, END
// State S130 (index = 992)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (18)
, END
// State S131 (index = 1003)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (135)
, END
// State S132 (index = 1006)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (42)
, END
// State S133 (index = 1009)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (98)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (99)
, END
// State S134 (index = 1020)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S135 (index = 1025)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (46)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (47)
, END
// State S136 (index = 1030)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (139)
, END
// State S137 (index = 1033)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (140)
, END
// State S138 (index = 1036)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (131)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (43)
, END
// State S139 (index = 1041)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (20)
, END
// State S140 (index = 1052)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (98)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (99)
, END
// State S141 (index = 1063)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (44)
, END
// State S142 (index = 1066)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (143)
, END
// State S143 (index = 1069)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_else, SHIFT (129)
, END
// State S144 (index = 1082)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (21)
, END} ;

static const uint32_t gActionTableIndex_omnibus_grammar [145] = {
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
, 162  // S34
, 165  // S35
, 168  // S36
, 171  // S37
, 174  // S38
, 179  // S39
, 184  // S40
, 187  // S41
, 192  // S42
, 197  // S43
, 208  // S44
, 211  // S45
, 214  // S46
, 219  // S47
, 224  // S48
, 233  // S49
, 258  // S50
, 285  // S51
, 314  // S52
, 317  // S53
, 320  // S54
, 327  // S55
, 330  // S56
, 333  // S57
, 336  // S58
, 339  // S59
, 342  // S60
, 349  // S61
, 356  // S62
, 363  // S63
, 366  // S64
, 369  // S65
, 374  // S66
, 397  // S67
, 402  // S68
, 427  // S69
, 432  // S70
, 459  // S71
, 462  // S72
, 465  // S73
, 470  // S74
, 477  // S75
, 488  // S76
, 493  // S77
, 502  // S78
, 505  // S79
, 508  // S80
, 537  // S81
, 540  // S82
, 569  // S83
, 592  // S84
, 619  // S85
, 648  // S86
, 653  // S87
, 664  // S88
, 669  // S89
, 672  // S90
, 675  // S91
, 678  // S92
, 707  // S93
, 736  // S94
, 761  // S95
, 788  // S96
, 791  // S97
, 794  // S98
, 799  // S99
, 804  // S100
, 809  // S101
, 820  // S102
, 825  // S103
, 828  // S104
, 831  // S105
, 842  // S106
, 847  // S107
, 858  // S108
, 861  // S109
, 864  // S110
, 867  // S111
, 872  // S112
, 877  // S113
, 890  // S114
, 893  // S115
, 904  // S116
, 915  // S117
, 918  // S118
, 927  // S119
, 930  // S120
, 933  // S121
, 944  // S122
, 947  // S123
, 952  // S124
, 955  // S125
, 958  // S126
, 971  // S127
, 976  // S128
, 987  // S129
, 992  // S130
, 1003  // S131
, 1006  // S132
, 1009  // S133
, 1020  // S134
, 1025  // S135
, 1030  // S136
, 1033  // S137
, 1036  // S138
, 1041  // S139
, 1052  // S140
, 1063  // S141
, 1066  // S142
, 1069  // S143
, 1082  // S144
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

static const int16_t gSuccessorTable_omnibus_grammar_33 [3] = {16, 41, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_38 [9] = {5, 48,
  6, 49,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_39 [3] = {20, 53, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_41 [3] = {15, 56, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_42 [3] = {17, 57, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_46 [3] = {26, 62, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_47 [9] = {5, 63,
  6, 49,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_48 [3] = {19, 64, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_49 [3] = {23, 66, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_50 [3] = {24, 68, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_51 [3] = {25, 70, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_54 [3] = {16, 73, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_62 [5] = {9, 80,
  27, 81, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_65 [7] = {6, 83,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_67 [5] = {7, 84,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_69 [3] = {8, 85, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_74 [3] = {16, 88, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_76 [3] = {18, 90, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_77 [3] = {19, 91, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_84 [3] = {24, 94, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_85 [3] = {25, 95, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_86 [3] = {20, 96, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_87 [7] = {10, 100,
  11, 101,
  28, 102, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_88 [3] = {15, 103, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_98 [9] = {5, 107,
  6, 49,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_99 [9] = {5, 108,
  6, 49,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_100 [3] = {21, 110, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_101 [5] = {11, 101,
  28, 111, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_106 [3] = {12, 115, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_112 [3] = {18, 119, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_116 [7] = {10, 122,
  11, 101,
  28, 102, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_118 [3] = {19, 124, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_123 [9] = {5, 127,
  6, 49,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_126 [3] = {13, 130, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_127 [3] = {22, 132, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_133 [7] = {10, 136,
  11, 101,
  28, 102, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_134 [9] = {5, 137,
  6, 49,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_135 [9] = {5, 138,
  6, 49,
  7, 50,
  8, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_138 [3] = {22, 141, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_140 [7] = {10, 142,
  11, 101,
  28, 102, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_143 [3] = {13, 144, -1} ;

static const int16_t * gSuccessorTable_omnibus_grammar [145] = {
gSuccessorTable_omnibus_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_6, gSuccessorTable_omnibus_grammar_7, 
  gSuccessorTable_omnibus_grammar_8, gSuccessorTable_omnibus_grammar_9, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_14, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_omnibus_grammar_27, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_33, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_38, gSuccessorTable_omnibus_grammar_39, 
  NULL, gSuccessorTable_omnibus_grammar_41, gSuccessorTable_omnibus_grammar_42, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_46, gSuccessorTable_omnibus_grammar_47, 
  gSuccessorTable_omnibus_grammar_48, gSuccessorTable_omnibus_grammar_49, gSuccessorTable_omnibus_grammar_50, gSuccessorTable_omnibus_grammar_51, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_54, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_62, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_65, NULL, gSuccessorTable_omnibus_grammar_67, 
  NULL, gSuccessorTable_omnibus_grammar_69, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_74, NULL, 
  gSuccessorTable_omnibus_grammar_76, gSuccessorTable_omnibus_grammar_77, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_omnibus_grammar_84, gSuccessorTable_omnibus_grammar_85, gSuccessorTable_omnibus_grammar_86, gSuccessorTable_omnibus_grammar_87, 
  gSuccessorTable_omnibus_grammar_88, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_98, gSuccessorTable_omnibus_grammar_99, 
  gSuccessorTable_omnibus_grammar_100, gSuccessorTable_omnibus_grammar_101, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_106, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_omnibus_grammar_112, NULL, NULL, NULL, 
  gSuccessorTable_omnibus_grammar_116, NULL, gSuccessorTable_omnibus_grammar_118, NULL, 
  NULL, NULL, NULL, gSuccessorTable_omnibus_grammar_123, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_126, gSuccessorTable_omnibus_grammar_127, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_133, gSuccessorTable_omnibus_grammar_134, gSuccessorTable_omnibus_grammar_135, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_138, NULL, 
  gSuccessorTable_omnibus_grammar_140, NULL, NULL, gSuccessorTable_omnibus_grammar_143, 
  NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_omnibus_grammar [58 * 2] = {
  0, 1,
  1, 8,
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
  15, 4,
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
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
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
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension Getter '@varList displayVarInfo'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarListForDisplay extensionGetter_displayVarInfo (const GALGAS_varList & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 17)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_433 (temp_0, kENUMERATION_UP) ;
  while (enumerator_433.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_459 = enumerator_433.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 19)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 19)) ;
    cEnumerator_lstringlist enumerator_511 (enumerator_433.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_511.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_544 = enumerator_511.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 21)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_459.objectCompare (var_cstNameLength_544)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_columnLength_459 = var_cstNameLength_544 ;
      }
      enumerator_511.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (GALGAS_string ("$").add_operation (enumerator_433.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 27)), enumerator_433.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_433.current (HERE).getter_mBDDBitCount (HERE), enumerator_433.current (HERE).getter_mValueList (HERE), var_columnLength_459  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 26)) ;
    enumerator_433.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineList_2D_element::GALGAS_machineList_2D_element (void) :
mProperty_mMachineName (),
mProperty_mEnumVarDeclarationList (),
mProperty_mInvariantExpressionList (),
mProperty_mEventList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineList_2D_element::~ GALGAS_machineList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineList_2D_element::GALGAS_machineList_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_enumVarDeclarationList & inOperand1,
                                                              const GALGAS_expressionList & inOperand2,
                                                              const GALGAS_eventDeclarationList & inOperand3) :
mProperty_mMachineName (inOperand0),
mProperty_mEnumVarDeclarationList (inOperand1),
mProperty_mInvariantExpressionList (inOperand2),
mProperty_mEventList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineList_2D_element GALGAS_machineList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_enumVarDeclarationList::constructor_emptyList (HERE),
                                        GALGAS_expressionList::constructor_emptyList (HERE),
                                        GALGAS_eventDeclarationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_machineList_2D_element::isValid (void) const {
  return mProperty_mMachineName.isValid () && mProperty_mEnumVarDeclarationList.isValid () && mProperty_mInvariantExpressionList.isValid () && mProperty_mEventList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineList_2D_element::drop (void) {
  mProperty_mMachineName.drop () ;
  mProperty_mEnumVarDeclarationList.drop () ;
  mProperty_mInvariantExpressionList.drop () ;
  mProperty_mEventList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_machineList_2D_element::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumVarDeclarationList GALGAS_machineList_2D_element::getter_mEnumVarDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumVarDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionList GALGAS_machineList_2D_element::getter_mInvariantExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvariantExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventDeclarationList GALGAS_machineList_2D_element::getter_mEventList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @machineList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineList_2D_element ("machineList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_machineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_machineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumTypeList_2D_element::GALGAS_enumTypeList_2D_element (void) :
mProperty_mEnumListName (),
mProperty_mEnumConstantList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumTypeList_2D_element::~ GALGAS_enumTypeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumTypeList_2D_element::GALGAS_enumTypeList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1) :
mProperty_mEnumListName (inOperand0),
mProperty_mEnumConstantList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumTypeList_2D_element GALGAS_enumTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumTypeList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumTypeList_2D_element GALGAS_enumTypeList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumTypeList_2D_element::objectCompare (const GALGAS_enumTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumListName.objectCompare (inOperand.mProperty_mEnumListName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumConstantList.objectCompare (inOperand.mProperty_mEnumConstantList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumTypeList_2D_element::isValid (void) const {
  return mProperty_mEnumListName.isValid () && mProperty_mEnumConstantList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumTypeList_2D_element::drop (void) {
  mProperty_mEnumListName.drop () ;
  mProperty_mEnumConstantList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumTypeList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @enumTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumListName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumTypeList_2D_element::getter_mEnumListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumListName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumTypeList_2D_element::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @enumTypeList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeList_2D_element ("enumTypeList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumVarDeclarationList_2D_element::GALGAS_enumVarDeclarationList_2D_element (void) :
mProperty_mEnumTypeName (),
mProperty_mEnumVarName (),
mProperty_mConstantName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumVarDeclarationList_2D_element::~ GALGAS_enumVarDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumVarDeclarationList_2D_element::GALGAS_enumVarDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mProperty_mEnumTypeName (inOperand0),
mProperty_mEnumVarName (inOperand1),
mProperty_mConstantName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumVarDeclarationList_2D_element GALGAS_enumVarDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumVarDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumVarDeclarationList_2D_element::isValid (void) const {
  return mProperty_mEnumTypeName.isValid () && mProperty_mEnumVarName.isValid () && mProperty_mConstantName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumVarDeclarationList_2D_element::drop (void) {
  mProperty_mEnumTypeName.drop () ;
  mProperty_mEnumVarName.drop () ;
  mProperty_mConstantName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumVarDeclarationList_2D_element::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumVarDeclarationList_2D_element::getter_mEnumVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumVarDeclarationList_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @enumVarDeclarationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ("enumVarDeclarationList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumVarDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumVarDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumVarDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventDeclarationList_2D_element::GALGAS_eventDeclarationList_2D_element (void) :
mProperty_mEventName (),
mProperty_mEventArgumentList (),
mProperty_mEventInstructionList (),
mProperty_mEnsureExpressionList (),
mProperty_mEndOfEnsureExpressionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventDeclarationList_2D_element::~ GALGAS_eventDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventDeclarationList_2D_element GALGAS_eventDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_eventArgumentList::constructor_emptyList (HERE),
                                                 GALGAS_instructionList::constructor_emptyList (HERE),
                                                 GALGAS_expressionList::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_eventDeclarationList_2D_element::isValid (void) const {
  return mProperty_mEventName.isValid () && mProperty_mEventArgumentList.isValid () && mProperty_mEventInstructionList.isValid () && mProperty_mEnsureExpressionList.isValid () && mProperty_mEndOfEnsureExpressionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_eventDeclarationList_2D_element::drop (void) {
  mProperty_mEventName.drop () ;
  mProperty_mEventArgumentList.drop () ;
  mProperty_mEventInstructionList.drop () ;
  mProperty_mEnsureExpressionList.drop () ;
  mProperty_mEndOfEnsureExpressionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_eventDeclarationList_2D_element::getter_mEventName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList GALGAS_eventDeclarationList_2D_element::getter_mEventArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionList GALGAS_eventDeclarationList_2D_element::getter_mEventInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionList GALGAS_eventDeclarationList_2D_element::getter_mEnsureExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnsureExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_eventDeclarationList_2D_element::getter_mEndOfEnsureExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfEnsureExpressionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @eventDeclarationList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ("eventDeclarationList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_eventDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_eventDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList_2D_element::GALGAS_eventArgumentList_2D_element (void) :
mProperty_mArgumentTypeName (),
mProperty_mArgumentVarName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList_2D_element::~ GALGAS_eventArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList_2D_element::GALGAS_eventArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mArgumentTypeName (inOperand0),
mProperty_mArgumentVarName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList_2D_element GALGAS_eventArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventArgumentList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList_2D_element GALGAS_eventArgumentList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_eventArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_eventArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_eventArgumentList_2D_element::isValid (void) const {
  return mProperty_mArgumentTypeName.isValid () && mProperty_mArgumentVarName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_eventArgumentList_2D_element::drop (void) {
  mProperty_mArgumentTypeName.drop () ;
  mProperty_mArgumentVarName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_eventArgumentList_2D_element::getter_mArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_eventArgumentList_2D_element::getter_mArgumentVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentVarName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @eventArgumentList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventArgumentList_2D_element ("eventArgumentList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_eventArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_eventArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionList_2D_element::GALGAS_expressionList_2D_element (void) :
mProperty_mLabel (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionList_2D_element::~ GALGAS_expressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionList_2D_element::GALGAS_expressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_expression & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionList_2D_element GALGAS_expressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_expression & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_expressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_expressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_expressionList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_expressionList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_expressionList_2D_element::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_expressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @expressionList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionList_2D_element ("expressionList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionValueList_2D_element::GALGAS_functionValueList_2D_element (void) :
mProperty_mOperandName (),
mProperty_mResultName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionValueList_2D_element::~ GALGAS_functionValueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionValueList_2D_element::GALGAS_functionValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mOperandName (inOperand0),
mProperty_mResultName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionValueList_2D_element GALGAS_functionValueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionValueList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionValueList_2D_element GALGAS_functionValueList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionValueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionValueList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionValueList_2D_element::isValid (void) const {
  return mProperty_mOperandName.isValid () && mProperty_mResultName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionValueList_2D_element::drop (void) {
  mProperty_mOperandName.drop () ;
  mProperty_mResultName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionValueList_2D_element::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionValueList_2D_element::getter_mResultName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @functionValueList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionValueList_2D_element ("functionValueList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionValueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionValueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDefinitionList_2D_element::GALGAS_functionDefinitionList_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mOperandEnumTypeName (),
mProperty_mResultEnumTypeName (),
mProperty_mValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDefinitionList_2D_element::~ GALGAS_functionDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDefinitionList_2D_element::GALGAS_functionDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_functionValueList & inOperand3) :
mProperty_mFunctionName (inOperand0),
mProperty_mOperandEnumTypeName (inOperand1),
mProperty_mResultEnumTypeName (inOperand2),
mProperty_mValueList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDefinitionList_2D_element GALGAS_functionDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_functionValueList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionDefinitionList_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mOperandEnumTypeName.isValid () && mProperty_mResultEnumTypeName.isValid () && mProperty_mValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDefinitionList_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mOperandEnumTypeName.drop () ;
  mProperty_mResultEnumTypeName.drop () ;
  mProperty_mValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDefinitionList_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDefinitionList_2D_element::getter_mOperandEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandEnumTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDefinitionList_2D_element::getter_mResultEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultEnumTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionValueList GALGAS_functionDefinitionList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @functionDefinitionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ("functionDefinitionList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioEventSequence_2D_element::GALGAS_scenarioEventSequence_2D_element (void) :
mProperty_mEventName (),
mProperty_mArgumentNameList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioEventSequence_2D_element::~ GALGAS_scenarioEventSequence_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioEventSequence_2D_element::GALGAS_scenarioEventSequence_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEventName (inOperand0),
mProperty_mArgumentNameList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioEventSequence_2D_element GALGAS_scenarioEventSequence_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioEventSequence_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioEventSequence_2D_element GALGAS_scenarioEventSequence_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scenarioEventSequence_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_scenarioEventSequence_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_scenarioEventSequence_2D_element::isValid (void) const {
  return mProperty_mEventName.isValid () && mProperty_mArgumentNameList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scenarioEventSequence_2D_element::drop (void) {
  mProperty_mEventName.drop () ;
  mProperty_mArgumentNameList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_scenarioEventSequence_2D_element::getter_mEventName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_scenarioEventSequence_2D_element::getter_mArgumentNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentNameList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @scenarioEventSequence-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ("scenarioEventSequence-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_scenarioEventSequence_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_scenarioEventSequence_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioEventSequence_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioList_2D_element::GALGAS_scenarioList_2D_element (void) :
mProperty_mMachineName (),
mProperty_mScenarioName (),
mProperty_mEventSequence () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioList_2D_element::~ GALGAS_scenarioList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioList_2D_element::GALGAS_scenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_scenarioEventSequence & inOperand2) :
mProperty_mMachineName (inOperand0),
mProperty_mScenarioName (inOperand1),
mProperty_mEventSequence (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioList_2D_element GALGAS_scenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_scenarioEventSequence::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_scenarioList_2D_element::isValid (void) const {
  return mProperty_mMachineName.isValid () && mProperty_mScenarioName.isValid () && mProperty_mEventSequence.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scenarioList_2D_element::drop (void) {
  mProperty_mMachineName.drop () ;
  mProperty_mScenarioName.drop () ;
  mProperty_mEventSequence.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_scenarioList_2D_element::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_scenarioList_2D_element::getter_mScenarioName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScenarioName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioEventSequence GALGAS_scenarioList_2D_element::getter_mEventSequence (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventSequence ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @scenarioList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioList_2D_element ("scenarioList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_scenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_scenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedExpressionList_2D_element::GALGAS_decoratedExpressionList_2D_element (void) :
mProperty_mLabel (),
mProperty_mDecoratedExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedExpressionList_2D_element::~ GALGAS_decoratedExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedExpressionList_2D_element::GALGAS_decoratedExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_decoratedExpression & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mDecoratedExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedExpressionList_2D_element GALGAS_decoratedExpressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_decoratedExpression & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedExpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedExpressionList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mDecoratedExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedExpressionList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mDecoratedExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedExpressionList_2D_element::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedExpression GALGAS_decoratedExpressionList_2D_element::getter_mDecoratedExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @decoratedExpressionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ("decoratedExpressionList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedArgumentList_2D_element::GALGAS_decoratedArgumentList_2D_element (void) :
mProperty_mArgumentTypeProxy (),
mProperty_mArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedArgumentList_2D_element::~ GALGAS_decoratedArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedArgumentList_2D_element::GALGAS_decoratedArgumentList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1) :
mProperty_mArgumentTypeProxy (inOperand0),
mProperty_mArgumentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedArgumentList_2D_element GALGAS_decoratedArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedArgumentList_2D_element (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedArgumentList_2D_element GALGAS_decoratedArgumentList_2D_element::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedArgumentList_2D_element::isValid (void) const {
  return mProperty_mArgumentTypeProxy.isValid () && mProperty_mArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedArgumentList_2D_element::drop (void) {
  mProperty_mArgumentTypeProxy.drop () ;
  mProperty_mArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_decoratedArgumentList_2D_element::getter_mArgumentTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedArgumentList_2D_element::getter_mArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ("decoratedArgumentList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventMap_2D_element::GALGAS_eventMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDecoratedArgumentList (),
mProperty_mDecoratedEventInstructionList (),
mProperty_mEnsureDecoratedExpressionList (),
mProperty_mEndOfEnsureExpressionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventMap_2D_element::~ GALGAS_eventMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventMap_2D_element GALGAS_eventMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_decoratedArgumentList::constructor_emptyList (HERE),
                                     GALGAS_decoratedInstructionList::constructor_emptyList (HERE),
                                     GALGAS_decoratedExpressionList::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_eventMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDecoratedArgumentList.isValid () && mProperty_mDecoratedEventInstructionList.isValid () && mProperty_mEnsureDecoratedExpressionList.isValid () && mProperty_mEndOfEnsureExpressionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_eventMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDecoratedArgumentList.drop () ;
  mProperty_mDecoratedEventInstructionList.drop () ;
  mProperty_mEnsureDecoratedExpressionList.drop () ;
  mProperty_mEndOfEnsureExpressionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_eventMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedArgumentList GALGAS_eventMap_2D_element::getter_mDecoratedArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInstructionList GALGAS_eventMap_2D_element::getter_mDecoratedEventInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedEventInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedExpressionList GALGAS_eventMap_2D_element::getter_mEnsureDecoratedExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnsureDecoratedExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_eventMap_2D_element::getter_mEndOfEnsureExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfEnsureExpressionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @eventMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventMap_2D_element ("eventMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_eventMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_eventMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarMap_2D_element::GALGAS_machineVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTypeProxy (),
mProperty_mMaxValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarMap_2D_element::~ GALGAS_machineVarMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarMap_2D_element::GALGAS_machineVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                  const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mTypeProxy (inOperand1),
mProperty_mMaxValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarMap_2D_element GALGAS_machineVarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarMap_2D_element GALGAS_machineVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                                  const GALGAS_uint & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_machineVarMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_machineVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mMaxValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTypeProxy.drop () ;
  mProperty_mMaxValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_machineVarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_machineVarMap_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_machineVarMap_2D_element::getter_mMaxValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @machineVarMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarMap_2D_element ("machineVarMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_machineVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_machineVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarList_2D_element::GALGAS_machineVarList_2D_element (void) :
mProperty_mTypeProxy (),
mProperty_mVarName (),
mProperty_mValueList (),
mProperty_mInitialValueConstantName (),
mProperty_mInitialValueConstantIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarList_2D_element::~ GALGAS_machineVarList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarList_2D_element::GALGAS_machineVarList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarList_2D_element GALGAS_machineVarList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarList_2D_element (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarList_2D_element GALGAS_machineVarList_2D_element::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_machineVarList_2D_element::isValid (void) const {
  return mProperty_mTypeProxy.isValid () && mProperty_mVarName.isValid () && mProperty_mValueList.isValid () && mProperty_mInitialValueConstantName.isValid () && mProperty_mInitialValueConstantIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineVarList_2D_element::drop (void) {
  mProperty_mTypeProxy.drop () ;
  mProperty_mVarName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mInitialValueConstantName.drop () ;
  mProperty_mInitialValueConstantIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_machineVarList_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_machineVarList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_machineVarList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_machineVarList_2D_element::getter_mInitialValueConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_machineVarList_2D_element::getter_mInitialValueConstantIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueConstantIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @machineVarList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarList_2D_element ("machineVarList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_machineVarList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_machineVarList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedScenarioList_2D_element::GALGAS_decoratedScenarioList_2D_element (void) :
mProperty_mScenarioName (),
mProperty_mEventSequence () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedScenarioList_2D_element::~ GALGAS_decoratedScenarioList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedScenarioList_2D_element::GALGAS_decoratedScenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_scenarioEventSequence & inOperand1) :
mProperty_mScenarioName (inOperand0),
mProperty_mEventSequence (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedScenarioList_2D_element GALGAS_decoratedScenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedScenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_scenarioEventSequence::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedScenarioList_2D_element GALGAS_decoratedScenarioList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_scenarioEventSequence & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedScenarioList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedScenarioList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedScenarioList_2D_element::isValid (void) const {
  return mProperty_mScenarioName.isValid () && mProperty_mEventSequence.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedScenarioList_2D_element::drop (void) {
  mProperty_mScenarioName.drop () ;
  mProperty_mEventSequence.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedScenarioList_2D_element::getter_mScenarioName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScenarioName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scenarioEventSequence GALGAS_decoratedScenarioList_2D_element::getter_mEventSequence (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventSequence ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedScenarioList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ("decoratedScenarioList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedScenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedScenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedScenarioList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineMap_2D_element::GALGAS_machineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAttributeMap (),
mProperty_mAttributeList (),
mProperty_mInvariantDecoratedExpressionList (),
mProperty_mEventMap (),
mProperty_mDecoratedScenarioList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineMap_2D_element::~ GALGAS_machineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineMap_2D_element GALGAS_machineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_machineVarMap::constructor_emptyMap (HERE),
                                       GALGAS_machineVarList::constructor_emptyList (HERE),
                                       GALGAS_decoratedExpressionList::constructor_emptyList (HERE),
                                       GALGAS_eventMap::constructor_emptyMap (HERE),
                                       GALGAS_decoratedScenarioList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_machineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAttributeMap.isValid () && mProperty_mAttributeList.isValid () && mProperty_mInvariantDecoratedExpressionList.isValid () && mProperty_mEventMap.isValid () && mProperty_mDecoratedScenarioList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_machineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAttributeMap.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mInvariantDecoratedExpressionList.drop () ;
  mProperty_mEventMap.drop () ;
  mProperty_mDecoratedScenarioList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_machineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarMap GALGAS_machineMap_2D_element::getter_mAttributeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_machineVarList GALGAS_machineMap_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedExpressionList GALGAS_machineMap_2D_element::getter_mInvariantDecoratedExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvariantDecoratedExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventMap GALGAS_machineMap_2D_element::getter_mEventMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedScenarioList GALGAS_machineMap_2D_element::getter_mDecoratedScenarioList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedScenarioList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @machineMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineMap_2D_element ("machineMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_machineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_machineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunctionValueList_2D_element::GALGAS_decoratedFunctionValueList_2D_element (void) :
mProperty_mOperandName (),
mProperty_mOperandValue (),
mProperty_mResultName (),
mProperty_mResultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunctionValueList_2D_element::~ GALGAS_decoratedFunctionValueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunctionValueList_2D_element::GALGAS_decoratedFunctionValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_uint & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_uint & inOperand3) :
mProperty_mOperandName (inOperand0),
mProperty_mOperandValue (inOperand1),
mProperty_mResultName (inOperand2),
mProperty_mResultValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunctionValueList_2D_element GALGAS_decoratedFunctionValueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedFunctionValueList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedFunctionValueList_2D_element::isValid (void) const {
  return mProperty_mOperandName.isValid () && mProperty_mOperandValue.isValid () && mProperty_mResultName.isValid () && mProperty_mResultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedFunctionValueList_2D_element::drop (void) {
  mProperty_mOperandName.drop () ;
  mProperty_mOperandValue.drop () ;
  mProperty_mResultName.drop () ;
  mProperty_mResultValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedFunctionValueList_2D_element::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_decoratedFunctionValueList_2D_element::getter_mOperandValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedFunctionValueList_2D_element::getter_mResultName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_decoratedFunctionValueList_2D_element::getter_mResultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @decoratedFunctionValueList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ("decoratedFunctionValueList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedFunctionValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedFunctionValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedFunctionValueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOperandTypeProxy (),
mProperty_mResultTypeProxy (),
mProperty_mDecoratedFunctionValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand2,
                                                              const GALGAS_decoratedFunctionValueList & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mOperandTypeProxy (inOperand1),
mProperty_mResultTypeProxy (inOperand2),
mProperty_mDecoratedFunctionValueList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_decoratedFunctionValueList::constructor_emptySortedList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand2,
                                                                              const GALGAS_decoratedFunctionValueList & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperandTypeProxy.isValid () && mProperty_mResultTypeProxy.isValid () && mProperty_mDecoratedFunctionValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperandTypeProxy.drop () ;
  mProperty_mResultTypeProxy.drop () ;
  mProperty_mDecoratedFunctionValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_functionMap_2D_element::getter_mOperandTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_functionMap_2D_element::getter_mResultTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunctionValueList GALGAS_functionMap_2D_element::getter_mDecoratedFunctionValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedFunctionValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @functionMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap_2D_element::GALGAS_transitionEventMap_2D_element (void) :
mProperty_lkey (),
mProperty_mArgumentList (),
mProperty_mTransitionBinarySet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap_2D_element::~ GALGAS_transitionEventMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap_2D_element::GALGAS_transitionEventMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_eventArgumentList & inOperand1,
                                                                            const GALGAS_binaryset & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mArgumentList (inOperand1),
mProperty_mTransitionBinarySet (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transitionEventMap_2D_element GALGAS_transitionEventMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transitionEventMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_eventArgumentList::constructor_emptyList (HERE),
                                               GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transitionEventMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentList.isValid () && mProperty_mTransitionBinarySet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transitionEventMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentList.drop () ;
  mProperty_mTransitionBinarySet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transitionEventMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_eventArgumentList GALGAS_transitionEventMap_2D_element::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset GALGAS_transitionEventMap_2D_element::getter_mTransitionBinarySet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransitionBinarySet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @transitionEventMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transitionEventMap_2D_element ("transitionEventMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transitionEventMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transitionEventMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transitionEventMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transitionEventMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element::GALGAS_varList_2D_element (void) :
mProperty_mVarName (),
mProperty_mValueList (),
mProperty_mBDDStartBitIndex (),
mProperty_mBDDBitCount (),
mProperty_mInitialValueIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element::~ GALGAS_varList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element GALGAS_varList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_varList_2D_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mValueList.isValid () && mProperty_mBDDStartBitIndex.isValid () && mProperty_mBDDBitCount.isValid () && mProperty_mInitialValueIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList_2D_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mBDDStartBitIndex.drop () ;
  mProperty_mBDDBitCount.drop () ;
  mProperty_mInitialValueIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_varList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varList_2D_element::getter_mBDDStartBitIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDStartBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varList_2D_element::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varList_2D_element::getter_mInitialValueIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @varList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList_2D_element ("varList-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList_2D_element::GALGAS_binarysetList_2D_element (void) :
mProperty_mLabel (),
mProperty_mSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList_2D_element::~ GALGAS_binarysetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList_2D_element::GALGAS_binarysetList_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_binaryset & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mSet (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList_2D_element GALGAS_binarysetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_binarysetList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetList_2D_element GALGAS_binarysetList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_binaryset & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binarysetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_binarysetList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_binarysetList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_binarysetList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_binarysetList_2D_element::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset GALGAS_binarysetList_2D_element::getter_mSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @binarysetList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetList_2D_element ("binarysetList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binarysetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binarysetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstantList (),
mProperty_mConstantMap (),
mProperty_mBDDStartBit (),
mProperty_mBDDBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element::~ GALGAS_varMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_enumConstantMap::constructor_emptyMap (HERE),
                                   GALGAS_uint::constructor_default (HERE),
                                   GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_varMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantList.isValid () && mProperty_mConstantMap.isValid () && mProperty_mBDDStartBit.isValid () && mProperty_mBDDBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantList.drop () ;
  mProperty_mConstantMap.drop () ;
  mProperty_mBDDStartBit.drop () ;
  mProperty_mBDDBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_varMap_2D_element::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap GALGAS_varMap_2D_element::getter_mConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varMap_2D_element::getter_mBDDStartBit (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDStartBit ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varMap_2D_element::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @varMap-element type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap_2D_element ("varMap-element",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@machineList-element performMachineDynamicAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_performMachineDynamicAnalysis (const GALGAS_machineList_2D_element inObject,
                                                    const GALGAS_string constinArgument_inSourceFileName,
                                                    const GALGAS_unifiedScalarTypeMap constinArgument_inUnifiedScalarTypeMap,
                                                    const GALGAS_scenarioList constinArgument_inScenarioList,
                                                    const GALGAS_functionMap constinArgument_inFunctionMap,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_veryVerbose_7698 = GALGAS_bool (gOption_omnibus_5F_options_veryVerbose.getter_value ()) ;
  GALGAS_bool var_verbose_7763 = var_veryVerbose_7698.operator_or (GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("dynamicAnalysis.galgas", 296)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 296)) ;
  GALGAS_string var_dotFileContents_7832 = GALGAS_string ("digraph G {\n") ;
  var_dotFileContents_7832.plusAssign_operation(GALGAS_string ("  node [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 298)) ;
  var_dotFileContents_7832.plusAssign_operation(GALGAS_string ("  edge [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 299)) ;
  GALGAS_uint var_bddStartBitIndex_8055 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_varMap var_varMap_8072 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 302)) ;
  GALGAS_varList var_varList_8103 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 303)) ;
  GALGAS_binaryset var_varContraintSet_8143 = GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 304)) ;
  const GALGAS_machineList_2D_element temp_0 = inObject ;
  cEnumerator_enumVarDeclarationList enumerator_8218 (temp_0.getter_mEnumVarDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_8218.hasCurrentObject ()) {
    GALGAS_enumConstantMap var_constantMap_8320 ;
    GALGAS_lstringlist var_constantList_8351 ;
    GALGAS_scalarTypeKind joker_8285 ; // Joker input parameter
    constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_8218.current (HERE).getter_mEnumTypeName (HERE), joker_8285, var_constantMap_8320, var_constantList_8351, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 306)) ;
    GALGAS_uint var_initialValueIndex_8432 ;
    var_constantMap_8320.method_searchKey (enumerator_8218.current (HERE).getter_mConstantName (HERE), var_initialValueIndex_8432, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 307)) ;
    GALGAS_uint var_bddBitCount_8459 = var_constantList_8351.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 308)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 308)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 308)) ;
    {
    var_varMap_8072.setter_insertKey (enumerator_8218.current (HERE).getter_mEnumVarName (HERE), var_constantList_8351, var_constantMap_8320, var_bddStartBitIndex_8055, var_bddBitCount_8459, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 309)) ;
    }
    var_varList_8103.addAssign_operation (enumerator_8218.current (HERE).getter_mEnumVarName (HERE), var_constantList_8351, var_bddStartBitIndex_8055, var_bddBitCount_8459, var_initialValueIndex_8432  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 316)) ;
    var_varContraintSet_8143 = var_varContraintSet_8143.operator_and (GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_bddStartBitIndex_8055, var_bddBitCount_8459, var_constantList_8351.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 325)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 325)).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 322)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 322)) ;
    var_bddStartBitIndex_8055 = var_bddStartBitIndex_8055.add_operation (var_bddBitCount_8459, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 326)) ;
    enumerator_8218.gotoNextObject () ;
  }
  GALGAS_uint var_varTotalBitCount_9047 = var_bddStartBitIndex_8055 ;
  GALGAS_binaryset var_initValueSet_9195 = var_varContraintSet_8143 ;
  cEnumerator_varList enumerator_9239 (var_varList_8103, kENUMERATION_UP) ;
  while (enumerator_9239.hasCurrentObject ()) {
    GALGAS_binaryset var_s_9252 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (enumerator_9239.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_9239.current (HERE).getter_mBDDBitCount (HERE), enumerator_9239.current (HERE).getter_mInitialValueIndex (HERE).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 333)) ;
    var_initValueSet_9195 = var_initValueSet_9195.operator_and (var_s_9252 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 338)) ;
    enumerator_9239.gotoNextObject () ;
  }
  GALGAS_uint_36__34_list var_initValueList_9483 = var_initValueSet_9195.getter_uint_36__34_ValueList (var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 340)) ;
  cEnumerator_uint_36__34_list enumerator_9559 (var_initValueList_9483, kENUMERATION_UP) ;
  while (enumerator_9559.hasCurrentObject ()) {
    var_dotFileContents_7832.plusAssign_operation(GALGAS_string ("  \"\" [shape=plaintext]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 342)) ;
    var_dotFileContents_7832.plusAssign_operation(GALGAS_string ("  \"\" -> \"").add_operation (function_nameForValue (enumerator_9559.current (HERE).getter_mValue (HERE), var_varList_8103, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 343)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 343)) ;
    enumerator_9559.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = var_verbose_7763.boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    const GALGAS_machineList_2D_element temp_2 = inObject ;
    routine_displayVarValueSet (GALGAS_string ("@").add_operation (temp_2.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 347)).add_operation (GALGAS_string (" init configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 347)), var_initValueSet_9195, var_varList_8103, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 346)) ;
    }
  }
  GALGAS_binarysetList var_invariantList_9935 = GALGAS_binarysetList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 353)) ;
  GALGAS_binaryset var_invariantValueSet_9990 = var_varContraintSet_8143 ;
  const GALGAS_machineList_2D_element temp_3 = inObject ;
  cEnumerator_expressionList enumerator_10051 (temp_3.getter_mInvariantExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_10051.hasCurrentObject ()) {
    GALGAS_binaryset var_expressionBDD_10152 ;
    callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) enumerator_10051.current (HERE).getter_mExpression (HERE).ptr (), var_varMap_8072, var_varTotalBitCount_9047, var_expressionBDD_10152, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)) ;
    GALGAS_binaryset var_inv_10176 = var_expressionBDD_10152.operator_and (var_varContraintSet_8143 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 357)) ;
    var_invariantList_9935.addAssign_operation (enumerator_10051.current (HERE).getter_mLabel (HERE), var_inv_10176  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 358)) ;
    const enumGalgasBool test_4 = var_inv_10176.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 359)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_10051.current (HERE).getter_mLabel (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 360)), GALGAS_string ("this invariant is empty"), fixItArray5  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 360)) ;
    }
    var_invariantValueSet_9990 = var_invariantValueSet_9990.operator_and (var_inv_10176 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 362)) ;
    enumerator_10051.gotoNextObject () ;
  }
  GALGAS_uint_36__34_list var_valueList_10414 = var_invariantValueSet_9990.getter_uint_36__34_ValueList (var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 364)) ;
  const enumGalgasBool test_6 = var_verbose_7763.boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    const GALGAS_machineList_2D_element temp_7 = inObject ;
    GALGAS_string temp_8 ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_valueList_10414.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 367)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString () ;
    }
    routine_displayVarValueSet (GALGAS_string (" Invariant of @").add_operation (temp_7.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 367)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 367)).add_operation (var_valueList_10414.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 367)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 367)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 367)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 367)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 367)), var_invariantValueSet_9990, var_varList_8103, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 366)) ;
    }
  }else if (kBoolFalse == test_6) {
    const GALGAS_machineList_2D_element temp_10 = inObject ;
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_valueList_10414.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 372)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString () ;
    }
    inCompiler->printMessage (GALGAS_string (" invariant of @").add_operation (temp_10.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)).add_operation (var_valueList_10414.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 372)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)) ;
  }
  cEnumerator_uint_36__34_list enumerator_10877 (var_valueList_10414, kENUMERATION_UP) ;
  while (enumerator_10877.hasCurrentObject ()) {
    var_dotFileContents_7832.plusAssign_operation(GALGAS_string ("  \"").add_operation (function_nameForValue (enumerator_10877.current (HERE).getter_mValue (HERE), var_varList_8103, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 375)).add_operation (GALGAS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 375)) ;
    enumerator_10877.gotoNextObject () ;
  }
  GALGAS_binaryset var_oldVar_5F_Var_5F_EqualitySet_11119 = var_varContraintSet_8143 ;
  cEnumerator_varList enumerator_11163 (var_varList_8103, kENUMERATION_UP) ;
  while (enumerator_11163.hasCurrentObject ()) {
    GALGAS_binaryset var_constraint_11185 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (enumerator_11163.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_11163.current (HERE).getter_mBDDBitCount (HERE), enumerator_11163.current (HERE).getter_mBDDStartBitIndex (HERE).add_operation (var_varTotalBitCount_9047, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 381)) ;
    var_oldVar_5F_Var_5F_EqualitySet_11119 = var_oldVar_5F_Var_5F_EqualitySet_11119.operator_and (var_constraint_11185 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)) ;
    enumerator_11163.gotoNextObject () ;
  }
  GALGAS_varMap var_varMapForEventInstructionComputing_11463 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 388)) ;
  cEnumerator_varMap enumerator_11508 (var_varMap_8072, kENUMERATION_UP) ;
  while (enumerator_11508.hasCurrentObject ()) {
    {
    var_varMapForEventInstructionComputing_11463.setter_insertKey (enumerator_11508.current (HERE).getter_lkey (HERE), enumerator_11508.current (HERE).getter_mConstantList (HERE), enumerator_11508.current (HERE).getter_mConstantMap (HERE), enumerator_11508.current (HERE).getter_mBDDStartBit (HERE).add_operation (var_varTotalBitCount_9047, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 394)), enumerator_11508.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 390)) ;
    }
    enumerator_11508.gotoNextObject () ;
  }
  GALGAS_binaryset var_allTransitions_11752 = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 398)) ;
  GALGAS_transitionEventMap var_transitionEventMap_11806 = GALGAS_transitionEventMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 399)) ;
  cEnumerator_eventDeclarationList enumerator_11864 (inObject.mProperty_mEventList, kENUMERATION_UP) ;
  while (enumerator_11864.hasCurrentObject ()) {
    GALGAS_varList var_argumentList_11912 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 402)) ;
    GALGAS_varMap var_argVarMap_11952 = var_varMapForEventInstructionComputing_11463 ;
    GALGAS_uint var_bddArgOldVarVarTotalBitCount_12028 = var_varTotalBitCount_9047.add_operation (var_varTotalBitCount_9047, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 404)) ;
    GALGAS_binaryset var_eventTransformationSet_12104 = var_invariantValueSet_9990.operator_and (var_oldVar_5F_Var_5F_EqualitySet_11119 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 405)) ;
    cEnumerator_eventArgumentList enumerator_12189 (enumerator_11864.current (HERE).getter_mEventArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_12189.hasCurrentObject ()) {
      GALGAS_enumConstantMap var_constantMap_12292 ;
      GALGAS_lstringlist var_constantList_12323 ;
      GALGAS_scalarTypeKind joker_12257 ; // Joker input parameter
      constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_12189.current (HERE).getter_mArgumentTypeName (HERE), joker_12257, var_constantMap_12292, var_constantList_12323, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 407)) ;
      GALGAS_uint var_bddBitCount_12352 = var_constantList_12323.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 408)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 408)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 408)) ;
      {
      var_argVarMap_11952.setter_insertKey (enumerator_12189.current (HERE).getter_mArgumentVarName (HERE), var_constantList_12323, var_constantMap_12292, var_bddArgOldVarVarTotalBitCount_12028, var_bddBitCount_12352, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 409)) ;
      }
      var_argumentList_11912.addAssign_operation (enumerator_12189.current (HERE).getter_mArgumentVarName (HERE), var_constantList_12323, var_bddArgOldVarVarTotalBitCount_12028, var_bddBitCount_12352, GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 416)) ;
      var_eventTransformationSet_12104 = var_eventTransformationSet_12104.operator_and (GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_bddArgOldVarVarTotalBitCount_12028, var_bddBitCount_12352, var_constantList_12323.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 425)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 425)).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 422)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 422)) ;
      var_bddArgOldVarVarTotalBitCount_12028 = var_bddArgOldVarVarTotalBitCount_12028.add_operation (var_bddBitCount_12352, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 426)) ;
      enumerator_12189.gotoNextObject () ;
    }
    extensionMethod_computeInstructionListBDD (enumerator_11864.current (HERE).getter_mEventInstructionList (HERE), var_varTotalBitCount_9047, var_argVarMap_11952, constinArgument_inFunctionMap, var_bddArgOldVarVarTotalBitCount_12028, var_eventTransformationSet_12104, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 429)) ;
    const enumGalgasBool test_13 = var_verbose_7763.boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_machineList_2D_element temp_14 = inObject ;
      routine_displayArgVarVarValueSet (GALGAS_string (" Execution of @").add_operation (temp_14.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 439)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 439)).add_operation (enumerator_11864.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 439)), var_eventTransformationSet_12104, var_argumentList_11912, var_varList_8103, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 438)) ;
      }
    }
    GALGAS_binaryset var_transitions_13494 = var_eventTransformationSet_12104.getter_existOnBitIndexAndBeyond (var_varTotalBitCount_9047.add_operation (var_varTotalBitCount_9047, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 445)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 445)) ;
    {
    var_transitionEventMap_11806.setter_insertKey (enumerator_11864.current (HERE).getter_mEventName (HERE), enumerator_11864.current (HERE).getter_mEventArgumentList (HERE), var_eventTransformationSet_12104, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 446)) ;
    }
    var_allTransitions_11752 = var_allTransitions_11752.operator_or (var_transitions_13494 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 456)) ;
    {
    routine_addTransitionsToGraphvizString (enumerator_11864.current (HERE), var_bddArgOldVarVarTotalBitCount_12028, var_eventTransformationSet_12104, var_varList_8103, var_varTotalBitCount_9047, var_argumentList_11912, var_dotFileContents_7832, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 458)) ;
    }
    GALGAS_binaryset var_ensureValueSet_14214 = var_varContraintSet_8143.operator_and (var_varContraintSet_8143.left_shift_operation (var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 468)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 468)) ;
    cEnumerator_expressionList enumerator_14316 (enumerator_11864.current (HERE).getter_mEnsureExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_14316.hasCurrentObject ()) {
      GALGAS_binaryset var_s_14436 ;
      callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) enumerator_14316.current (HERE).getter_mExpression (HERE).ptr (), var_varMapForEventInstructionComputing_11463, var_varTotalBitCount_9047, var_s_14436, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 470)) ;
      var_ensureValueSet_14214 = var_ensureValueSet_14214.operator_and (var_s_14436 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 471)) ;
      enumerator_14316.gotoNextObject () ;
    }
    GALGAS_uint_36__34_ var_valueCount_14514 = var_ensureValueSet_14214.getter_valueCount (var_varTotalBitCount_9047.add_operation (var_varTotalBitCount_9047, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 473)) ;
    const enumGalgasBool test_15 = var_veryVerbose_7698.boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_machineList_2D_element temp_16 = inObject ;
      GALGAS_string temp_17 ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsStrictSup, var_valueCount_14514.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_18) {
        temp_17 = GALGAS_string::makeEmptyString () ;
      }
      routine_displayVarVarValueSet (GALGAS_string ("Post-condition of @").add_operation (temp_16.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 476)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 476)).add_operation (enumerator_11864.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 476)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 476)).add_operation (var_valueCount_14514.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 477)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 477)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 477)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 477)), var_ensureValueSet_14214, var_varList_8103, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 475)) ;
      }
    }else if (kBoolFalse == test_15) {
      const GALGAS_machineList_2D_element temp_19 = inObject ;
      GALGAS_string temp_20 ;
      const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, var_valueCount_14514.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_21) {
        temp_20 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->printMessage (GALGAS_string (" Post-condition of @").add_operation (temp_19.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 482)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 482)).add_operation (enumerator_11864.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 482)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 482)).add_operation (var_valueCount_14514.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 482)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 483)).add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 483)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 483))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 482)) ;
    }
    const enumGalgasBool test_22 = var_ensureValueSet_14214.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 486)).boolEnum () ;
    if (kBoolTrue == test_22) {
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (enumerator_11864.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("ensure condition is empty"), fixItArray23  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 487)) ;
    }else if (kBoolFalse == test_22) {
      GALGAS_binaryset var_ensureAndInvariant_15261 = var_ensureValueSet_14214.operator_and (var_invariantValueSet_9990 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 489)) ;
      const enumGalgasBool test_24 = var_veryVerbose_7698.boolEnum () ;
      if (kBoolTrue == test_24) {
        {
        const GALGAS_machineList_2D_element temp_25 = inObject ;
        routine_displayVarVarValueSet (GALGAS_string ("Post-condition @").add_operation (temp_25.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 492)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 492)).add_operation (enumerator_11864.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 492)).add_operation (GALGAS_string ("' and invariant"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 492)), var_ensureAndInvariant_15261, var_varList_8103, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 491)) ;
        }
      }
      const enumGalgasBool test_26 = var_ensureAndInvariant_15261.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 497)).boolEnum () ;
      if (kBoolTrue == test_26) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_11864.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("post condition condition is not compatible with invariant"), fixItArray27  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 498)) ;
      }else if (kBoolFalse == test_26) {
        GALGAS_binaryset var_ensureAndContext_15734 = var_transitions_13494.operator_and (var_ensureValueSet_14214 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 501)) ;
        const enumGalgasBool test_28 = var_veryVerbose_7698.boolEnum () ;
        if (kBoolTrue == test_28) {
          {
          const GALGAS_machineList_2D_element temp_29 = inObject ;
          routine_displayVarVarValueSet (GALGAS_string ("Post-condition and execution of @").add_operation (temp_29.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 504)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 504)).add_operation (enumerator_11864.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 504)), var_ensureAndContext_15734, var_varList_8103, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 503)) ;
          }
        }
        const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, var_ensureAndContext_15734.objectCompare (var_transitions_13494)).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (enumerator_11864.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("event instructions is not compatible with post condition"), fixItArray31  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 510)) ;
        }else if (kBoolFalse == test_30) {
          GALGAS_binaryset var_result_16212 = var_transitions_13494.right_shift_operation (var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 513)) ;
          cEnumerator_binarysetList enumerator_16281 (var_invariantList_9935, kENUMERATION_UP) ;
          while (enumerator_16281.hasCurrentObject ()) {
            const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_result_16212.objectCompare (var_result_16212.operator_and (enumerator_16281.current (HERE).getter_mSet (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 515)))).boolEnum () ;
            if (kBoolTrue == test_32) {
              TC_Array <C_FixItDescription> fixItArray33 ;
              inCompiler->emitSemanticError (enumerator_11864.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("event instructions is not compatible with invariant '").add_operation (enumerator_16281.current (HERE).getter_mLabel (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 517)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 517)), fixItArray33  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 516)) ;
            }
            enumerator_16281.gotoNextObject () ;
          }
        }
      }
    }
    enumerator_11864.gotoNextObject () ;
  }
  var_dotFileContents_7832.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 525)) ;
  GALGAS_bool joker_16723 ; // Joker input parameter
  var_dotFileContents_7832.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 526)), joker_16723, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 526)) ;
  GALGAS_binaryset var_accessibleStates_16860 = var_allTransitions_11752.getter_accessibleStates (var_initValueSet_9195, var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 528)) ;
  const enumGalgasBool test_34 = GALGAS_bool (kIsNotEqual, var_accessibleStates_16860.objectCompare (var_invariantValueSet_9990)).boolEnum () ;
  if (kBoolTrue == test_34) {
    GALGAS_binaryset var_inaccessibleStateSet_17016 = var_invariantValueSet_9990.operator_and (var_accessibleStates_16860.operator_tilde (SOURCE_FILE ("dynamicAnalysis.galgas", 530)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 530)) ;
    GALGAS_uint_36__34_ var_inaccessibleStateCount_17096 = var_inaccessibleStateSet_17016.getter_valueCount (var_varTotalBitCount_9047, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 531)) ;
    const GALGAS_machineList_2D_element temp_35 = inObject ;
    GALGAS_string temp_36 ;
    const enumGalgasBool test_37 = GALGAS_bool (kIsStrictSup, var_inaccessibleStateCount_17096.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
    if (kBoolTrue == test_37) {
      temp_36 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_37) {
      temp_36 = GALGAS_string::makeEmptyString () ;
    }
    TC_Array <C_FixItDescription> fixItArray38 ;
    inCompiler->emitSemanticError (temp_35.getter_mMachineName (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 532)), var_inaccessibleStateCount_17096.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 532)).add_operation (GALGAS_string (" inaccessible invariant value"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 532)).add_operation (temp_36, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 532)), fixItArray38  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 532)) ;
    {
    const GALGAS_machineList_2D_element temp_39 = inObject ;
    routine_displayVarValueSet (GALGAS_string ("Inaccessible @").add_operation (temp_39.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 535)).add_operation (GALGAS_string (" invariant values"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 535)), var_inaccessibleStateSet_17016, var_varList_8103, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 534)) ;
    }
  }
  cEnumerator_scenarioList enumerator_17552 (constinArgument_inScenarioList, kENUMERATION_UP) ;
  while (enumerator_17552.hasCurrentObject ()) {
    const GALGAS_machineList_2D_element temp_40 = inObject ;
    const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_17552.current (HERE).getter_mMachineName (HERE).getter_string (HERE).objectCompare (temp_40.getter_mMachineName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_41) {
      GALGAS_binaryset var_valueSet_17650 = var_initValueSet_9195 ;
      const GALGAS_machineList_2D_element temp_42 = inObject ;
      GALGAS_string var_s_17681 = GALGAS_string ("*** scenario \"").add_operation (enumerator_17552.current (HERE).getter_mScenarioName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 544)).add_operation (GALGAS_string ("\" for @"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 544)).add_operation (temp_42.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 544)).add_operation (GALGAS_string (" machine:\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 544)) ;
      GALGAS_machineVarListForDisplay var_displayStateInfo_17828 = extensionGetter_displayVarInfo (var_varList_8103, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 545)) ;
      GALGAS_uint var_firstColumnLength_17924 = GALGAS_string ("Event").getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 547)) ;
      cEnumerator_scenarioEventSequence enumerator_17986 (enumerator_17552.current (HERE).getter_mEventSequence (HERE), kENUMERATION_UP) ;
      while (enumerator_17986.hasCurrentObject ()) {
        GALGAS_string var_eventString_18017 = enumerator_17986.current (HERE).getter_mEventName (HERE).getter_string (HERE) ;
        cEnumerator_lstringlist enumerator_18089 (enumerator_17986.current (HERE).getter_mArgumentNameList (HERE), kENUMERATION_UP) ;
        while (enumerator_18089.hasCurrentObject ()) {
          var_eventString_18017.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_18089.current (HERE).getter_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 551)) ;
          enumerator_18089.gotoNextObject () ;
        }
        GALGAS_uint var_lg_18175 = var_eventString_18017.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 553)) ;
        const enumGalgasBool test_43 = GALGAS_bool (kIsStrictInf, var_firstColumnLength_17924.objectCompare (var_lg_18175)).boolEnum () ;
        if (kBoolTrue == test_43) {
          var_firstColumnLength_17924 = var_lg_18175 ;
        }
        enumerator_17986.gotoNextObject () ;
      }
      var_s_17681.plusAssign_operation(GALGAS_string ("Event").getter_stringByRightPadding (var_firstColumnLength_17924.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 559)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 559)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 559)) ;
      {
      routine_displayVarNames (var_displayStateInfo_17828, var_s_17681, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 560)) ;
      }
      var_s_17681.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), var_firstColumnLength_17924.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 561))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 561)) ;
      {
      routine_displaySeparator (var_displayStateInfo_17828, var_s_17681, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 562)) ;
      }
      inCompiler->printMessage (var_s_17681  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 563)) ;
      cEnumerator_scenarioEventSequence enumerator_18609 (enumerator_17552.current (HERE).getter_mEventSequence (HERE), kENUMERATION_UP) ;
      while (enumerator_18609.hasCurrentObject ()) {
        var_s_17681 = GALGAS_string::makeEmptyString () ;
        GALGAS_eventArgumentList var_argumentList_18740 ;
        GALGAS_binaryset var_transitionSet_18780 ;
        var_transitionEventMap_11806.method_searchKey (enumerator_18609.current (HERE).getter_mEventName (HERE), var_argumentList_18740, var_transitionSet_18780, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 566)) ;
        GALGAS_uint var_bddBitIndex_18843 = var_varTotalBitCount_9047.add_operation (var_varTotalBitCount_9047, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 572)) ;
        GALGAS_string var_eventString_18909 = enumerator_18609.current (HERE).getter_mEventName (HERE).getter_string (HERE) ;
        cEnumerator_eventArgumentList enumerator_18970 (var_argumentList_18740, kENUMERATION_UP) ;
        cEnumerator_lstringlist enumerator_19005 (enumerator_18609.current (HERE).getter_mArgumentNameList (HERE), kENUMERATION_UP) ;
        while (enumerator_18970.hasCurrentObject () && enumerator_19005.hasCurrentObject ()) {
          var_eventString_18909.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_19005.current (HERE).getter_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 575)) ;
          GALGAS_enumConstantMap var_constantMap_19167 ;
          GALGAS_scalarTypeKind joker_19132 ; // Joker input parameter
          GALGAS_lstringlist joker_19169 ; // Joker input parameter
          constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_18970.current (HERE).getter_mArgumentTypeName (HERE), joker_19132, var_constantMap_19167, joker_19169, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 576)) ;
          GALGAS_uint var_constantIndex_19244 ;
          var_constantMap_19167.method_searchKey (enumerator_19005.current (HERE).getter_mValue (HERE), var_constantIndex_19244, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 577)) ;
          GALGAS_uint var_bitCount_19274 = var_constantMap_19167.getter_count (SOURCE_FILE ("dynamicAnalysis.galgas", 578)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 578)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 578)) ;
          var_transitionSet_18780 = var_transitionSet_18780.operator_and (GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_bddBitIndex_18843, var_bitCount_19274, var_constantIndex_19244.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 579)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 579)) ;
          var_bddBitIndex_18843 = var_bddBitIndex_18843.add_operation (var_bitCount_19274, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 583)) ;
          enumerator_18970.gotoNextObject () ;
          enumerator_19005.gotoNextObject () ;
        }
        var_valueSet_17650 = var_valueSet_17650.operator_and (var_transitionSet_18780 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 585)).right_shift_operation (var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 585)).getter_existOnBitIndexAndBeyond (var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 585)) ;
        var_s_17681.plusAssign_operation(var_eventString_18909.getter_stringByRightPadding (var_firstColumnLength_17924, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 586)) ;
        GALGAS_uint_36__34_list var_valueList_19767 = var_valueSet_17650.getter_uint_36__34_ValueList (var_varTotalBitCount_9047 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 587)) ;
        const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, var_valueList_19767.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 588)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_44) {
          TC_Array <C_FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (enumerator_18609.current (HERE).getter_mEventName (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 589)), GALGAS_string ("no value instead of 1"), fixItArray45  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 589)) ;
          var_s_17681.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 590)) ;
        }else if (kBoolFalse == test_44) {
          const enumGalgasBool test_46 = GALGAS_bool (kIsStrictSup, var_valueList_19767.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 591)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_46) {
            TC_Array <C_FixItDescription> fixItArray47 ;
            inCompiler->emitSemanticError (enumerator_18609.current (HERE).getter_mEventName (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 592)), var_valueList_19767.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 592)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 592)).add_operation (GALGAS_string (" values instead of 1"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 592)), fixItArray47  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 592)) ;
            var_s_17681.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 593)) ;
          }else if (kBoolFalse == test_46) {
            var_s_17681.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 595)) ;
            {
            routine_displayValue (var_displayStateInfo_17828, var_valueList_19767.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)), var_s_17681, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)) ;
            }
          }
        }
        inCompiler->printMessage (var_s_17681  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 598)) ;
        enumerator_18609.gotoNextObject () ;
      }
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 600)) ;
    }
    enumerator_17552.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_omnibus_5F_options_generateCCode ("omnibus_options",
                                         "generateCCode",
                                         99,
                                         "generate-c-code",
                                         "Generate C code") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_veryVerbose ("omnibus_options",
                                         "veryVerbose",
                                         86,
                                         "very-verbose",
                                         "More verbose output") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@implicationExpression analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implicationExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_implicationExpression.mSlotID,
                                          extensionMethod_implicationExpression_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implicationExpression_analyzeExpression (defineExtensionMethod_implicationExpression_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@logicalOrExpression analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logicalOrExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_logicalOrExpression.mSlotID,
                                          extensionMethod_logicalOrExpression_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logicalOrExpression_analyzeExpression (defineExtensionMethod_logicalOrExpression_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@logicalAndExpression analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logicalAndExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_logicalAndExpression.mSlotID,
                                          extensionMethod_logicalAndExpression_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logicalAndExpression_analyzeExpression (defineExtensionMethod_logicalAndExpression_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@comparisonInExpression analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_comparisonInExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_comparisonInExpression.mSlotID,
                                          extensionMethod_comparisonInExpression_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_comparisonInExpression_analyzeExpression (defineExtensionMethod_comparisonInExpression_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@constantAsComparisonRightOperand analyzeComparisonRightOperand'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  constinArgument_inVarTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 171)).method_searchKey (object->mProperty_mConstantName, var_constantValue_5364, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 171)) ;
  outArgument_outDecoratedExpression = GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (constinArgument_inVarTypeProxy, object->mProperty_mConstantName, var_constantValue_5364  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand (void) {
  enterExtensionMethod_analyzeComparisonRightOperand (kTypeDescriptor_GALGAS_constantAsComparisonRightOperand.mSlotID,
                                                      extensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand (defineExtensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@attributeAsComparisonRightOperand analyzeComparisonRightOperand'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (const cPtr_comparisonRightOperand * inObject,
                                                                                             const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                                             const GALGAS_bool constinArgument_inEnsureClause,
                                                                                             GALGAS_decoratedComparisonRightOperand & outArgument_outDecoratedExpression,
                                                                                             const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inVarTypeProxy,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_attributeAsComparisonRightOperand * object = (const cPtr_attributeAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_attributeAsComparisonRightOperand) ;
  const enumGalgasBool test_0 = object->mProperty_mHasOldQualifier.operator_and (constinArgument_inEnsureClause.operator_not (SOURCE_FILE ("expressionStaticAnalysis.galgas", 182)) COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 182)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAttributeName.getter_location (SOURCE_FILE ("expressionStaticAnalysis.galgas", 183)), GALGAS_string ("'old' qualifier is allowed only in post condition"), fixItArray1  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 183)) ;
  }
  GALGAS_unifiedScalarTypeMap_2D_proxy var_operandTypeProxy_6075 ;
  GALGAS_uint joker_6081 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mAttributeName, var_operandTypeProxy_6075, joker_6081, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 185)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inVarTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 191)).objectCompare (var_operandTypeProxy_6075.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 191)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mAttributeName.getter_location (SOURCE_FILE ("expressionStaticAnalysis.galgas", 192)), GALGAS_string ("var type is '%").add_operation (constinArgument_inVarTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 193)).add_operation (GALGAS_string ("', and is different from right expression type '%"), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 193)).add_operation (var_operandTypeProxy_6075.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 194)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 195)), fixItArray3  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 192)) ;
  }
  outArgument_outDecoratedExpression = GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (object->mProperty_mAttributeName  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 197)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (void) {
  enterExtensionMethod_analyzeComparisonRightOperand (kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand.mSlotID,
                                                      extensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (defineExtensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@varAsAssignmentSourceExpression analyzeAssignmentSourceExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                                                               const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                                               const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inTargetTypeProxy,
                                                                                               GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAsAssignmentSourceExpression * object = (const cPtr_varAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varAsAssignmentSourceExpression) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_sourceTypeProxy_3106 ;
  GALGAS_uint joker_3112 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mSourceVarName, var_sourceTypeProxy_3106, joker_3112, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 91)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 97)).objectCompare (var_sourceTypeProxy_3106.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 97)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mSourceVarName.getter_location (SOURCE_FILE ("instructionStaticAnalysis.galgas", 98)), GALGAS_string ("var type is '").add_operation (constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 99)).add_operation (GALGAS_string ("', and is different from right expression type '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 99)).add_operation (var_sourceTypeProxy_3106.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 100)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 101)), fixItArray1  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 98)) ;
  }
  outArgument_outDecoratedExpression = GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (object->mProperty_mSourceVarName  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@constantAsAssignmentSourceExpression analyzeAssignmentSourceExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                                                                    const GALGAS_analyzeContext /* constinArgument_inAnalyzeContext */,
                                                                                                    const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inTargetTypeProxy,
                                                                                                    GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constantAsAssignmentSourceExpression * object = (const cPtr_constantAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_constantAsAssignmentSourceExpression) ;
  GALGAS_uint var_cstValue_3878 ;
  constinArgument_inTargetTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 113)).method_searchKey (object->mProperty_mConstantName, var_cstValue_3878, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 113)) ;
  outArgument_outDecoratedExpression = GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_new (object->mProperty_mConstantName, var_cstValue_3878, constinArgument_inTargetTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 117)).getter_count (SOURCE_FILE ("instructionStaticAnalysis.galgas", 117)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 117)).getter_significantBitCount (SOURCE_FILE ("instructionStaticAnalysis.galgas", 117))  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@functionAsAssignmentSourceExpression analyzeAssignmentSourceExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                                                                    const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                                                    const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inTargetTypeProxy,
                                                                                                    GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionAsAssignmentSourceExpression * object = (const cPtr_functionAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_functionAsAssignmentSourceExpression) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_operandTypeProxy_4539 ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_resultTypeProxy_4592 ;
  GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_4656 ;
  constinArgument_inAnalyzeContext.getter_mFunctionMap (HERE).method_searchKey (object->mProperty_mFunctionName, var_operandTypeProxy_4539, var_resultTypeProxy_4592, var_decoratedFunctionValueList_4656, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 127)) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_attributeTypeProxy_4818 ;
  GALGAS_uint joker_4894 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mOperandName, var_attributeTypeProxy_4818, joker_4894, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 134)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_operandTypeProxy_4539.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 142)).objectCompare (var_attributeTypeProxy_4818.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 142)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperandName.getter_location (SOURCE_FILE ("instructionStaticAnalysis.galgas", 143)), GALGAS_string ("the '").add_operation (object->mProperty_mOperandName.getter_string (SOURCE_FILE ("instructionStaticAnalysis.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 143)).add_operation (GALGAS_string ("' belongs to the '%"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 143)).add_operation (var_attributeTypeProxy_4818.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 144)).add_operation (GALGAS_string ("', but '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 144)).add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("instructionStaticAnalysis.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 145)).add_operation (GALGAS_string ("' function requires an '%"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 145)).add_operation (var_operandTypeProxy_4539.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 145)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 146)), fixItArray1  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 143)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 149)).objectCompare (var_resultTypeProxy_4592.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 149)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperandName.getter_location (SOURCE_FILE ("instructionStaticAnalysis.galgas", 150)), GALGAS_string ("var type is '").add_operation (constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 151)).add_operation (GALGAS_string ("', and is different from function result type '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 151)).add_operation (var_resultTypeProxy_4592.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 152)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 153)), fixItArray3  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 150)) ;
  }
  outArgument_outDecoratedExpression = GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_new (object->mProperty_mFunctionName, object->mProperty_mOperandName, var_decoratedFunctionValueList_4656  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@assignmentInstruction analyzeInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstruction_analyzeInstruction (const cPtr_instruction * inObject,
                                                                      const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                      GALGAS_decoratedInstruction & outArgument_outDecoratedInstruction,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstruction * object = (const cPtr_assignmentInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstruction) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_targetTypeProxy_6003 ;
  GALGAS_uint joker_6009 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mTargetVarName, var_targetTypeProxy_6003, joker_6009, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)) ;
  GALGAS_decoratedAssignmentSourceExpression var_decoratedExpression_6179 ;
  callExtensionMethod_analyzeAssignmentSourceExpression ((const cPtr_assignmentSourceExpression *) object->mProperty_mSourceExpression.ptr (), constinArgument_inAnalyzeContext, var_targetTypeProxy_6003, var_decoratedExpression_6179, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 172)) ;
  outArgument_outDecoratedInstruction = GALGAS_assignmentDecoratedInstruction::constructor_new (var_targetTypeProxy_6003, object->mProperty_mTargetVarName, var_decoratedExpression_6179  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_assignmentInstruction.mSlotID,
                                           extensionMethod_assignmentInstruction_analyzeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstruction_analyzeInstruction (defineExtensionMethod_assignmentInstruction_analyzeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@ifInstruction analyzeInstruction'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstruction_analyzeInstruction (const cPtr_instruction * inObject,
                                                              const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                              GALGAS_decoratedInstruction & outArgument_outDecoratedInstruction,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstruction * object = (const cPtr_ifInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstruction) ;
  GALGAS_decoratedExpression var_decoratedExpression_6652 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mTestExpression.ptr (), constinArgument_inAnalyzeContext, GALGAS_bool (false), var_decoratedExpression_6652, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 188)) ;
  GALGAS_decoratedInstructionList var_decoratedThenInstructionList_6789 ;
  extensionMethod_analyzeInstructionList (object->mProperty_mThenInstructionList, constinArgument_inAnalyzeContext, var_decoratedThenInstructionList_6789, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 193)) ;
  GALGAS_decoratedInstructionList var_decoratedElseInstructionList_6926 ;
  extensionMethod_analyzeInstructionList (object->mProperty_mElseInstructionList, constinArgument_inAnalyzeContext, var_decoratedElseInstructionList_6926, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 197)) ;
  outArgument_outDecoratedInstruction = GALGAS_ifDecoratedInstruction::constructor_new (object->mProperty_mIFinstructionLocation, var_decoratedExpression_6652, object->mProperty_mEndOfTestExpression, var_decoratedThenInstructionList_6789, var_decoratedElseInstructionList_6926  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 201)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_ifInstruction.mSlotID,
                                           extensionMethod_ifInstruction_analyzeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstruction_analyzeInstruction (defineExtensionMethod_ifInstruction_analyzeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@assertInstruction analyzeInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstruction_analyzeInstruction (const cPtr_instruction * inObject,
                                                                  const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                  GALGAS_decoratedInstruction & outArgument_outDecoratedInstruction,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstruction * object = (const cPtr_assertInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstruction) ;
  GALGAS_decoratedExpression var_decoratedExpression_7478 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mAssertExpression.ptr (), constinArgument_inAnalyzeContext, GALGAS_bool (false), var_decoratedExpression_7478, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 214)) ;
  outArgument_outDecoratedInstruction = GALGAS_assertDecoratedInstruction::constructor_new (object->mProperty_mAssertInstructionLocation, var_decoratedExpression_7478  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_assertInstruction.mSlotID,
                                           extensionMethod_assertInstruction_analyzeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstruction_analyzeInstruction (defineExtensionMethod_assertInstruction_analyzeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'performStaticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performStaticAnalysis (const GALGAS_ast constinArgument_inAST,
                                    GALGAS_unifiedScalarTypeMap & outArgument_outUnifiedScalarTypeMap,
                                    GALGAS_functionMap & outArgument_outFunctionMap,
                                    GALGAS_machineMap & outArgument_outClassTypeMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnifiedScalarTypeMap.drop () ; // Release 'out' argument
  outArgument_outFunctionMap.drop () ; // Release 'out' argument
  outArgument_outClassTypeMap.drop () ; // Release 'out' argument
  outArgument_outUnifiedScalarTypeMap = GALGAS_unifiedScalarTypeMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 11)) ;
  cEnumerator_enumTypeList enumerator_388 (constinArgument_inAST.getter_mEnumTypeList (HERE), kENUMERATION_UP) ;
  while (enumerator_388.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, enumerator_388.current (HERE).getter_mEnumConstantList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 13)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_388.current (HERE).getter_mEnumListName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 14)), GALGAS_string ("an enumeration should define 2 constants or more"), fixItArray1  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 14)) ;
    }
    GALGAS_enumConstantMap var_enumConstantMap_548 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 16)) ;
    cEnumerator_lstringlist enumerator_607 (enumerator_388.current (HERE).getter_mEnumConstantList (HERE), kENUMERATION_UP) ;
    GALGAS_uint index_582 ((uint32_t) 0) ;
    while (enumerator_607.hasCurrentObject ()) {
      {
      var_enumConstantMap_548.setter_insertKey (enumerator_607.current (HERE).getter_mValue (HERE), index_582, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 18)) ;
      }
      enumerator_607.gotoNextObject () ;
      index_582.increment_operation (inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 17)) ;
    }
    {
    outArgument_outUnifiedScalarTypeMap.setter_insertKey (enumerator_388.current (HERE).getter_mEnumListName (HERE), GALGAS_scalarTypeKind::constructor_enumeration (SOURCE_FILE ("staticAnalysis.galgas", 22)), var_enumConstantMap_548, enumerator_388.current (HERE).getter_mEnumConstantList (HERE), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 20)) ;
    }
    enumerator_388.gotoNextObject () ;
  }
  outArgument_outFunctionMap = GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 28)) ;
  cEnumerator_functionDefinitionList enumerator_982 (constinArgument_inAST.getter_mFunctionDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_982.hasCurrentObject ()) {
    GALGAS_enumConstantMap var_operandEnumMap_1108 ;
    GALGAS_scalarTypeKind joker_1070 ; // Joker input parameter
    GALGAS_lstringlist joker_1110 ; // Joker input parameter
    outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_982.current (HERE).getter_mOperandEnumTypeName (HERE), joker_1070, var_operandEnumMap_1108, joker_1110, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 31)) ;
    GALGAS_enumConstantMap var_resultEnumMap_1232 ;
    GALGAS_scalarTypeKind joker_1195 ; // Joker input parameter
    GALGAS_lstringlist joker_1234 ; // Joker input parameter
    outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_982.current (HERE).getter_mResultEnumTypeName (HERE), joker_1195, var_resultEnumMap_1232, joker_1234, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 33)) ;
    GALGAS_stringset var_handledOperandSet_1291 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("staticAnalysis.galgas", 35)) ;
    GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_1346 = GALGAS_decoratedFunctionValueList::constructor_emptySortedList (SOURCE_FILE ("staticAnalysis.galgas", 36)) ;
    cEnumerator_functionValueList enumerator_1409 (enumerator_982.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_1409.hasCurrentObject ()) {
      GALGAS_uint var_operandValue_1484 ;
      var_operandEnumMap_1108.method_searchKey (enumerator_1409.current (HERE).getter_mOperandName (HERE), var_operandValue_1484, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 38)) ;
      GALGAS_uint var_resultValue_1554 ;
      var_resultEnumMap_1232.method_searchKey (enumerator_1409.current (HERE).getter_mResultName (HERE), var_resultValue_1554, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 39)) ;
      const enumGalgasBool test_2 = var_handledOperandSet_1291.getter_hasKey (enumerator_1409.current (HERE).getter_mOperandName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("staticAnalysis.galgas", 40)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_1409.current (HERE).getter_mOperandName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 41)), GALGAS_string ("the '").add_operation (enumerator_1409.current (HERE).getter_mOperandName (HERE).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 41)).add_operation (GALGAS_string ("' value is already used"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 41)), fixItArray3  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 41)) ;
      }
      var_handledOperandSet_1291.addAssign_operation (enumerator_1409.current (HERE).getter_mOperandName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 43)) ;
      var_decoratedFunctionValueList_1346.addAssign_operation (enumerator_1409.current (HERE).getter_mOperandName (HERE), var_operandValue_1484, enumerator_1409.current (HERE).getter_mResultName (HERE), var_resultValue_1554  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 44)) ;
      enumerator_1409.gotoNextObject () ;
    }
    cEnumerator_enumConstantMap enumerator_1961 (var_operandEnumMap_1108, kENUMERATION_UP) ;
    while (enumerator_1961.hasCurrentObject ()) {
      const enumGalgasBool test_4 = var_handledOperandSet_1291.getter_hasKey (enumerator_1961.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("staticAnalysis.galgas", 52)).operator_not (SOURCE_FILE ("staticAnalysis.galgas", 52)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_982.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 53)), GALGAS_string ("this function is not define for '").add_operation (enumerator_1961.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 53)).add_operation (GALGAS_string ("' value"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 53)), fixItArray5  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 53)) ;
      }
      enumerator_1961.gotoNextObject () ;
    }
    {
    outArgument_outFunctionMap.setter_insertKey (enumerator_982.current (HERE).getter_mFunctionName (HERE), GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_982.current (HERE).getter_mOperandEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 59)), GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_982.current (HERE).getter_mResultEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 60)), var_decoratedFunctionValueList_1346, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 57)) ;
    }
    enumerator_982.gotoNextObject () ;
  }
  outArgument_outClassTypeMap = GALGAS_machineMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 65)) ;
  cEnumerator_machineList enumerator_2568 (constinArgument_inAST.getter_mMachineList (HERE), kENUMERATION_UP) ;
  while (enumerator_2568.hasCurrentObject ()) {
    GALGAS_machineVarMap var_machineVarMap_2593 = GALGAS_machineVarMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 67)) ;
    GALGAS_machineVarList var_machineVarList_2640 = GALGAS_machineVarList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 68)) ;
    cEnumerator_enumVarDeclarationList enumerator_2727 (enumerator_2568.current (HERE).getter_mEnumVarDeclarationList (HERE), kENUMERATION_UP) ;
    while (enumerator_2727.hasCurrentObject ()) {
      GALGAS_enumConstantMap var_enumCstMap_2848 ;
      GALGAS_lstringlist var_constantList_2887 ;
      GALGAS_scalarTypeKind joker_2806 ; // Joker input parameter
      outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_2727.current (HERE).getter_mEnumTypeName (HERE), joker_2806, var_enumCstMap_2848, var_constantList_2887, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 71)) ;
      GALGAS_uint var_constantIndex_2965 ;
      var_enumCstMap_2848.method_searchKey (enumerator_2727.current (HERE).getter_mConstantName (HERE), var_constantIndex_2965, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 77)) ;
      GALGAS_unifiedScalarTypeMap_2D_proxy var_t_2978 = GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_2727.current (HERE).getter_mEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 78)) ;
      {
      var_machineVarMap_2593.setter_insertKey (enumerator_2727.current (HERE).getter_mEnumVarName (HERE), var_t_2978, var_enumCstMap_2848.getter_count (SOURCE_FILE ("staticAnalysis.galgas", 82)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 79)) ;
      }
      var_machineVarList_2640.addAssign_operation (var_t_2978, enumerator_2727.current (HERE).getter_mEnumVarName (HERE), var_constantList_2887, enumerator_2727.current (HERE).getter_mConstantName (HERE), var_constantIndex_2965  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 84)) ;
      enumerator_2727.gotoNextObject () ;
    }
    GALGAS_analyzeContext var_analyzeContext_3354 = GALGAS_analyzeContext::constructor_new (outArgument_outUnifiedScalarTypeMap, var_machineVarMap_2593, outArgument_outFunctionMap  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 92)) ;
    GALGAS_decoratedExpressionList var_invariantDecoratedExpressionList_3631 ;
    extensionMethod_analyzeExpressionList (enumerator_2568.current (HERE).getter_mInvariantExpressionList (HERE), var_analyzeContext_3354, GALGAS_bool (false), var_invariantDecoratedExpressionList_3631, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 98)) ;
    GALGAS_eventMap var_eventMap_3712 = GALGAS_eventMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 104)) ;
    cEnumerator_eventDeclarationList enumerator_3761 (enumerator_2568.current (HERE).getter_mEventList (HERE), kENUMERATION_UP) ;
    while (enumerator_3761.hasCurrentObject ()) {
      GALGAS_analyzeContext var_analyzeContextForEvent_3828 = var_analyzeContext_3354 ;
      GALGAS_decoratedArgumentList var_decoratedArgumentList_3877 = GALGAS_decoratedArgumentList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 108)) ;
      cEnumerator_eventArgumentList enumerator_3951 (enumerator_3761.current (HERE).getter_mEventArgumentList (HERE), kENUMERATION_UP) ;
      while (enumerator_3951.hasCurrentObject ()) {
        GALGAS_lstringlist var_enumConstantList_4061 ;
        GALGAS_scalarTypeKind joker_4022_2 ; // Joker input parameter
        GALGAS_enumConstantMap joker_4022_1 ; // Joker input parameter
        outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_3951.current (HERE).getter_mArgumentTypeName (HERE), joker_4022_2, joker_4022_1, var_enumConstantList_4061, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 110)) ;
        {
        var_analyzeContextForEvent_3828.mProperty_mMachineVarMap.setter_insertKey (enumerator_3951.current (HERE).getter_mArgumentVarName (HERE), GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_3951.current (HERE).getter_mArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 113)), var_enumConstantList_4061.getter_length (SOURCE_FILE ("staticAnalysis.galgas", 114)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 111)) ;
        }
        var_decoratedArgumentList_3877.addAssign_operation (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_3951.current (HERE).getter_mArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 117)), enumerator_3951.current (HERE).getter_mArgumentVarName (HERE)  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 116)) ;
        enumerator_3951.gotoNextObject () ;
      }
      GALGAS_decoratedInstructionList var_decoratedEventInstructionList_4662 ;
      extensionMethod_analyzeInstructionList (enumerator_3761.current (HERE).getter_mEventInstructionList (HERE), var_analyzeContextForEvent_3828, var_decoratedEventInstructionList_4662, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 121)) ;
      GALGAS_decoratedExpressionList var_ensureDecoratedExpressionList_4857 ;
      extensionMethod_analyzeExpressionList (enumerator_3761.current (HERE).getter_mEnsureExpressionList (HERE), var_analyzeContext_3354, GALGAS_bool (true), var_ensureDecoratedExpressionList_4857, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 126)) ;
      {
      var_eventMap_3712.setter_insertKey (enumerator_3761.current (HERE).getter_mEventName (HERE), var_decoratedArgumentList_3877, var_decoratedEventInstructionList_4662, var_ensureDecoratedExpressionList_4857, enumerator_3761.current (HERE).getter_mEndOfEnsureExpressionList (HERE), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 132)) ;
      }
      enumerator_3761.gotoNextObject () ;
    }
    GALGAS_decoratedScenarioList var_decoratedScenarioList_5210 = GALGAS_decoratedScenarioList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 141)) ;
    cEnumerator_scenarioList enumerator_5286 (constinArgument_inAST.getter_mScenarioList (HERE), kENUMERATION_UP) ;
    while (enumerator_5286.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_5286.current (HERE).getter_mMachineName (HERE).getter_string (HERE).objectCompare (enumerator_2568.current (HERE).getter_mMachineName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_6) {
        cEnumerator_scenarioEventSequence enumerator_5402 (enumerator_5286.current (HERE).getter_mEventSequence (HERE), kENUMERATION_UP) ;
        while (enumerator_5402.hasCurrentObject ()) {
          GALGAS_decoratedArgumentList var_decoratedArgumentList_5503 ;
          GALGAS_decoratedInstructionList joker_5505_3 ; // Joker input parameter
          GALGAS_decoratedExpressionList joker_5505_2 ; // Joker input parameter
          GALGAS_location joker_5505_1 ; // Joker input parameter
          var_eventMap_3712.method_searchKey (enumerator_5402.current (HERE).getter_mEventName (HERE), var_decoratedArgumentList_5503, joker_5505_3, joker_5505_2, joker_5505_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 145)) ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_5402.current (HERE).getter_mArgumentNameList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 146)).objectCompare (var_decoratedArgumentList_5503.getter_length (SOURCE_FILE ("staticAnalysis.galgas", 146)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_string temp_8 ;
            const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_5402.current (HERE).getter_mArgumentNameList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 148)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_9) {
              temp_8 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_9) {
              temp_8 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_5402.current (HERE).getter_mEventName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 147)), GALGAS_string ("this event requires ").add_operation (enumerator_5402.current (HERE).getter_mArgumentNameList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 147)).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 147)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 147)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 148)), fixItArray10  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 147)) ;
          }
          cEnumerator_lstringlist enumerator_5838 (enumerator_5402.current (HERE).getter_mArgumentNameList (HERE), kENUMERATION_UP) ;
          cEnumerator_decoratedArgumentList enumerator_5868 (var_decoratedArgumentList_5503, kENUMERATION_UP) ;
          while (enumerator_5838.hasCurrentObject () && enumerator_5868.hasCurrentObject ()) {
            GALGAS_uint joker_5946 ; // Joker input parameter
            enumerator_5868.current (HERE).getter_mArgumentTypeProxy (HERE).getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 151)).method_searchKey (enumerator_5838.current (HERE).getter_mValue (HERE), joker_5946, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 151)) ;
            enumerator_5838.gotoNextObject () ;
            enumerator_5868.gotoNextObject () ;
          }
          enumerator_5402.gotoNextObject () ;
        }
        var_decoratedScenarioList_5210.addAssign_operation (enumerator_5286.current (HERE).getter_mScenarioName (HERE), enumerator_5286.current (HERE).getter_mEventSequence (HERE)  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 154)) ;
      }
      enumerator_5286.gotoNextObject () ;
    }
    {
    outArgument_outClassTypeMap.setter_insertKey (enumerator_2568.current (HERE).getter_mMachineName (HERE), var_machineVarMap_2593, var_machineVarList_2640, var_invariantDecoratedExpressionList_3631, var_eventMap_3712, var_decoratedScenarioList_5210, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 158)) ;
    }
    enumerator_2568.gotoNextObject () ;
  }
  cEnumerator_scenarioList enumerator_6398 (constinArgument_inAST.getter_mScenarioList (HERE), kENUMERATION_UP) ;
  while (enumerator_6398.hasCurrentObject ()) {
    GALGAS_machineVarMap joker_6457_5 ; // Joker input parameter
    GALGAS_machineVarList joker_6457_4 ; // Joker input parameter
    GALGAS_decoratedExpressionList joker_6457_3 ; // Joker input parameter
    GALGAS_eventMap joker_6457_2 ; // Joker input parameter
    GALGAS_decoratedScenarioList joker_6457_1 ; // Joker input parameter
    outArgument_outClassTypeMap.method_searchKey (enumerator_6398.current (HERE).getter_mMachineName (HERE), joker_6457_5, joker_6457_4, joker_6457_3, joker_6457_2, joker_6457_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 169)) ;
    enumerator_6398.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'displayVarValueSet'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayVarValueSet (const GALGAS_string constinArgument_inTitle,
                                 const GALGAS_binaryset constinArgument_inValueSet,
                                 const GALGAS_varList constinArgument_inVarList,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_performDisplay (constinArgument_inTitle, constinArgument_inValueSet, extensionGetter_displayVarInfo (constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 131)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'displayArgVarVarValueSet'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayArgVarVarValueSet (const GALGAS_string constinArgument_inTitle,
                                       const GALGAS_binaryset constinArgument_inValueSet,
                                       const GALGAS_varList constinArgument_inArgumentList,
                                       const GALGAS_varList constinArgument_inVarList,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_performDisplay (constinArgument_inTitle, constinArgument_inValueSet, extensionGetter_displayArgVarVarInfo (constinArgument_inVarList, constinArgument_inArgumentList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 145)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'displayVarVarValueSet'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayVarVarValueSet (const GALGAS_string constinArgument_inTitle,
                                    const GALGAS_binaryset constinArgument_inValueSet,
                                    const GALGAS_varList constinArgument_inVarList,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_performDisplay (constinArgument_inTitle, constinArgument_inValueSet, extensionGetter_displayVarVarInfo (constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 158)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'nameForValue'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_nameForValue (const GALGAS_uint_36__34_ & constinArgument_inValue,
                                     const GALGAS_varList & constinArgument_inVarList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  GALGAS_uint_36__34_ var_v_4239 = constinArgument_inValue ;
  cEnumerator_varList enumerator_4270 (constinArgument_inVarList, kENUMERATION_UP) ;
  while (enumerator_4270.hasCurrentObject ()) {
    GALGAS_uint_36__34_ var_mask_4296 = GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_4270.current (HERE).getter_mBDDBitCount (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 175)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 175)) ;
    GALGAS_lstring var_cstName_4351 = enumerator_4270.current (HERE).getter_mValueList (HERE).getter_mValueAtIndex (var_v_4239.operator_and (var_mask_4296 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 176)).getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 176)) ;
    result_outResult.plusAssign_operation(var_cstName_4351.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 177)) ;
    var_v_4239 = var_v_4239.right_shift_operation (enumerator_4270.current (HERE).getter_mBDDBitCount (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 178)) ;
    if (enumerator_4270.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 180)) ;
    }
    enumerator_4270.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_nameForValue [3] = {
  & kTypeDescriptor_GALGAS_uint_36__34_,
  & kTypeDescriptor_GALGAS_varList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_nameForValue ("nameForValue",
                                                              functionWithGenericHeader_nameForValue,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              2,
                                                              functionArgs_nameForValue) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'displayVarNames'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayVarNames (const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                              GALGAS_string & ioArgument_ioString,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("|"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 189)) ;
  cEnumerator_machineVarListForDisplay enumerator_4708 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_4708.hasCurrentObject ()) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4708.current (HERE).getter_mAttributeName (HERE).getter_stringByRightPadding (enumerator_4708.current (HERE).getter_mColumnLength (HERE), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 191)).add_operation (GALGAS_string (" |"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 191)) ;
    enumerator_4708.gotoNextObject () ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 193)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'displaySeparator'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displaySeparator (const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                               GALGAS_string & ioArgument_ioString,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("|"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 201)) ;
  cEnumerator_machineVarListForDisplay enumerator_5040 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_5040.hasCurrentObject ()) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), enumerator_5040.current (HERE).getter_mColumnLength (HERE).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)).add_operation (GALGAS_string ("|"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)) ;
    enumerator_5040.gotoNextObject () ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 205)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'displayValue'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayValue (const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                           const GALGAS_uint_36__34_ constinArgument_inValue,
                           GALGAS_string & ioArgument_ioString,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("|"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 214)) ;
  GALGAS_uint_36__34_ var_aValue_5381 = constinArgument_inValue ;
  cEnumerator_machineVarListForDisplay enumerator_5418 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_5418.hasCurrentObject ()) {
    GALGAS_uint_36__34_ var_mask_5442 = GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_5418.current (HERE).getter_mBDDBitCount (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 217)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 217)) ;
    GALGAS_lstring var_cstName_5497 = enumerator_5418.current (HERE).getter_mValueList (HERE).getter_mValueAtIndex (var_aValue_5381.operator_and (var_mask_5442 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 218)).getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 218)) ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string (" ").add_operation (var_cstName_5497.getter_string (HERE).getter_stringByRightPadding (enumerator_5418.current (HERE).getter_mColumnLength (HERE), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 219)).add_operation (GALGAS_string (" |"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 219)) ;
    var_aValue_5381 = var_aValue_5381.right_shift_operation (enumerator_5418.current (HERE).getter_mBDDBitCount (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 220)) ;
    enumerator_5418.gotoNextObject () ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 222)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'performDisplay'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performDisplay (const GALGAS_string constinArgument_inTitle,
                             const GALGAS_binaryset constinArgument_inValueSet,
                             const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("*** ").add_operation (constinArgument_inTitle, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)).getter_stringByRightPadding (GALGAS_uint ((uint32_t) 50U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)) ;
  GALGAS_uint var_bitCount_6019 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_machineVarListForDisplay enumerator_6050 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_6050.hasCurrentObject ()) {
    var_bitCount_6019 = var_bitCount_6019.add_operation (enumerator_6050.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 235)) ;
    enumerator_6050.gotoNextObject () ;
  }
  GALGAS_string var_s_6132 = GALGAS_string (" ") ;
  {
  routine_displayVarNames (constinArgument_inAttributeList, var_s_6132, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 239)) ;
  }
  var_s_6132.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 240)) ;
  {
  routine_displaySeparator (constinArgument_inAttributeList, var_s_6132, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 241)) ;
  }
  GALGAS_uint_36__34_list var_values_6261 = constinArgument_inValueSet.getter_uint_36__34_ValueList (var_bitCount_6019 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 242)) ;
  cEnumerator_uint_36__34_list enumerator_6320 (var_values_6261, kENUMERATION_UP) ;
  while (enumerator_6320.hasCurrentObject ()) {
    var_s_6132.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 244)) ;
    {
    routine_displayValue (constinArgument_inAttributeList, enumerator_6320.current (HERE).getter_mValue (HERE), var_s_6132, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 245)) ;
    }
    enumerator_6320.gotoNextObject () ;
  }
  var_s_6132.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 247)) ;
  inCompiler->printMessage (var_s_6132  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 248)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'addTransitionsToGraphvizString'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addTransitionsToGraphvizString (const GALGAS_eventDeclarationList_2D_element constinArgument_inEvent,
                                             const GALGAS_uint constinArgument_inArgVarVarTotalBitCount,
                                             const GALGAS_binaryset constinArgument_inEventTransformationSet,
                                             const GALGAS_varList constinArgument_inVarList,
                                             const GALGAS_uint constinArgument_inVarTotalBitCount,
                                             const GALGAS_varList constinArgument_inArgumentList,
                                             GALGAS_string & ioArgument_ioDotFileContents,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_36__34_list var_valueList_20650 = constinArgument_inEventTransformationSet.getter_uint_36__34_ValueList (constinArgument_inArgVarVarTotalBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 615)) ;
  cEnumerator_uint_36__34_list enumerator_20746 (var_valueList_20650, kENUMERATION_UP) ;
  while (enumerator_20746.hasCurrentObject ()) {
    GALGAS_string var_eventName_20771 = constinArgument_inEvent.getter_mEventName (HERE).getter_string (HERE) ;
    GALGAS_uint_36__34_ var_v_20813 = enumerator_20746.current (HERE).getter_mValue (HERE) ;
    GALGAS_uint_36__34_ var_source_20851 = var_v_20813.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (constinArgument_inVarTotalBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 619)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 619)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 619)) ;
    var_v_20813 = var_v_20813.right_shift_operation (constinArgument_inVarTotalBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 620)) ;
    GALGAS_uint_36__34_ var_target_20946 = var_v_20813.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (constinArgument_inVarTotalBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 621)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 621)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 621)) ;
    var_v_20813 = var_v_20813.right_shift_operation (constinArgument_inVarTotalBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 622)) ;
    cEnumerator_varList enumerator_21048 (constinArgument_inArgumentList, kENUMERATION_UP) ;
    while (enumerator_21048.hasCurrentObject ()) {
      GALGAS_uint_36__34_ var_argValue_21078 = var_v_20813.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_21048.current (HERE).getter_mBDDBitCount (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 624)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 624)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 624)) ;
      var_v_20813 = var_v_20813.right_shift_operation (enumerator_21048.current (HERE).getter_mBDDBitCount (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 625)) ;
      var_eventName_20771.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_21048.current (HERE).getter_mValueList (HERE).getter_mValueAtIndex (var_argValue_21078.getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 626)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 626)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 626)) ;
      enumerator_21048.gotoNextObject () ;
    }
    ioArgument_ioDotFileContents.plusAssign_operation(GALGAS_string ("  \"").add_operation (function_nameForValue (var_source_20851, constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 628)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 628)).add_operation (function_nameForValue (var_target_20946, constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)).add_operation (var_eventName_20771, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 630)).add_operation (GALGAS_string ("\"] ;\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 628)) ;
    enumerator_20746.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performDynamicAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performDynamicAnalysis (const GALGAS_string constinArgument_inSourceFileName,
                                     const GALGAS_ast constinArgument_inAST,
                                     const GALGAS_unifiedScalarTypeMap constinArgument_inUnifiedScalarTypeMap,
                                     const GALGAS_functionMap constinArgument_inFunctionMap,
                                     const GALGAS_machineMap /* constinArgument_inMachineMap */,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("*** File ").add_operation (constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("dynamicAnalysis.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 642)).add_operation (GALGAS_string (" ***\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 642))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 642)) ;
  cEnumerator_machineList enumerator_21782 (constinArgument_inAST.getter_mMachineList (HERE), kENUMERATION_UP) ;
  while (enumerator_21782.hasCurrentObject ()) {
    extensionMethod_performMachineDynamicAnalysis (enumerator_21782.current (HERE), constinArgument_inSourceFileName, constinArgument_inUnifiedScalarTypeMap, constinArgument_inAST.getter_mScenarioList (HERE), constinArgument_inFunctionMap, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 644)) ;
    enumerator_21782.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@implicationExpression computeExpressionBDD'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implicationExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                        const GALGAS_varMap constinArgument_inVarMap,
                                                                        const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                        GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implicationExpression * object = (const cPtr_implicationExpression *) inObject ;
  macroValidSharedObject (object, cPtr_implicationExpression) ;
  GALGAS_binaryset var_left_22458 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_22458, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 666)) ;
  GALGAS_binaryset var_right_22545 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_22545, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 667)) ;
  outArgument_outExpressionBDD = var_left_22458.getter_implies (var_right_22545 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 668)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implicationExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_implicationExpression.mSlotID,
                                             extensionMethod_implicationExpression_computeExpressionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implicationExpression_computeExpressionBDD (defineExtensionMethod_implicationExpression_computeExpressionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@logicalOrExpression computeExpressionBDD'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_logicalOrExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                      const GALGAS_varMap constinArgument_inVarMap,
                                                                      const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                      GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logicalOrExpression * object = (const cPtr_logicalOrExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalOrExpression) ;
  GALGAS_binaryset var_left_22898 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_22898, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 677)) ;
  GALGAS_binaryset var_right_22985 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_22985, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 678)) ;
  outArgument_outExpressionBDD = var_left_22898.operator_or (var_right_22985 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 679)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logicalOrExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_logicalOrExpression.mSlotID,
                                             extensionMethod_logicalOrExpression_computeExpressionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logicalOrExpression_computeExpressionBDD (defineExtensionMethod_logicalOrExpression_computeExpressionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@logicalAndExpression computeExpressionBDD'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_logicalAndExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                       const GALGAS_varMap constinArgument_inVarMap,
                                                                       const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                       GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logicalAndExpression * object = (const cPtr_logicalAndExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalAndExpression) ;
  GALGAS_binaryset var_left_23330 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_23330, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 688)) ;
  GALGAS_binaryset var_right_23417 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_23417, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 689)) ;
  outArgument_outExpressionBDD = var_left_23330.operator_and (var_right_23417 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 690)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logicalAndExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_logicalAndExpression.mSlotID,
                                             extensionMethod_logicalAndExpression_computeExpressionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logicalAndExpression_computeExpressionBDD (defineExtensionMethod_logicalAndExpression_computeExpressionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@comparisonInExpression computeExpressionBDD'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_comparisonInExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                         const GALGAS_varMap constinArgument_inVarMap,
                                                                         const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                         GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonInExpression * object = (const cPtr_comparisonInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonInExpression) ;
  GALGAS_enumConstantMap var_constantMap_23768 ;
  GALGAS_uint var_leftVarBDDStartBit_23802 ;
  GALGAS_uint var_leftVarBDDBitCount_23836 ;
  GALGAS_lstringlist joker_23729 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mAttributeName, joker_23729, var_constantMap_23768, var_leftVarBDDStartBit_23802, var_leftVarBDDBitCount_23836, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 699)) ;
  callExtensionMethod_computeRightOperandBDD ((const cPtr_comparisonRightOperand *) object->mProperty_mRightOperand.ptr (), constinArgument_inVarMap, var_constantMap_23768, var_leftVarBDDStartBit_23802, var_leftVarBDDBitCount_23836, object->mProperty_mOperator, constinArgument_inVarTotalBDDBitCount, outArgument_outExpressionBDD, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 706)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_comparisonInExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_comparisonInExpression.mSlotID,
                                             extensionMethod_comparisonInExpression_computeExpressionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_comparisonInExpression_computeExpressionBDD (defineExtensionMethod_comparisonInExpression_computeExpressionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@attributeAsComparisonRightOperand computeRightOperandBDD'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint var_rightVarBDDStartBit_24873 ;
  GALGAS_lstringlist joker_24836_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_24836_1 ; // Joker input parameter
  GALGAS_uint joker_24879 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mAttributeName, joker_24836_2, joker_24836_1, var_rightVarBDDStartBit_24873, joker_24879, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 738)) ;
  const enumGalgasBool test_0 = object->mProperty_mHasOldQualifier.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_rightVarBDDStartBit_24873 = var_rightVarBDDStartBit_24873.substract_operation (constinArgument_inVarTotalBDDBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 745)) ;
  }
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_rightVarBDDStartBit_24873, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 749)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_rightVarBDDStartBit_24873, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 754)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_attributeAsComparisonRightOperand_computeRightOperandBDD (void) {
  enterExtensionMethod_computeRightOperandBDD (kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand.mSlotID,
                                               extensionMethod_attributeAsComparisonRightOperand_computeRightOperandBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_attributeAsComparisonRightOperand_computeRightOperandBDD (defineExtensionMethod_attributeAsComparisonRightOperand_computeRightOperandBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@constantAsComparisonRightOperand computeRightOperandBDD'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint var_constantValue_25805 ;
  constinArgument_inConstantMap.method_searchKey (object->mProperty_mConstantName, var_constantValue_25805, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 771)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_constantValue_25805.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 777)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 774)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_constantValue_25805.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 779)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constantAsComparisonRightOperand_computeRightOperandBDD (void) {
  enterExtensionMethod_computeRightOperandBDD (kTypeDescriptor_GALGAS_constantAsComparisonRightOperand.mSlotID,
                                               extensionMethod_constantAsComparisonRightOperand_computeRightOperandBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constantAsComparisonRightOperand_computeRightOperandBDD (defineExtensionMethod_constantAsComparisonRightOperand_computeRightOperandBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@assignmentInstruction computeInstructionBDD'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_enumConstantMap var_constantMap_27448 ;
  GALGAS_uint var_leftVarBDDStartBit_27482 ;
  GALGAS_uint var_leftVarBDDBitCount_27516 ;
  GALGAS_lstringlist joker_27409 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mTargetVarName, joker_27409, var_constantMap_27448, var_leftVarBDDStartBit_27482, var_leftVarBDDBitCount_27516, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 824)) ;
  GALGAS_binaryset var_oldAttributeValueSet_27558 = ioArgument_ioArgOldVarVarValueSet ;
  callExtensionMethod_computeAssignmentInstructionBDD ((const cPtr_assignmentSourceExpression *) object->mProperty_mSourceExpression.ptr (), constinArgument_inVarMap, constinArgument_inFunctionMap, var_constantMap_27448, var_leftVarBDDStartBit_27482, var_leftVarBDDBitCount_27516, constinArgument_inArgOldVarVarBDDBitCount, ioArgument_ioArgOldVarVarValueSet, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 832)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_oldAttributeValueSet_27558.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetVarName.getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 842)), GALGAS_string ("this assignment has no effect and is useless"), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 842)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstruction_computeInstructionBDD (void) {
  enterExtensionMethod_computeInstructionBDD (kTypeDescriptor_GALGAS_assignmentInstruction.mSlotID,
                                              extensionMethod_assignmentInstruction_computeInstructionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstruction_computeInstructionBDD (defineExtensionMethod_assignmentInstruction_computeInstructionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@assertInstruction computeInstructionBDD'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_binaryset var_expressionValueSet_28364 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mAssertExpression.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_expressionValueSet_28364, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 854)) ;
  const enumGalgasBool test_0 = var_expressionValueSet_28364.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 855)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("assert expression is always false"), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 856)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionValueSet_28364.getter_isFull (SOURCE_FILE ("dynamicAnalysis.galgas", 857)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("assert expression is always true"), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 858)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_binaryset var_v_28622 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_28364 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 860)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_v_28622.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("assert expression violation"), fixItArray5  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 862)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstruction_computeInstructionBDD (void) {
  enterExtensionMethod_computeInstructionBDD (kTypeDescriptor_GALGAS_assertInstruction.mSlotID,
                                              extensionMethod_assertInstruction_computeInstructionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstruction_computeInstructionBDD (defineExtensionMethod_assertInstruction_computeInstructionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@ifInstruction computeInstructionBDD'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_binaryset var_oldAttributeValueSet_29130 = ioArgument_ioArgOldVarVarValueSet ;
  GALGAS_binaryset var_expressionValueSet_29284 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mTestExpression.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_expressionValueSet_29284, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 877)) ;
  GALGAS_binaryset var_resultingThenCondition_29325 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_29284 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 878)) ;
  GALGAS_binaryset var_resultingElseCondition_29411 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_29284.operator_tilde (SOURCE_FILE ("dynamicAnalysis.galgas", 879)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 879)) ;
  const enumGalgasBool test_0 = var_expressionValueSet_29284.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 880)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always false"), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 881)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionValueSet_29284.getter_isFull (SOURCE_FILE ("dynamicAnalysis.galgas", 882)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always true"), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 883)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = var_resultingThenCondition_29325.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 884)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always false within current context"), fixItArray5  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 885)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_resultingThenCondition_29325.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always true within current context"), fixItArray7  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 887)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = var_resultingElseCondition_29411.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 888)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always true"), fixItArray9  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 889)) ;
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_resultingElseCondition_29411.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always false within current context"), fixItArray11  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 891)) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioArgOldVarVarValueSet = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 893)) ;
  const enumGalgasBool test_12 = var_resultingThenCondition_29325.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 895)).boolEnum () ;
  if (kBoolTrue == test_12) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("then branch is never executed"), fixItArray13  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 896)) ;
  }else if (kBoolFalse == test_12) {
    GALGAS_binaryset var_thenBranchAttributeValueSet_30428 = var_resultingThenCondition_29325 ;
    extensionMethod_computeInstructionListBDD (object->mProperty_mThenInstructionList, constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, var_thenBranchAttributeValueSet_30428, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 899)) ;
    ioArgument_ioArgOldVarVarValueSet = var_thenBranchAttributeValueSet_30428 ;
  }
  const enumGalgasBool test_14 = var_resultingElseCondition_29411.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 903)).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("else branch is never executed"), fixItArray15  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 904)) ;
  }else if (kBoolFalse == test_14) {
    GALGAS_binaryset var_elseBranchAttributeValueSet_30849 = var_resultingElseCondition_29411 ;
    extensionMethod_computeInstructionListBDD (object->mProperty_mElseInstructionList, constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, var_elseBranchAttributeValueSet_30849, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 907)) ;
    ioArgument_ioArgOldVarVarValueSet = ioArgument_ioArgOldVarVarValueSet.operator_or (var_elseBranchAttributeValueSet_30849 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 908)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, var_oldAttributeValueSet_29130.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
  if (kBoolTrue == test_16) {
    TC_Array <C_FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (object->mProperty_mIFinstructionLocation, GALGAS_string ("this 'if' instruction has no effect and is useless"), fixItArray17  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 912)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstruction_computeInstructionBDD (void) {
  enterExtensionMethod_computeInstructionBDD (kTypeDescriptor_GALGAS_ifInstruction.mSlotID,
                                              extensionMethod_ifInstruction_computeInstructionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstruction_computeInstructionBDD (defineExtensionMethod_ifInstruction_computeInstructionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@varAsAssignmentSourceExpression computeAssignmentInstructionBDD'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint var_sourceVarBDDStartBit_32175 ;
  GALGAS_uint var_sourceVarBDDBitCount_32211 ;
  GALGAS_lstringlist joker_32137_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_32137_1 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mSourceVarName, joker_32137_2, joker_32137_1, var_sourceVarBDDStartBit_32175, var_sourceVarBDDBitCount_32211, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 937)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetVarBDDBitCount.objectCompare (var_sourceVarBDDBitCount_32211)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mSourceVarName.getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 944)), GALGAS_string ("*** INTERNAL ERROR ").add_operation (constinArgument_inTargetVarBDDBitCount.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 944)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 944)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 944)).add_operation (var_sourceVarBDDBitCount_32211.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 944)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 944)).add_operation (GALGAS_string (" ***"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 944)), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 944)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetVarBDDStartBit.objectCompare (var_sourceVarBDDStartBit_32175)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_binaryset var_equality_32685 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, constinArgument_inArgOldVarVarBDDBitCount, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 949)) ;
    GALGAS_binaryset var_expressionValueSet_32865 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_equality_32685 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 955)) ;
    GALGAS_binaryset var_v_32922 = var_expressionValueSet_32865.getter_existsOnBitRange (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 956)) ;
    GALGAS_binaryset var_constraint_33152 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, var_sourceVarBDDStartBit_32175, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 962)) ;
    ioArgument_ioArgOldVarVarValueSet = var_v_32922.operator_and (var_constraint_33152 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 968)).getter_existOnBitIndexAndBeyond (constinArgument_inArgOldVarVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 968)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  enterExtensionMethod_computeAssignmentInstructionBDD (kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression.mSlotID,
                                                        extensionMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD (defineExtensionMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@constantAsAssignmentSourceExpression computeAssignmentInstructionBDD'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint var_constantValue_33985 ;
  constinArgument_constantMap.method_searchKey (object->mProperty_mConstantName, var_constantValue_33985, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 983)) ;
  GALGAS_binaryset var_expressionValueSet_34011 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, var_constantValue_33985.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 987)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 984)) ;
  GALGAS_binaryset var_v_34162 = ioArgument_ioArgOldVarVarValueSet.getter_existsOnBitRange (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 989)) ;
  ioArgument_ioArgOldVarVarValueSet = var_v_34162.operator_and (var_expressionValueSet_34011 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 993)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  enterExtensionMethod_computeAssignmentInstructionBDD (kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression.mSlotID,
                                                        extensionMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD (defineExtensionMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@functionAsAssignmentSourceExpression computeAssignmentInstructionBDD'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint var_operandVarBDDStartBit_35099 ;
  GALGAS_uint var_operandVarBDDBitCount_35136 ;
  GALGAS_lstringlist joker_35060_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_35060_1 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mOperandName, joker_35060_2, joker_35060_1, var_operandVarBDDStartBit_35099, var_operandVarBDDBitCount_35136, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1012)) ;
  GALGAS_binaryset var_functionTable_35161 = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 1019)) ;
  GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_35296 ;
  GALGAS_unifiedScalarTypeMap_2D_proxy joker_35234_2 ; // Joker input parameter
  GALGAS_unifiedScalarTypeMap_2D_proxy joker_35234_1 ; // Joker input parameter
  constinArgument_inFunctionMap.method_searchKey (object->mProperty_mFunctionName, joker_35234_2, joker_35234_1, var_decoratedFunctionValueList_35296, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1020)) ;
  cEnumerator_decoratedFunctionValueList enumerator_35335 (var_decoratedFunctionValueList_35296, kENUMERATION_UP) ;
  while (enumerator_35335.hasCurrentObject ()) {
    GALGAS_binaryset var_op_35349 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_operandVarBDDStartBit_35099, var_operandVarBDDBitCount_35136, enumerator_35335.current (HERE).getter_mOperandValue (HERE).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1025)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1022)) ;
    GALGAS_binaryset var_result_35504 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_inArgOldVarVarBDDBitCount, constinArgument_leftVarBDDBitCount, enumerator_35335.current (HERE).getter_mResultValue (HERE).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1030)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1027)) ;
    var_functionTable_35161 = var_functionTable_35161.operator_or (var_op_35349.operator_and (var_result_35504 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1032)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1032)) ;
    enumerator_35335.gotoNextObject () ;
  }
  GALGAS_binaryset var_expressionValueSet_35733 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_functionTable_35161 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1035)) ;
  GALGAS_binaryset var_constraint_35791 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, constinArgument_inArgOldVarVarBDDBitCount, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1036)) ;
  GALGAS_binaryset var_v_35937 = var_expressionValueSet_35733.getter_existsOnBitRange (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1041)) ;
  ioArgument_ioArgOldVarVarValueSet = var_v_35937.operator_and (var_constraint_35791 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1046)).getter_existOnBitIndexAndBeyond (constinArgument_inArgOldVarVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1046)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  enterExtensionMethod_computeAssignmentInstructionBDD (kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression.mSlotID,
                                                        extensionMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD (defineExtensionMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'CCodeGenerationTemplates'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'CCodeGenerationTemplates enumerationDeclaration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_enumerationDeclaration (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & in_ENUMERATION_5F_NAME,
                                                                                   const GALGAS_lstringlist & in_CONSTANT_5F_LIST
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE HAS BEEN GENERATED BY OMNIBUS TOOL. DO NOT MODIFY IT!\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#ifndef " ;
  result << in_ENUMERATION_5F_NAME.stringValue () ;
  result << "_ENUMERATION_DEFINED\n"
    "#define " ;
  result << in_ENUMERATION_5F_NAME.stringValue () ;
  result << "_ENUMERATION_DEFINED\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "typedef enum {\n" ;
  GALGAS_uint index_575_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_575 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_575.hasCurrentObject ()) {
      result << "  " ;
      result << in_ENUMERATION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("enum-declaration.h.galgasTemplate", 13)).stringValue () ;
      result << "_" ;
      result << enumerator_575.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("enum-declaration.h.galgasTemplate", 13)).stringValue () ;
      if (enumerator_575.hasNextObject ()) {
        result << ",\n" ;
      }
      index_575_.increment () ;
      enumerator_575.gotoNextObject () ;
    }
  }
  result << "\n"
    "}  enum_" ;
  result << in_ENUMERATION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("enum-declaration.h.galgasTemplate", 16)).stringValue () ;
  result << " ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'CCodeGenerationTemplates machineDeclaration'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineDeclaration (C_Compiler * inCompiler,
                                                                               const GALGAS_string & in_FILE_5F_NAME,
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
    "#ifndef " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << "_MACHINE_DEFINED\n"
    "#define " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << "_MACHINE_DEFINED\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  GALGAS_uint index_550_ (0) ;
  if (in_ENUM_5F_DECLARATION_5F_MAP.isValid ()) {
    cEnumerator_unifiedScalarTypeMap enumerator_550 (in_ENUM_5F_DECLARATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_550.hasCurrentObject ()) {
      result << "#include \"" ;
      result << in_FILE_5F_NAME.stringValue () ;
      result << "-enum-" ;
      result << enumerator_550.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_550_.increment () ;
      enumerator_550.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " {\n"
    "//--- Default constructor\n"
    "  public : machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " (const machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " &) ;\n"
    "  private : machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " & operator = (const machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Attributes\n" ;
  GALGAS_uint index_1053_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1053 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1053.hasCurrentObject ()) {
      result << "  private : enum_" ;
      result << enumerator_1053.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 27)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 27)).stringValue () ;
      result << " " ;
      result << enumerator_1053.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "  private : enum_" ;
      result << enumerator_1053.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).stringValue () ;
      result << " old_" ;
      result << enumerator_1053.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).stringValue () ;
      result << " ;\n" ;
      index_1053_.increment () ;
      enumerator_1053.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Accessors\n" ;
  GALGAS_uint index_1344_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1344 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1344.hasCurrentObject ()) {
      result << "  public : inline enum_" ;
      result << enumerator_1344.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 33)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 33)).stringValue () ;
      result << " get_" ;
      result << enumerator_1344.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 33)).stringValue () ;
      result << " (void) const {\n"
        "    return " ;
      result << enumerator_1344.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 34)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  public : inline bool " ;
      result << enumerator_1344.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 36)).stringValue () ;
      result << "_didChange (void) const {\n"
        "    return old_" ;
      result << enumerator_1344.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 37)).stringValue () ;
      result << " != " ;
      result << enumerator_1344.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 37)).stringValue () ;
      result << " ;\n"
        "  }\n" ;
      index_1344_.increment () ;
      enumerator_1344.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---\n"
    "  public : void update (void) ;\n"
    " \n"
    "//--- Events\n" ;
  GALGAS_uint index_1871_ (0) ;
  if (in_EVENT_5F_MAP.isValid ()) {
    cEnumerator_eventMap enumerator_1871 (in_EVENT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1871.hasCurrentObject ()) {
      result << "  public : void event_" ;
      result << enumerator_1871.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 46)).stringValue () ;
      result << " (" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1871.current_mDecoratedArgumentList (HERE).getter_length (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "void" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_2043_ (0) ;
        if (enumerator_1871.current_mDecoratedArgumentList (HERE).isValid ()) {
          cEnumerator_decoratedArgumentList enumerator_2043 (enumerator_1871.current_mDecoratedArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_2043.hasCurrentObject ()) {
            result << "const enum_" ;
            result << enumerator_2043.current_mArgumentTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 51)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 51)).stringValue () ;
            result << " " ;
            result << enumerator_2043.current_mArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 51)).stringValue () ;
            if (enumerator_2043.hasNextObject ()) {
              result << ", " ;
            }
            index_2043_.increment () ;
            enumerator_2043.gotoNextObject () ;
          }
        }
      }
      result << ") ;\n" ;
      index_1871_.increment () ;
      enumerator_1871.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#endif\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'CCodeGenerationTemplates machineImplementation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineImplementation (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & in_FILE_5F_NAME,
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
  result << in_FILE_5F_NAME.stringValue () ;
  result << "-machine-" ;
  result << in_MACHINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 5)).stringValue () ;
  result << ".h\"\n" ;
  GALGAS_uint index_416_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    cEnumerator_functionMap enumerator_416 (in_FUNCTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_416.hasCurrentObject ()) {
      result << "#include \"" ;
      result << in_FILE_5F_NAME.stringValue () ;
      result << "-function-" ;
      result << enumerator_416.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 8)).stringValue () ;
      result << ".h\"\n" ;
      index_416_.increment () ;
      enumerator_416.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << "::machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " (void) :\n" ;
  GALGAS_uint index_708_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_708 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_708.hasCurrentObject ()) {
      result << enumerator_708.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).stringValue () ;
      result << " (" ;
      result << enumerator_708.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).stringValue () ;
      result << "_" ;
      result << enumerator_708.current_mInitialValueConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).stringValue () ;
      result << "),\n"
        "old_" ;
      result << enumerator_708.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).stringValue () ;
      result << " (" ;
      result << enumerator_708.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).stringValue () ;
      result << "_" ;
      result << enumerator_708.current_mInitialValueConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).stringValue () ;
      result << ")" ;
      if (enumerator_708.hasNextObject ()) {
        result << ",\n" ;
      }
      index_708_.increment () ;
      enumerator_708.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "void machine_" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << "::update (void) {\n" ;
  GALGAS_uint index_1247_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1247 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1247.hasCurrentObject ()) {
      result << "  old_" ;
      result << enumerator_1247.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 28)).stringValue () ;
      result << " = " ;
      result << enumerator_1247.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 28)).stringValue () ;
      result << " ;\n" ;
      index_1247_.increment () ;
      enumerator_1247.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_1388_ (0) ;
  if (in_EVENT_5F_MAP.isValid ()) {
    cEnumerator_eventMap enumerator_1388 (in_EVENT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1388.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "\n"
        "void machine_" ;
      result << in_MACHINE_5F_NAME.stringValue () ;
      result << "::event_" ;
      result << enumerator_1388.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 36)).stringValue () ;
      result << " (" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1388.current_mDecoratedArgumentList (HERE).getter_length (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 37)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "void" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1705_ (0) ;
        if (enumerator_1388.current_mDecoratedArgumentList (HERE).isValid ()) {
          cEnumerator_decoratedArgumentList enumerator_1705 (enumerator_1388.current_mDecoratedArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_1705.hasCurrentObject ()) {
            result << "const enum_" ;
            result << enumerator_1705.current_mArgumentTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).stringValue () ;
            result << " " ;
            result << enumerator_1705.current_mArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).stringValue () ;
            if (enumerator_1705.hasNextObject ()) {
              result << ", " ;
            }
            index_1705_.increment () ;
            enumerator_1705.gotoNextObject () ;
          }
        }
      }
      result << ") {\n" ;
      result << extensionGetter_generateCCode (enumerator_1388.current_mDecoratedEventInstructionList (HERE), GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 46)).stringValue () ;
      result << "}\n"
        "\n" ;
      index_1388_.increment () ;
      enumerator_1388.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'CCodeGenerationTemplates functionDeclaration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionDeclaration (C_Compiler * /* inCompiler */,
                                                                                const GALGAS_string & in_FILE_5F_NAME,
                                                                                const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                const GALGAS_string & in_RESULT_5F_TYPE_5F_NAME,
                                                                                const GALGAS_uint & in_OPERAND_5F_VALUE_5F_COUNT
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE HAS BEEN GENERATED BY OMNIBUS TOOL. DO NOT MODIFY IT!\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#ifndef " ;
  result << in_FUNCTION_5F_NAME.stringValue () ;
  result << "_FUNCTION_DEFINED\n"
    "#define " ;
  result << in_FUNCTION_5F_NAME.stringValue () ;
  result << "_FUNCTION_DEFINED\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#include \"" ;
  result << in_FILE_5F_NAME.stringValue () ;
  result << "-enum-" ;
  result << in_RESULT_5F_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
  result << ".h\"\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extern const enum_" ;
  result << in_RESULT_5F_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 14)).stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 14)).stringValue () ;
  result << " [" ;
  result << in_OPERAND_5F_VALUE_5F_COUNT.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 14)).stringValue () ;
  result << "] ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'CCodeGenerationTemplates functionImplementation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionImplementation (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & in_FILE_5F_NAME,
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
  result << in_FILE_5F_NAME.stringValue () ;
  result << "-function-" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 5)).stringValue () ;
  result << ".h\"\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "const enum_" ;
  result << in_RESULT_5F_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).stringValue () ;
  result << " [" ;
  result << in_VALUE_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).stringValue () ;
  result << "] = {" ;
  GALGAS_uint index_688_ (0) ;
  if (in_VALUE_5F_LIST.isValid ()) {
    cEnumerator_decoratedFunctionValueList enumerator_688 (in_VALUE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_688.hasCurrentObject ()) {
      result << "\n"
        "  " ;
      result << in_RESULT_5F_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
      result << "_" ;
      result << enumerator_688.current_mResultName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
      result << " /* " ;
      result << enumerator_688.current_mOperandName (HERE).getter_string (HERE).stringValue () ;
      result << " */" ;
      if (enumerator_688.hasNextObject ()) {
        result << "," ;
      }
      index_688_.increment () ;
      enumerator_688.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

