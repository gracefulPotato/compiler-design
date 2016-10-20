%{
#include "lyutils.h"

#define YY_USER_ACTION  { lexer::advance(); }

#define RETURN(SYMBOL) { \
   yylval = new astree (SYMBOL, lexer::lloc, yytext); \
   fprintf(stderr,"yytext: %s\n",yytext); \
   return SYMBOL; \
}

%}

%option 8bit
%option debug
%option nodefault
%option verbose
%option nounput
%option noyywrap
%option warn

LETTER [A-Za-z_]
DIGIT [0-9]
UNDERSCORE _
QUOTE "
NEWLINECHAR \'\n\'
DOT .

NUMBER ({DIGIT}+)
CHAR ({LETTER}|{NEWLINE}|{DOT})
STRING ({QUOTE}({CHAR}|{NEWLINE})*{QUOTE})
IDENT (({LETTER}|{UNDERSCORE})({LETTER}|{DIGIT}|{UNDERSCORE})*)

%%

" "             { }
"#".*           { lexer::include(); }
NEWLINECHAR     { RETURN (TOK_STRING); }
CHAR            { RETURN (TOK_CHAR); }
\n              { lexer::newline(); }
STRING          { RETURN (TOK_STRING); }
"\'"            { RETURN ('\''); }
"\""            { RETURN ('"'); }
"("             { RETURN ('('); }
")"             { RETURN (')'); }
","             { RETURN (','); }
"."             { RETURN ('.'); }
"/"             { RETURN ('/'); }
";"             { RETURN (';'); }
"<="            { RETURN ('<='); }
"="             { RETURN ('='); }
"<"             { RETURN ('<'); }
">="            { RETURN ('>='); }
">"             { RETURN ('>'); }
"=="            { RETURN ('=='); }
"!="            { RETURN ('!='); }
"!"             { RETURN ('!'); }
"%"             { RETURN ('%'); }
"*"             { RETURN ('*'); }
"+"             { RETURN ('+'); }
"["             { RETURN ('['); }
"]"             { RETURN (']'); }
"[]"            { RETURN ('[]'); }
"{"             { RETURN ('{'); }
"}"             { RETURN ('}'); }
{NUMBER}        { RETURN (TOK_INT); }
{IDENT}         { RETURN (TOK_IDENT); }
.               { lexer::badchar (*yytext); }

%%
