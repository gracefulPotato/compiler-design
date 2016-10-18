%{
#include "lyutils.h"
%}

%option 8bit
%option debug
%option nodefault
%option verbose
%option nounput
%option noyywrap
%option warn

LETTER		[A-Za-z_]

%%

.		{lyutils::lexer::badchar (*yytext);}
%%
