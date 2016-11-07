/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_YYPARSE_H_INCLUDED
# define YY_YY_YYPARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ROOT = 258,
     FUNCTION = 259,
     DECL = 260,
     PARAM = 261,
     DECLID = 262,
     BLOCK = 263,
     VARDECL = 264,
     TOK_VOID = 265,
     TOK_CHAR = 266,
     TOK_INT = 267,
     TOK_STRING = 268,
     TOK_IF = 269,
     TOK_ELSE = 270,
     TOK_WHILE = 271,
     TOK_RETURN = 272,
     TOK_STRUCT = 273,
     TOK_NULL = 274,
     TOK_NEW = 275,
     TOK_ARRAY = 276,
     TOK_EQ = 277,
     TOK_NE = 278,
     TOK_LT = 279,
     TOK_LE = 280,
     TOK_GT = 281,
     TOK_GE = 282,
     TOK_IDENT = 283,
     TOK_INTCON = 284,
     TOK_CHARCON = 285,
     TOK_STRINGCON = 286,
     TOK_BLOCK = 287,
     TOK_CALL = 288,
     TOK_IFELSE = 289,
     TOK_INITDECL = 290,
     TOK_POS = 291,
     TOK_NEG = 292,
     TOK_NEWARRAY = 293,
     TOK_TYPEID = 294,
     TOK_FIELD = 295,
     TOK_ORD = 296,
     TOK_CHR = 297,
     TOK_ROOT = 298,
     NEG = 299,
     POS = 300
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_YYPARSE_H_INCLUDED  */
