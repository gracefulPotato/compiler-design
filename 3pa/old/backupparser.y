%{
// Dummy parser for scanner project.
#include <string>
#include <vector>
using namespace std;

#include <stdio.h>

#include "auxlib.h"

#include <cassert>

#include "lyutils.h"
#include "astree.h"

%}

%debug
%defines
%error-verbose
%token-table
%verbose

%destructor { destroy ($$); } <>
%printer { astree::dump (yyoutput, $$); } <>

%initial-action {
   yylval = new astree (ROOT, {0, 0, 0}, "<<ROOT>>");
}

%token ROOT FUNCTION DECL
%token TOK_VOID TOK_CHAR TOK_INT TOK_STRING
%token TOK_IF TOK_ELSE TOK_WHILE TOK_RETURN TOK_STRUCT
%token TOK_NULL TOK_NEW TOK_ARRAY
%token TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%token TOK_IDENT TOK_INTCON TOK_CHARCON TOK_STRINGCON

%token TOK_BLOCK TOK_CALL TOK_IFELSE TOK_INITDECL
%token TOK_POS TOK_NEG TOK_NEWARRAY TOK_TYPEID TOK_FIELD
%token TOK_ORD TOK_CHR TOK_ROOT

%right TOK_IF TOK_ELSE
%right '='
%left  TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%left  '+' '-'
%left  '*' '/' '%'
%right POS NEG '!' TOK_NEW

%start program

%%

program : structdef
        | function
        | statement
        ;
structdef : TOK_STRUCT TOK_IDENT '{' '}'
          | TOK_STRUCT TOK_IDENT '{' fielddecl '}'
          | TOK_STRUCT TOK_IDENT '{' fielddecl';'fielddecl '}'
          ;
fielddecl : basetype TOK_IDENT
          | basetype TOK_ARRAY TOK_IDENT
          ;
basetype : TOK_VOID | TOK_CHAR | TOK_INT | TOK_STRING | TOK_IDENT;
function : identdecl '(' ')' block         
         | identdecl '(' params ')' block  { destroy($4); $$=$2->adopt($1,$3);$$=$$->adopt($5)}
         ;
params : identdecl
       | params ',' identdecl
       ;
identdecl : basetype TOK_IDENT
          | basetype TOK_ARRAY TOK_IDENT
          ;
block : '{' '}'           
      | '{' statement '}'  { destroy($3); $$=$1->adopt($2); }
      | ';'
      ;
statement : block | vardecl | while | ifelse | return | expr';';
vardecl : identdecl '=' expr ';';
while : TOK_WHILE '(' expr ')' statement
ifelse : TOK_IF '(' expr ')' statement %prec TOK_ELSE     {destroy($2,$4);$$=$1->adopt($3,$5);}  
       | TOK_IF	'(' expr ')' statement TOK_ELSE statement {}
       ;
return : TOK_RETURN ';'             { destroy ($2); $$ = $1; }
       | TOK_RETURN expr ';'        { destroy ($3); $$ = $1->adopt ($2); }
       ;
expr : expr BINOP expr              { $$ = $2->adopt ($1, $3); }
     | UNOP expr                    { $$ = $1->adopt ($2); }
     | allocator                    { $$ = $1; }
     | call                         { $$ = $1; }
     | '(' expr ')'                 { destroy ($1, $3); $$ = $2; }
     | variable                     { $$ = $1; }
     | constant                     { $$ = $1; }
     ;
allocator : TOK_NEW TOK_IDENT '('')'
          | TOK_NEW TOK_STRING '(' expr ')' {destroy($3,$5);$$=$1->adopt($4);}
          | TOK_NEW basetype '[' expr ']' {destroy($3,$5);$$=$1->adopt($4);}
          ;
call : TOK_IDENT '('')'
     | TOK_IDENT '('expr')'
     ;
variable : TOK_IDENT                { $$ = $1; }
         | expr'['expr']'           
         | expr'.'TOK_IDENT
         ;
constant : TOK_INTCON               { $$ = $1; }
         | TOK_CHARCON              { $$ = $1; }
         | TOK_STRINGCON            { $$ = $1; }
         | TOK_NULL                 { $$ = $1; }
         ;
UNOP : '-';
BINOP : '+' | '-' | '*' | '/';
token   : '(' | ')' | '[' | ']' | '{' | '}' | ';' | ',' | '.'
        | '=' | '+' | '-' | '*' | '/' | '%' | '!'
        | TOK_VOID | TOK_CHAR | TOK_INT | TOK_STRING
        | TOK_IF | TOK_ELSE | TOK_WHILE | TOK_RETURN | TOK_STRUCT
        | TOK_NULL | TOK_NEW | TOK_ARRAY
        | TOK_EQ | TOK_NE | TOK_LT | TOK_LE | TOK_GT | TOK_GE
        | TOK_IDENT | TOK_INTCON | TOK_CHARCON | TOK_STRINGCON
        | TOK_ORD | TOK_CHR | TOK_ROOT
        ;

%%


const char *get_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

/*
const char *get_tname(int symbol) {
   return token[symbol];
}
*/

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

/*
static void* yycalloc (size_t size) {
   void* result = calloc (1, size);
   assert (result != nullptr);
   return result;
}
*/

