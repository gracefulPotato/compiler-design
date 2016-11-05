%{
#include "lyutils.h"
#include "astree.h"

#define YY_USER_ACTION  { lexer::advance(); }

#define RETURN(SYMBOL) { \
   yylval = new astree (SYMBOL, lexer::lloc, yytext); \
   astree::print(tok,yylval,SYMBOL,0); \
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

DIGIT [0-9]
LETTER [A-Za-z_]
NUMBER ({DIGIT}+)
CHARCON ('([^\\'\n]|\\[\\'"0nt])')
STRINGCON (\"([^\\"\n]|\\[\\'"0nt])*\")
IDENT (({LETTER})({LETTER}|{DIGIT})*)

%%

" "             { }
"#".*           { lexer::include(); }
"//".*          { }
{CHARCON}       { RETURN (TOK_CHARCON); }
\n              { lexer::newline(); }
\t              { }
{STRINGCON}     { RETURN (TOK_STRINGCON); }
"("             { RETURN ('('); }
")"             { RETURN (')'); }
","             { RETURN (','); }
"."             { RETURN ('.'); }
"/"             { RETURN ('/'); }
";"             { RETURN (';'); }
"<="            { RETURN (TOK_LE); }
"<"             { RETURN (TOK_LT); }
"="             { RETURN ('='); }
">="            { RETURN (TOK_GE); }
">"             { RETURN (TOK_GT); }
"=="            { RETURN (TOK_EQ); }
"!="            { RETURN (TOK_NE); }
"!"             { RETURN ('!'); }
"%"             { RETURN ('%'); }
"*"             { RETURN ('*'); }
"+"             { RETURN ('+'); }
"-"             { RETURN ('-'); }
"["             { RETURN ('['); }
"]"             { RETURN (']'); }
"[]"            { RETURN (TOK_ARRAY); }
"{"             { RETURN ('{'); }
"}"             { RETURN ('}'); }
"char"          { RETURN (TOK_CHAR); }
"if"            { RETURN (TOK_IF); }
"else"          { RETURN (TOK_ELSE); }
"int"           { RETURN (TOK_INT); }
"new"           { RETURN (TOK_NEW); }
"null"          { RETURN (TOK_NULL); }
"return"        { RETURN (TOK_RETURN); }
"string"        { RETURN (TOK_STRING); }
"struct"        { RETURN (TOK_STRUCT); }
"void"          { RETURN (TOK_VOID); }
"while"         { RETURN (TOK_WHILE); }
{NUMBER}        { RETURN (TOK_INTCON); }
{IDENT}         { RETURN (TOK_IDENT); }
.               { lexer::badchar (*yytext); }

%%
