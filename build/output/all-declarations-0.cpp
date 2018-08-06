#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cTokenFor_lexicalAnalyzer::cTokenFor_lexicalAnalyzer (void) :
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_lexicalAnalyzer::C_Lexique_lexicalAnalyzer (C_Compiler * inCallerCompiler,
                                                      const C_String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_lexicalAnalyzer::C_Lexique_lexicalAnalyzer (C_Compiler * inCallerCompiler,
                                                      const C_String & inSourceString,
                                                      const C_String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_lexicalAnalyzer::indexingDirectory (void) const {
  return "" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Lexical error message list                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gLexicalMessage_lexicalAnalyzer_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_lexicalAnalyzer_incorrectEnumTypeNameError = "in an enum type name, a letter, a digit or the underscore character should follow the '$' character" ;

static const char * gLexicalMessage_lexicalAnalyzer_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_lexicalAnalyzer_internalError = "internal error" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//          Syntax error messages, for every terminal symbol                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_identifier = "an identifier" ;

//--- Syntax error message for terminal '$integer$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_integer = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$enum-type-name$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_enum_2D_type_2D_name = "an enum type name ($...)" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_comment = "a comment" ;

//--- Syntax error message for terminal '$assert$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_assert = "the 'assert' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$ensures$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_ensures = "the 'ensures' keyword" ;

//--- Syntax error message for terminal '$event$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_event = "the 'event' keyword" ;

//--- Syntax error message for terminal '$function$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_function = "the 'function' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$invariant$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_invariant = "the 'invariant' keyword" ;

//--- Syntax error message for terminal '$machine$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_machine = "the 'machine' keyword" ;

//--- Syntax error message for terminal '$old$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_old = "the 'old' keyword" ;

//--- Syntax error message for terminal '$scenario$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_scenario = "the 'scenario' keyword" ;

//--- Syntax error message for terminal '$system$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_system = "the 'system' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__21_ = "the '!' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__3F_ = "the '\?' delimitor" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_lexicalAnalyzer__2E_ = "the '.' delimitor" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                getMessageForTerminal                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_lexicalAnalyzer::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 37)) {
    static const char * syntaxErrorMessageArray [37] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_lexicalAnalyzer_identifier,
        gSyntaxErrorMessage_lexicalAnalyzer_integer,
        gSyntaxErrorMessage_lexicalAnalyzer_literal_5F_string,
        gSyntaxErrorMessage_lexicalAnalyzer_enum_2D_type_2D_name,
        gSyntaxErrorMessage_lexicalAnalyzer_comment,
        gSyntaxErrorMessage_lexicalAnalyzer_assert,
        gSyntaxErrorMessage_lexicalAnalyzer_do,
        gSyntaxErrorMessage_lexicalAnalyzer_else,
        gSyntaxErrorMessage_lexicalAnalyzer_enum,
        gSyntaxErrorMessage_lexicalAnalyzer_ensures,
        gSyntaxErrorMessage_lexicalAnalyzer_event,
        gSyntaxErrorMessage_lexicalAnalyzer_function,
        gSyntaxErrorMessage_lexicalAnalyzer_if,
        gSyntaxErrorMessage_lexicalAnalyzer_invariant,
        gSyntaxErrorMessage_lexicalAnalyzer_machine,
        gSyntaxErrorMessage_lexicalAnalyzer_old,
        gSyntaxErrorMessage_lexicalAnalyzer_scenario,
        gSyntaxErrorMessage_lexicalAnalyzer_system,
        gSyntaxErrorMessage_lexicalAnalyzer_var,
        gSyntaxErrorMessage_lexicalAnalyzer__3A_,
        gSyntaxErrorMessage_lexicalAnalyzer__2C_,
        gSyntaxErrorMessage_lexicalAnalyzer__21_,
        gSyntaxErrorMessage_lexicalAnalyzer__7B_,
        gSyntaxErrorMessage_lexicalAnalyzer__7D_,
        gSyntaxErrorMessage_lexicalAnalyzer__2D__3E_,
        gSyntaxErrorMessage_lexicalAnalyzer__3D_,
        gSyntaxErrorMessage_lexicalAnalyzer__5B_,
        gSyntaxErrorMessage_lexicalAnalyzer__5D_,
        gSyntaxErrorMessage_lexicalAnalyzer__3D__3D_,
        gSyntaxErrorMessage_lexicalAnalyzer__26_,
        gSyntaxErrorMessage_lexicalAnalyzer__7C_,
        gSyntaxErrorMessage_lexicalAnalyzer__21__3D_,
        gSyntaxErrorMessage_lexicalAnalyzer__28_,
        gSyntaxErrorMessage_lexicalAnalyzer__29_,
        gSyntaxErrorMessage_lexicalAnalyzer__3F_,
        gSyntaxErrorMessage_lexicalAnalyzer__2E_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      U N I C O D E    S T R I N G S                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_lexicalAnalyzer__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_lexicalAnalyzer__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_lexicalAnalyzer__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_lexicalAnalyzer__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_lexicalAnalyzer__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_lexicalAnalyzer__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_lexicalAnalyzer__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_lexicalAnalyzer__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_lexicalAnalyzer__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_lexicalAnalyzer__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_lexicalAnalyzer__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F_$'
static const utf32 kUnicodeString_lexicalAnalyzer__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_lexicalAnalyzer__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_lexicalAnalyzer__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$assert$'
static const utf32 kUnicodeString_lexicalAnalyzer_assert [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_lexicalAnalyzer_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_lexicalAnalyzer_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ensures$'
static const utf32 kUnicodeString_lexicalAnalyzer_ensures [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_lexicalAnalyzer_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$event$'
static const utf32 kUnicodeString_lexicalAnalyzer_event [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$function$'
static const utf32 kUnicodeString_lexicalAnalyzer_function [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_lexicalAnalyzer_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$invariant$'
static const utf32 kUnicodeString_lexicalAnalyzer_invariant [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$machine$'
static const utf32 kUnicodeString_lexicalAnalyzer_machine [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$old$'
static const utf32 kUnicodeString_lexicalAnalyzer_old [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$scenario$'
static const utf32 kUnicodeString_lexicalAnalyzer_scenario [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$system$'
static const utf32 kUnicodeString_lexicalAnalyzer_system [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$var$'
static const utf32 kUnicodeString_lexicalAnalyzer_var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_lexicalAnalyzer__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_lexicalAnalyzer__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_lexicalAnalyzer__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'delimitorsList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_lexicalAnalyzer_delimitorsList = 17 ;

static const C_unicode_lexique_table_entry ktable_for_lexicalAnalyzer_delimitorsList [ktable_size_lexicalAnalyzer_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__21_, 1, C_Lexique_lexicalAnalyzer::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__26_, 1, C_Lexique_lexicalAnalyzer::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__28_, 1, C_Lexique_lexicalAnalyzer::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__29_, 1, C_Lexique_lexicalAnalyzer::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__2C_, 1, C_Lexique_lexicalAnalyzer::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__2E_, 1, C_Lexique_lexicalAnalyzer::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__3A_, 1, C_Lexique_lexicalAnalyzer::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__3D_, 1, C_Lexique_lexicalAnalyzer::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__3F_, 1, C_Lexique_lexicalAnalyzer::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__5B_, 1, C_Lexique_lexicalAnalyzer::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__5D_, 1, C_Lexique_lexicalAnalyzer::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__7B_, 1, C_Lexique_lexicalAnalyzer::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__7C_, 1, C_Lexique_lexicalAnalyzer::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__7D_, 1, C_Lexique_lexicalAnalyzer::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__21__3D_, 2, C_Lexique_lexicalAnalyzer::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__2D__3E_, 2, C_Lexique_lexicalAnalyzer::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer__3D__3D_, 2, C_Lexique_lexicalAnalyzer::kToken__3D__3D_)
} ;

int16_t C_Lexique_lexicalAnalyzer::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_lexicalAnalyzer_delimitorsList, ktable_size_lexicalAnalyzer_delimitorsList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'keyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_lexicalAnalyzer_keyWordList = 14 ;

static const C_unicode_lexique_table_entry ktable_for_lexicalAnalyzer_keyWordList [ktable_size_lexicalAnalyzer_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_do, 2, C_Lexique_lexicalAnalyzer::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_if, 2, C_Lexique_lexicalAnalyzer::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_old, 3, C_Lexique_lexicalAnalyzer::kToken_old),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_var, 3, C_Lexique_lexicalAnalyzer::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_else, 4, C_Lexique_lexicalAnalyzer::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_enum, 4, C_Lexique_lexicalAnalyzer::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_event, 5, C_Lexique_lexicalAnalyzer::kToken_event),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_assert, 6, C_Lexique_lexicalAnalyzer::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_system, 6, C_Lexique_lexicalAnalyzer::kToken_system),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_ensures, 7, C_Lexique_lexicalAnalyzer::kToken_ensures),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_machine, 7, C_Lexique_lexicalAnalyzer::kToken_machine),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_function, 8, C_Lexique_lexicalAnalyzer::kToken_function),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_scenario, 8, C_Lexique_lexicalAnalyzer::kToken_scenario),
  C_unicode_lexique_table_entry (kUnicodeString_lexicalAnalyzer_invariant, 9, C_Lexique_lexicalAnalyzer::kToken_invariant)
} ;

int16_t C_Lexique_lexicalAnalyzer::search_into_keyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_lexicalAnalyzer_keyWordList, ktable_size_lexicalAnalyzer_keyWordList) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          getCurrentTokenString                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_lexicalAnalyzer::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_lexicalAnalyzer * ptr = (const cTokenFor_lexicalAnalyzer *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_enum_2D_type_2D_name:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum-type-name") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_assert:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("assert") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("do") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("else") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ensures:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ensures") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_event:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("event") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_function:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("function") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("if") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_invariant:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("invariant") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_machine:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("machine") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_old:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("old") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_scenario:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("scenario") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_system:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("system") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_var:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("var") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("->") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Delimiters                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Replacements                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Terminal Symbols as end of script in template mark                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Unicode test functions                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
 
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool C_Lexique_lexicalAnalyzer::parseLexicalToken (void) {
  cTokenFor_lexicalAnalyzer token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    token.mLexicalAttribute_uint_33__32_value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_tokenString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__3D__3D_, 2, true)) {
        token.mTokenCode = kToken__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__2D__3E_, 2, true)) {
        token.mTokenCode = kToken__2D__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__21__3D_, 2, true)) {
        token.mTokenCode = kToken__21__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__7C_, 1, true)) {
        token.mTokenCode = kToken__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__3F_, 1, true)) {
        token.mTokenCode = kToken__3F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__3D_, 1, true)) {
        token.mTokenCode = kToken__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__2E_, 1, true)) {
        token.mTokenCode = kToken__2E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__2C_, 1, true)) {
        token.mTokenCode = kToken__2C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__29_, 1, true)) {
        token.mTokenCode = kToken__29_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__28_, 1, true)) {
        token.mTokenCode = kToken__28_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__26_, 1, true)) {
        token.mTokenCode = kToken__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_lexicalAnalyzer__21_, 1, true)) {
        token.mTokenCode = kToken__21_ ;
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_lexicalAnalyzer_decimalNumberTooLarge, gLexicalMessage_lexicalAnalyzer_internalError) ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        do {
          if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken_literal_5F_string ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_lexicalAnalyzer_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_lexicalAnalyzer_incorrectEnumTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken_enum_2D_type_2D_name ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
        token.mTokenCode = kToken_ ; // Empty string code
      }else{ // Unknown input character
        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
        token.mTokenCode = -1 ; // No token
        advance () ; // ... go throught unknown character
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         E N T E R    T O K E N                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void C_Lexique_lexicalAnalyzer::enterToken (cTokenFor_lexicalAnalyzer & ioToken) {
  cTokenFor_lexicalAnalyzer * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_lexicalAnalyzer ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               A T T R I B U T E   A C C E S S                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_lexicalAnalyzer::attributeValue_tokenString (void) const {
  cTokenFor_lexicalAnalyzer * ptr = (cTokenFor_lexicalAnalyzer *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_lexicalAnalyzer::attributeValue_uint_33__32_value (void) const {
  cTokenFor_lexicalAnalyzer * ptr = (cTokenFor_lexicalAnalyzer *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring C_Lexique_lexicalAnalyzer::synthetizedAttribute_tokenString (void) const {
  cTokenFor_lexicalAnalyzer * ptr = (cTokenFor_lexicalAnalyzer *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_lexicalAnalyzer) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint C_Lexique_lexicalAnalyzer::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_lexicalAnalyzer * ptr = (cTokenFor_lexicalAnalyzer *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_lexicalAnalyzer) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         I N T R O S P E C T I O N                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist C_Lexique_lexicalAnalyzer::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum-type-name") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("assert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ensures") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("event") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("function") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("invariant") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("machine") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("old") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("scenario") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("system") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void getKeywordLists_lexicalAnalyzer (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("lexicalAnalyzer:delimitorsList") ;
  ioList.appendObject ("lexicalAnalyzer:keyWordList") ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void getKeywordsForIdentifier_lexicalAnalyzer (const C_String & inIdentifier,
                                                      bool & ioFound,
                                                      TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "lexicalAnalyzer:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject (",") ;
    ioList.appendObject (".") ;
    ioList.appendObject (":") ;
    ioList.appendObject ("=") ;
    ioList.appendObject ("\?") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("==") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "lexicalAnalyzer:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("old") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("event") ;
    ioList.appendObject ("assert") ;
    ioList.appendObject ("system") ;
    ioList.appendObject ("ensures") ;
    ioList.appendObject ("machine") ;
    ioList.appendObject ("function") ;
    ioList.appendObject ("scenario") ;
    ioList.appendObject ("invariant") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static cLexiqueIntrospection lexiqueIntrospection_lexicalAnalyzer
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_lexicalAnalyzer, getKeywordsForIdentifier_lexicalAnalyzer) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_lexicalAnalyzer::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [37] = {0,
    0 /* lexicalAnalyzer_1_identifier */,
    3 /* lexicalAnalyzer_1_integer */,
    4 /* lexicalAnalyzer_1_literal_5F_string */,
    5 /* lexicalAnalyzer_1_enum_2D_type_2D_name */,
    6 /* lexicalAnalyzer_1_comment */,
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
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_lexicalAnalyzer::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 7) {
    static const char * kStyleArray [7] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "integerStyle",
      "stringStyle",
      "enumTypeNameStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@enumTypeList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_enumTypeList : public cCollectionElement {
  public : GALGAS_enumTypeList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_enumTypeList (const GALGAS_lstring & in_mEnumListName,
                                            const GALGAS_lstringlist & in_mEnumConstantList,
                                            const GALGAS_bool & in_mGenerateCode
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_enumTypeList (const GALGAS_enumTypeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumTypeList::cCollectionElement_enumTypeList (const GALGAS_lstring & in_mEnumListName,
                                                                  const GALGAS_lstringlist & in_mEnumConstantList,
                                                                  const GALGAS_bool & in_mGenerateCode
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumListName, in_mEnumConstantList, in_mGenerateCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumTypeList::cCollectionElement_enumTypeList (const GALGAS_enumTypeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumListName, inElement.mProperty_mEnumConstantList, inElement.mProperty_mGenerateCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_enumTypeList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_enumTypeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumTypeList (mObject.mProperty_mEnumListName, mObject.mProperty_mEnumConstantList, mObject.mProperty_mGenerateCode COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_enumTypeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumListName" ":" ;
  mObject.mProperty_mEnumListName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantList" ":" ;
  mObject.mProperty_mEnumConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGenerateCode" ":" ;
  mObject.mProperty_mGenerateCode.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_enumTypeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumTypeList * operand = (cCollectionElement_enumTypeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumTypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList::GALGAS_enumTypeList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList::GALGAS_enumTypeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_enumTypeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumTypeList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_enumTypeList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstringlist & inOperand1,
                                                                    const GALGAS_bool & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_enumTypeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumTypeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mEnumListName,
                                                     const GALGAS_lstringlist & in_mEnumConstantList,
                                                     const GALGAS_bool & in_mGenerateCode
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_enumTypeList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumTypeList (in_mEnumListName,
                                                  in_mEnumConstantList,
                                                  in_mGenerateCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_lstringlist & inOperand1,
                                               const GALGAS_bool & inOperand2
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumTypeList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::setter_append (GALGAS_enumTypeList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumTypeList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_lstringlist inOperand1,
                                                const GALGAS_bool inOperand2,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumTypeList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
      outOperand0 = p->mObject.mProperty_mEnumListName ;
      outOperand1 = p->mObject.mProperty_mEnumConstantList ;
      outOperand2 = p->mObject.mProperty_mGenerateCode ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           GALGAS_bool & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
    outOperand0 = p->mObject.mProperty_mEnumListName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
    outOperand2 = p->mObject.mProperty_mGenerateCode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_lstringlist & outOperand1,
                                          GALGAS_bool & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
    outOperand0 = p->mObject.mProperty_mEnumListName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
    outOperand2 = p->mObject.mProperty_mGenerateCode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_lstringlist & outOperand1,
                                        GALGAS_bool & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
    outOperand0 = p->mObject.mProperty_mEnumListName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
    outOperand2 = p->mObject.mProperty_mGenerateCode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_lstringlist & outOperand1,
                                       GALGAS_bool & outOperand2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
    outOperand0 = p->mObject.mProperty_mEnumListName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
    outOperand2 = p->mObject.mProperty_mGenerateCode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_enumTypeList::add_operation (const GALGAS_enumTypeList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_enumTypeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumTypeList result = GALGAS_enumTypeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_enumTypeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumTypeList result = GALGAS_enumTypeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_enumTypeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_enumTypeList result = GALGAS_enumTypeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList::plusAssign_operation (const GALGAS_enumTypeList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumTypeList::getter_mEnumListNameAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
    result = p->mObject.mProperty_mEnumListName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumTypeList::getter_mEnumConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
    result = p->mObject.mProperty_mEnumConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_enumTypeList::getter_mGenerateCodeAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumTypeList * p = (cCollectionElement_enumTypeList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
    result = p->mObject.mProperty_mGenerateCode ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumTypeList::cEnumerator_enumTypeList (const GALGAS_enumTypeList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList_2D_element cEnumerator_enumTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumTypeList * p = (const cCollectionElement_enumTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumTypeList::current_mEnumListName (LOCATION_ARGS) const {
  const cCollectionElement_enumTypeList * p = (const cCollectionElement_enumTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
  return p->mObject.mProperty_mEnumListName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_enumTypeList::current_mEnumConstantList (LOCATION_ARGS) const {
  const cCollectionElement_enumTypeList * p = (const cCollectionElement_enumTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
  return p->mObject.mProperty_mEnumConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_enumTypeList::current_mGenerateCode (LOCATION_ARGS) const {
  const cCollectionElement_enumTypeList * p = (const cCollectionElement_enumTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumTypeList) ;
  return p->mObject.mProperty_mGenerateCode ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @enumTypeList type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeList ("enumTypeList",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_enumTypeList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeList result ;
  const GALGAS_enumTypeList * p = (const GALGAS_enumTypeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@enumVarDeclarationList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_enumVarDeclarationList : public cCollectionElement {
  public : GALGAS_enumVarDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_enumVarDeclarationList (const GALGAS_lstring & in_mEnumTypeName,
                                                      const GALGAS_lstring & in_mEnumVarName,
                                                      const GALGAS_lstring & in_mConstantName
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_enumVarDeclarationList (const GALGAS_enumVarDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumVarDeclarationList::cCollectionElement_enumVarDeclarationList (const GALGAS_lstring & in_mEnumTypeName,
                                                                                      const GALGAS_lstring & in_mEnumVarName,
                                                                                      const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumTypeName, in_mEnumVarName, in_mConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumVarDeclarationList::cCollectionElement_enumVarDeclarationList (const GALGAS_enumVarDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumTypeName, inElement.mProperty_mEnumVarName, inElement.mProperty_mConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_enumVarDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_enumVarDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumVarDeclarationList (mObject.mProperty_mEnumTypeName, mObject.mProperty_mEnumVarName, mObject.mProperty_mConstantName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_enumVarDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumTypeName" ":" ;
  mObject.mProperty_mEnumTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumVarName" ":" ;
  mObject.mProperty_mEnumVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_enumVarDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumVarDeclarationList * operand = (cCollectionElement_enumVarDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumVarDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList::GALGAS_enumVarDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList::GALGAS_enumVarDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_enumVarDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumVarDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_enumVarDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumVarDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_enumVarDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumVarDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mEnumTypeName,
                                                               const GALGAS_lstring & in_mEnumVarName,
                                                               const GALGAS_lstring & in_mConstantName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_enumVarDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumVarDeclarationList (in_mEnumTypeName,
                                                            in_mEnumVarName,
                                                            in_mConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumVarDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::setter_append (GALGAS_enumVarDeclarationList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumVarDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumVarDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mEnumTypeName ;
      outOperand1 = p->mObject.mProperty_mEnumVarName ;
      outOperand2 = p->mObject.mProperty_mConstantName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEnumTypeName ;
    outOperand1 = p->mObject.mProperty_mEnumVarName ;
    outOperand2 = p->mObject.mProperty_mConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEnumTypeName ;
    outOperand1 = p->mObject.mProperty_mEnumVarName ;
    outOperand2 = p->mObject.mProperty_mConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEnumTypeName ;
    outOperand1 = p->mObject.mProperty_mEnumVarName ;
    outOperand2 = p->mObject.mProperty_mConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEnumTypeName ;
    outOperand1 = p->mObject.mProperty_mEnumVarName ;
    outOperand2 = p->mObject.mProperty_mConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_enumVarDeclarationList::add_operation (const GALGAS_enumVarDeclarationList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumVarDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_enumVarDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_enumVarDeclarationList result = GALGAS_enumVarDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_enumVarDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_enumVarDeclarationList result = GALGAS_enumVarDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_enumVarDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumVarDeclarationList result = GALGAS_enumVarDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList::plusAssign_operation (const GALGAS_enumVarDeclarationList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumVarDeclarationList::getter_mEnumTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
    result = p->mObject.mProperty_mEnumTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumVarDeclarationList::getter_mEnumVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
    result = p->mObject.mProperty_mEnumVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumVarDeclarationList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumVarDeclarationList * p = (cCollectionElement_enumVarDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumVarDeclarationList::cEnumerator_enumVarDeclarationList (const GALGAS_enumVarDeclarationList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList_2D_element cEnumerator_enumVarDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumVarDeclarationList * p = (const cCollectionElement_enumVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumVarDeclarationList::current_mEnumTypeName (LOCATION_ARGS) const {
  const cCollectionElement_enumVarDeclarationList * p = (const cCollectionElement_enumVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
  return p->mObject.mProperty_mEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumVarDeclarationList::current_mEnumVarName (LOCATION_ARGS) const {
  const cCollectionElement_enumVarDeclarationList * p = (const cCollectionElement_enumVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
  return p->mObject.mProperty_mEnumVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumVarDeclarationList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumVarDeclarationList * p = (const cCollectionElement_enumVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumVarDeclarationList) ;
  return p->mObject.mProperty_mConstantName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @enumVarDeclarationList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumVarDeclarationList ("enumVarDeclarationList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumVarDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumVarDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumVarDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumVarDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_enumVarDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumVarDeclarationList result ;
  const GALGAS_enumVarDeclarationList * p = (const GALGAS_enumVarDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumVarDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumVarDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@eventDeclarationList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_eventDeclarationList : public cCollectionElement {
  public : GALGAS_eventDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_eventDeclarationList (const GALGAS_lstring & in_mEventName,
                                                    const GALGAS_eventArgumentList & in_mEventArgumentList,
                                                    const GALGAS_instructionList & in_mEventInstructionList,
                                                    const GALGAS_expressionList & in_mEnsureExpressionList,
                                                    const GALGAS_location & in_mEndOfEnsureExpressionList
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_eventDeclarationList (const GALGAS_eventDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_eventDeclarationList::cCollectionElement_eventDeclarationList (const GALGAS_lstring & in_mEventName,
                                                                                  const GALGAS_eventArgumentList & in_mEventArgumentList,
                                                                                  const GALGAS_instructionList & in_mEventInstructionList,
                                                                                  const GALGAS_expressionList & in_mEnsureExpressionList,
                                                                                  const GALGAS_location & in_mEndOfEnsureExpressionList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEventName, in_mEventArgumentList, in_mEventInstructionList, in_mEnsureExpressionList, in_mEndOfEnsureExpressionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_eventDeclarationList::cCollectionElement_eventDeclarationList (const GALGAS_eventDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEventName, inElement.mProperty_mEventArgumentList, inElement.mProperty_mEventInstructionList, inElement.mProperty_mEnsureExpressionList, inElement.mProperty_mEndOfEnsureExpressionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_eventDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_eventDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_eventDeclarationList (mObject.mProperty_mEventName, mObject.mProperty_mEventArgumentList, mObject.mProperty_mEventInstructionList, mObject.mProperty_mEnsureExpressionList, mObject.mProperty_mEndOfEnsureExpressionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_eventDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventName" ":" ;
  mObject.mProperty_mEventName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventArgumentList" ":" ;
  mObject.mProperty_mEventArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventInstructionList" ":" ;
  mObject.mProperty_mEventInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnsureExpressionList" ":" ;
  mObject.mProperty_mEnsureExpressionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfEnsureExpressionList" ":" ;
  mObject.mProperty_mEndOfEnsureExpressionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_eventDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_eventDeclarationList * operand = (cCollectionElement_eventDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_eventDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList::GALGAS_eventDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList::GALGAS_eventDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_eventDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_eventDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_eventArgumentList & inOperand1,
                                                                                    const GALGAS_instructionList & inOperand2,
                                                                                    const GALGAS_expressionList & inOperand3,
                                                                                    const GALGAS_location & inOperand4
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_eventDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_eventDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_eventDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mEventName,
                                                             const GALGAS_eventArgumentList & in_mEventArgumentList,
                                                             const GALGAS_instructionList & in_mEventInstructionList,
                                                             const GALGAS_expressionList & in_mEnsureExpressionList,
                                                             const GALGAS_location & in_mEndOfEnsureExpressionList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_eventDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_eventDeclarationList (in_mEventName,
                                                          in_mEventArgumentList,
                                                          in_mEventInstructionList,
                                                          in_mEnsureExpressionList,
                                                          in_mEndOfEnsureExpressionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_eventArgumentList & inOperand1,
                                                       const GALGAS_instructionList & inOperand2,
                                                       const GALGAS_expressionList & inOperand3,
                                                       const GALGAS_location & inOperand4
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_eventDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::setter_append (GALGAS_eventDeclarationList_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_eventDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_eventArgumentList inOperand1,
                                                        const GALGAS_instructionList inOperand2,
                                                        const GALGAS_expressionList inOperand3,
                                                        const GALGAS_location inOperand4,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_eventDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_eventArgumentList & outOperand1,
                                                        GALGAS_instructionList & outOperand2,
                                                        GALGAS_expressionList & outOperand3,
                                                        GALGAS_location & outOperand4,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mEventName ;
      outOperand1 = p->mObject.mProperty_mEventArgumentList ;
      outOperand2 = p->mObject.mProperty_mEventInstructionList ;
      outOperand3 = p->mObject.mProperty_mEnsureExpressionList ;
      outOperand4 = p->mObject.mProperty_mEndOfEnsureExpressionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_eventArgumentList & outOperand1,
                                                   GALGAS_instructionList & outOperand2,
                                                   GALGAS_expressionList & outOperand3,
                                                   GALGAS_location & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mEventArgumentList ;
    outOperand2 = p->mObject.mProperty_mEventInstructionList ;
    outOperand3 = p->mObject.mProperty_mEnsureExpressionList ;
    outOperand4 = p->mObject.mProperty_mEndOfEnsureExpressionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_eventArgumentList & outOperand1,
                                                  GALGAS_instructionList & outOperand2,
                                                  GALGAS_expressionList & outOperand3,
                                                  GALGAS_location & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mEventArgumentList ;
    outOperand2 = p->mObject.mProperty_mEventInstructionList ;
    outOperand3 = p->mObject.mProperty_mEnsureExpressionList ;
    outOperand4 = p->mObject.mProperty_mEndOfEnsureExpressionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_eventArgumentList & outOperand1,
                                                GALGAS_instructionList & outOperand2,
                                                GALGAS_expressionList & outOperand3,
                                                GALGAS_location & outOperand4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mEventArgumentList ;
    outOperand2 = p->mObject.mProperty_mEventInstructionList ;
    outOperand3 = p->mObject.mProperty_mEnsureExpressionList ;
    outOperand4 = p->mObject.mProperty_mEndOfEnsureExpressionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_eventArgumentList & outOperand1,
                                               GALGAS_instructionList & outOperand2,
                                               GALGAS_expressionList & outOperand3,
                                               GALGAS_location & outOperand4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mEventArgumentList ;
    outOperand2 = p->mObject.mProperty_mEventInstructionList ;
    outOperand3 = p->mObject.mProperty_mEnsureExpressionList ;
    outOperand4 = p->mObject.mProperty_mEndOfEnsureExpressionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_eventDeclarationList::add_operation (const GALGAS_eventDeclarationList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_eventDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_eventDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_eventDeclarationList result = GALGAS_eventDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_eventDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_eventDeclarationList result = GALGAS_eventDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_eventDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_eventDeclarationList result = GALGAS_eventDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList::plusAssign_operation (const GALGAS_eventDeclarationList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_eventDeclarationList::getter_mEventNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    result = p->mObject.mProperty_mEventName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventDeclarationList::getter_mEventArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  GALGAS_eventArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    result = p->mObject.mProperty_mEventArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_eventDeclarationList::getter_mEventInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  GALGAS_instructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    result = p->mObject.mProperty_mEventInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_eventDeclarationList::getter_mEnsureExpressionListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  GALGAS_expressionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    result = p->mObject.mProperty_mEnsureExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_eventDeclarationList::getter_mEndOfEnsureExpressionListAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_eventDeclarationList * p = (cCollectionElement_eventDeclarationList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
    result = p->mObject.mProperty_mEndOfEnsureExpressionList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_eventDeclarationList::cEnumerator_eventDeclarationList (const GALGAS_eventDeclarationList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList_2D_element cEnumerator_eventDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_eventDeclarationList * p = (const cCollectionElement_eventDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_eventDeclarationList::current_mEventName (LOCATION_ARGS) const {
  const cCollectionElement_eventDeclarationList * p = (const cCollectionElement_eventDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
  return p->mObject.mProperty_mEventName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList cEnumerator_eventDeclarationList::current_mEventArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_eventDeclarationList * p = (const cCollectionElement_eventDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
  return p->mObject.mProperty_mEventArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList cEnumerator_eventDeclarationList::current_mEventInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_eventDeclarationList * p = (const cCollectionElement_eventDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
  return p->mObject.mProperty_mEventInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList cEnumerator_eventDeclarationList::current_mEnsureExpressionList (LOCATION_ARGS) const {
  const cCollectionElement_eventDeclarationList * p = (const cCollectionElement_eventDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
  return p->mObject.mProperty_mEnsureExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_eventDeclarationList::current_mEndOfEnsureExpressionList (LOCATION_ARGS) const {
  const cCollectionElement_eventDeclarationList * p = (const cCollectionElement_eventDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventDeclarationList) ;
  return p->mObject.mProperty_mEndOfEnsureExpressionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @eventDeclarationList type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventDeclarationList ("eventDeclarationList",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_eventDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_eventDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_eventDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_eventDeclarationList result ;
  const GALGAS_eventDeclarationList * p = (const GALGAS_eventDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_eventDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("eventDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@eventArgumentList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_eventArgumentList : public cCollectionElement {
  public : GALGAS_eventArgumentList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_eventArgumentList (const GALGAS_lstring & in_mArgumentTypeName,
                                                 const GALGAS_lstring & in_mArgumentVarName
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_eventArgumentList (const GALGAS_eventArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_eventArgumentList::cCollectionElement_eventArgumentList (const GALGAS_lstring & in_mArgumentTypeName,
                                                                            const GALGAS_lstring & in_mArgumentVarName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mArgumentTypeName, in_mArgumentVarName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_eventArgumentList::cCollectionElement_eventArgumentList (const GALGAS_eventArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mArgumentTypeName, inElement.mProperty_mArgumentVarName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_eventArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_eventArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_eventArgumentList (mObject.mProperty_mArgumentTypeName, mObject.mProperty_mArgumentVarName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_eventArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeName" ":" ;
  mObject.mProperty_mArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentVarName" ":" ;
  mObject.mProperty_mArgumentVarName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_eventArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_eventArgumentList * operand = (cCollectionElement_eventArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_eventArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList::GALGAS_eventArgumentList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList::GALGAS_eventArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventArgumentList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventArgumentList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_eventArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_eventArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_eventArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mArgumentTypeName,
                                                          const GALGAS_lstring & in_mArgumentVarName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_eventArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_eventArgumentList (in_mArgumentTypeName,
                                                       in_mArgumentVarName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_eventArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::setter_append (GALGAS_eventArgumentList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_eventArgumentList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_eventArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_eventArgumentList * p = (cCollectionElement_eventArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
      outOperand0 = p->mObject.mProperty_mArgumentTypeName ;
      outOperand1 = p->mObject.mProperty_mArgumentVarName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventArgumentList * p = (cCollectionElement_eventArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeName ;
    outOperand1 = p->mObject.mProperty_mArgumentVarName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventArgumentList * p = (cCollectionElement_eventArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeName ;
    outOperand1 = p->mObject.mProperty_mArgumentVarName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventArgumentList * p = (cCollectionElement_eventArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeName ;
    outOperand1 = p->mObject.mProperty_mArgumentVarName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_eventArgumentList * p = (cCollectionElement_eventArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeName ;
    outOperand1 = p->mObject.mProperty_mArgumentVarName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventArgumentList::add_operation (const GALGAS_eventArgumentList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_eventArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_eventArgumentList result = GALGAS_eventArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_eventArgumentList result = GALGAS_eventArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_eventArgumentList result = GALGAS_eventArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList::plusAssign_operation (const GALGAS_eventArgumentList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_eventArgumentList::getter_mArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_eventArgumentList * p = (cCollectionElement_eventArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
    result = p->mObject.mProperty_mArgumentTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_eventArgumentList::getter_mArgumentVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_eventArgumentList * p = (cCollectionElement_eventArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
    result = p->mObject.mProperty_mArgumentVarName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_eventArgumentList::cEnumerator_eventArgumentList (const GALGAS_eventArgumentList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList_2D_element cEnumerator_eventArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_eventArgumentList * p = (const cCollectionElement_eventArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_eventArgumentList::current_mArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_eventArgumentList * p = (const cCollectionElement_eventArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
  return p->mObject.mProperty_mArgumentTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_eventArgumentList::current_mArgumentVarName (LOCATION_ARGS) const {
  const cCollectionElement_eventArgumentList * p = (const cCollectionElement_eventArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_eventArgumentList) ;
  return p->mObject.mProperty_mArgumentVarName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @eventArgumentList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventArgumentList ("eventArgumentList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_eventArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_eventArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventArgumentList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventArgumentList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_eventArgumentList result ;
  const GALGAS_eventArgumentList * p = (const GALGAS_eventArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_eventArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("eventArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@instructionList' list                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_instructionList : public cCollectionElement {
  public : GALGAS_instructionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_instructionList (const GALGAS_instruction & in_mInstruction
                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_instructionList (const GALGAS_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_instructionList::cCollectionElement_instructionList (const GALGAS_instruction & in_mInstruction
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_instructionList::cCollectionElement_instructionList (const GALGAS_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_instructionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_instructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_instructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionList * operand = (cCollectionElement_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList::GALGAS_instructionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList::GALGAS_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_instructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_instructionList::constructor_listWithValue (const GALGAS_instruction & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_instruction & in_mInstruction
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::addAssign_operation (const GALGAS_instruction & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::setter_append (GALGAS_instructionList_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::setter_insertAtIndex (const GALGAS_instruction inOperand0,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::setter_removeAtIndex (GALGAS_instruction & outOperand0,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionList * p = (cCollectionElement_instructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::setter_popFirst (GALGAS_instruction & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionList * p = (cCollectionElement_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::setter_popLast (GALGAS_instruction & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionList * p = (cCollectionElement_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::method_first (GALGAS_instruction & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionList * p = (cCollectionElement_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::method_last (GALGAS_instruction & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionList * p = (cCollectionElement_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_instructionList::add_operation (const GALGAS_instructionList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_instructionList result = GALGAS_instructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_instructionList result = GALGAS_instructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_instructionList result = GALGAS_instructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList::plusAssign_operation (const GALGAS_instructionList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instruction GALGAS_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionList * p = (cCollectionElement_instructionList *) attributes.ptr () ;
  GALGAS_instruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_instructionList::cEnumerator_instructionList (const GALGAS_instructionList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList_2D_element cEnumerator_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionList * p = (const cCollectionElement_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instruction cEnumerator_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_instructionList * p = (const cCollectionElement_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @instructionList type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionList ("instructionList",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_instructionList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_instructionList result ;
  const GALGAS_instructionList * p = (const GALGAS_instructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@expressionList' list                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_expressionList : public cCollectionElement {
  public : GALGAS_expressionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_expressionList (const GALGAS_lstring & in_mLabel,
                                              const GALGAS_expression & in_mExpression
                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_expressionList (const GALGAS_expressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_expressionList::cCollectionElement_expressionList (const GALGAS_lstring & in_mLabel,
                                                                      const GALGAS_expression & in_mExpression
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabel, in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_expressionList::cCollectionElement_expressionList (const GALGAS_expressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabel, inElement.mProperty_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_expressionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_expressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_expressionList (mObject.mProperty_mLabel, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_expressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabel" ":" ;
  mObject.mProperty_mLabel.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_expressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_expressionList * operand = (cCollectionElement_expressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_expressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList::GALGAS_expressionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList::GALGAS_expressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_expressionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_expressionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_expressionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_expression & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_expressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_expressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_expressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_lstring & in_mLabel,
                                                       const GALGAS_expression & in_mExpression
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_expressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_expressionList (in_mLabel,
                                                    in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                 const GALGAS_expression & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_expressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::setter_append (GALGAS_expressionList_2D_element inElement,
                                           C_Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_expressionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                  const GALGAS_expression inOperand1,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_expressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                  GALGAS_expression & outOperand1,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_expressionList * p = (cCollectionElement_expressionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_expressionList) ;
      outOperand0 = p->mObject.mProperty_mLabel ;
      outOperand1 = p->mObject.mProperty_mExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                             GALGAS_expression & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_expressionList * p = (cCollectionElement_expressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_expressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::setter_popLast (GALGAS_lstring & outOperand0,
                                            GALGAS_expression & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_expressionList * p = (cCollectionElement_expressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_expressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::method_first (GALGAS_lstring & outOperand0,
                                          GALGAS_expression & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_expressionList * p = (cCollectionElement_expressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_expressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::method_last (GALGAS_lstring & outOperand0,
                                         GALGAS_expression & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_expressionList * p = (cCollectionElement_expressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_expressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_expressionList::add_operation (const GALGAS_expressionList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_expressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_expressionList result = GALGAS_expressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_expressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_expressionList result = GALGAS_expressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_expressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_expressionList result = GALGAS_expressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList::plusAssign_operation (const GALGAS_expressionList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_expressionList::getter_mLabelAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_expressionList * p = (cCollectionElement_expressionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_expressionList) ;
    result = p->mObject.mProperty_mLabel ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_expressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_expressionList * p = (cCollectionElement_expressionList *) attributes.ptr () ;
  GALGAS_expression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_expressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_expressionList::cEnumerator_expressionList (const GALGAS_expressionList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList_2D_element cEnumerator_expressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_expressionList * p = (const cCollectionElement_expressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_expressionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_expressionList::current_mLabel (LOCATION_ARGS) const {
  const cCollectionElement_expressionList * p = (const cCollectionElement_expressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_expressionList) ;
  return p->mObject.mProperty_mLabel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cEnumerator_expressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_expressionList * p = (const cCollectionElement_expressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_expressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @expressionList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionList ("expressionList",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_expressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_expressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_expressionList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionList result ;
  const GALGAS_expressionList * p = (const GALGAS_expressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@machineList' list                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_machineList : public cCollectionElement {
  public : GALGAS_machineList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_machineList (const GALGAS_lstring & in_mMachineName,
                                           const GALGAS_enumVarDeclarationList & in_mEnumVarDeclarationList,
                                           const GALGAS_expressionList & in_mInvariantExpressionList,
                                           const GALGAS_eventDeclarationList & in_mEventList
                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_machineList (const GALGAS_machineList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_machineList::cCollectionElement_machineList (const GALGAS_lstring & in_mMachineName,
                                                                const GALGAS_enumVarDeclarationList & in_mEnumVarDeclarationList,
                                                                const GALGAS_expressionList & in_mInvariantExpressionList,
                                                                const GALGAS_eventDeclarationList & in_mEventList
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMachineName, in_mEnumVarDeclarationList, in_mInvariantExpressionList, in_mEventList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_machineList::cCollectionElement_machineList (const GALGAS_machineList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMachineName, inElement.mProperty_mEnumVarDeclarationList, inElement.mProperty_mInvariantExpressionList, inElement.mProperty_mEventList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_machineList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_machineList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_machineList (mObject.mProperty_mMachineName, mObject.mProperty_mEnumVarDeclarationList, mObject.mProperty_mInvariantExpressionList, mObject.mProperty_mEventList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_machineList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMachineName" ":" ;
  mObject.mProperty_mMachineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumVarDeclarationList" ":" ;
  mObject.mProperty_mEnumVarDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInvariantExpressionList" ":" ;
  mObject.mProperty_mInvariantExpressionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventList" ":" ;
  mObject.mProperty_mEventList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_machineList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_machineList * operand = (cCollectionElement_machineList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_machineList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList::GALGAS_machineList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList::GALGAS_machineList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_machineList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_machineList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_enumVarDeclarationList & inOperand1,
                                                                  const GALGAS_expressionList & inOperand2,
                                                                  const GALGAS_eventDeclarationList & inOperand3
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_machineList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_machineList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_machineList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_lstring & in_mMachineName,
                                                    const GALGAS_enumVarDeclarationList & in_mEnumVarDeclarationList,
                                                    const GALGAS_expressionList & in_mInvariantExpressionList,
                                                    const GALGAS_eventDeclarationList & in_mEventList
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_machineList * p = NULL ;
  macroMyNew (p, cCollectionElement_machineList (in_mMachineName,
                                                 in_mEnumVarDeclarationList,
                                                 in_mInvariantExpressionList,
                                                 in_mEventList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                              const GALGAS_enumVarDeclarationList & inOperand1,
                                              const GALGAS_expressionList & inOperand2,
                                              const GALGAS_eventDeclarationList & inOperand3
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::setter_append (GALGAS_machineList_2D_element inElement,
                                        C_Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                               const GALGAS_enumVarDeclarationList inOperand1,
                                               const GALGAS_expressionList inOperand2,
                                               const GALGAS_eventDeclarationList inOperand3,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                               GALGAS_enumVarDeclarationList & outOperand1,
                                               GALGAS_expressionList & outOperand2,
                                               GALGAS_eventDeclarationList & outOperand3,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_machineList) ;
      outOperand0 = p->mObject.mProperty_mMachineName ;
      outOperand1 = p->mObject.mProperty_mEnumVarDeclarationList ;
      outOperand2 = p->mObject.mProperty_mInvariantExpressionList ;
      outOperand3 = p->mObject.mProperty_mEventList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::setter_popFirst (GALGAS_lstring & outOperand0,
                                          GALGAS_enumVarDeclarationList & outOperand1,
                                          GALGAS_expressionList & outOperand2,
                                          GALGAS_eventDeclarationList & outOperand3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mEnumVarDeclarationList ;
    outOperand2 = p->mObject.mProperty_mInvariantExpressionList ;
    outOperand3 = p->mObject.mProperty_mEventList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::setter_popLast (GALGAS_lstring & outOperand0,
                                         GALGAS_enumVarDeclarationList & outOperand1,
                                         GALGAS_expressionList & outOperand2,
                                         GALGAS_eventDeclarationList & outOperand3,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mEnumVarDeclarationList ;
    outOperand2 = p->mObject.mProperty_mInvariantExpressionList ;
    outOperand3 = p->mObject.mProperty_mEventList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::method_first (GALGAS_lstring & outOperand0,
                                       GALGAS_enumVarDeclarationList & outOperand1,
                                       GALGAS_expressionList & outOperand2,
                                       GALGAS_eventDeclarationList & outOperand3,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mEnumVarDeclarationList ;
    outOperand2 = p->mObject.mProperty_mInvariantExpressionList ;
    outOperand3 = p->mObject.mProperty_mEventList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::method_last (GALGAS_lstring & outOperand0,
                                      GALGAS_enumVarDeclarationList & outOperand1,
                                      GALGAS_expressionList & outOperand2,
                                      GALGAS_eventDeclarationList & outOperand3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mEnumVarDeclarationList ;
    outOperand2 = p->mObject.mProperty_mInvariantExpressionList ;
    outOperand3 = p->mObject.mProperty_mEventList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_machineList::add_operation (const GALGAS_machineList & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_machineList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_machineList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_machineList result = GALGAS_machineList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_machineList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_machineList result = GALGAS_machineList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_machineList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_machineList result = GALGAS_machineList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList::plusAssign_operation (const GALGAS_machineList inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineList::getter_mMachineNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    result = p->mObject.mProperty_mMachineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_machineList::getter_mEnumVarDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  GALGAS_enumVarDeclarationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    result = p->mObject.mProperty_mEnumVarDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_machineList::getter_mInvariantExpressionListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  GALGAS_expressionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    result = p->mObject.mProperty_mInvariantExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_machineList::getter_mEventListAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineList * p = (cCollectionElement_machineList *) attributes.ptr () ;
  GALGAS_eventDeclarationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineList) ;
    result = p->mObject.mProperty_mEventList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_machineList::cEnumerator_machineList (const GALGAS_machineList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList_2D_element cEnumerator_machineList::current (LOCATION_ARGS) const {
  const cCollectionElement_machineList * p = (const cCollectionElement_machineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_machineList::current_mMachineName (LOCATION_ARGS) const {
  const cCollectionElement_machineList * p = (const cCollectionElement_machineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineList) ;
  return p->mObject.mProperty_mMachineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList cEnumerator_machineList::current_mEnumVarDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_machineList * p = (const cCollectionElement_machineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineList) ;
  return p->mObject.mProperty_mEnumVarDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList cEnumerator_machineList::current_mInvariantExpressionList (LOCATION_ARGS) const {
  const cCollectionElement_machineList * p = (const cCollectionElement_machineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineList) ;
  return p->mObject.mProperty_mInvariantExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList cEnumerator_machineList::current_mEventList (LOCATION_ARGS) const {
  const cCollectionElement_machineList * p = (const cCollectionElement_machineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineList) ;
  return p->mObject.mProperty_mEventList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @machineList type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineList ("machineList",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_machineList::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_machineList result ;
  const GALGAS_machineList * p = (const GALGAS_machineList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_expression::objectCompare (const GALGAS_expression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression::GALGAS_expression (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression::GALGAS_expression (const cPtr_expression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                         Pointer class for @expression class                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_expression::cPtr_expression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @expression type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expression ("expression",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_expression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_expression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_expression::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expression result ;
  const GALGAS_expression * p = (const GALGAS_expression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_implicationExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_implicationExpression * p = (const cPtr_implicationExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_implicationExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_implicationExpression::objectCompare (const GALGAS_implicationExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationExpression::GALGAS_implicationExpression (void) :
GALGAS_expression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationExpression::GALGAS_implicationExpression (const cPtr_implicationExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implicationExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationExpression GALGAS_implicationExpression::constructor_new (const GALGAS_expression & inAttribute_mLeft,
                                                                            const GALGAS_expression & inAttribute_mRight
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_implicationExpression result ;
  if (inAttribute_mLeft.isValid () && inAttribute_mRight.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_implicationExpression (inAttribute_mLeft, inAttribute_mRight COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_implicationExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_implicationExpression * p = (const cPtr_implicationExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implicationExpression) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_implicationExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_implicationExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_implicationExpression * p = (const cPtr_implicationExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implicationExpression) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_implicationExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @implicationExpression class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_implicationExpression::cPtr_implicationExpression (const GALGAS_expression & in_mLeft,
                                                        const GALGAS_expression & in_mRight
                                                        COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeft (in_mLeft),
mProperty_mRight (in_mRight) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_implicationExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicationExpression ;
}

void cPtr_implicationExpression::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@implicationExpression:" ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_implicationExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implicationExpression (mProperty_mLeft, mProperty_mRight COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @implicationExpression type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implicationExpression ("implicationExpression",
                                              & kTypeDescriptor_GALGAS_expression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_implicationExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicationExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_implicationExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicationExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationExpression GALGAS_implicationExpression::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implicationExpression result ;
  const GALGAS_implicationExpression * p = (const GALGAS_implicationExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implicationExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicationExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_logicalOrExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logicalOrExpression * p = (const cPtr_logicalOrExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logicalOrExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_logicalOrExpression::objectCompare (const GALGAS_logicalOrExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrExpression::GALGAS_logicalOrExpression (void) :
GALGAS_expression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrExpression::GALGAS_logicalOrExpression (const cPtr_logicalOrExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalOrExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrExpression GALGAS_logicalOrExpression::constructor_new (const GALGAS_expression & inAttribute_mLeft,
                                                                        const GALGAS_expression & inAttribute_mRight
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logicalOrExpression result ;
  if (inAttribute_mLeft.isValid () && inAttribute_mRight.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logicalOrExpression (inAttribute_mLeft, inAttribute_mRight COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_logicalOrExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalOrExpression * p = (const cPtr_logicalOrExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrExpression) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_logicalOrExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_logicalOrExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalOrExpression * p = (const cPtr_logicalOrExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrExpression) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_logicalOrExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @logicalOrExpression class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_logicalOrExpression::cPtr_logicalOrExpression (const GALGAS_expression & in_mLeft,
                                                    const GALGAS_expression & in_mRight
                                                    COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeft (in_mLeft),
mProperty_mRight (in_mRight) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_logicalOrExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalOrExpression ;
}

void cPtr_logicalOrExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@logicalOrExpression:" ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_logicalOrExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logicalOrExpression (mProperty_mLeft, mProperty_mRight COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @logicalOrExpression type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalOrExpression ("logicalOrExpression",
                                            & kTypeDescriptor_GALGAS_expression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_logicalOrExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalOrExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_logicalOrExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalOrExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrExpression GALGAS_logicalOrExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logicalOrExpression result ;
  const GALGAS_logicalOrExpression * p = (const GALGAS_logicalOrExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalOrExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalOrExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_logicalAndExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logicalAndExpression * p = (const cPtr_logicalAndExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logicalAndExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_logicalAndExpression::objectCompare (const GALGAS_logicalAndExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndExpression::GALGAS_logicalAndExpression (void) :
GALGAS_expression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndExpression::GALGAS_logicalAndExpression (const cPtr_logicalAndExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalAndExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndExpression GALGAS_logicalAndExpression::constructor_new (const GALGAS_expression & inAttribute_mLeft,
                                                                          const GALGAS_expression & inAttribute_mRight
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_logicalAndExpression result ;
  if (inAttribute_mLeft.isValid () && inAttribute_mRight.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logicalAndExpression (inAttribute_mLeft, inAttribute_mRight COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_logicalAndExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalAndExpression * p = (const cPtr_logicalAndExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalAndExpression) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_logicalAndExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_logicalAndExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalAndExpression * p = (const cPtr_logicalAndExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalAndExpression) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_logicalAndExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @logicalAndExpression class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_logicalAndExpression::cPtr_logicalAndExpression (const GALGAS_expression & in_mLeft,
                                                      const GALGAS_expression & in_mRight
                                                      COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeft (in_mLeft),
mProperty_mRight (in_mRight) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_logicalAndExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalAndExpression ;
}

void cPtr_logicalAndExpression::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@logicalAndExpression:" ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_logicalAndExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logicalAndExpression (mProperty_mLeft, mProperty_mRight COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @logicalAndExpression type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalAndExpression ("logicalAndExpression",
                                             & kTypeDescriptor_GALGAS_expression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_logicalAndExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalAndExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_logicalAndExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalAndExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndExpression GALGAS_logicalAndExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logicalAndExpression result ;
  const GALGAS_logicalAndExpression * p = (const GALGAS_logicalAndExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalAndExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalAndExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_comparisonRightOperand::objectCompare (const GALGAS_comparisonRightOperand & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonRightOperand::GALGAS_comparisonRightOperand (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonRightOperand::GALGAS_comparisonRightOperand (const cPtr_comparisonRightOperand * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @comparisonRightOperand class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_comparisonRightOperand::cPtr_comparisonRightOperand (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @comparisonRightOperand type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonRightOperand ("comparisonRightOperand",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_comparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_comparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonRightOperand (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonRightOperand GALGAS_comparisonRightOperand::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonRightOperand result ;
  const GALGAS_comparisonRightOperand * p = (const GALGAS_comparisonRightOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonRightOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonRightOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator::GALGAS_enumComparisonOperator (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator GALGAS_enumComparisonOperator::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_enumComparisonOperator result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator GALGAS_enumComparisonOperator::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_enumComparisonOperator result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_enumComparisonOperator [3] = {
  "(not built)",
  "equal",
  "notEqual"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_enumComparisonOperator::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_enumComparisonOperator::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumComparisonOperator::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @enumComparisonOperator: " << gEnumNameArrayFor_enumComparisonOperator [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumComparisonOperator::objectCompare (const GALGAS_enumComparisonOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @enumComparisonOperator type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumComparisonOperator ("enumComparisonOperator",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumComparisonOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumComparisonOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumComparisonOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumComparisonOperator (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator GALGAS_enumComparisonOperator::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumComparisonOperator result ;
  const GALGAS_enumComparisonOperator * p = (const GALGAS_enumComparisonOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumComparisonOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumComparisonOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_instruction::objectCompare (const GALGAS_instruction & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instruction::GALGAS_instruction (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instruction::GALGAS_instruction (const cPtr_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                        Pointer class for @instruction class                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_instruction::cPtr_instruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @instruction type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instruction ("instruction",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instruction GALGAS_instruction::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instruction result ;
  const GALGAS_instruction * p = (const GALGAS_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_assignmentSourceExpression::objectCompare (const GALGAS_assignmentSourceExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentSourceExpression::GALGAS_assignmentSourceExpression (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentSourceExpression::GALGAS_assignmentSourceExpression (const cPtr_assignmentSourceExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @assignmentSourceExpression class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assignmentSourceExpression::cPtr_assignmentSourceExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @assignmentSourceExpression type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentSourceExpression ("assignmentSourceExpression",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentSourceExpression GALGAS_assignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assignmentSourceExpression result ;
  const GALGAS_assignmentSourceExpression * p = (const GALGAS_assignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assertInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstruction * p = (const cPtr_assertInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mAssertInstructionLocation.objectCompare (p->mProperty_mAssertInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssertExpression.objectCompare (p->mProperty_mAssertExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assertInstruction::objectCompare (const GALGAS_assertInstruction & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertInstruction::GALGAS_assertInstruction (void) :
GALGAS_instruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertInstruction::GALGAS_assertInstruction (const cPtr_assertInstruction * inSourcePtr) :
GALGAS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertInstruction GALGAS_assertInstruction::constructor_new (const GALGAS_location & inAttribute_mAssertInstructionLocation,
                                                                    const GALGAS_expression & inAttribute_mAssertExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assertInstruction result ;
  if (inAttribute_mAssertInstructionLocation.isValid () && inAttribute_mAssertExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstruction (inAttribute_mAssertInstructionLocation, inAttribute_mAssertExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_assertInstruction::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstruction * p = (const cPtr_assertInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstruction) ;
    result = p->mProperty_mAssertInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_assertInstruction::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssertInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_assertInstruction::getter_mAssertExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstruction * p = (const cPtr_assertInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstruction) ;
    result = p->mProperty_mAssertExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_assertInstruction::getter_mAssertExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssertExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @assertInstruction class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assertInstruction::cPtr_assertInstruction (const GALGAS_location & in_mAssertInstructionLocation,
                                                const GALGAS_expression & in_mAssertExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_instruction (THERE),
mProperty_mAssertInstructionLocation (in_mAssertInstructionLocation),
mProperty_mAssertExpression (in_mAssertExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assertInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstruction ;
}

void cPtr_assertInstruction::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@assertInstruction:" ;
  mProperty_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssertExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assertInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertInstruction (mProperty_mAssertInstructionLocation, mProperty_mAssertExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @assertInstruction type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertInstruction ("assertInstruction",
                                          & kTypeDescriptor_GALGAS_instruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assertInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assertInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertInstruction GALGAS_assertInstruction::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assertInstruction result ;
  const GALGAS_assertInstruction * p = (const GALGAS_assertInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_ifInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstruction * p = (const cPtr_ifInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mIFinstructionLocation.objectCompare (p->mProperty_mIFinstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestExpression.objectCompare (p->mProperty_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfTestExpression.objectCompare (p->mProperty_mEndOfTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_ifInstruction::objectCompare (const GALGAS_ifInstruction & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstruction::GALGAS_ifInstruction (void) :
GALGAS_instruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstruction::GALGAS_ifInstruction (const cPtr_ifInstruction * inSourcePtr) :
GALGAS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstruction GALGAS_ifInstruction::constructor_new (const GALGAS_location & inAttribute_mIFinstructionLocation,
                                                            const GALGAS_expression & inAttribute_mTestExpression,
                                                            const GALGAS_location & inAttribute_mEndOfTestExpression,
                                                            const GALGAS_instructionList & inAttribute_mThenInstructionList,
                                                            const GALGAS_instructionList & inAttribute_mElseInstructionList
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifInstruction result ;
  if (inAttribute_mIFinstructionLocation.isValid () && inAttribute_mTestExpression.isValid () && inAttribute_mEndOfTestExpression.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstruction (inAttribute_mIFinstructionLocation, inAttribute_mTestExpression, inAttribute_mEndOfTestExpression, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_ifInstruction::getter_mIFinstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstruction * p = (const cPtr_ifInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstruction) ;
    result = p->mProperty_mIFinstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_ifInstruction::getter_mIFinstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIFinstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_ifInstruction::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstruction * p = (const cPtr_ifInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstruction) ;
    result = p->mProperty_mTestExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression cPtr_ifInstruction::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_ifInstruction::getter_mEndOfTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstruction * p = (const cPtr_ifInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstruction) ;
    result = p->mProperty_mEndOfTestExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_ifInstruction::getter_mEndOfTestExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTestExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_ifInstruction::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstruction * p = (const cPtr_ifInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstruction) ;
    result = p->mProperty_mThenInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList cPtr_ifInstruction::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_ifInstruction::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstruction * p = (const cPtr_ifInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstruction) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList cPtr_ifInstruction::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @ifInstruction class                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_ifInstruction::cPtr_ifInstruction (const GALGAS_location & in_mIFinstructionLocation,
                                        const GALGAS_expression & in_mTestExpression,
                                        const GALGAS_location & in_mEndOfTestExpression,
                                        const GALGAS_instructionList & in_mThenInstructionList,
                                        const GALGAS_instructionList & in_mElseInstructionList
                                        COMMA_LOCATION_ARGS) :
cPtr_instruction (THERE),
mProperty_mIFinstructionLocation (in_mIFinstructionLocation),
mProperty_mTestExpression (in_mTestExpression),
mProperty_mEndOfTestExpression (in_mEndOfTestExpression),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_ifInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstruction ;
}

void cPtr_ifInstruction::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@ifInstruction:" ;
  mProperty_mIFinstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_ifInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstruction (mProperty_mIFinstructionLocation, mProperty_mTestExpression, mProperty_mEndOfTestExpression, mProperty_mThenInstructionList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @ifInstruction type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstruction ("ifInstruction",
                                      & kTypeDescriptor_GALGAS_instruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstruction GALGAS_ifInstruction::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ifInstruction result ;
  const GALGAS_ifInstruction * p = (const GALGAS_ifInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@switchCaseList' list                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_switchCaseList : public cCollectionElement {
  public : GALGAS_switchCaseList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_switchCaseList (const GALGAS_lstringlist & in_mConstantNameList,
                                              const GALGAS_location & in_mEndOfConstantList,
                                              const GALGAS_instructionList & in_mInstructionList
                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_switchCaseList (const GALGAS_switchCaseList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_switchCaseList::cCollectionElement_switchCaseList (const GALGAS_lstringlist & in_mConstantNameList,
                                                                      const GALGAS_location & in_mEndOfConstantList,
                                                                      const GALGAS_instructionList & in_mInstructionList
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantNameList, in_mEndOfConstantList, in_mInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_switchCaseList::cCollectionElement_switchCaseList (const GALGAS_switchCaseList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantNameList, inElement.mProperty_mEndOfConstantList, inElement.mProperty_mInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_switchCaseList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_switchCaseList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchCaseList (mObject.mProperty_mConstantNameList, mObject.mProperty_mEndOfConstantList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_switchCaseList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantNameList" ":" ;
  mObject.mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfConstantList" ":" ;
  mObject.mProperty_mEndOfConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_switchCaseList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseList * operand = (cCollectionElement_switchCaseList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList::GALGAS_switchCaseList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList::GALGAS_switchCaseList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchCaseList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchCaseList::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                        const GALGAS_location & inOperand1,
                                                                        const GALGAS_instructionList & inOperand2
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_switchCaseList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_lstringlist & in_mConstantNameList,
                                                       const GALGAS_location & in_mEndOfConstantList,
                                                       const GALGAS_instructionList & in_mInstructionList
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseList * p = NULL ;
  macroMyNew (p, cCollectionElement_switchCaseList (in_mConstantNameList,
                                                    in_mEndOfConstantList,
                                                    in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                 const GALGAS_location & inOperand1,
                                                 const GALGAS_instructionList & inOperand2
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::setter_append (GALGAS_switchCaseList_2D_element inElement,
                                           C_Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                  const GALGAS_location inOperand1,
                                                  const GALGAS_instructionList inOperand2,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  GALGAS_instructionList & outOperand2,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
      outOperand0 = p->mObject.mProperty_mConstantNameList ;
      outOperand1 = p->mObject.mProperty_mEndOfConstantList ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                             GALGAS_location & outOperand1,
                                             GALGAS_instructionList & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mEndOfConstantList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::setter_popLast (GALGAS_lstringlist & outOperand0,
                                            GALGAS_location & outOperand1,
                                            GALGAS_instructionList & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mEndOfConstantList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::method_first (GALGAS_lstringlist & outOperand0,
                                          GALGAS_location & outOperand1,
                                          GALGAS_instructionList & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mEndOfConstantList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::method_last (GALGAS_lstringlist & outOperand0,
                                         GALGAS_location & outOperand1,
                                         GALGAS_instructionList & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mEndOfConstantList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchCaseList::add_operation (const GALGAS_switchCaseList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchCaseList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseList result = GALGAS_switchCaseList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchCaseList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseList result = GALGAS_switchCaseList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchCaseList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseList result = GALGAS_switchCaseList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList::plusAssign_operation (const GALGAS_switchCaseList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_switchCaseList::getter_mConstantNameListAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    result = p->mObject.mProperty_mConstantNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_switchCaseList::getter_mEndOfConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    result = p->mObject.mProperty_mEndOfConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_switchCaseList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  GALGAS_instructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_switchCaseList::cEnumerator_switchCaseList (const GALGAS_switchCaseList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList_2D_element cEnumerator_switchCaseList::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseList * p = (const cCollectionElement_switchCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_switchCaseList::current_mConstantNameList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseList * p = (const cCollectionElement_switchCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
  return p->mObject.mProperty_mConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_switchCaseList::current_mEndOfConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseList * p = (const cCollectionElement_switchCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
  return p->mObject.mProperty_mEndOfConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList cEnumerator_switchCaseList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseList * p = (const cCollectionElement_switchCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
  return p->mObject.mProperty_mInstructionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @switchCaseList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchCaseList ("switchCaseList",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchCaseList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchCaseList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchCaseList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseList result ;
  const GALGAS_switchCaseList * p = (const GALGAS_switchCaseList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchCaseList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@functionValueList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_functionValueList : public cCollectionElement {
  public : GALGAS_functionValueList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_functionValueList (const GALGAS_lstring & in_mOperandName,
                                                 const GALGAS_lstring & in_mResultName
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_functionValueList (const GALGAS_functionValueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_functionValueList::cCollectionElement_functionValueList (const GALGAS_lstring & in_mOperandName,
                                                                            const GALGAS_lstring & in_mResultName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperandName, in_mResultName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_functionValueList::cCollectionElement_functionValueList (const GALGAS_functionValueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOperandName, inElement.mProperty_mResultName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_functionValueList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_functionValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionValueList (mObject.mProperty_mOperandName, mObject.mProperty_mResultName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_functionValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandName" ":" ;
  mObject.mProperty_mOperandName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultName" ":" ;
  mObject.mProperty_mResultName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_functionValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionValueList * operand = (cCollectionElement_functionValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList::GALGAS_functionValueList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList::GALGAS_functionValueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionValueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionValueList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionValueList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionValueList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionValueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_functionValueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mOperandName,
                                                          const GALGAS_lstring & in_mResultName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_functionValueList * p = NULL ;
  macroMyNew (p, cCollectionElement_functionValueList (in_mOperandName,
                                                       in_mResultName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionValueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::setter_append (GALGAS_functionValueList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionValueList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionValueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionValueList * p = (cCollectionElement_functionValueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionValueList) ;
      outOperand0 = p->mObject.mProperty_mOperandName ;
      outOperand1 = p->mObject.mProperty_mResultName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionValueList * p = (cCollectionElement_functionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mResultName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionValueList * p = (cCollectionElement_functionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mResultName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionValueList * p = (cCollectionElement_functionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mResultName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionValueList * p = (cCollectionElement_functionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mResultName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionValueList::add_operation (const GALGAS_functionValueList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionValueList result = GALGAS_functionValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionValueList result = GALGAS_functionValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_functionValueList result = GALGAS_functionValueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList::plusAssign_operation (const GALGAS_functionValueList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionValueList::getter_mOperandNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionValueList * p = (cCollectionElement_functionValueList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionValueList) ;
    result = p->mObject.mProperty_mOperandName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionValueList::getter_mResultNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionValueList * p = (cCollectionElement_functionValueList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionValueList) ;
    result = p->mObject.mProperty_mResultName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_functionValueList::cEnumerator_functionValueList (const GALGAS_functionValueList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList_2D_element cEnumerator_functionValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_functionValueList * p = (const cCollectionElement_functionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionValueList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionValueList::current_mOperandName (LOCATION_ARGS) const {
  const cCollectionElement_functionValueList * p = (const cCollectionElement_functionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionValueList) ;
  return p->mObject.mProperty_mOperandName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionValueList::current_mResultName (LOCATION_ARGS) const {
  const cCollectionElement_functionValueList * p = (const cCollectionElement_functionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionValueList) ;
  return p->mObject.mProperty_mResultName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @functionValueList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionValueList ("functionValueList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionValueList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionValueList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionValueList result ;
  const GALGAS_functionValueList * p = (const GALGAS_functionValueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@functionDefinitionList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_functionDefinitionList : public cCollectionElement {
  public : GALGAS_functionDefinitionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_functionDefinitionList (const GALGAS_lstring & in_mFunctionName,
                                                      const GALGAS_lstring & in_mOperandEnumTypeName,
                                                      const GALGAS_lstring & in_mResultEnumTypeName,
                                                      const GALGAS_functionValueList & in_mValueList
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_functionDefinitionList (const GALGAS_functionDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_functionDefinitionList::cCollectionElement_functionDefinitionList (const GALGAS_lstring & in_mFunctionName,
                                                                                      const GALGAS_lstring & in_mOperandEnumTypeName,
                                                                                      const GALGAS_lstring & in_mResultEnumTypeName,
                                                                                      const GALGAS_functionValueList & in_mValueList
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mOperandEnumTypeName, in_mResultEnumTypeName, in_mValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_functionDefinitionList::cCollectionElement_functionDefinitionList (const GALGAS_functionDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mOperandEnumTypeName, inElement.mProperty_mResultEnumTypeName, inElement.mProperty_mValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_functionDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_functionDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionDefinitionList (mObject.mProperty_mFunctionName, mObject.mProperty_mOperandEnumTypeName, mObject.mProperty_mResultEnumTypeName, mObject.mProperty_mValueList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_functionDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandEnumTypeName" ":" ;
  mObject.mProperty_mOperandEnumTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultEnumTypeName" ":" ;
  mObject.mProperty_mResultEnumTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValueList" ":" ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_functionDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionDefinitionList * operand = (cCollectionElement_functionDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList::GALGAS_functionDefinitionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList::GALGAS_functionDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_functionDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDefinitionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_functionDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_functionValueList & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_functionDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mFunctionName,
                                                               const GALGAS_lstring & in_mOperandEnumTypeName,
                                                               const GALGAS_lstring & in_mResultEnumTypeName,
                                                               const GALGAS_functionValueList & in_mValueList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_functionDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_functionDefinitionList (in_mFunctionName,
                                                            in_mOperandEnumTypeName,
                                                            in_mResultEnumTypeName,
                                                            in_mValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_functionValueList & inOperand3
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::setter_append (GALGAS_functionDefinitionList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionDefinitionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_functionValueList inOperand3,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_functionValueList & outOperand3,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mFunctionName ;
      outOperand1 = p->mObject.mProperty_mOperandEnumTypeName ;
      outOperand2 = p->mObject.mProperty_mResultEnumTypeName ;
      outOperand3 = p->mObject.mProperty_mValueList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_functionValueList & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mOperandEnumTypeName ;
    outOperand2 = p->mObject.mProperty_mResultEnumTypeName ;
    outOperand3 = p->mObject.mProperty_mValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_functionValueList & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mOperandEnumTypeName ;
    outOperand2 = p->mObject.mProperty_mResultEnumTypeName ;
    outOperand3 = p->mObject.mProperty_mValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_functionValueList & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mOperandEnumTypeName ;
    outOperand2 = p->mObject.mProperty_mResultEnumTypeName ;
    outOperand3 = p->mObject.mProperty_mValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_functionValueList & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mOperandEnumTypeName ;
    outOperand2 = p->mObject.mProperty_mResultEnumTypeName ;
    outOperand3 = p->mObject.mProperty_mValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_functionDefinitionList::add_operation (const GALGAS_functionDefinitionList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_functionDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_functionDefinitionList result = GALGAS_functionDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_functionDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_functionDefinitionList result = GALGAS_functionDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_functionDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_functionDefinitionList result = GALGAS_functionDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList::plusAssign_operation (const GALGAS_functionDefinitionList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDefinitionList::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDefinitionList::getter_mOperandEnumTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    result = p->mObject.mProperty_mOperandEnumTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDefinitionList::getter_mResultEnumTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    result = p->mObject.mProperty_mResultEnumTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionDefinitionList::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDefinitionList * p = (cCollectionElement_functionDefinitionList *) attributes.ptr () ;
  GALGAS_functionValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_functionDefinitionList::cEnumerator_functionDefinitionList (const GALGAS_functionDefinitionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList_2D_element cEnumerator_functionDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_functionDefinitionList * p = (const cCollectionElement_functionDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionDefinitionList::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_functionDefinitionList * p = (const cCollectionElement_functionDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
  return p->mObject.mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionDefinitionList::current_mOperandEnumTypeName (LOCATION_ARGS) const {
  const cCollectionElement_functionDefinitionList * p = (const cCollectionElement_functionDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
  return p->mObject.mProperty_mOperandEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionDefinitionList::current_mResultEnumTypeName (LOCATION_ARGS) const {
  const cCollectionElement_functionDefinitionList * p = (const cCollectionElement_functionDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
  return p->mObject.mProperty_mResultEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList cEnumerator_functionDefinitionList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_functionDefinitionList * p = (const cCollectionElement_functionDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDefinitionList) ;
  return p->mObject.mProperty_mValueList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @functionDefinitionList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDefinitionList ("functionDefinitionList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDefinitionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDefinitionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_functionDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDefinitionList result ;
  const GALGAS_functionDefinitionList * p = (const GALGAS_functionDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@scenarioEventSequence' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_scenarioEventSequence : public cCollectionElement {
  public : GALGAS_scenarioEventSequence_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_scenarioEventSequence (const GALGAS_lstring & in_mEventName,
                                                     const GALGAS_lstringlist & in_mArgumentNameList
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_scenarioEventSequence (const GALGAS_scenarioEventSequence_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_scenarioEventSequence::cCollectionElement_scenarioEventSequence (const GALGAS_lstring & in_mEventName,
                                                                                    const GALGAS_lstringlist & in_mArgumentNameList
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEventName, in_mArgumentNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_scenarioEventSequence::cCollectionElement_scenarioEventSequence (const GALGAS_scenarioEventSequence_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEventName, inElement.mProperty_mArgumentNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_scenarioEventSequence::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_scenarioEventSequence::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_scenarioEventSequence (mObject.mProperty_mEventName, mObject.mProperty_mArgumentNameList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_scenarioEventSequence::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventName" ":" ;
  mObject.mProperty_mEventName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentNameList" ":" ;
  mObject.mProperty_mArgumentNameList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_scenarioEventSequence::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_scenarioEventSequence * operand = (cCollectionElement_scenarioEventSequence *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_scenarioEventSequence) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence::GALGAS_scenarioEventSequence (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence::GALGAS_scenarioEventSequence (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioEventSequence::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioEventSequence  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioEventSequence::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstringlist & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_scenarioEventSequence result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_scenarioEventSequence (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_scenarioEventSequence::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mEventName,
                                                              const GALGAS_lstringlist & in_mArgumentNameList
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_scenarioEventSequence * p = NULL ;
  macroMyNew (p, cCollectionElement_scenarioEventSequence (in_mEventName,
                                                           in_mArgumentNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstringlist & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scenarioEventSequence (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::setter_append (GALGAS_scenarioEventSequence_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scenarioEventSequence (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstringlist inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scenarioEventSequence (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_scenarioEventSequence * p = (cCollectionElement_scenarioEventSequence *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
      outOperand0 = p->mObject.mProperty_mEventName ;
      outOperand1 = p->mObject.mProperty_mArgumentNameList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstringlist & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioEventSequence * p = (cCollectionElement_scenarioEventSequence *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mArgumentNameList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstringlist & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioEventSequence * p = (cCollectionElement_scenarioEventSequence *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mArgumentNameList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstringlist & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioEventSequence * p = (cCollectionElement_scenarioEventSequence *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mArgumentNameList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioEventSequence * p = (cCollectionElement_scenarioEventSequence *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
    outOperand0 = p->mObject.mProperty_mEventName ;
    outOperand1 = p->mObject.mProperty_mArgumentNameList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioEventSequence::add_operation (const GALGAS_scenarioEventSequence & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_scenarioEventSequence result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioEventSequence::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_scenarioEventSequence result = GALGAS_scenarioEventSequence::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioEventSequence::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_scenarioEventSequence result = GALGAS_scenarioEventSequence::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioEventSequence::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_scenarioEventSequence result = GALGAS_scenarioEventSequence::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence::plusAssign_operation (const GALGAS_scenarioEventSequence inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_scenarioEventSequence::getter_mEventNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioEventSequence * p = (cCollectionElement_scenarioEventSequence *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
    result = p->mObject.mProperty_mEventName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_scenarioEventSequence::getter_mArgumentNameListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioEventSequence * p = (cCollectionElement_scenarioEventSequence *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
    result = p->mObject.mProperty_mArgumentNameList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_scenarioEventSequence::cEnumerator_scenarioEventSequence (const GALGAS_scenarioEventSequence & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence_2D_element cEnumerator_scenarioEventSequence::current (LOCATION_ARGS) const {
  const cCollectionElement_scenarioEventSequence * p = (const cCollectionElement_scenarioEventSequence *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_scenarioEventSequence::current_mEventName (LOCATION_ARGS) const {
  const cCollectionElement_scenarioEventSequence * p = (const cCollectionElement_scenarioEventSequence *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
  return p->mObject.mProperty_mEventName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_scenarioEventSequence::current_mArgumentNameList (LOCATION_ARGS) const {
  const cCollectionElement_scenarioEventSequence * p = (const cCollectionElement_scenarioEventSequence *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scenarioEventSequence) ;
  return p->mObject.mProperty_mArgumentNameList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @scenarioEventSequence type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioEventSequence ("scenarioEventSequence",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scenarioEventSequence::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioEventSequence ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scenarioEventSequence::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioEventSequence (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioEventSequence::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_scenarioEventSequence result ;
  const GALGAS_scenarioEventSequence * p = (const GALGAS_scenarioEventSequence *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scenarioEventSequence *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scenarioEventSequence", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@scenarioList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_scenarioList : public cCollectionElement {
  public : GALGAS_scenarioList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_scenarioList (const GALGAS_lstring & in_mMachineName,
                                            const GALGAS_lstring & in_mScenarioName,
                                            const GALGAS_scenarioEventSequence & in_mEventSequence
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_scenarioList (const GALGAS_scenarioList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_scenarioList::cCollectionElement_scenarioList (const GALGAS_lstring & in_mMachineName,
                                                                  const GALGAS_lstring & in_mScenarioName,
                                                                  const GALGAS_scenarioEventSequence & in_mEventSequence
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMachineName, in_mScenarioName, in_mEventSequence) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_scenarioList::cCollectionElement_scenarioList (const GALGAS_scenarioList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMachineName, inElement.mProperty_mScenarioName, inElement.mProperty_mEventSequence) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_scenarioList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_scenarioList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_scenarioList (mObject.mProperty_mMachineName, mObject.mProperty_mScenarioName, mObject.mProperty_mEventSequence COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_scenarioList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMachineName" ":" ;
  mObject.mProperty_mMachineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mScenarioName" ":" ;
  mObject.mProperty_mScenarioName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventSequence" ":" ;
  mObject.mProperty_mEventSequence.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_scenarioList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_scenarioList * operand = (cCollectionElement_scenarioList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_scenarioList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList::GALGAS_scenarioList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList::GALGAS_scenarioList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_scenarioList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_scenarioList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_scenarioEventSequence & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_scenarioList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_scenarioList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_scenarioList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mMachineName,
                                                     const GALGAS_lstring & in_mScenarioName,
                                                     const GALGAS_scenarioEventSequence & in_mEventSequence
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_scenarioList * p = NULL ;
  macroMyNew (p, cCollectionElement_scenarioList (in_mMachineName,
                                                  in_mScenarioName,
                                                  in_mEventSequence COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_lstring & inOperand1,
                                               const GALGAS_scenarioEventSequence & inOperand2
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scenarioList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::setter_append (GALGAS_scenarioList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scenarioList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_lstring inOperand1,
                                                const GALGAS_scenarioEventSequence inOperand2,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scenarioList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_scenarioEventSequence & outOperand2,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_scenarioList) ;
      outOperand0 = p->mObject.mProperty_mMachineName ;
      outOperand1 = p->mObject.mProperty_mScenarioName ;
      outOperand2 = p->mObject.mProperty_mEventSequence ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           GALGAS_scenarioEventSequence & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mScenarioName ;
    outOperand2 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          GALGAS_scenarioEventSequence & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mScenarioName ;
    outOperand2 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_lstring & outOperand1,
                                        GALGAS_scenarioEventSequence & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mScenarioName ;
    outOperand2 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_lstring & outOperand1,
                                       GALGAS_scenarioEventSequence & outOperand2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mMachineName ;
    outOperand1 = p->mObject.mProperty_mScenarioName ;
    outOperand2 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_scenarioList::add_operation (const GALGAS_scenarioList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_scenarioList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_scenarioList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_scenarioList result = GALGAS_scenarioList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_scenarioList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_scenarioList result = GALGAS_scenarioList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_scenarioList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_scenarioList result = GALGAS_scenarioList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList::plusAssign_operation (const GALGAS_scenarioList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_scenarioList::getter_mMachineNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scenarioList) ;
    result = p->mObject.mProperty_mMachineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_scenarioList::getter_mScenarioNameAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scenarioList) ;
    result = p->mObject.mProperty_mScenarioName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioList::getter_mEventSequenceAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scenarioList * p = (cCollectionElement_scenarioList *) attributes.ptr () ;
  GALGAS_scenarioEventSequence result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scenarioList) ;
    result = p->mObject.mProperty_mEventSequence ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_scenarioList::cEnumerator_scenarioList (const GALGAS_scenarioList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList_2D_element cEnumerator_scenarioList::current (LOCATION_ARGS) const {
  const cCollectionElement_scenarioList * p = (const cCollectionElement_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scenarioList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_scenarioList::current_mMachineName (LOCATION_ARGS) const {
  const cCollectionElement_scenarioList * p = (const cCollectionElement_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scenarioList) ;
  return p->mObject.mProperty_mMachineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_scenarioList::current_mScenarioName (LOCATION_ARGS) const {
  const cCollectionElement_scenarioList * p = (const cCollectionElement_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scenarioList) ;
  return p->mObject.mProperty_mScenarioName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence cEnumerator_scenarioList::current_mEventSequence (LOCATION_ARGS) const {
  const cCollectionElement_scenarioList * p = (const cCollectionElement_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scenarioList) ;
  return p->mObject.mProperty_mEventSequence ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @scenarioList type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioList ("scenarioList",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scenarioList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scenarioList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_scenarioList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_scenarioList result ;
  const GALGAS_scenarioList * p = (const GALGAS_scenarioList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scenarioList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scenarioList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::GALGAS_ast (void) :
mProperty_mEnumTypeList (),
mProperty_mMachineList (),
mProperty_mFunctionDefinitionList (),
mProperty_mScenarioList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::~ GALGAS_ast (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::GALGAS_ast (const GALGAS_enumTypeList & inOperand0,
                        const GALGAS_machineList & inOperand1,
                        const GALGAS_functionDefinitionList & inOperand2,
                        const GALGAS_scenarioList & inOperand3) :
mProperty_mEnumTypeList (inOperand0),
mProperty_mMachineList (inOperand1),
mProperty_mFunctionDefinitionList (inOperand2),
mProperty_mScenarioList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_enumTypeList::constructor_emptyList (HERE),
                     GALGAS_machineList::constructor_emptyList (HERE),
                     GALGAS_functionDefinitionList::constructor_emptyList (HERE),
                     GALGAS_scenarioList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_enumTypeList & inOperand0,
                                        const GALGAS_machineList & inOperand1,
                                        const GALGAS_functionDefinitionList & inOperand2,
                                        const GALGAS_scenarioList & inOperand3 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumTypeList.objectCompare (inOperand.mProperty_mEnumTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMachineList.objectCompare (inOperand.mProperty_mMachineList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionDefinitionList.objectCompare (inOperand.mProperty_mFunctionDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mScenarioList.objectCompare (inOperand.mProperty_mScenarioList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ast::isValid (void) const {
  return mProperty_mEnumTypeList.isValid () && mProperty_mMachineList.isValid () && mProperty_mFunctionDefinitionList.isValid () && mProperty_mScenarioList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ast::drop (void) {
  mProperty_mEnumTypeList.drop () ;
  mProperty_mMachineList.drop () ;
  mProperty_mFunctionDefinitionList.drop () ;
  mProperty_mScenarioList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMachineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mScenarioList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList GALGAS_ast::getter_mEnumTypeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumTypeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList GALGAS_ast::getter_mMachineList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList GALGAS_ast::getter_mFunctionDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDefinitionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList GALGAS_ast::getter_mScenarioList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScenarioList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                      @ast type                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::extractObject (const GALGAS_object & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_ast result ;
  const GALGAS_ast * p = (const GALGAS_ast *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_decoratedInstruction::objectCompare (const GALGAS_decoratedInstruction & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstruction::GALGAS_decoratedInstruction (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstruction::GALGAS_decoratedInstruction (const cPtr_decoratedInstruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @decoratedInstruction class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedInstruction::cPtr_decoratedInstruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @decoratedInstruction type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedInstruction ("decoratedInstruction",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstruction GALGAS_decoratedInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedInstruction result ;
  const GALGAS_decoratedInstruction * p = (const GALGAS_decoratedInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@decoratedInstructionList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_decoratedInstructionList : public cCollectionElement {
  public : GALGAS_decoratedInstructionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_decoratedInstructionList (const GALGAS_decoratedInstruction & in_mDecoratedInstruction
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_decoratedInstructionList (const GALGAS_decoratedInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedInstructionList::cCollectionElement_decoratedInstructionList (const GALGAS_decoratedInstruction & in_mDecoratedInstruction
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDecoratedInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedInstructionList::cCollectionElement_decoratedInstructionList (const GALGAS_decoratedInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDecoratedInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_decoratedInstructionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_decoratedInstructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedInstructionList (mObject.mProperty_mDecoratedInstruction COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_decoratedInstructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDecoratedInstruction" ":" ;
  mObject.mProperty_mDecoratedInstruction.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_decoratedInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedInstructionList * operand = (cCollectionElement_decoratedInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList::GALGAS_decoratedInstructionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList::GALGAS_decoratedInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_decoratedInstructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedInstructionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_decoratedInstructionList::constructor_listWithValue (const GALGAS_decoratedInstruction & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedInstructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_decoratedInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedInstructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_decoratedInstruction & in_mDecoratedInstruction
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedInstructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedInstructionList (in_mDecoratedInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::addAssign_operation (const GALGAS_decoratedInstruction & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::setter_append (GALGAS_decoratedInstructionList_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedInstructionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::setter_insertAtIndex (const GALGAS_decoratedInstruction inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::setter_removeAtIndex (GALGAS_decoratedInstruction & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedInstructionList * p = (cCollectionElement_decoratedInstructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
      outOperand0 = p->mObject.mProperty_mDecoratedInstruction ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::setter_popFirst (GALGAS_decoratedInstruction & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedInstructionList * p = (cCollectionElement_decoratedInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
    outOperand0 = p->mObject.mProperty_mDecoratedInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::setter_popLast (GALGAS_decoratedInstruction & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedInstructionList * p = (cCollectionElement_decoratedInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
    outOperand0 = p->mObject.mProperty_mDecoratedInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::method_first (GALGAS_decoratedInstruction & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedInstructionList * p = (cCollectionElement_decoratedInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
    outOperand0 = p->mObject.mProperty_mDecoratedInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::method_last (GALGAS_decoratedInstruction & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedInstructionList * p = (cCollectionElement_decoratedInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
    outOperand0 = p->mObject.mProperty_mDecoratedInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_decoratedInstructionList::add_operation (const GALGAS_decoratedInstructionList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_decoratedInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedInstructionList result = GALGAS_decoratedInstructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_decoratedInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedInstructionList result = GALGAS_decoratedInstructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_decoratedInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedInstructionList result = GALGAS_decoratedInstructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList::plusAssign_operation (const GALGAS_decoratedInstructionList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstruction GALGAS_decoratedInstructionList::getter_mDecoratedInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedInstructionList * p = (cCollectionElement_decoratedInstructionList *) attributes.ptr () ;
  GALGAS_decoratedInstruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
    result = p->mObject.mProperty_mDecoratedInstruction ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedInstructionList::cEnumerator_decoratedInstructionList (const GALGAS_decoratedInstructionList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList_2D_element cEnumerator_decoratedInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedInstructionList * p = (const cCollectionElement_decoratedInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstruction cEnumerator_decoratedInstructionList::current_mDecoratedInstruction (LOCATION_ARGS) const {
  const cCollectionElement_decoratedInstructionList * p = (const cCollectionElement_decoratedInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedInstructionList) ;
  return p->mObject.mProperty_mDecoratedInstruction ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @decoratedInstructionList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedInstructionList ("decoratedInstructionList",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedInstructionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_decoratedInstructionList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedInstructionList result ;
  const GALGAS_decoratedInstructionList * p = (const GALGAS_decoratedInstructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_decoratedExpression::objectCompare (const GALGAS_decoratedExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression::GALGAS_decoratedExpression (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression::GALGAS_decoratedExpression (const cPtr_decoratedExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @decoratedExpression class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedExpression::cPtr_decoratedExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @decoratedExpression type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedExpression ("decoratedExpression",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_decoratedExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedExpression result ;
  const GALGAS_decoratedExpression * p = (const GALGAS_decoratedExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@decoratedExpressionList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_decoratedExpressionList : public cCollectionElement {
  public : GALGAS_decoratedExpressionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_decoratedExpressionList (const GALGAS_lstring & in_mLabel,
                                                       const GALGAS_decoratedExpression & in_mDecoratedExpression
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_decoratedExpressionList (const GALGAS_decoratedExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedExpressionList::cCollectionElement_decoratedExpressionList (const GALGAS_lstring & in_mLabel,
                                                                                        const GALGAS_decoratedExpression & in_mDecoratedExpression
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabel, in_mDecoratedExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedExpressionList::cCollectionElement_decoratedExpressionList (const GALGAS_decoratedExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabel, inElement.mProperty_mDecoratedExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_decoratedExpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_decoratedExpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedExpressionList (mObject.mProperty_mLabel, mObject.mProperty_mDecoratedExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_decoratedExpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabel" ":" ;
  mObject.mProperty_mLabel.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDecoratedExpression" ":" ;
  mObject.mProperty_mDecoratedExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_decoratedExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedExpressionList * operand = (cCollectionElement_decoratedExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList::GALGAS_decoratedExpressionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList::GALGAS_decoratedExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_decoratedExpressionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedExpressionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_decoratedExpressionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_decoratedExpression & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mLabel,
                                                                const GALGAS_decoratedExpression & in_mDecoratedExpression
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedExpressionList (in_mLabel,
                                                             in_mDecoratedExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_decoratedExpression & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::setter_append (GALGAS_decoratedExpressionList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedExpressionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_decoratedExpression inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_decoratedExpression & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedExpressionList * p = (cCollectionElement_decoratedExpressionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
      outOperand0 = p->mObject.mProperty_mLabel ;
      outOperand1 = p->mObject.mProperty_mDecoratedExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_decoratedExpression & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedExpressionList * p = (cCollectionElement_decoratedExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mDecoratedExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_decoratedExpression & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedExpressionList * p = (cCollectionElement_decoratedExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mDecoratedExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_decoratedExpression & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedExpressionList * p = (cCollectionElement_decoratedExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mDecoratedExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_decoratedExpression & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedExpressionList * p = (cCollectionElement_decoratedExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mDecoratedExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_decoratedExpressionList::add_operation (const GALGAS_decoratedExpressionList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_decoratedExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedExpressionList result = GALGAS_decoratedExpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_decoratedExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedExpressionList result = GALGAS_decoratedExpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_decoratedExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedExpressionList result = GALGAS_decoratedExpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList::plusAssign_operation (const GALGAS_decoratedExpressionList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedExpressionList::getter_mLabelAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedExpressionList * p = (cCollectionElement_decoratedExpressionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
    result = p->mObject.mProperty_mLabel ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_decoratedExpressionList::getter_mDecoratedExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedExpressionList * p = (cCollectionElement_decoratedExpressionList *) attributes.ptr () ;
  GALGAS_decoratedExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
    result = p->mObject.mProperty_mDecoratedExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedExpressionList::cEnumerator_decoratedExpressionList (const GALGAS_decoratedExpressionList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList_2D_element cEnumerator_decoratedExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedExpressionList * p = (const cCollectionElement_decoratedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedExpressionList::current_mLabel (LOCATION_ARGS) const {
  const cCollectionElement_decoratedExpressionList * p = (const cCollectionElement_decoratedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
  return p->mObject.mProperty_mLabel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cEnumerator_decoratedExpressionList::current_mDecoratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_decoratedExpressionList * p = (const cCollectionElement_decoratedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedExpressionList) ;
  return p->mObject.mProperty_mDecoratedExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @decoratedExpressionList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedExpressionList ("decoratedExpressionList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedExpressionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_decoratedExpressionList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedExpressionList result ;
  const GALGAS_decoratedExpressionList * p = (const GALGAS_decoratedExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_enumConstantMap::cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_enumConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_enumConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_enumConstantMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_enumConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_enumConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumConstantMap * operand = (cMapElement_enumConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap & GALGAS_enumConstantMap::operator = (const GALGAS_enumConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_mapWithMapToOverride (const GALGAS_enumConstantMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_enumConstantMap_searchKey = "there is no '%K' constant" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_enumConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_enumConstantMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_enumConstantMap * p = (cMapElement_enumConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_enumConstantMap * GALGAS_enumConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * result = (cMapElement_enumConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumConstantMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumConstantMap::cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element cEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return GALGAS_enumConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return p->mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @enumConstantMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  const GALGAS_enumConstantMap * p = (const GALGAS_enumConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedScalarTypeMap::cMapElement_unifiedScalarTypeMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_enumConstantMap & in_mConstantMap,
                                                                    const GALGAS_lstringlist & in_mEnumConstantList,
                                                                    const GALGAS_bool & in_mGenerate
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstantMap (in_mConstantMap),
mProperty_mEnumConstantList (in_mEnumConstantList),
mProperty_mGenerate (in_mGenerate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_unifiedScalarTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantMap.isValid () && mProperty_mEnumConstantList.isValid () && mProperty_mGenerate.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_unifiedScalarTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedScalarTypeMap (mProperty_lkey, mProperty_mConstantMap, mProperty_mEnumConstantList, mProperty_mGenerate COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_unifiedScalarTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantMap" ":" ;
  mProperty_mConstantMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantList" ":" ;
  mProperty_mEnumConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGenerate" ":" ;
  mProperty_mGenerate.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_unifiedScalarTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedScalarTypeMap * operand = (cMapElement_unifiedScalarTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantMap.objectCompare (operand->mProperty_mConstantMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantList.objectCompare (operand->mProperty_mEnumConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerate.objectCompare (operand->mProperty_mGenerate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap::GALGAS_unifiedScalarTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap::GALGAS_unifiedScalarTypeMap (const GALGAS_unifiedScalarTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap & GALGAS_unifiedScalarTypeMap::operator = (const GALGAS_unifiedScalarTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap GALGAS_unifiedScalarTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedScalarTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton states                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton state names                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton actions                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton transitions                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton final state issues                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_enumConstantMap inArgument0,
                                                    GALGAS_lstringlist inArgument1,
                                                    GALGAS_bool inArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_unifiedScalarTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedScalarTypeMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' scalar type is already declared" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     0,
                     NULL,
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_unifiedScalarTypeMap_searchKey = "there is no '%K' scalar type" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_enumConstantMap & outArgument0,
                                                    GALGAS_lstringlist & outArgument1,
                                                    GALGAS_bool & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_unifiedScalarTypeMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    outArgument0 = p->mProperty_mConstantMap ;
    outArgument1 = p->mProperty_mEnumConstantList ;
    outArgument2 = p->mProperty_mGenerate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_unifiedScalarTypeMap::getter_mConstantMapForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) attributes ;
  GALGAS_enumConstantMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    result = p->mProperty_mConstantMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_unifiedScalarTypeMap::getter_mEnumConstantListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    result = p->mProperty_mEnumConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_unifiedScalarTypeMap::getter_mGenerateForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    result = p->mProperty_mGenerate ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap::setter_setMConstantMapForKey (GALGAS_enumConstantMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedScalarTypeMap * p = (cMapElement_unifiedScalarTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    p->mProperty_mConstantMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap::setter_setMEnumConstantListForKey (GALGAS_lstringlist inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedScalarTypeMap * p = (cMapElement_unifiedScalarTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    p->mProperty_mEnumConstantList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap::setter_setMGenerateForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedScalarTypeMap * p = (cMapElement_unifiedScalarTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    p->mProperty_mGenerate = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedScalarTypeMap * GALGAS_unifiedScalarTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_unifiedScalarTypeMap * result = (cMapElement_unifiedScalarTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedScalarTypeMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_unifiedScalarTypeMap::cEnumerator_unifiedScalarTypeMap (const GALGAS_unifiedScalarTypeMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_unifiedScalarTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap cEnumerator_unifiedScalarTypeMap::current_mConstantMap (LOCATION_ARGS) const {
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
  return p->mProperty_mConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_unifiedScalarTypeMap::current_mEnumConstantList (LOCATION_ARGS) const {
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
  return p->mProperty_mEnumConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_unifiedScalarTypeMap::current_mGenerate (LOCATION_ARGS) const {
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
  return p->mProperty_mGenerate ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @unifiedScalarTypeMap type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedScalarTypeMap ("unifiedScalarTypeMap",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedScalarTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedScalarTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedScalarTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedScalarTypeMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap GALGAS_unifiedScalarTypeMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_unifiedScalarTypeMap result ;
  const GALGAS_unifiedScalarTypeMap * p = (const GALGAS_unifiedScalarTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedScalarTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedScalarTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy::GALGAS_unifiedScalarTypeMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap_2D_proxy::class_method_makeOptionalProxy (GALGAS_unifiedScalarTypeMap & ioMap,
                                                                           GALGAS_lstring inKey,
                                                                           GALGAS_unifiedScalarTypeMap_2D_proxy & outProxy
                                                                           COMMA_LOCATION_ARGS) {
  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap_2D_proxy::class_method_makeProxy (GALGAS_unifiedScalarTypeMap & ioMap,
                                                                   GALGAS_lstring inKey,
                                                                   GALGAS_unifiedScalarTypeMap_2D_proxy & outProxy
                                                                   COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedScalarTypeMap_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedScalarTypeMap & ioMap,
                                                                             GALGAS_string inKey,
                                                                             GALGAS_unifiedScalarTypeMap_2D_proxy & outProxy
                                                                             COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_unifiedScalarTypeMap_2D_proxy::getter_mConstantMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantMap result ;
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) getAttributeListPointer (inCompiler, "mConstantMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    result = p->mProperty_mConstantMap;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_unifiedScalarTypeMap_2D_proxy::getter_mEnumConstantList (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) getAttributeListPointer (inCompiler, "mEnumConstantList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    result = p->mProperty_mEnumConstantList;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_unifiedScalarTypeMap_2D_proxy::getter_mGenerate (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedScalarTypeMap * p = (const cMapElement_unifiedScalarTypeMap *) getAttributeListPointer (inCompiler, "mGenerate" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedScalarTypeMap) ;
    result = p->mProperty_mGenerate;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (const GALGAS_unifiedScalarTypeMap & inMap,
                                                                                                  const GALGAS_lstring & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedScalarTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @unifiedScalarTypeMap-proxy type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedScalarTypeMap_2D_proxy ("unifiedScalarTypeMap-proxy",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedScalarTypeMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedScalarTypeMap_2D_proxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedScalarTypeMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedScalarTypeMap_2D_proxy (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_unifiedScalarTypeMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  const GALGAS_unifiedScalarTypeMap_2D_proxy * p = (const GALGAS_unifiedScalarTypeMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedScalarTypeMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedScalarTypeMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@decoratedArgumentList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_decoratedArgumentList : public cCollectionElement {
  public : GALGAS_decoratedArgumentList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_decoratedArgumentList (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mArgumentTypeProxy,
                                                     const GALGAS_lstring & in_mArgumentName
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_decoratedArgumentList (const GALGAS_decoratedArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedArgumentList::cCollectionElement_decoratedArgumentList (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mArgumentTypeProxy,
                                                                                    const GALGAS_lstring & in_mArgumentName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mArgumentTypeProxy, in_mArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedArgumentList::cCollectionElement_decoratedArgumentList (const GALGAS_decoratedArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mArgumentTypeProxy, inElement.mProperty_mArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_decoratedArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_decoratedArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedArgumentList (mObject.mProperty_mArgumentTypeProxy, mObject.mProperty_mArgumentName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_decoratedArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeProxy" ":" ;
  mObject.mProperty_mArgumentTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentName" ":" ;
  mObject.mProperty_mArgumentName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_decoratedArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedArgumentList * operand = (cCollectionElement_decoratedArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList::GALGAS_decoratedArgumentList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList::GALGAS_decoratedArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_decoratedArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedArgumentList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_decoratedArgumentList::constructor_listWithValue (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mArgumentTypeProxy,
                                                              const GALGAS_lstring & in_mArgumentName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedArgumentList (in_mArgumentTypeProxy,
                                                           in_mArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::addAssign_operation (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                        const GALGAS_lstring & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::setter_append (GALGAS_decoratedArgumentList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedArgumentList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::setter_insertAtIndex (const GALGAS_unifiedScalarTypeMap_2D_proxy inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::setter_removeAtIndex (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedArgumentList * p = (cCollectionElement_decoratedArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
      outOperand0 = p->mObject.mProperty_mArgumentTypeProxy ;
      outOperand1 = p->mObject.mProperty_mArgumentName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::setter_popFirst (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedArgumentList * p = (cCollectionElement_decoratedArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeProxy ;
    outOperand1 = p->mObject.mProperty_mArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::setter_popLast (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedArgumentList * p = (cCollectionElement_decoratedArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeProxy ;
    outOperand1 = p->mObject.mProperty_mArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::method_first (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedArgumentList * p = (cCollectionElement_decoratedArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeProxy ;
    outOperand1 = p->mObject.mProperty_mArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::method_last (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedArgumentList * p = (cCollectionElement_decoratedArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
    outOperand0 = p->mObject.mProperty_mArgumentTypeProxy ;
    outOperand1 = p->mObject.mProperty_mArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_decoratedArgumentList::add_operation (const GALGAS_decoratedArgumentList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_decoratedArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedArgumentList result = GALGAS_decoratedArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_decoratedArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedArgumentList result = GALGAS_decoratedArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_decoratedArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedArgumentList result = GALGAS_decoratedArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList::plusAssign_operation (const GALGAS_decoratedArgumentList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_decoratedArgumentList::getter_mArgumentTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedArgumentList * p = (cCollectionElement_decoratedArgumentList *) attributes.ptr () ;
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
    result = p->mObject.mProperty_mArgumentTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedArgumentList::getter_mArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedArgumentList * p = (cCollectionElement_decoratedArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
    result = p->mObject.mProperty_mArgumentName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedArgumentList::cEnumerator_decoratedArgumentList (const GALGAS_decoratedArgumentList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList_2D_element cEnumerator_decoratedArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedArgumentList * p = (const cCollectionElement_decoratedArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy cEnumerator_decoratedArgumentList::current_mArgumentTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_decoratedArgumentList * p = (const cCollectionElement_decoratedArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
  return p->mObject.mProperty_mArgumentTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedArgumentList::current_mArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedArgumentList * p = (const cCollectionElement_decoratedArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedArgumentList) ;
  return p->mObject.mProperty_mArgumentName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @decoratedArgumentList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedArgumentList ("decoratedArgumentList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedArgumentList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_decoratedArgumentList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedArgumentList result ;
  const GALGAS_decoratedArgumentList * p = (const GALGAS_decoratedArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_eventMap::cMapElement_eventMap (const GALGAS_lstring & inKey,
                                            const GALGAS_decoratedArgumentList & in_mDecoratedArgumentList,
                                            const GALGAS_decoratedInstructionList & in_mDecoratedEventInstructionList,
                                            const GALGAS_decoratedExpressionList & in_mEnsureDecoratedExpressionList,
                                            const GALGAS_location & in_mEndOfEnsureExpressionList
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDecoratedArgumentList (in_mDecoratedArgumentList),
mProperty_mDecoratedEventInstructionList (in_mDecoratedEventInstructionList),
mProperty_mEnsureDecoratedExpressionList (in_mEnsureDecoratedExpressionList),
mProperty_mEndOfEnsureExpressionList (in_mEndOfEnsureExpressionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_eventMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDecoratedArgumentList.isValid () && mProperty_mDecoratedEventInstructionList.isValid () && mProperty_mEnsureDecoratedExpressionList.isValid () && mProperty_mEndOfEnsureExpressionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_eventMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_eventMap (mProperty_lkey, mProperty_mDecoratedArgumentList, mProperty_mDecoratedEventInstructionList, mProperty_mEnsureDecoratedExpressionList, mProperty_mEndOfEnsureExpressionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_eventMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDecoratedArgumentList" ":" ;
  mProperty_mDecoratedArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDecoratedEventInstructionList" ":" ;
  mProperty_mDecoratedEventInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnsureDecoratedExpressionList" ":" ;
  mProperty_mEnsureDecoratedExpressionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfEnsureExpressionList" ":" ;
  mProperty_mEndOfEnsureExpressionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_eventMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_eventMap * operand = (cMapElement_eventMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDecoratedArgumentList.objectCompare (operand->mProperty_mDecoratedArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDecoratedEventInstructionList.objectCompare (operand->mProperty_mDecoratedEventInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnsureDecoratedExpressionList.objectCompare (operand->mProperty_mEnsureDecoratedExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfEnsureExpressionList.objectCompare (operand->mProperty_mEndOfEnsureExpressionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap::GALGAS_eventMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap::GALGAS_eventMap (const GALGAS_eventMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap & GALGAS_eventMap::operator = (const GALGAS_eventMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap GALGAS_eventMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_eventMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap GALGAS_eventMap::constructor_mapWithMapToOverride (const GALGAS_eventMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_eventMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap GALGAS_eventMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_eventMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_decoratedArgumentList & inArgument0,
                                           const GALGAS_decoratedInstructionList & inArgument1,
                                           const GALGAS_decoratedExpressionList & inArgument2,
                                           const GALGAS_location & inArgument3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_eventMap * p = NULL ;
  macroMyNew (p, cMapElement_eventMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@eventMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_decoratedArgumentList inArgument0,
                                        GALGAS_decoratedInstructionList inArgument1,
                                        GALGAS_decoratedExpressionList inArgument2,
                                        GALGAS_location inArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_eventMap * p = NULL ;
  macroMyNew (p, cMapElement_eventMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' event is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_eventMap_searchKey = "there is no '%K' event" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_decoratedArgumentList & outArgument0,
                                        GALGAS_decoratedInstructionList & outArgument1,
                                        GALGAS_decoratedExpressionList & outArgument2,
                                        GALGAS_location & outArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_eventMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_eventMap) ;
    outArgument0 = p->mProperty_mDecoratedArgumentList ;
    outArgument1 = p->mProperty_mDecoratedEventInstructionList ;
    outArgument2 = p->mProperty_mEnsureDecoratedExpressionList ;
    outArgument3 = p->mProperty_mEndOfEnsureExpressionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_eventMap::getter_mDecoratedArgumentListForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) attributes ;
  GALGAS_decoratedArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    result = p->mProperty_mDecoratedArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_eventMap::getter_mDecoratedEventInstructionListForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) attributes ;
  GALGAS_decoratedInstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    result = p->mProperty_mDecoratedEventInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_eventMap::getter_mEnsureDecoratedExpressionListForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) attributes ;
  GALGAS_decoratedExpressionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    result = p->mProperty_mEnsureDecoratedExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_eventMap::getter_mEndOfEnsureExpressionListForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    result = p->mProperty_mEndOfEnsureExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap::setter_setMDecoratedArgumentListForKey (GALGAS_decoratedArgumentList inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_eventMap * p = (cMapElement_eventMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    p->mProperty_mDecoratedArgumentList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap::setter_setMDecoratedEventInstructionListForKey (GALGAS_decoratedInstructionList inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_eventMap * p = (cMapElement_eventMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    p->mProperty_mDecoratedEventInstructionList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap::setter_setMEnsureDecoratedExpressionListForKey (GALGAS_decoratedExpressionList inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_eventMap * p = (cMapElement_eventMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    p->mProperty_mEnsureDecoratedExpressionList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap::setter_setMEndOfEnsureExpressionListForKey (GALGAS_location inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_eventMap * p = (cMapElement_eventMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_eventMap) ;
    p->mProperty_mEndOfEnsureExpressionList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_eventMap * GALGAS_eventMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_eventMap * result = (cMapElement_eventMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_eventMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_eventMap::cEnumerator_eventMap (const GALGAS_eventMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap_2D_element cEnumerator_eventMap::current (LOCATION_ARGS) const {
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_eventMap) ;
  return GALGAS_eventMap_2D_element (p->mProperty_lkey, p->mProperty_mDecoratedArgumentList, p->mProperty_mDecoratedEventInstructionList, p->mProperty_mEnsureDecoratedExpressionList, p->mProperty_mEndOfEnsureExpressionList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_eventMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList cEnumerator_eventMap::current_mDecoratedArgumentList (LOCATION_ARGS) const {
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_eventMap) ;
  return p->mProperty_mDecoratedArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList cEnumerator_eventMap::current_mDecoratedEventInstructionList (LOCATION_ARGS) const {
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_eventMap) ;
  return p->mProperty_mDecoratedEventInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList cEnumerator_eventMap::current_mEnsureDecoratedExpressionList (LOCATION_ARGS) const {
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_eventMap) ;
  return p->mProperty_mEnsureDecoratedExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_eventMap::current_mEndOfEnsureExpressionList (LOCATION_ARGS) const {
  const cMapElement_eventMap * p = (const cMapElement_eventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_eventMap) ;
  return p->mProperty_mEndOfEnsureExpressionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @eventMap type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventMap ("eventMap",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_eventMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_eventMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap GALGAS_eventMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_eventMap result ;
  const GALGAS_eventMap * p = (const GALGAS_eventMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_eventMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("eventMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_machineVarMap::cMapElement_machineVarMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                                      const GALGAS_uint & in_mMaxValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTypeProxy (in_mTypeProxy),
mProperty_mMaxValue (in_mMaxValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_machineVarMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mMaxValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_machineVarMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_machineVarMap (mProperty_lkey, mProperty_mTypeProxy, mProperty_mMaxValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_machineVarMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mProperty_mTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMaxValue" ":" ;
  mProperty_mMaxValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_machineVarMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_machineVarMap * operand = (cMapElement_machineVarMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (operand->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMaxValue.objectCompare (operand->mProperty_mMaxValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap::GALGAS_machineVarMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap::GALGAS_machineVarMap (const GALGAS_machineVarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap & GALGAS_machineVarMap::operator = (const GALGAS_machineVarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap GALGAS_machineVarMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_machineVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap GALGAS_machineVarMap::constructor_mapWithMapToOverride (const GALGAS_machineVarMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_machineVarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap GALGAS_machineVarMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_unifiedScalarTypeMap_2D_proxy & inArgument0,
                                                const GALGAS_uint & inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_machineVarMap * p = NULL ;
  macroMyNew (p, cMapElement_machineVarMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@machineVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_unifiedScalarTypeMap_2D_proxy inArgument0,
                                             GALGAS_uint inArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_machineVarMap * p = NULL ;
  macroMyNew (p, cMapElement_machineVarMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' var is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_machineVarMap_searchKey = "there is no '%K' var" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarMap::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                             GALGAS_uint & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_machineVarMap * p = (const cMapElement_machineVarMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_machineVarMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_machineVarMap) ;
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mMaxValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_machineVarMap::getter_mTypeProxyForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_machineVarMap * p = (const cMapElement_machineVarMap *) attributes ;
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineVarMap) ;
    result = p->mProperty_mTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarMap::getter_mMaxValueForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_machineVarMap * p = (const cMapElement_machineVarMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineVarMap) ;
    result = p->mProperty_mMaxValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarMap::setter_setMTypeProxyForKey (GALGAS_unifiedScalarTypeMap_2D_proxy inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_machineVarMap * p = (cMapElement_machineVarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineVarMap) ;
    p->mProperty_mTypeProxy = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarMap::setter_setMMaxValueForKey (GALGAS_uint inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_machineVarMap * p = (cMapElement_machineVarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineVarMap) ;
    p->mProperty_mMaxValue = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_machineVarMap * GALGAS_machineVarMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_machineVarMap * result = (cMapElement_machineVarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_machineVarMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_machineVarMap::cEnumerator_machineVarMap (const GALGAS_machineVarMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap_2D_element cEnumerator_machineVarMap::current (LOCATION_ARGS) const {
  const cMapElement_machineVarMap * p = (const cMapElement_machineVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineVarMap) ;
  return GALGAS_machineVarMap_2D_element (p->mProperty_lkey, p->mProperty_mTypeProxy, p->mProperty_mMaxValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_machineVarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy cEnumerator_machineVarMap::current_mTypeProxy (LOCATION_ARGS) const {
  const cMapElement_machineVarMap * p = (const cMapElement_machineVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineVarMap) ;
  return p->mProperty_mTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_machineVarMap::current_mMaxValue (LOCATION_ARGS) const {
  const cMapElement_machineVarMap * p = (const cMapElement_machineVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineVarMap) ;
  return p->mProperty_mMaxValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @machineVarMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarMap ("machineVarMap",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineVarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineVarMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap GALGAS_machineVarMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_machineVarMap result ;
  const GALGAS_machineVarMap * p = (const GALGAS_machineVarMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineVarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineVarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@machineVarList' list                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_machineVarList : public cCollectionElement {
  public : GALGAS_machineVarList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_machineVarList (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                              const GALGAS_lstring & in_mVarName,
                                              const GALGAS_lstringlist & in_mValueList,
                                              const GALGAS_lstring & in_mInitialValueConstantName,
                                              const GALGAS_uint & in_mInitialValueConstantIndex
                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_machineVarList (const GALGAS_machineVarList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_machineVarList::cCollectionElement_machineVarList (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                                                      const GALGAS_lstring & in_mVarName,
                                                                      const GALGAS_lstringlist & in_mValueList,
                                                                      const GALGAS_lstring & in_mInitialValueConstantName,
                                                                      const GALGAS_uint & in_mInitialValueConstantIndex
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeProxy, in_mVarName, in_mValueList, in_mInitialValueConstantName, in_mInitialValueConstantIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_machineVarList::cCollectionElement_machineVarList (const GALGAS_machineVarList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeProxy, inElement.mProperty_mVarName, inElement.mProperty_mValueList, inElement.mProperty_mInitialValueConstantName, inElement.mProperty_mInitialValueConstantIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_machineVarList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_machineVarList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_machineVarList (mObject.mProperty_mTypeProxy, mObject.mProperty_mVarName, mObject.mProperty_mValueList, mObject.mProperty_mInitialValueConstantName, mObject.mProperty_mInitialValueConstantIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_machineVarList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mObject.mProperty_mTypeProxy.description (ioString, inIndentation) ;
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
  ioString << "mInitialValueConstantName" ":" ;
  mObject.mProperty_mInitialValueConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValueConstantIndex" ":" ;
  mObject.mProperty_mInitialValueConstantIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_machineVarList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_machineVarList * operand = (cCollectionElement_machineVarList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_machineVarList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList::GALGAS_machineVarList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList::GALGAS_machineVarList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineVarList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineVarList::constructor_listWithValue (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_lstringlist & inOperand2,
                                                                        const GALGAS_lstring & inOperand3,
                                                                        const GALGAS_uint & inOperand4
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_machineVarList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_machineVarList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_machineVarList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                                       const GALGAS_lstring & in_mVarName,
                                                       const GALGAS_lstringlist & in_mValueList,
                                                       const GALGAS_lstring & in_mInitialValueConstantName,
                                                       const GALGAS_uint & in_mInitialValueConstantIndex
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_machineVarList * p = NULL ;
  macroMyNew (p, cCollectionElement_machineVarList (in_mTypeProxy,
                                                    in_mVarName,
                                                    in_mValueList,
                                                    in_mInitialValueConstantName,
                                                    in_mInitialValueConstantIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::addAssign_operation (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                 const GALGAS_lstring & inOperand1,
                                                 const GALGAS_lstringlist & inOperand2,
                                                 const GALGAS_lstring & inOperand3,
                                                 const GALGAS_uint & inOperand4
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::setter_append (GALGAS_machineVarList_2D_element inElement,
                                           C_Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::setter_insertAtIndex (const GALGAS_unifiedScalarTypeMap_2D_proxy inOperand0,
                                                  const GALGAS_lstring inOperand1,
                                                  const GALGAS_lstringlist inOperand2,
                                                  const GALGAS_lstring inOperand3,
                                                  const GALGAS_uint inOperand4,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::setter_removeAtIndex (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  GALGAS_uint & outOperand4,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_machineVarList) ;
      outOperand0 = p->mObject.mProperty_mTypeProxy ;
      outOperand1 = p->mObject.mProperty_mVarName ;
      outOperand2 = p->mObject.mProperty_mValueList ;
      outOperand3 = p->mObject.mProperty_mInitialValueConstantName ;
      outOperand4 = p->mObject.mProperty_mInitialValueConstantIndex ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::setter_popFirst (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_lstringlist & outOperand2,
                                             GALGAS_lstring & outOperand3,
                                             GALGAS_uint & outOperand4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    outOperand0 = p->mObject.mProperty_mTypeProxy ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mValueList ;
    outOperand3 = p->mObject.mProperty_mInitialValueConstantName ;
    outOperand4 = p->mObject.mProperty_mInitialValueConstantIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::setter_popLast (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_lstringlist & outOperand2,
                                            GALGAS_lstring & outOperand3,
                                            GALGAS_uint & outOperand4,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    outOperand0 = p->mObject.mProperty_mTypeProxy ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mValueList ;
    outOperand3 = p->mObject.mProperty_mInitialValueConstantName ;
    outOperand4 = p->mObject.mProperty_mInitialValueConstantIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::method_first (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          GALGAS_lstringlist & outOperand2,
                                          GALGAS_lstring & outOperand3,
                                          GALGAS_uint & outOperand4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    outOperand0 = p->mObject.mProperty_mTypeProxy ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mValueList ;
    outOperand3 = p->mObject.mProperty_mInitialValueConstantName ;
    outOperand4 = p->mObject.mProperty_mInitialValueConstantIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::method_last (GALGAS_unifiedScalarTypeMap_2D_proxy & outOperand0,
                                         GALGAS_lstring & outOperand1,
                                         GALGAS_lstringlist & outOperand2,
                                         GALGAS_lstring & outOperand3,
                                         GALGAS_uint & outOperand4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    outOperand0 = p->mObject.mProperty_mTypeProxy ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mValueList ;
    outOperand3 = p->mObject.mProperty_mInitialValueConstantName ;
    outOperand4 = p->mObject.mProperty_mInitialValueConstantIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineVarList::add_operation (const GALGAS_machineVarList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_machineVarList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineVarList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarList result = GALGAS_machineVarList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineVarList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarList result = GALGAS_machineVarList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineVarList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarList result = GALGAS_machineVarList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList::plusAssign_operation (const GALGAS_machineVarList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_machineVarList::getter_mTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    result = p->mObject.mProperty_mTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineVarList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_machineVarList::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineVarList::getter_mInitialValueConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    result = p->mObject.mProperty_mInitialValueConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarList::getter_mInitialValueConstantIndexAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarList * p = (cCollectionElement_machineVarList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarList) ;
    result = p->mObject.mProperty_mInitialValueConstantIndex ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_machineVarList::cEnumerator_machineVarList (const GALGAS_machineVarList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList_2D_element cEnumerator_machineVarList::current (LOCATION_ARGS) const {
  const cCollectionElement_machineVarList * p = (const cCollectionElement_machineVarList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy cEnumerator_machineVarList::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_machineVarList * p = (const cCollectionElement_machineVarList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarList) ;
  return p->mObject.mProperty_mTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_machineVarList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_machineVarList * p = (const cCollectionElement_machineVarList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarList) ;
  return p->mObject.mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_machineVarList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_machineVarList * p = (const cCollectionElement_machineVarList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarList) ;
  return p->mObject.mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_machineVarList::current_mInitialValueConstantName (LOCATION_ARGS) const {
  const cCollectionElement_machineVarList * p = (const cCollectionElement_machineVarList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarList) ;
  return p->mObject.mProperty_mInitialValueConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_machineVarList::current_mInitialValueConstantIndex (LOCATION_ARGS) const {
  const cCollectionElement_machineVarList * p = (const cCollectionElement_machineVarList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarList) ;
  return p->mObject.mProperty_mInitialValueConstantIndex ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @machineVarList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarList ("machineVarList",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineVarList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineVarList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineVarList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_machineVarList result ;
  const GALGAS_machineVarList * p = (const GALGAS_machineVarList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineVarList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineVarList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@decoratedScenarioList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_decoratedScenarioList : public cCollectionElement {
  public : GALGAS_decoratedScenarioList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_decoratedScenarioList (const GALGAS_lstring & in_mScenarioName,
                                                     const GALGAS_scenarioEventSequence & in_mEventSequence
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_decoratedScenarioList (const GALGAS_decoratedScenarioList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedScenarioList::cCollectionElement_decoratedScenarioList (const GALGAS_lstring & in_mScenarioName,
                                                                                    const GALGAS_scenarioEventSequence & in_mEventSequence
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScenarioName, in_mEventSequence) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedScenarioList::cCollectionElement_decoratedScenarioList (const GALGAS_decoratedScenarioList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScenarioName, inElement.mProperty_mEventSequence) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_decoratedScenarioList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_decoratedScenarioList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedScenarioList (mObject.mProperty_mScenarioName, mObject.mProperty_mEventSequence COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_decoratedScenarioList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mScenarioName" ":" ;
  mObject.mProperty_mScenarioName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventSequence" ":" ;
  mObject.mProperty_mEventSequence.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_decoratedScenarioList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedScenarioList * operand = (cCollectionElement_decoratedScenarioList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedScenarioList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList::GALGAS_decoratedScenarioList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList::GALGAS_decoratedScenarioList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_decoratedScenarioList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedScenarioList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_decoratedScenarioList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_scenarioEventSequence & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedScenarioList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedScenarioList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedScenarioList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mScenarioName,
                                                              const GALGAS_scenarioEventSequence & in_mEventSequence
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedScenarioList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedScenarioList (in_mScenarioName,
                                                           in_mEventSequence COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_scenarioEventSequence & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedScenarioList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::setter_append (GALGAS_decoratedScenarioList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedScenarioList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_scenarioEventSequence inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedScenarioList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_scenarioEventSequence & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedScenarioList * p = (cCollectionElement_decoratedScenarioList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
      outOperand0 = p->mObject.mProperty_mScenarioName ;
      outOperand1 = p->mObject.mProperty_mEventSequence ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_scenarioEventSequence & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedScenarioList * p = (cCollectionElement_decoratedScenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioName ;
    outOperand1 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_scenarioEventSequence & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedScenarioList * p = (cCollectionElement_decoratedScenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioName ;
    outOperand1 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_scenarioEventSequence & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedScenarioList * p = (cCollectionElement_decoratedScenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioName ;
    outOperand1 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_scenarioEventSequence & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedScenarioList * p = (cCollectionElement_decoratedScenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioName ;
    outOperand1 = p->mObject.mProperty_mEventSequence ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_decoratedScenarioList::add_operation (const GALGAS_decoratedScenarioList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedScenarioList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_decoratedScenarioList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedScenarioList result = GALGAS_decoratedScenarioList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_decoratedScenarioList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedScenarioList result = GALGAS_decoratedScenarioList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_decoratedScenarioList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedScenarioList result = GALGAS_decoratedScenarioList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList::plusAssign_operation (const GALGAS_decoratedScenarioList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedScenarioList::getter_mScenarioNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedScenarioList * p = (cCollectionElement_decoratedScenarioList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
    result = p->mObject.mProperty_mScenarioName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_decoratedScenarioList::getter_mEventSequenceAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedScenarioList * p = (cCollectionElement_decoratedScenarioList *) attributes.ptr () ;
  GALGAS_scenarioEventSequence result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
    result = p->mObject.mProperty_mEventSequence ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedScenarioList::cEnumerator_decoratedScenarioList (const GALGAS_decoratedScenarioList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList_2D_element cEnumerator_decoratedScenarioList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedScenarioList * p = (const cCollectionElement_decoratedScenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedScenarioList::current_mScenarioName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedScenarioList * p = (const cCollectionElement_decoratedScenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
  return p->mObject.mProperty_mScenarioName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence cEnumerator_decoratedScenarioList::current_mEventSequence (LOCATION_ARGS) const {
  const cCollectionElement_decoratedScenarioList * p = (const cCollectionElement_decoratedScenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedScenarioList) ;
  return p->mObject.mProperty_mEventSequence ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @decoratedScenarioList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedScenarioList ("decoratedScenarioList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedScenarioList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedScenarioList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedScenarioList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedScenarioList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_decoratedScenarioList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedScenarioList result ;
  const GALGAS_decoratedScenarioList * p = (const GALGAS_decoratedScenarioList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedScenarioList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedScenarioList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_machineMap::cMapElement_machineMap (const GALGAS_lstring & inKey,
                                                const GALGAS_machineVarMap & in_mAttributeMap,
                                                const GALGAS_machineVarList & in_mAttributeList,
                                                const GALGAS_decoratedExpressionList & in_mInvariantDecoratedExpressionList,
                                                const GALGAS_eventMap & in_mEventMap,
                                                const GALGAS_decoratedScenarioList & in_mDecoratedScenarioList
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAttributeMap (in_mAttributeMap),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mInvariantDecoratedExpressionList (in_mInvariantDecoratedExpressionList),
mProperty_mEventMap (in_mEventMap),
mProperty_mDecoratedScenarioList (in_mDecoratedScenarioList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_machineMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAttributeMap.isValid () && mProperty_mAttributeList.isValid () && mProperty_mInvariantDecoratedExpressionList.isValid () && mProperty_mEventMap.isValid () && mProperty_mDecoratedScenarioList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_machineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_machineMap (mProperty_lkey, mProperty_mAttributeMap, mProperty_mAttributeList, mProperty_mInvariantDecoratedExpressionList, mProperty_mEventMap, mProperty_mDecoratedScenarioList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_machineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeMap" ":" ;
  mProperty_mAttributeMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInvariantDecoratedExpressionList" ":" ;
  mProperty_mInvariantDecoratedExpressionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEventMap" ":" ;
  mProperty_mEventMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDecoratedScenarioList" ":" ;
  mProperty_mDecoratedScenarioList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_machineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_machineMap * operand = (cMapElement_machineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeMap.objectCompare (operand->mProperty_mAttributeMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (operand->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInvariantDecoratedExpressionList.objectCompare (operand->mProperty_mInvariantDecoratedExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEventMap.objectCompare (operand->mProperty_mEventMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDecoratedScenarioList.objectCompare (operand->mProperty_mDecoratedScenarioList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap::GALGAS_machineMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap::GALGAS_machineMap (const GALGAS_machineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap & GALGAS_machineMap::operator = (const GALGAS_machineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap GALGAS_machineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_machineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap GALGAS_machineMap::constructor_mapWithMapToOverride (const GALGAS_machineMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_machineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap GALGAS_machineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_machineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_machineVarMap & inArgument0,
                                             const GALGAS_machineVarList & inArgument1,
                                             const GALGAS_decoratedExpressionList & inArgument2,
                                             const GALGAS_eventMap & inArgument3,
                                             const GALGAS_decoratedScenarioList & inArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_machineMap * p = NULL ;
  macroMyNew (p, cMapElement_machineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@machineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_machineVarMap inArgument0,
                                          GALGAS_machineVarList inArgument1,
                                          GALGAS_decoratedExpressionList inArgument2,
                                          GALGAS_eventMap inArgument3,
                                          GALGAS_decoratedScenarioList inArgument4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_machineMap * p = NULL ;
  macroMyNew (p, cMapElement_machineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' class is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_machineMap_searchKey = "there is no '%K' class" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_machineVarMap & outArgument0,
                                          GALGAS_machineVarList & outArgument1,
                                          GALGAS_decoratedExpressionList & outArgument2,
                                          GALGAS_eventMap & outArgument3,
                                          GALGAS_decoratedScenarioList & outArgument4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_machineMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_machineMap) ;
    outArgument0 = p->mProperty_mAttributeMap ;
    outArgument1 = p->mProperty_mAttributeList ;
    outArgument2 = p->mProperty_mInvariantDecoratedExpressionList ;
    outArgument3 = p->mProperty_mEventMap ;
    outArgument4 = p->mProperty_mDecoratedScenarioList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap GALGAS_machineMap::getter_mAttributeMapForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) attributes ;
  GALGAS_machineVarMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    result = p->mProperty_mAttributeMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineMap::getter_mAttributeListForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) attributes ;
  GALGAS_machineVarList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_machineMap::getter_mInvariantDecoratedExpressionListForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) attributes ;
  GALGAS_decoratedExpressionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    result = p->mProperty_mInvariantDecoratedExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap GALGAS_machineMap::getter_mEventMapForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) attributes ;
  GALGAS_eventMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    result = p->mProperty_mEventMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_machineMap::getter_mDecoratedScenarioListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) attributes ;
  GALGAS_decoratedScenarioList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    result = p->mProperty_mDecoratedScenarioList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::setter_setMAttributeMapForKey (GALGAS_machineVarMap inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_machineMap * p = (cMapElement_machineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    p->mProperty_mAttributeMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::setter_setMAttributeListForKey (GALGAS_machineVarList inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_machineMap * p = (cMapElement_machineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    p->mProperty_mAttributeList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::setter_setMInvariantDecoratedExpressionListForKey (GALGAS_decoratedExpressionList inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_machineMap * p = (cMapElement_machineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    p->mProperty_mInvariantDecoratedExpressionList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::setter_setMEventMapForKey (GALGAS_eventMap inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_machineMap * p = (cMapElement_machineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    p->mProperty_mEventMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap::setter_setMDecoratedScenarioListForKey (GALGAS_decoratedScenarioList inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_machineMap * p = (cMapElement_machineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_machineMap) ;
    p->mProperty_mDecoratedScenarioList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_machineMap * GALGAS_machineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_machineMap * result = (cMapElement_machineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_machineMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_machineMap::cEnumerator_machineMap (const GALGAS_machineMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap_2D_element cEnumerator_machineMap::current (LOCATION_ARGS) const {
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineMap) ;
  return GALGAS_machineMap_2D_element (p->mProperty_lkey, p->mProperty_mAttributeMap, p->mProperty_mAttributeList, p->mProperty_mInvariantDecoratedExpressionList, p->mProperty_mEventMap, p->mProperty_mDecoratedScenarioList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_machineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap cEnumerator_machineMap::current_mAttributeMap (LOCATION_ARGS) const {
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineMap) ;
  return p->mProperty_mAttributeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList cEnumerator_machineMap::current_mAttributeList (LOCATION_ARGS) const {
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineMap) ;
  return p->mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList cEnumerator_machineMap::current_mInvariantDecoratedExpressionList (LOCATION_ARGS) const {
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineMap) ;
  return p->mProperty_mInvariantDecoratedExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap cEnumerator_machineMap::current_mEventMap (LOCATION_ARGS) const {
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineMap) ;
  return p->mProperty_mEventMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList cEnumerator_machineMap::current_mDecoratedScenarioList (LOCATION_ARGS) const {
  const cMapElement_machineMap * p = (const cMapElement_machineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_machineMap) ;
  return p->mProperty_mDecoratedScenarioList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @machineMap type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineMap ("machineMap",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap GALGAS_machineMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_machineMap result ;
  const GALGAS_machineMap * p = (const GALGAS_machineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Class for element of '@decoratedFunctionValueList' sorted list                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSortedListElement_decoratedFunctionValueList : public cSortedListElement {
  public : GALGAS_decoratedFunctionValueList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_decoratedFunctionValueList (const GALGAS_lstring & in_mOperandName,
                                                          const GALGAS_uint & in_mOperandValue,
                                                          const GALGAS_lstring & in_mResultName,
                                                          const GALGAS_uint & in_mResultValue
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement_decoratedFunctionValueList::cSortedListElement_decoratedFunctionValueList (const GALGAS_lstring & in_mOperandName,
                                                                                              const GALGAS_uint & in_mOperandValue,
                                                                                              const GALGAS_lstring & in_mResultName,
                                                                                              const GALGAS_uint & in_mResultValue
                                                                                              COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mOperandName, in_mOperandValue, in_mResultName, in_mResultValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cSortedListElement_decoratedFunctionValueList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement * cSortedListElement_decoratedFunctionValueList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_decoratedFunctionValueList (mObject.mProperty_mOperandName, mObject.mProperty_mOperandValue, mObject.mProperty_mResultName, mObject.mProperty_mResultValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cSortedListElement_decoratedFunctionValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandName" ":" ;
  mObject.mProperty_mOperandName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandValue" ":" ;
  mObject.mProperty_mOperandValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultName" ":" ;
  mObject.mProperty_mResultName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultValue" ":" ;
  mObject.mProperty_mResultValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_decoratedFunctionValueList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_decoratedFunctionValueList * operand = (cSortedListElement_decoratedFunctionValueList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_decoratedFunctionValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList::GALGAS_decoratedFunctionValueList (void) :
AC_GALGAS_sortedlist () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_decoratedFunctionValueList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_decoratedFunctionValueList * operand = (const cSortedListElement_decoratedFunctionValueList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_decoratedFunctionValueList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mOperandValue.objectCompare (operand->mObject.mProperty_mOperandValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList GALGAS_decoratedFunctionValueList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_decoratedFunctionValueList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList GALGAS_decoratedFunctionValueList::constructor_sortedListWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_uint & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedFunctionValueList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_decoratedFunctionValueList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_uint & inOperand1,
                                                             const GALGAS_lstring & inOperand2,
                                                             const GALGAS_uint & inOperand3
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_decoratedFunctionValueList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList::plusAssign_operation (const GALGAS_decoratedFunctionValueList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList::setter_popSmallest (GALGAS_lstring & outOperand0,
                                                            GALGAS_uint & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_uint & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_decoratedFunctionValueList * p = (cSortedListElement_decoratedFunctionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mOperandValue ;
    outOperand2 = p->mObject.mProperty_mResultName ;
    outOperand3 = p->mObject.mProperty_mResultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList::setter_popGreatest (GALGAS_lstring & outOperand0,
                                                            GALGAS_uint & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_uint & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_decoratedFunctionValueList * p = (cSortedListElement_decoratedFunctionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mOperandValue ;
    outOperand2 = p->mObject.mProperty_mResultName ;
    outOperand3 = p->mObject.mProperty_mResultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList::method_smallest (GALGAS_lstring & outOperand0,
                                                         GALGAS_uint & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_uint & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_decoratedFunctionValueList * p = (cSortedListElement_decoratedFunctionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mOperandValue ;
    outOperand2 = p->mObject.mProperty_mResultName ;
    outOperand3 = p->mObject.mProperty_mResultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList::method_greatest (GALGAS_lstring & outOperand0,
                                                         GALGAS_uint & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_uint & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_decoratedFunctionValueList * p = (cSortedListElement_decoratedFunctionValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
    outOperand0 = p->mObject.mProperty_mOperandName ;
    outOperand1 = p->mObject.mProperty_mOperandValue ;
    outOperand2 = p->mObject.mProperty_mResultName ;
    outOperand3 = p->mObject.mProperty_mResultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedFunctionValueList::cEnumerator_decoratedFunctionValueList (const GALGAS_decoratedFunctionValueList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList_2D_element cEnumerator_decoratedFunctionValueList::current (LOCATION_ARGS) const {
  const cSortedListElement_decoratedFunctionValueList * p = (const cSortedListElement_decoratedFunctionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
  return p->mObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedFunctionValueList::current_mOperandName (LOCATION_ARGS) const {
  const cSortedListElement_decoratedFunctionValueList * p = (const cSortedListElement_decoratedFunctionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
  return p->mObject.mProperty_mOperandName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_decoratedFunctionValueList::current_mOperandValue (LOCATION_ARGS) const {
  const cSortedListElement_decoratedFunctionValueList * p = (const cSortedListElement_decoratedFunctionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
  return p->mObject.mProperty_mOperandValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedFunctionValueList::current_mResultName (LOCATION_ARGS) const {
  const cSortedListElement_decoratedFunctionValueList * p = (const cSortedListElement_decoratedFunctionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
  return p->mObject.mProperty_mResultName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_decoratedFunctionValueList::current_mResultValue (LOCATION_ARGS) const {
  const cSortedListElement_decoratedFunctionValueList * p = (const cSortedListElement_decoratedFunctionValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_decoratedFunctionValueList) ;
  return p->mObject.mProperty_mResultValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @decoratedFunctionValueList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedFunctionValueList ("decoratedFunctionValueList",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedFunctionValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedFunctionValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedFunctionValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedFunctionValueList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList GALGAS_decoratedFunctionValueList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedFunctionValueList result ;
  const GALGAS_decoratedFunctionValueList * p = (const GALGAS_decoratedFunctionValueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedFunctionValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedFunctionValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_functionMap::cMapElement_functionMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mOperandTypeProxy,
                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mResultTypeProxy,
                                                  const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOperandTypeProxy (in_mOperandTypeProxy),
mProperty_mResultTypeProxy (in_mResultTypeProxy),
mProperty_mDecoratedFunctionValueList (in_mDecoratedFunctionValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_functionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperandTypeProxy.isValid () && mProperty_mResultTypeProxy.isValid () && mProperty_mDecoratedFunctionValueList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_functionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_functionMap (mProperty_lkey, mProperty_mOperandTypeProxy, mProperty_mResultTypeProxy, mProperty_mDecoratedFunctionValueList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_functionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandTypeProxy" ":" ;
  mProperty_mOperandTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultTypeProxy" ":" ;
  mProperty_mResultTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDecoratedFunctionValueList" ":" ;
  mProperty_mDecoratedFunctionValueList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_functionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_functionMap * operand = (cMapElement_functionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperandTypeProxy.objectCompare (operand->mProperty_mOperandTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeProxy.objectCompare (operand->mProperty_mResultTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDecoratedFunctionValueList.objectCompare (operand->mProperty_mDecoratedFunctionValueList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap::GALGAS_functionMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap::GALGAS_functionMap (const GALGAS_functionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap & GALGAS_functionMap::operator = (const GALGAS_functionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap GALGAS_functionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap GALGAS_functionMap::constructor_mapWithMapToOverride (const GALGAS_functionMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap GALGAS_functionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_functionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inArgument0,
                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inArgument1,
                                              const GALGAS_decoratedFunctionValueList & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@functionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_unifiedScalarTypeMap_2D_proxy inArgument0,
                                           GALGAS_unifiedScalarTypeMap_2D_proxy inArgument1,
                                           GALGAS_decoratedFunctionValueList inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' class is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_functionMap_searchKey = "there is no '%K' class" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                           GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument1,
                                           GALGAS_decoratedFunctionValueList & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_functionMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_functionMap) ;
    outArgument0 = p->mProperty_mOperandTypeProxy ;
    outArgument1 = p->mProperty_mResultTypeProxy ;
    outArgument2 = p->mProperty_mDecoratedFunctionValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_functionMap::getter_mOperandTypeProxyForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mOperandTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_functionMap::getter_mResultTypeProxyForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mResultTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList GALGAS_functionMap::getter_mDecoratedFunctionValueListForKey (const GALGAS_string & inKey,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_decoratedFunctionValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mDecoratedFunctionValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap::setter_setMOperandTypeProxyForKey (GALGAS_unifiedScalarTypeMap_2D_proxy inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mOperandTypeProxy = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap::setter_setMResultTypeProxyForKey (GALGAS_unifiedScalarTypeMap_2D_proxy inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mResultTypeProxy = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap::setter_setMDecoratedFunctionValueListForKey (GALGAS_decoratedFunctionValueList inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mDecoratedFunctionValueList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_functionMap * GALGAS_functionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * result = (cMapElement_functionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_functionMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_functionMap::cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap_2D_element cEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GALGAS_functionMap_2D_element (p->mProperty_lkey, p->mProperty_mOperandTypeProxy, p->mProperty_mResultTypeProxy, p->mProperty_mDecoratedFunctionValueList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy cEnumerator_functionMap::current_mOperandTypeProxy (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mOperandTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy cEnumerator_functionMap::current_mResultTypeProxy (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mResultTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList cEnumerator_functionMap::current_mDecoratedFunctionValueList (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mDecoratedFunctionValueList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @functionMap type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap ("functionMap",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap GALGAS_functionMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  const GALGAS_functionMap * p = (const GALGAS_functionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analyzeContext::GALGAS_analyzeContext (void) :
mProperty_mUnifiedScalarTypeMap (),
mProperty_mMachineVarMap (),
mProperty_mFunctionMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analyzeContext::~ GALGAS_analyzeContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analyzeContext::GALGAS_analyzeContext (const GALGAS_unifiedScalarTypeMap & inOperand0,
                                              const GALGAS_machineVarMap & inOperand1,
                                              const GALGAS_functionMap & inOperand2) :
mProperty_mUnifiedScalarTypeMap (inOperand0),
mProperty_mMachineVarMap (inOperand1),
mProperty_mFunctionMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analyzeContext GALGAS_analyzeContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_analyzeContext (GALGAS_unifiedScalarTypeMap::constructor_emptyMap (HERE),
                                GALGAS_machineVarMap::constructor_emptyMap (HERE),
                                GALGAS_functionMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analyzeContext GALGAS_analyzeContext::constructor_new (const GALGAS_unifiedScalarTypeMap & inOperand0,
                                                              const GALGAS_machineVarMap & inOperand1,
                                                              const GALGAS_functionMap & inOperand2 
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analyzeContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_analyzeContext (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_analyzeContext::objectCompare (const GALGAS_analyzeContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mUnifiedScalarTypeMap.objectCompare (inOperand.mProperty_mUnifiedScalarTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMachineVarMap.objectCompare (inOperand.mProperty_mMachineVarMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionMap.objectCompare (inOperand.mProperty_mFunctionMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_analyzeContext::isValid (void) const {
  return mProperty_mUnifiedScalarTypeMap.isValid () && mProperty_mMachineVarMap.isValid () && mProperty_mFunctionMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_analyzeContext::drop (void) {
  mProperty_mUnifiedScalarTypeMap.drop () ;
  mProperty_mMachineVarMap.drop () ;
  mProperty_mFunctionMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_analyzeContext::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<struct @analyzeContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mUnifiedScalarTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMachineVarMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap GALGAS_analyzeContext::getter_mUnifiedScalarTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnifiedScalarTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap GALGAS_analyzeContext::getter_mMachineVarMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineVarMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap GALGAS_analyzeContext::getter_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @analyzeContext type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_analyzeContext ("analyzeContext",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_analyzeContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analyzeContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_analyzeContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analyzeContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analyzeContext GALGAS_analyzeContext::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_analyzeContext result ;
  const GALGAS_analyzeContext * p = (const GALGAS_analyzeContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_analyzeContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analyzeContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_implicationDecoratedExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_implicationDecoratedExpression * p = (const cPtr_implicationDecoratedExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_implicationDecoratedExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_implicationDecoratedExpression::objectCompare (const GALGAS_implicationDecoratedExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationDecoratedExpression::GALGAS_implicationDecoratedExpression (void) :
GALGAS_decoratedExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationDecoratedExpression::GALGAS_implicationDecoratedExpression (const cPtr_implicationDecoratedExpression * inSourcePtr) :
GALGAS_decoratedExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implicationDecoratedExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationDecoratedExpression GALGAS_implicationDecoratedExpression::constructor_new (const GALGAS_decoratedExpression & inAttribute_mLeft,
                                                                                              const GALGAS_decoratedExpression & inAttribute_mRight
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_implicationDecoratedExpression result ;
  if (inAttribute_mLeft.isValid () && inAttribute_mRight.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_implicationDecoratedExpression (inAttribute_mLeft, inAttribute_mRight COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_implicationDecoratedExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_implicationDecoratedExpression * p = (const cPtr_implicationDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implicationDecoratedExpression) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_implicationDecoratedExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_implicationDecoratedExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_implicationDecoratedExpression * p = (const cPtr_implicationDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implicationDecoratedExpression) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_implicationDecoratedExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @implicationDecoratedExpression class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_implicationDecoratedExpression::cPtr_implicationDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                                                          const GALGAS_decoratedExpression & in_mRight
                                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedExpression (THERE),
mProperty_mLeft (in_mLeft),
mProperty_mRight (in_mRight) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_implicationDecoratedExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicationDecoratedExpression ;
}

void cPtr_implicationDecoratedExpression::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@implicationDecoratedExpression:" ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_implicationDecoratedExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implicationDecoratedExpression (mProperty_mLeft, mProperty_mRight COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @implicationDecoratedExpression type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implicationDecoratedExpression ("implicationDecoratedExpression",
                                                       & kTypeDescriptor_GALGAS_decoratedExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_implicationDecoratedExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicationDecoratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_implicationDecoratedExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicationDecoratedExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicationDecoratedExpression GALGAS_implicationDecoratedExpression::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_implicationDecoratedExpression result ;
  const GALGAS_implicationDecoratedExpression * p = (const GALGAS_implicationDecoratedExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implicationDecoratedExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicationDecoratedExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_logicalOrDecoratedExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logicalOrDecoratedExpression * p = (const cPtr_logicalOrDecoratedExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_logicalOrDecoratedExpression::objectCompare (const GALGAS_logicalOrDecoratedExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrDecoratedExpression::GALGAS_logicalOrDecoratedExpression (void) :
GALGAS_decoratedExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrDecoratedExpression::GALGAS_logicalOrDecoratedExpression (const cPtr_logicalOrDecoratedExpression * inSourcePtr) :
GALGAS_decoratedExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalOrDecoratedExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrDecoratedExpression GALGAS_logicalOrDecoratedExpression::constructor_new (const GALGAS_decoratedExpression & inAttribute_mLeft,
                                                                                          const GALGAS_decoratedExpression & inAttribute_mRight
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_logicalOrDecoratedExpression result ;
  if (inAttribute_mLeft.isValid () && inAttribute_mRight.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logicalOrDecoratedExpression (inAttribute_mLeft, inAttribute_mRight COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_logicalOrDecoratedExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalOrDecoratedExpression * p = (const cPtr_logicalOrDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_logicalOrDecoratedExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_logicalOrDecoratedExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalOrDecoratedExpression * p = (const cPtr_logicalOrDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_logicalOrDecoratedExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @logicalOrDecoratedExpression class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_logicalOrDecoratedExpression::cPtr_logicalOrDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                                                      const GALGAS_decoratedExpression & in_mRight
                                                                      COMMA_LOCATION_ARGS) :
cPtr_decoratedExpression (THERE),
mProperty_mLeft (in_mLeft),
mProperty_mRight (in_mRight) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_logicalOrDecoratedExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ;
}

void cPtr_logicalOrDecoratedExpression::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@logicalOrDecoratedExpression:" ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_logicalOrDecoratedExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logicalOrDecoratedExpression (mProperty_mLeft, mProperty_mRight COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @logicalOrDecoratedExpression type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ("logicalOrDecoratedExpression",
                                                     & kTypeDescriptor_GALGAS_decoratedExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_logicalOrDecoratedExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_logicalOrDecoratedExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalOrDecoratedExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalOrDecoratedExpression GALGAS_logicalOrDecoratedExpression::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logicalOrDecoratedExpression result ;
  const GALGAS_logicalOrDecoratedExpression * p = (const GALGAS_logicalOrDecoratedExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalOrDecoratedExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalOrDecoratedExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_logicalAndDecoratedExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logicalAndDecoratedExpression * p = (const cPtr_logicalAndDecoratedExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logicalAndDecoratedExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_logicalAndDecoratedExpression::objectCompare (const GALGAS_logicalAndDecoratedExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndDecoratedExpression::GALGAS_logicalAndDecoratedExpression (void) :
GALGAS_decoratedExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndDecoratedExpression::GALGAS_logicalAndDecoratedExpression (const cPtr_logicalAndDecoratedExpression * inSourcePtr) :
GALGAS_decoratedExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalAndDecoratedExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndDecoratedExpression GALGAS_logicalAndDecoratedExpression::constructor_new (const GALGAS_decoratedExpression & inAttribute_mLeft,
                                                                                            const GALGAS_decoratedExpression & inAttribute_mRight
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_logicalAndDecoratedExpression result ;
  if (inAttribute_mLeft.isValid () && inAttribute_mRight.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logicalAndDecoratedExpression (inAttribute_mLeft, inAttribute_mRight COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_logicalAndDecoratedExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalAndDecoratedExpression * p = (const cPtr_logicalAndDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalAndDecoratedExpression) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_logicalAndDecoratedExpression::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_logicalAndDecoratedExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_logicalAndDecoratedExpression * p = (const cPtr_logicalAndDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalAndDecoratedExpression) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_logicalAndDecoratedExpression::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @logicalAndDecoratedExpression class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_logicalAndDecoratedExpression::cPtr_logicalAndDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                                                        const GALGAS_decoratedExpression & in_mRight
                                                                        COMMA_LOCATION_ARGS) :
cPtr_decoratedExpression (THERE),
mProperty_mLeft (in_mLeft),
mProperty_mRight (in_mRight) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_logicalAndDecoratedExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalAndDecoratedExpression ;
}

void cPtr_logicalAndDecoratedExpression::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@logicalAndDecoratedExpression:" ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_logicalAndDecoratedExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logicalAndDecoratedExpression (mProperty_mLeft, mProperty_mRight COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @logicalAndDecoratedExpression type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalAndDecoratedExpression ("logicalAndDecoratedExpression",
                                                      & kTypeDescriptor_GALGAS_decoratedExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_logicalAndDecoratedExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalAndDecoratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_logicalAndDecoratedExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalAndDecoratedExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logicalAndDecoratedExpression GALGAS_logicalAndDecoratedExpression::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_logicalAndDecoratedExpression result ;
  const GALGAS_logicalAndDecoratedExpression * p = (const GALGAS_logicalAndDecoratedExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalAndDecoratedExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalAndDecoratedExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_decoratedComparisonRightOperand::objectCompare (const GALGAS_decoratedComparisonRightOperand & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonRightOperand::GALGAS_decoratedComparisonRightOperand (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonRightOperand::GALGAS_decoratedComparisonRightOperand (const cPtr_decoratedComparisonRightOperand * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedComparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @decoratedComparisonRightOperand class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedComparisonRightOperand::cPtr_decoratedComparisonRightOperand (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @decoratedComparisonRightOperand type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedComparisonRightOperand ("decoratedComparisonRightOperand",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedComparisonRightOperand (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonRightOperand GALGAS_decoratedComparisonRightOperand::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedComparisonRightOperand result ;
  const GALGAS_decoratedComparisonRightOperand * p = (const GALGAS_decoratedComparisonRightOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedComparisonRightOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedComparisonRightOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Abstract extension method '@expression analyzeExpression'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_expression_analyzeExpression> gExtensionMethodTable_expression_analyzeExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expression_analyzeExpression inMethod) {
  gExtensionMethodTable_expression_analyzeExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_expression_analyzeExpression (void) {
  gExtensionMethodTable_expression_analyzeExpression.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expression_analyzeExpression (NULL,
                                                         freeExtensionMethod_expression_analyzeExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeExpression (const cPtr_expression * inObject,
                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                            const GALGAS_bool constin_inEnsureClause,
                                            GALGAS_decoratedExpression & out_outDecoratedExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outDecoratedExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expression_analyzeExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_expression_analyzeExpression.count ()) {
      f = gExtensionMethodTable_expression_analyzeExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_expression_analyzeExpression.count ()) {
          f = gExtensionMethodTable_expression_analyzeExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_expression_analyzeExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalyzeContext, constin_inEnsureClause, out_outDecoratedExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@expressionList analyzeExpressionList'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_analyzeExpressionList (const GALGAS_expressionList inObject,
                                            const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                            const GALGAS_bool constinArgument_inEnsureClause,
                                            GALGAS_decoratedExpressionList & outArgument_outDecoratedExpressionList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDecoratedExpressionList.drop () ; // Release 'out' argument
  outArgument_outDecoratedExpressionList = GALGAS_decoratedExpressionList::constructor_emptyList (SOURCE_FILE ("expressionStaticAnalysis.galgas", 37)) ;
  const GALGAS_expressionList temp_0 = inObject ;
  cEnumerator_expressionList enumerator_1247 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1247.hasCurrentObject ()) {
    GALGAS_decoratedExpression var_decoratedExpression_1387 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expression *) enumerator_1247.current (HERE).getter_mExpression (HERE).ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_decoratedExpression_1387, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 39)) ;
    outArgument_outDecoratedExpressionList.addAssign_operation (enumerator_1247.current (HERE).getter_mLabel (HERE), var_decoratedExpression_1387  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 44)) ;
    enumerator_1247.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Abstract extension method '@comparisonRightOperand analyzeComparisonRightOperand'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand> gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeComparisonRightOperand (const int32_t inClassIndex,
                                                         extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand inMethod) {
  gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_comparisonRightOperand_analyzeComparisonRightOperand (void) {
  gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_comparisonRightOperand_analyzeComparisonRightOperand (NULL,
                                                                                 freeExtensionMethod_comparisonRightOperand_analyzeComparisonRightOperand) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeComparisonRightOperand (const cPtr_comparisonRightOperand * inObject,
                                                        const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                        const GALGAS_bool constin_inEnsureClause,
                                                        GALGAS_decoratedComparisonRightOperand & out_outDecoratedExpression,
                                                        const GALGAS_unifiedScalarTypeMap_2D_proxy constin_inVarTypeProxy,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outDecoratedExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_comparisonRightOperand) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand f = NULL ;
    if (classIndex < gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.count ()) {
      f = gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.count ()) {
          f = gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalyzeContext, constin_inEnsureClause, out_outDecoratedExpression, constin_inVarTypeProxy, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_decoratedAssignmentSourceExpression::objectCompare (const GALGAS_decoratedAssignmentSourceExpression & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAssignmentSourceExpression::GALGAS_decoratedAssignmentSourceExpression (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAssignmentSourceExpression::GALGAS_decoratedAssignmentSourceExpression (const cPtr_decoratedAssignmentSourceExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @decoratedAssignmentSourceExpression class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedAssignmentSourceExpression::cPtr_decoratedAssignmentSourceExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @decoratedAssignmentSourceExpression type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression ("decoratedAssignmentSourceExpression",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAssignmentSourceExpression GALGAS_decoratedAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAssignmentSourceExpression result ;
  const GALGAS_decoratedAssignmentSourceExpression * p = (const GALGAS_decoratedAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_ifDecoratedInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifDecoratedInstruction * p = (const cPtr_ifDecoratedInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mIFinstructionLocation.objectCompare (p->mProperty_mIFinstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestExpression.objectCompare (p->mProperty_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfTestExpression.objectCompare (p->mProperty_mEndOfTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_ifDecoratedInstruction::objectCompare (const GALGAS_ifDecoratedInstruction & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifDecoratedInstruction::GALGAS_ifDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifDecoratedInstruction::GALGAS_ifDecoratedInstruction (const cPtr_ifDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifDecoratedInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifDecoratedInstruction GALGAS_ifDecoratedInstruction::constructor_new (const GALGAS_location & inAttribute_mIFinstructionLocation,
                                                                              const GALGAS_decoratedExpression & inAttribute_mTestExpression,
                                                                              const GALGAS_location & inAttribute_mEndOfTestExpression,
                                                                              const GALGAS_decoratedInstructionList & inAttribute_mThenInstructionList,
                                                                              const GALGAS_decoratedInstructionList & inAttribute_mElseInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifDecoratedInstruction result ;
  if (inAttribute_mIFinstructionLocation.isValid () && inAttribute_mTestExpression.isValid () && inAttribute_mEndOfTestExpression.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifDecoratedInstruction (inAttribute_mIFinstructionLocation, inAttribute_mTestExpression, inAttribute_mEndOfTestExpression, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_ifDecoratedInstruction::getter_mIFinstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifDecoratedInstruction * p = (const cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    result = p->mProperty_mIFinstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_ifDecoratedInstruction::getter_mIFinstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIFinstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_ifDecoratedInstruction::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifDecoratedInstruction * p = (const cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    result = p->mProperty_mTestExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_ifDecoratedInstruction::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_ifDecoratedInstruction::getter_mEndOfTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifDecoratedInstruction * p = (const cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    result = p->mProperty_mEndOfTestExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_ifDecoratedInstruction::getter_mEndOfTestExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTestExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_ifDecoratedInstruction::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifDecoratedInstruction * p = (const cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    result = p->mProperty_mThenInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList cPtr_ifDecoratedInstruction::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_ifDecoratedInstruction::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifDecoratedInstruction * p = (const cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList cPtr_ifDecoratedInstruction::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @ifDecoratedInstruction class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_ifDecoratedInstruction::cPtr_ifDecoratedInstruction (const GALGAS_location & in_mIFinstructionLocation,
                                                          const GALGAS_decoratedExpression & in_mTestExpression,
                                                          const GALGAS_location & in_mEndOfTestExpression,
                                                          const GALGAS_decoratedInstructionList & in_mThenInstructionList,
                                                          const GALGAS_decoratedInstructionList & in_mElseInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mIFinstructionLocation (in_mIFinstructionLocation),
mProperty_mTestExpression (in_mTestExpression),
mProperty_mEndOfTestExpression (in_mEndOfTestExpression),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_ifDecoratedInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifDecoratedInstruction ;
}

void cPtr_ifDecoratedInstruction::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@ifDecoratedInstruction:" ;
  mProperty_mIFinstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_ifDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifDecoratedInstruction (mProperty_mIFinstructionLocation, mProperty_mTestExpression, mProperty_mEndOfTestExpression, mProperty_mThenInstructionList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @ifDecoratedInstruction type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifDecoratedInstruction ("ifDecoratedInstruction",
                                               & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifDecoratedInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifDecoratedInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifDecoratedInstruction GALGAS_ifDecoratedInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifDecoratedInstruction result ;
  const GALGAS_ifDecoratedInstruction * p = (const GALGAS_ifDecoratedInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifDecoratedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifDecoratedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@switchDecoratedCaseList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_switchDecoratedCaseList : public cCollectionElement {
  public : GALGAS_switchDecoratedCaseList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_switchDecoratedCaseList (const GALGAS_lstringlist & in_mConstantNameList,
                                                       const GALGAS_decoratedInstructionList & in_mInstructionList
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_switchDecoratedCaseList (const GALGAS_switchDecoratedCaseList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_switchDecoratedCaseList::cCollectionElement_switchDecoratedCaseList (const GALGAS_lstringlist & in_mConstantNameList,
                                                                                        const GALGAS_decoratedInstructionList & in_mInstructionList
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantNameList, in_mInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_switchDecoratedCaseList::cCollectionElement_switchDecoratedCaseList (const GALGAS_switchDecoratedCaseList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantNameList, inElement.mProperty_mInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_switchDecoratedCaseList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_switchDecoratedCaseList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchDecoratedCaseList (mObject.mProperty_mConstantNameList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_switchDecoratedCaseList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantNameList" ":" ;
  mObject.mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_switchDecoratedCaseList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchDecoratedCaseList * operand = (cCollectionElement_switchDecoratedCaseList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchDecoratedCaseList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList::GALGAS_switchDecoratedCaseList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList::GALGAS_switchDecoratedCaseList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedCaseList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchDecoratedCaseList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedCaseList::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                          const GALGAS_decoratedInstructionList & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_switchDecoratedCaseList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_switchDecoratedCaseList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchDecoratedCaseList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstringlist & in_mConstantNameList,
                                                                const GALGAS_decoratedInstructionList & in_mInstructionList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_switchDecoratedCaseList * p = NULL ;
  macroMyNew (p, cCollectionElement_switchDecoratedCaseList (in_mConstantNameList,
                                                             in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                          const GALGAS_decoratedInstructionList & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchDecoratedCaseList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::setter_append (GALGAS_switchDecoratedCaseList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchDecoratedCaseList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                           const GALGAS_decoratedInstructionList inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchDecoratedCaseList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                           GALGAS_decoratedInstructionList & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchDecoratedCaseList * p = (cCollectionElement_switchDecoratedCaseList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
      outOperand0 = p->mObject.mProperty_mConstantNameList ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                      GALGAS_decoratedInstructionList & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchDecoratedCaseList * p = (cCollectionElement_switchDecoratedCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::setter_popLast (GALGAS_lstringlist & outOperand0,
                                                     GALGAS_decoratedInstructionList & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchDecoratedCaseList * p = (cCollectionElement_switchDecoratedCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::method_first (GALGAS_lstringlist & outOperand0,
                                                   GALGAS_decoratedInstructionList & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchDecoratedCaseList * p = (cCollectionElement_switchDecoratedCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::method_last (GALGAS_lstringlist & outOperand0,
                                                  GALGAS_decoratedInstructionList & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchDecoratedCaseList * p = (cCollectionElement_switchDecoratedCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
    outOperand0 = p->mObject.mProperty_mConstantNameList ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedCaseList::add_operation (const GALGAS_switchDecoratedCaseList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchDecoratedCaseList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedCaseList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_switchDecoratedCaseList result = GALGAS_switchDecoratedCaseList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedCaseList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_switchDecoratedCaseList result = GALGAS_switchDecoratedCaseList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedCaseList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_switchDecoratedCaseList result = GALGAS_switchDecoratedCaseList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList::plusAssign_operation (const GALGAS_switchDecoratedCaseList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_switchDecoratedCaseList::getter_mConstantNameListAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchDecoratedCaseList * p = (cCollectionElement_switchDecoratedCaseList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
    result = p->mObject.mProperty_mConstantNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_switchDecoratedCaseList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchDecoratedCaseList * p = (cCollectionElement_switchDecoratedCaseList *) attributes.ptr () ;
  GALGAS_decoratedInstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_switchDecoratedCaseList::cEnumerator_switchDecoratedCaseList (const GALGAS_switchDecoratedCaseList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList_2D_element cEnumerator_switchDecoratedCaseList::current (LOCATION_ARGS) const {
  const cCollectionElement_switchDecoratedCaseList * p = (const cCollectionElement_switchDecoratedCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_switchDecoratedCaseList::current_mConstantNameList (LOCATION_ARGS) const {
  const cCollectionElement_switchDecoratedCaseList * p = (const cCollectionElement_switchDecoratedCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
  return p->mObject.mProperty_mConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList cEnumerator_switchDecoratedCaseList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchDecoratedCaseList * p = (const cCollectionElement_switchDecoratedCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchDecoratedCaseList) ;
  return p->mObject.mProperty_mInstructionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @switchDecoratedCaseList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchDecoratedCaseList ("switchDecoratedCaseList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchDecoratedCaseList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchDecoratedCaseList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchDecoratedCaseList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchDecoratedCaseList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedCaseList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchDecoratedCaseList result ;
  const GALGAS_switchDecoratedCaseList * p = (const GALGAS_switchDecoratedCaseList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchDecoratedCaseList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchDecoratedCaseList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assertDecoratedInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertDecoratedInstruction * p = (const cPtr_assertDecoratedInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assertDecoratedInstruction::objectCompare (const GALGAS_assertDecoratedInstruction & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertDecoratedInstruction::GALGAS_assertDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertDecoratedInstruction::GALGAS_assertDecoratedInstruction (const cPtr_assertDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertDecoratedInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertDecoratedInstruction GALGAS_assertDecoratedInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                      const GALGAS_decoratedExpression & inAttribute_mExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertDecoratedInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertDecoratedInstruction (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_assertDecoratedInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertDecoratedInstruction * p = (const cPtr_assertDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_assertDecoratedInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_assertDecoratedInstruction::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertDecoratedInstruction * p = (const cPtr_assertDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression cPtr_assertDecoratedInstruction::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @assertDecoratedInstruction class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assertDecoratedInstruction::cPtr_assertDecoratedInstruction (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_decoratedExpression & in_mExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assertDecoratedInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertDecoratedInstruction ;
}

void cPtr_assertDecoratedInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@assertDecoratedInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assertDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertDecoratedInstruction (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @assertDecoratedInstruction type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertDecoratedInstruction ("assertDecoratedInstruction",
                                                   & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assertDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertDecoratedInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assertDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertDecoratedInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assertDecoratedInstruction GALGAS_assertDecoratedInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assertDecoratedInstruction result ;
  const GALGAS_assertDecoratedInstruction * p = (const GALGAS_assertDecoratedInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertDecoratedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertDecoratedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

