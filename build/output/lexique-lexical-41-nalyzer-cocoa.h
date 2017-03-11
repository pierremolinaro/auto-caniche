//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum {lexicalAnalyzer_1_,
  lexicalAnalyzer_1_identifier,
  lexicalAnalyzer_1_integer,
  lexicalAnalyzer_1_literal_5F_string,
  lexicalAnalyzer_1_enum_2D_type_2D_name,
  lexicalAnalyzer_1_comment,
  lexicalAnalyzer_1_assert,
  lexicalAnalyzer_1_do,
  lexicalAnalyzer_1_else,
  lexicalAnalyzer_1_enum,
  lexicalAnalyzer_1_ensures,
  lexicalAnalyzer_1_event,
  lexicalAnalyzer_1_function,
  lexicalAnalyzer_1_if,
  lexicalAnalyzer_1_invariant,
  lexicalAnalyzer_1_machine,
  lexicalAnalyzer_1_old,
  lexicalAnalyzer_1_scenario,
  lexicalAnalyzer_1_system,
  lexicalAnalyzer_1_var,
  lexicalAnalyzer_1__3A_,
  lexicalAnalyzer_1__2C_,
  lexicalAnalyzer_1__21_,
  lexicalAnalyzer_1__7B_,
  lexicalAnalyzer_1__7D_,
  lexicalAnalyzer_1__2D__3E_,
  lexicalAnalyzer_1__3D_,
  lexicalAnalyzer_1__5B_,
  lexicalAnalyzer_1__5D_,
  lexicalAnalyzer_1__3D__3D_,
  lexicalAnalyzer_1__26_,
  lexicalAnalyzer_1__7C_,
  lexicalAnalyzer_1__21__3D_,
  lexicalAnalyzer_1__28_,
  lexicalAnalyzer_1__29_,
  lexicalAnalyzer_1__3F_,
  lexicalAnalyzer_1__2E_
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        U N I C O D E    T E S T    F U N C T I O N S                                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Lexique_lexicalAnalyzer : OC_Lexique {
//--- Attributes
  @private NSMutableString * mLexicalAttribute_tokenString ;
  @private UInt32 mLexicalAttribute_uint32value ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//---------------------------------------------------------------------------------------------------------------------*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

