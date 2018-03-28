//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Token.h"
#import "F_CocoaWrapperForGalgas.h"
#import "OC_GGS_CommandLineOption.h"
#import "lexique-lexical-41-nalyzer-cocoa.h"

#ifdef USER_DEFAULT_COLORS_DEFINED
  #import "user_default_colors.h"
#endif

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma mark Nibs

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

NSArray * nibsAndClasses (void) {
  return [NSArray array] ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma mark Command Line Options

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Command Line Options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#import "option-omnibus-5F-options-cocoa.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterOptions (NSMutableArray * ioBoolOptionArray,
                   NSMutableArray * ioUIntOptionArray,
                   NSMutableArray * ioStringOptionArray,
                   NSMutableArray * ioStringListOptionArray) {
  enterOptionsFor_omnibus_5F_options (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;
  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"quiet_output"
    commandChar:'q'
    commandString:@"quiet"
    comment:@"Quiet output"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma mark Lexique lexicalAnalyzer

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const UInt16 * gPopUpData_lexicalAnalyzer [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Lexique interface                                                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@interface OC_Tokenizer_lexicalAnalyzer : OC_Lexique_lexicalAnalyzer {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@implementation OC_Tokenizer_lexicalAnalyzer

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) blockComment {
  return @"#" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (const UInt16 * *) popupListData {
  return gPopUpData_lexicalAnalyzer ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) textMacroCount {
  return 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) tabItemTitle {
  return @"Source" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@end



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

OC_Lexique * tokenizerForExtension (const NSString * inExtension) {
  OC_Lexique * result = nil ;
  if ([inExtension isEqualToString:@"omnibus"]) {
    result = [OC_Tokenizer_lexicalAnalyzer new] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

NSArray * tokenizers (void) {
  return [NSArray arrayWithObjects:
    [OC_Tokenizer_lexicalAnalyzer new],
    nil
  ] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

NSString * buildRunOption (void) {
  return @"" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


