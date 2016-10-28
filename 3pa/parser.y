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
   parser::root = new astree (ROOT, {0, 0, 0}, "<<ROOT>>");
}

%token ROOT TOK_VOID TOK_CHAR TOK_INT TOK_STRING
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
        | program token | 
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
         ;
identdecl : basetype TOK_IDENT
          | basetype TOK_ARRAY TOK_IDENT
          ;
block : '{' '}'
      | '{' statement '}'
      | ';'
      ;
statement : block | vardecl | while | ifelse | return | expr';';
vardecl : identdecl '=' expr ';';
while : TOK_WHILE '(' expr ')' statement
ifelse : TOK_IF '(' expr ')' statement 
       | TOK_IF	'(' expr ')' statement TOK_ELSE statement
       ;
return : TOK_RETURN ';'
       | TOK_RETURN expr ';'
       ;
expr : expr BINOP expr
     | UNOP expr
     | allocator
     | call
     | '(' expr ')'
     | variable
     | constant
     ;
allocator : TOK_NEW TOK_IDENT '('')'
          | TOK_NEW TOK_STRING '(' expr ')'
          | TOK_NEW basetype '[' expr ']'
          ;
call : TOK_IDENT '('')'
     | TOK_IDENT '('expr')'
     ;
variable : TOK_IDENT 
         | expr'['expr']'
         | expr'.'TOK_IDENT
         ;
constant : TOK_INTCON | TOK_CHARCON | TOK_STRINGCON | TOK_NULL;
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

