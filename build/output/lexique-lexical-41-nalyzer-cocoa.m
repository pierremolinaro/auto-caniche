//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-lexical-41-nalyzer-cocoa.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------------------------------------------------*
//            Unicode test functions                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*
 
//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Lexique_lexicalAnalyzer

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Replacements                                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Delimiters                                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) indexingDirectory {
  return @"" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    T I T L E S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Terminal Symbols as end of script in template mark                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Key words table 'keyWordList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const C_cocoa_lexique_table_entry ktable_for_lexicalAnalyzer_keyWordList [16] = {
  {"do", lexicalAnalyzer_1_do},
  {"if", lexicalAnalyzer_1_if},
  {"old", lexicalAnalyzer_1_old},
  {"var", lexicalAnalyzer_1_var},
  {"case", lexicalAnalyzer_1_case},
  {"else", lexicalAnalyzer_1_else},
  {"enum", lexicalAnalyzer_1_enum},
  {"event", lexicalAnalyzer_1_event},
  {"assert", lexicalAnalyzer_1_assert},
  {"switch", lexicalAnalyzer_1_switch},
  {"system", lexicalAnalyzer_1_system},
  {"ensures", lexicalAnalyzer_1_ensures},
  {"machine", lexicalAnalyzer_1_machine},
  {"function", lexicalAnalyzer_1_function},
  {"scenario", lexicalAnalyzer_1_scenario},
  {"invariant", lexicalAnalyzer_1_invariant}
} ;

