%{
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
%locations

%destructor { destroy ($$); } <>
%printer { astree::dump (yyoutput, $$); } <>

%token ROOT FUNCTION DECL PARAM DECLID BLOCK VARDECL CALL
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
%left '.' '['

%initial-action {
   yyparse_astree = new astree (TOK_ROOT, {0, 0, 0}, "<<ROOT>>");
   fprintf(stderr,"created astree\n");
}

%start start


%%
start : program     {$$ = $1;}
      ;
program : program function {$$=$1->adopt($2);}
        | program structdef {$$=$1->adopt($2);}
        | program statement {$$=$1->adopt($2);}
        | program token {$$=$1->adopt($2);}
        |               {$$=yyparse_astree;} 
        ;

structdef : TOK_STRUCT TOK_IDENT '{' '}' { destroy($3,$4);
                                           $$=$1->adopt($2); }
          | TOK_STRUCT TOK_IDENT '{' fielddecl ';' '}' 
                                         { destroy($3,$5);
                                           destroy($6);
                                           $$=$1->adopt($2,$4); }
          | TOK_STRUCT TOK_IDENT '{' fielddecl';'fielddecl '}'
                                         { destroy($3,$5);
                                           destroy($7);
                                           $$=$1->adopt($2,$4);
                                           $$->adopt($6); }
          ;
fielddecl : basetype TOK_IDENT {$$=$1->adopt($2);}
          | basetype TOK_ARRAY TOK_IDENT {$$=$1->adopt($2,$3);}
          ;

function : identdecl '(' ')' block
           { $2=new astree(FUNCTION,$1->lloc,""); $$=$2->adopt($1,$4);}
         | identdecl '(' params ')' block 
           { destroy($4);$2=new astree(PARAM,$2->lloc,"(");
             $2->adopt($3); $$=new astree(FUNCTION,$2->lloc,"");
             $$=$$->adopt($1,$2);$$=$$->adopt($5); }
         ;
params : identdecl             {$$=$1;}
       | params ',' identdecl  {$$=$1->adopt($2);}
       ;
identdecl : basetype TOK_IDENT  
   { $$=$1->adopt(new astree(DECLID,$2->lloc,$2->lexinfo->c_str()));}
          | basetype TOK_ARRAY TOK_IDENT 
   {$$=$1->adopt($2,new astree(DECLID,$3->lloc,$3->lexinfo->c_str()));}
          ;
basetype : TOK_VOID | TOK_CHAR | TOK_INT | TOK_STRING | TOK_IDENT;

block : '{' '}'    {destroy($2);$$=new astree(BLOCK,$1->lloc,"{");}
      | '{' blockrec '}'  {$1=new astree(BLOCK,$1->lloc,"{");
                           $$=$1->adopt($2); }
      | ';'
      ;
blockrec : blockrec statement   { $$=$$->adopt($2); }
         | statement            { $$=$1;}
         ;
statement : block  {$$=$1;}
          | vardecl {$$=$1;} 
          | while  {$$=$1;}
          | ifelse  {$$=$1;}
          | return  {$$=$1;}
          | expr';'  {destroy($2);$$=$1;}
          ;

vardecl : identdecl '=' expr ';'  
            { destroy($4);$2=new astree(VARDECL,$1->lloc,"=");
              $$=$2->adopt($1,$3); }
        ;
while : TOK_WHILE '(' expr ')' statement  { destroy($2,$4);
                                            $$=$1->adopt($3,$5);}
      ;
ifelse : TOK_IF '(' expr ')' statement %prec TOK_ELSE     
 {destroy($2,$4);$$=$1->adopt($3,$5);}
       | TOK_IF '(' expr ')' statement TOK_ELSE statement {}
       ;
return : TOK_RETURN ';'         { destroy ($2); $$ = $1; }
       | TOK_RETURN expr ';'    { destroy ($3); $$ = $1->adopt ($2); }
       ;
expr : expr BINOP expr          { $$ = $2->adopt ($1, $3); }
     | UNOP expr                { $$ = $1->adopt ($2); }
     | allocator                { $$ = $1; }
     | call                     {$$ = $1; }
     | '(' expr ')'             { destroy ($1, $3); $$ = $2; }
     | variable                 { $$ = $1; }
     | constant                 { $$ = $1; }
     ;
allocator : TOK_NEW TOK_IDENT '('')'        { destroy($3,$4);
                                              $$=$1->adopt($2); }
          | TOK_NEW TOK_STRING '(' expr ')' { destroy($3,$5);
                                              $$=$1->adopt($4); }
          | TOK_NEW basetype '[' expr ']'   { destroy($3,$5);
                                              $$=$1->adopt($4); }
          ;
call : TOK_IDENT '('')'     { $2=new astree(CALL,$2->lloc,"(");
                              $$=$2->adopt($1); }
     | TOK_IDENT '('expr')' { $2=new astree(CALL,$2->lloc,"(");
                              $$=$2->adopt($1,$3); }
     ;
variable : TOK_IDENT                { $$ = $1; }
         | expr'['expr']'
         | expr'.'TOK_IDENT 
            { $2=new astree(TOK_FIELD,$3->lloc,$3->lexinfo->c_str());
              $$ = $2->adopt($1,$3); }
         ;
constant : TOK_INTCON               { $$ = $1; }
         | TOK_CHARCON              { $$ = $1; }
         | TOK_STRINGCON            { $$ = $1; }
         | TOK_NULL                 { $$ = $1; }
         ;
UNOP : '-';
BINOP : '+' | '=' | '-' | '*' | '/' | TOK_NE | TOK_EQ | TOK_LT
      | TOK_LE | TOK_GT | TOK_GE | '.' | '[';

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

