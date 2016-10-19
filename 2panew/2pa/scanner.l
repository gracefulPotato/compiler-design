%{
#include "lyutils.h"

#define RETURN(SYMBOL) { \
   yylval = new astree (SYMBOL, lexer::lloc, yytext); \
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

LETTER          [A-Za-z_]
IDENT           ({LETTER}*)

%%
{IDENT}         { RETURN (IDENT);}
.               { lexer::badchar (*yytext); }
%%
