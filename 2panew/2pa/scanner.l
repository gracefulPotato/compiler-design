%{
#include "lyutils.h"
#include "astree.h"

#define YY_USER_ACTION  { lexer::advance(); }

#define RETURN(SYMBOL) { \
   yylval = new astree (SYMBOL, lexer::lloc, yytext); \
   fprintf(stderr,"yytext: %s\n",yytext); \
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

"\'\\n\'"        { RETURN ('\n'); }
" "             { }
"#".*           { lexer::include(); }
NEWLINECHAR     { RETURN (TOK_STRING); }
CHAR            { RETURN (TOK_CHAR); }
\n              { lexer::newline(); }
STRING          { RETURN (TOK_STRING); }
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