static NSInteger search_into_lexicalAnalyzer_keyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_lexicalAnalyzer_keyWordList, 16) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               P A R S E    L E X I C A L    T O K E N                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (void) parseLexicalTokenForLexicalColoring {
  mLoop = YES ;
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
    [mLexicalAttribute_tokenString setString:@""] ;
    mLexicalAttribute_uint32value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (mTokenCode == 0) {
        mTokenCode = search_into_lexicalAnalyzer_keyWordList (mLexicalAttribute_tokenString) ;
      }
      if (mTokenCode == 0) {
        mTokenCode = lexicalAnalyzer_1_identifier ;
      }
    }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__3D__3D_ ;
    }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__2D__3E_ ;
    }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__21__3D_ ;
    }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__7D_ ;
    }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__7C_ ;
    }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__7B_ ;
    }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__5D_ ;
    }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__5B_ ;
    }else if (scanningOk && [self testForInputString:@"\?" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__3F_ ;
    }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__3D_ ;
    }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__3A_ ;
    }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__2E_ ;
    }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__2C_ ;
    }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__29_ ;
    }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__28_ ;
    }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__26_ ;
    }else if (scanningOk && [self testForInputString:@"!" advance:YES]) {
      mTokenCode = lexicalAnalyzer_1__21_ ;
    }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      scanner_cocoa_routine_convertDecimalStringIntoUInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint32value) ;
      mTokenCode = lexicalAnalyzer_1_integer ;
    }else if (scanningOk && ([self testForInputChar:34])) {
      do {
        if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:34])) {
        mTokenCode = lexicalAnalyzer_1_literal_5F_string ;
      }else{
        scanningOk = NO ;
      }
    }else if (scanningOk && ([self testForInputChar:36])) {
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
      }else{
        scanningOk = NO ;
      }
      mTokenCode = lexicalAnalyzer_1_enum_2D_type_2D_name ;
    }else if (scanningOk && ([self testForInputChar:64])) {
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
      }else{
        scanningOk = NO ;
      }
      mTokenCode = lexicalAnalyzer_1_machine_2D_type_2D_name ;
    }else if (scanningOk && ([self testForInputChar:35])) {
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      mTokenCode = lexicalAnalyzer_1_comment ;
    }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
    }else if ([self testForInputChar:'\0']) { // End of source text ? 
      mTokenCode = lexicalAnalyzer_1_ ; // Empty string code
    }else{ // Unknown input character
      scanningOk = NO ;
      [self advance] ;
    }
  //--- Error ?
    if (! scanningOk) {
      mTokenCode = -1 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   T E R M I N A L    C O U N T                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) terminalVocabularyCount {
  return 39 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S T Y L E   C O U N T                                                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleCount {
  return 8 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                I S    T E M P L A T E    L E X I Q U E                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) isTemplateLexique {
  return NO ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [40] = {0,
    0 /* lexicalAnalyzer_1_identifier */,
    3 /* lexicalAnalyzer_1_integer */,
    4 /* lexicalAnalyzer_1_literal_5F_string */,
    5 /* lexicalAnalyzer_1_enum_2D_type_2D_name */,
    6 /* lexicalAnalyzer_1_machine_2D_type_2D_name */,
    7 /* lexicalAnalyzer_1_comment */,
    1 /* lexicalAnalyzer_1_assert */,
    1 /* lexicalAnalyzer_1_do */,
    1 /* lexicalAnalyzer_1_else */,
    1 /* lexicalAnalyzer_1_enum */,
    1 /* lexicalAnalyzer_1_ensures */,
    1 /* lexicalAnalyzer_1_event */,
    1 /* lexicalAnalyzer_1_function */,
    1 /* lexicalAnalyzer_1_if */,
    1 /* lexicalAnalyzer_1_invariant */,
    1 /* lexicalAnalyzer_1_machine */,
    1 /* lexicalAnalyzer_1_old */,
    1 /* lexicalAnalyzer_1_scenario */,
    1 /* lexicalAnalyzer_1_system */,
    1 /* lexicalAnalyzer_1_switch */,
    1 /* lexicalAnalyzer_1_case */,
    1 /* lexicalAnalyzer_1_var */,
    2 /* lexicalAnalyzer_1__3A_ */,
    2 /* lexicalAnalyzer_1__2C_ */,
    2 /* lexicalAnalyzer_1__21_ */,
    2 /* lexicalAnalyzer_1__7B_ */,
    2 /* lexicalAnalyzer_1__7D_ */,
    2 /* lexicalAnalyzer_1__2D__3E_ */,
    2 /* lexicalAnalyzer_1__3D_ */,
    2 /* lexicalAnalyzer_1__5B_ */,
    2 /* lexicalAnalyzer_1__5D_ */,
    2 /* lexicalAnalyzer_1__3D__3D_ */,
    2 /* lexicalAnalyzer_1__26_ */,
    2 /* lexicalAnalyzer_1__7C_ */,
    2 /* lexicalAnalyzer_1__21__3D_ */,
    2 /* lexicalAnalyzer_1__28_ */,
    2 /* lexicalAnalyzer_1__29_ */,
    2 /* lexicalAnalyzer_1__3F_ */,
    2 /* lexicalAnalyzer_1__2E_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [40] = {NO,
    YES /* lexicalAnalyzer_1_identifier */,
    YES /* lexicalAnalyzer_1_integer */,
    NO /* lexicalAnalyzer_1_literal_5F_string */,
    YES /* lexicalAnalyzer_1_enum_2D_type_2D_name */,
    YES /* lexicalAnalyzer_1_machine_2D_type_2D_name */,
    NO /* lexicalAnalyzer_1_comment */,
    YES /* lexicalAnalyzer_1_assert */,
    YES /* lexicalAnalyzer_1_do */,
    YES /* lexicalAnalyzer_1_else */,
    YES /* lexicalAnalyzer_1_enum */,
    YES /* lexicalAnalyzer_1_ensures */,
    YES /* lexicalAnalyzer_1_event */,
    YES /* lexicalAnalyzer_1_function */,
    YES /* lexicalAnalyzer_1_if */,
    YES /* lexicalAnalyzer_1_invariant */,
    YES /* lexicalAnalyzer_1_machine */,
    YES /* lexicalAnalyzer_1_old */,
    YES /* lexicalAnalyzer_1_scenario */,
    YES /* lexicalAnalyzer_1_system */,
    YES /* lexicalAnalyzer_1_switch */,
    YES /* lexicalAnalyzer_1_case */,
    YES /* lexicalAnalyzer_1_var */,
    YES /* lexicalAnalyzer_1__3A_ */,
    YES /* lexicalAnalyzer_1__2C_ */,
    YES /* lexicalAnalyzer_1__21_ */,
    YES /* lexicalAnalyzer_1__7B_ */,
    YES /* lexicalAnalyzer_1__7D_ */,
    YES /* lexicalAnalyzer_1__2D__3E_ */,
    YES /* lexicalAnalyzer_1__3D_ */,
    YES /* lexicalAnalyzer_1__5B_ */,
    YES /* lexicalAnalyzer_1__5D_ */,
    YES /* lexicalAnalyzer_1__3D__3D_ */,
    YES /* lexicalAnalyzer_1__26_ */,
    YES /* lexicalAnalyzer_1__7C_ */,
    YES /* lexicalAnalyzer_1__21__3D_ */,
    YES /* lexicalAnalyzer_1__28_ */,
    YES /* lexicalAnalyzer_1__29_ */,
    YES /* lexicalAnalyzer_1__3F_ */,
    YES /* lexicalAnalyzer_1__2E_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             S T Y L E   N A M E    F O R    I N D E X                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 8)) {
    NSString * kStyleArray [8] = {
      @"Default Style",
      @"Keywords",
      @"Delimiters",
      @"Integer Constants",
      @"String Constants",
      @"Enum type Names ($...)",
      @"Machine type Names (@...)",
      @"Comments"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 8)) {
    NSString * kStyleArray [8] = {
      @"lexicalAnalyzer",
      @"lexicalAnalyzer-keywordsStyle",
      @"lexicalAnalyzer-delimitersStyle",
      @"lexicalAnalyzer-integerStyle",
      @"lexicalAnalyzer-stringStyle",
      @"lexicalAnalyzer-enumTypeNameStyle",
      @"lexicalAnalyzer-machineTypeNameStyle",
      @"lexicalAnalyzer-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         L E X I Q U E   I D E N T I F I E R                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) lexiqueIdentifier {
  return @"lexicalAnalyzer" ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


