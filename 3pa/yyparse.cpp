/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

// Dummy parser for scanner project.
#include <string>
#include <vector>
using namespace std;

#include <stdio.h>

#include "auxlib.h"

#include <cassert>

#include "lyutils.h"
#include "astree.h"


/* Line 371 of yacc.c  */
#line 85 "yyparse.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yyparse.h".  */
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
     TOK_VOID = 259,
     TOK_CHAR = 260,
     TOK_INT = 261,
     TOK_STRING = 262,
     TOK_IF = 263,
     TOK_ELSE = 264,
     TOK_WHILE = 265,
     TOK_RETURN = 266,
     TOK_STRUCT = 267,
     TOK_NULL = 268,
     TOK_NEW = 269,
     TOK_ARRAY = 270,
     TOK_EQ = 271,
     TOK_NE = 272,
     TOK_LT = 273,
     TOK_LE = 274,
     TOK_GT = 275,
     TOK_GE = 276,
     TOK_IDENT = 277,
     TOK_INTCON = 278,
     TOK_CHARCON = 279,
     TOK_STRINGCON = 280,
     TOK_BLOCK = 281,
     TOK_CALL = 282,
     TOK_IFELSE = 283,
     TOK_INITDECL = 284,
     TOK_POS = 285,
     TOK_NEG = 286,
     TOK_NEWARRAY = 287,
     TOK_TYPEID = 288,
     TOK_FIELD = 289,
     TOK_ORD = 290,
     TOK_CHR = 291,
     TOK_ROOT = 292,
     NEG = 293,
     POS = 294
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 190 "yyparse.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    43,     2,     2,
      50,    51,    41,    39,    55,    40,    54,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    13,    18,    24,
      32,    35,    39,    41,    43,    45,    47,    49,    54,    57,
      61,    64,    68,    70,    72,    74,    76,    78,    80,    83,
      88,    94,   100,   108,   111,   115,   119,   122,   124,   126,
     130,   132,   134,   139,   145,   151,   155,   160,   162,   167,
     171,   173,   175,   177,   179,   181,   183,   185,   187,   189,
     191,   193,   195,   197,   199,   201,   203,   205,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   269
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,    -1,    61,    -1,    64,    -1,    57,
      76,    -1,    -1,    12,    22,    47,    48,    -1,    12,    22,
      47,    59,    48,    -1,    12,    22,    47,    59,    49,    59,
      48,    -1,    60,    22,    -1,    60,    15,    22,    -1,     4,
      -1,     5,    -1,     6,    -1,     7,    -1,    22,    -1,    62,
      50,    51,    63,    -1,    60,    22,    -1,    60,    15,    22,
      -1,    47,    48,    -1,    47,    64,    48,    -1,    49,    -1,
      63,    -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    49,    -1,    62,    38,    69,    49,    -1,    10,    50,
      69,    51,    64,    -1,     8,    50,    69,    51,    64,    -1,
       8,    50,    69,    51,    64,     9,    64,    -1,    11,    49,
      -1,    11,    69,    49,    -1,    69,    75,    69,    -1,    74,
      69,    -1,    70,    -1,    71,    -1,    50,    69,    51,    -1,
      72,    -1,    73,    -1,    14,    22,    50,    51,    -1,    14,
       7,    50,    69,    51,    -1,    14,    60,    52,    69,    53,
      -1,    22,    50,    51,    -1,    22,    50,    69,    51,    -1,
      22,    -1,    69,    52,    69,    53,    -1,    69,    54,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    13,    -1,    40,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    50,
      -1,    51,    -1,    52,    -1,    53,    -1,    47,    -1,    48,
      -1,    49,    -1,    55,    -1,    54,    -1,    38,    -1,    39,
      -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    35,    -1,    36,    -1,    37,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    55,    57,    58,    59,
      61,    62,    64,    64,    64,    64,    64,    65,    67,    68,
      70,    71,    72,    74,    74,    74,    74,    74,    74,    75,
      76,    77,    78,    80,    81,    83,    84,    85,    86,    87,
      88,    89,    91,    92,    93,    95,    96,    98,    99,   100,
     102,   102,   102,   102,   103,   104,   104,   104,   104,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   112,   112,   112
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ROOT", "TOK_VOID", "TOK_CHAR",
  "TOK_INT", "TOK_STRING", "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN",
  "TOK_STRUCT", "TOK_NULL", "TOK_NEW", "TOK_ARRAY", "TOK_EQ", "TOK_NE",
  "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_IDENT", "TOK_INTCON",
  "TOK_CHARCON", "TOK_STRINGCON", "TOK_BLOCK", "TOK_CALL", "TOK_IFELSE",
  "TOK_INITDECL", "TOK_POS", "TOK_NEG", "TOK_NEWARRAY", "TOK_TYPEID",
  "TOK_FIELD", "TOK_ORD", "TOK_CHR", "TOK_ROOT", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "NEG", "POS", "'{'", "'}'", "';'", "'('",
  "')'", "'['", "']'", "'.'", "','", "$accept", "program", "structdef",
  "fielddecl", "basetype", "function", "identdecl", "block", "statement",
  "vardecl", "while", "ifelse", "return", "expr", "allocator", "call",
  "variable", "constant", "UNOP", "BINOP", "token", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    61,    43,
      45,    42,    47,    37,    33,   293,   294,   123,   125,    59,
      40,    41,    91,    93,    46,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    57,    58,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    61,    62,    62,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    65,
      66,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    71,    71,    72,    72,    72,
      73,    73,    73,    73,    74,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     0,     4,     5,     7,
       2,     3,     1,     1,     1,     1,     1,     4,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     2,     4,
       5,     5,     7,     2,     3,     3,     2,     1,     1,     3,
       1,     1,     4,     5,     5,     3,     4,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,    12,    13,    14,    15,     0,     0,     0,     0,    53,
       0,    47,    50,    51,    52,    54,     0,    22,     0,     0,
       2,     0,     3,     0,    23,     4,    24,    25,    26,    27,
       0,    37,    38,    40,    41,     0,     0,     0,    47,    33,
       0,     0,    15,    16,     0,     0,    20,     0,     0,     0,
       1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    68,    69,    70,    71,
      72,    73,    74,    63,    64,    65,    59,    60,    61,    62,
      67,    66,     5,     0,    18,     0,     0,    55,    56,    57,
      58,    28,     0,     0,     0,    36,     0,     0,    34,     0,
       0,     0,     0,    45,     0,    21,    39,    19,     0,     0,
       0,    49,    35,     0,     0,    16,     7,     0,     0,     0,
      42,     0,    46,    29,    17,    48,    31,    30,     8,     0,
       0,    10,    43,    44,     0,     0,    11,    32,     9
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    19,    20,   127,    21,    22,    47,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   104,
      92
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
       3,   -67,   -67,   -67,   -67,   -27,   -13,   183,    14,   -67,
     150,    18,   -67,   -67,   -67,   -67,    53,   -67,   217,   127,
     -67,    19,   -67,   -18,   -67,   -67,   -67,   -67,   -67,   -67,
      72,   -67,   -67,   -67,   -67,   217,   217,   217,   -12,   -67,
     195,    -3,    -5,    -4,     2,    57,   -67,    10,     1,   211,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,    29,   -67,   217,     4,   -67,   -67,   -67,
     -67,   -67,   217,    34,   217,   283,   219,   235,   -67,    -1,
     217,    11,   217,   -67,   239,   -67,   -67,   -67,   243,   -25,
     259,   -67,   283,   179,   179,   -67,   -67,   -30,    20,   263,
     -67,   267,   -67,   -67,   -67,   -67,    56,   -67,   -67,   205,
      47,   -67,   -67,   -67,   179,    24,   -67,   -67,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   -67,   -66,   -10,   -67,    74,   -36,   -14,   -67,
     -67,   -67,   -67,    -6,   -67,   -67,   -67,   -67,   -67,   -67,
     -67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -17
static const yytype_int16 yytable[] =
{
      44,    40,    48,     1,     2,     3,     4,     1,     2,     3,
       4,     5,    49,     6,     7,     8,     9,    10,   138,   139,
      95,   125,    16,    36,    17,    11,    12,    13,    14,   105,
     106,   107,    96,   -16,    93,   140,    41,    37,    45,   114,
     -16,    94,   141,    15,   109,   110,   111,   126,    95,   115,
      16,   117,    17,    18,   112,   119,   121,     1,     2,     3,
       4,     5,   130,     6,     7,   144,     9,    10,    45,   146,
       9,    10,   148,   145,    23,    11,    12,    13,    14,    38,
      12,    13,    14,   134,     0,     0,     0,     0,     0,   118,
       0,     0,     0,    15,     0,     0,   120,    15,   122,   128,
      16,    46,    17,    18,   129,     0,   131,    18,   113,   136,
     137,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,     0,   103,    50,     0,   128,
     147,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     1,     2,     3,    42,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    43,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     1,     2,     3,     4,     5,     0,     6,
       7,     0,     9,    10,     0,     0,     9,    10,     0,     0,
       0,    11,    12,    13,    14,    38,    12,    13,    14,     1,
       2,     3,     4,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,    15,     0,     0,    16,   125,    17,    18,
       9,    10,    39,    18,    97,    98,    99,   100,     0,    38,
      12,    13,    14,     0,   108,     0,     0,   102,     0,   103,
      97,    98,    99,   100,     0,     0,     0,    15,    97,    98,
      99,   100,   116,   102,     0,   103,     0,    18,     0,     0,
     123,   102,     0,   103,    97,    98,    99,   100,    97,    98,
      99,   100,    97,    98,    99,   100,   124,   102,     0,   103,
     132,   102,   133,   103,     0,   102,     0,   103,    97,    98,
      99,   100,    97,    98,    99,   100,    97,    98,    99,   100,
       0,   102,   135,   103,   142,   102,     0,   103,     0,   102,
     143,   103,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   103
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      10,     7,    16,     4,     5,     6,     7,     4,     5,     6,
       7,     8,    18,    10,    11,    12,    13,    14,    48,    49,
      38,    22,    47,    50,    49,    22,    23,    24,    25,    35,
      36,    37,    50,    15,    15,    15,    22,    50,    50,    45,
      22,    22,    22,    40,    47,    50,    50,    48,    38,    48,
      47,    22,    49,    50,    52,    51,    22,     4,     5,     6,
       7,     8,    51,    10,    11,     9,    13,    14,    50,    22,
      13,    14,    48,   139,     0,    22,    23,    24,    25,    22,
      23,    24,    25,   119,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    40,    -1,    -1,   102,    40,   104,   109,
      47,    48,    49,    50,   110,    -1,   112,    50,    51,   123,
     124,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,     0,    -1,   139,
     144,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    22,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    -1,    13,    14,    -1,    -1,
      -1,    22,    23,    24,    25,    22,    23,    24,    25,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    40,    -1,    -1,    47,    22,    49,    50,
      13,    14,    49,    50,    39,    40,    41,    42,    -1,    22,
      23,    24,    25,    -1,    49,    -1,    -1,    52,    -1,    54,
      39,    40,    41,    42,    -1,    -1,    -1,    40,    39,    40,
      41,    42,    51,    52,    -1,    54,    -1,    50,    -1,    -1,
      51,    52,    -1,    54,    39,    40,    41,    42,    39,    40,
      41,    42,    39,    40,    41,    42,    51,    52,    -1,    54,
      51,    52,    49,    54,    -1,    52,    -1,    54,    39,    40,
      41,    42,    39,    40,    41,    42,    39,    40,    41,    42,
      -1,    52,    53,    54,    51,    52,    -1,    54,    -1,    52,
      53,    54,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,    10,    11,    12,    13,
      14,    22,    23,    24,    25,    40,    47,    49,    50,    57,
      58,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    50,    50,    22,    49,
      69,    22,     7,    22,    60,    50,    48,    62,    64,    69,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    76,    15,    22,    38,    50,    39,    40,    41,
      42,    49,    52,    54,    75,    69,    69,    69,    49,    47,
      50,    50,    52,    51,    69,    48,    51,    22,    69,    51,
      69,    22,    69,    51,    51,    22,    48,    59,    60,    69,
      51,    69,    51,    49,    63,    53,    64,    64,    48,    49,
      15,    22,    51,    53,     9,    59,    22,    64,    48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      case 3: /* ROOT */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 882 "yyparse.cpp"
        break;
      case 4: /* TOK_VOID */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 889 "yyparse.cpp"
        break;
      case 5: /* TOK_CHAR */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 896 "yyparse.cpp"
        break;
      case 6: /* TOK_INT */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 903 "yyparse.cpp"
        break;
      case 7: /* TOK_STRING */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 910 "yyparse.cpp"
        break;
      case 8: /* TOK_IF */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 917 "yyparse.cpp"
        break;
      case 9: /* TOK_ELSE */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 924 "yyparse.cpp"
        break;
      case 10: /* TOK_WHILE */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 931 "yyparse.cpp"
        break;
      case 11: /* TOK_RETURN */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 938 "yyparse.cpp"
        break;
      case 12: /* TOK_STRUCT */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 945 "yyparse.cpp"
        break;
      case 13: /* TOK_NULL */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 952 "yyparse.cpp"
        break;
      case 14: /* TOK_NEW */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 959 "yyparse.cpp"
        break;
      case 15: /* TOK_ARRAY */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 966 "yyparse.cpp"
        break;
      case 16: /* TOK_EQ */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 973 "yyparse.cpp"
        break;
      case 17: /* TOK_NE */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 980 "yyparse.cpp"
        break;
      case 18: /* TOK_LT */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 987 "yyparse.cpp"
        break;
      case 19: /* TOK_LE */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 994 "yyparse.cpp"
        break;
      case 20: /* TOK_GT */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1001 "yyparse.cpp"
        break;
      case 21: /* TOK_GE */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1008 "yyparse.cpp"
        break;
      case 22: /* TOK_IDENT */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1015 "yyparse.cpp"
        break;
      case 23: /* TOK_INTCON */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1022 "yyparse.cpp"
        break;
      case 24: /* TOK_CHARCON */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1029 "yyparse.cpp"
        break;
      case 25: /* TOK_STRINGCON */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1036 "yyparse.cpp"
        break;
      case 26: /* TOK_BLOCK */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1043 "yyparse.cpp"
        break;
      case 27: /* TOK_CALL */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1050 "yyparse.cpp"
        break;
      case 28: /* TOK_IFELSE */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1057 "yyparse.cpp"
        break;
      case 29: /* TOK_INITDECL */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1064 "yyparse.cpp"
        break;
      case 30: /* TOK_POS */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1071 "yyparse.cpp"
        break;
      case 31: /* TOK_NEG */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1078 "yyparse.cpp"
        break;
      case 32: /* TOK_NEWARRAY */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1085 "yyparse.cpp"
        break;
      case 33: /* TOK_TYPEID */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1092 "yyparse.cpp"
        break;
      case 34: /* TOK_FIELD */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1099 "yyparse.cpp"
        break;
      case 35: /* TOK_ORD */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1106 "yyparse.cpp"
        break;
      case 36: /* TOK_CHR */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1113 "yyparse.cpp"
        break;
      case 37: /* TOK_ROOT */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1120 "yyparse.cpp"
        break;
      case 38: /* '=' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1127 "yyparse.cpp"
        break;
      case 39: /* '+' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1134 "yyparse.cpp"
        break;
      case 40: /* '-' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1141 "yyparse.cpp"
        break;
      case 41: /* '*' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1148 "yyparse.cpp"
        break;
      case 42: /* '/' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1155 "yyparse.cpp"
        break;
      case 43: /* '%' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1162 "yyparse.cpp"
        break;
      case 44: /* '!' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1169 "yyparse.cpp"
        break;
      case 45: /* NEG */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1176 "yyparse.cpp"
        break;
      case 46: /* POS */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1183 "yyparse.cpp"
        break;
      case 47: /* '{' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1190 "yyparse.cpp"
        break;
      case 48: /* '}' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1197 "yyparse.cpp"
        break;
      case 49: /* ';' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1204 "yyparse.cpp"
        break;
      case 50: /* '(' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1211 "yyparse.cpp"
        break;
      case 51: /* ')' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1218 "yyparse.cpp"
        break;
      case 52: /* '[' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1225 "yyparse.cpp"
        break;
      case 53: /* ']' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1232 "yyparse.cpp"
        break;
      case 54: /* '.' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1239 "yyparse.cpp"
        break;
      case 55: /* ',' */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1246 "yyparse.cpp"
        break;
      case 57: /* program */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1253 "yyparse.cpp"
        break;
      case 58: /* structdef */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1260 "yyparse.cpp"
        break;
      case 59: /* fielddecl */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1267 "yyparse.cpp"
        break;
      case 60: /* basetype */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1274 "yyparse.cpp"
        break;
      case 61: /* function */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1281 "yyparse.cpp"
        break;
      case 62: /* identdecl */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1288 "yyparse.cpp"
        break;
      case 63: /* block */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1295 "yyparse.cpp"
        break;
      case 64: /* statement */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1302 "yyparse.cpp"
        break;
      case 65: /* vardecl */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1309 "yyparse.cpp"
        break;
      case 66: /* while */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1316 "yyparse.cpp"
        break;
      case 67: /* ifelse */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1323 "yyparse.cpp"
        break;
      case 68: /* return */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1330 "yyparse.cpp"
        break;
      case 69: /* expr */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1337 "yyparse.cpp"
        break;
      case 70: /* allocator */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1344 "yyparse.cpp"
        break;
      case 71: /* call */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1351 "yyparse.cpp"
        break;
      case 72: /* variable */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1358 "yyparse.cpp"
        break;
      case 73: /* constant */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1365 "yyparse.cpp"
        break;
      case 74: /* UNOP */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1372 "yyparse.cpp"
        break;
      case 75: /* BINOP */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1379 "yyparse.cpp"
        break;
      case 76: /* token */
/* Line 823 of yacc.c  */
#line 25 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1386 "yyparse.cpp"
        break;
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 3: /* ROOT */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1787 "yyparse.cpp"
        break;
      case 4: /* TOK_VOID */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1794 "yyparse.cpp"
        break;
      case 5: /* TOK_CHAR */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1801 "yyparse.cpp"
        break;
      case 6: /* TOK_INT */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1808 "yyparse.cpp"
        break;
      case 7: /* TOK_STRING */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1815 "yyparse.cpp"
        break;
      case 8: /* TOK_IF */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1822 "yyparse.cpp"
        break;
      case 9: /* TOK_ELSE */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1829 "yyparse.cpp"
        break;
      case 10: /* TOK_WHILE */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1836 "yyparse.cpp"
        break;
      case 11: /* TOK_RETURN */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1843 "yyparse.cpp"
        break;
      case 12: /* TOK_STRUCT */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1850 "yyparse.cpp"
        break;
      case 13: /* TOK_NULL */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1857 "yyparse.cpp"
        break;
      case 14: /* TOK_NEW */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1864 "yyparse.cpp"
        break;
      case 15: /* TOK_ARRAY */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1871 "yyparse.cpp"
        break;
      case 16: /* TOK_EQ */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1878 "yyparse.cpp"
        break;
      case 17: /* TOK_NE */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1885 "yyparse.cpp"
        break;
      case 18: /* TOK_LT */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1892 "yyparse.cpp"
        break;
      case 19: /* TOK_LE */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1899 "yyparse.cpp"
        break;
      case 20: /* TOK_GT */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1906 "yyparse.cpp"
        break;
      case 21: /* TOK_GE */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1913 "yyparse.cpp"
        break;
      case 22: /* TOK_IDENT */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1920 "yyparse.cpp"
        break;
      case 23: /* TOK_INTCON */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1927 "yyparse.cpp"
        break;
      case 24: /* TOK_CHARCON */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1934 "yyparse.cpp"
        break;
      case 25: /* TOK_STRINGCON */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1941 "yyparse.cpp"
        break;
      case 26: /* TOK_BLOCK */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1948 "yyparse.cpp"
        break;
      case 27: /* TOK_CALL */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1955 "yyparse.cpp"
        break;
      case 28: /* TOK_IFELSE */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1962 "yyparse.cpp"
        break;
      case 29: /* TOK_INITDECL */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1969 "yyparse.cpp"
        break;
      case 30: /* TOK_POS */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1976 "yyparse.cpp"
        break;
      case 31: /* TOK_NEG */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1983 "yyparse.cpp"
        break;
      case 32: /* TOK_NEWARRAY */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1990 "yyparse.cpp"
        break;
      case 33: /* TOK_TYPEID */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1997 "yyparse.cpp"
        break;
      case 34: /* TOK_FIELD */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2004 "yyparse.cpp"
        break;
      case 35: /* TOK_ORD */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2011 "yyparse.cpp"
        break;
      case 36: /* TOK_CHR */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2018 "yyparse.cpp"
        break;
      case 37: /* TOK_ROOT */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2025 "yyparse.cpp"
        break;
      case 38: /* '=' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2032 "yyparse.cpp"
        break;
      case 39: /* '+' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2039 "yyparse.cpp"
        break;
      case 40: /* '-' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2046 "yyparse.cpp"
        break;
      case 41: /* '*' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2053 "yyparse.cpp"
        break;
      case 42: /* '/' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2060 "yyparse.cpp"
        break;
      case 43: /* '%' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2067 "yyparse.cpp"
        break;
      case 44: /* '!' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2074 "yyparse.cpp"
        break;
      case 45: /* NEG */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2081 "yyparse.cpp"
        break;
      case 46: /* POS */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2088 "yyparse.cpp"
        break;
      case 47: /* '{' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2095 "yyparse.cpp"
        break;
      case 48: /* '}' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2102 "yyparse.cpp"
        break;
      case 49: /* ';' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2109 "yyparse.cpp"
        break;
      case 50: /* '(' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2116 "yyparse.cpp"
        break;
      case 51: /* ')' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2123 "yyparse.cpp"
        break;
      case 52: /* '[' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2130 "yyparse.cpp"
        break;
      case 53: /* ']' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2137 "yyparse.cpp"
        break;
      case 54: /* '.' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2144 "yyparse.cpp"
        break;
      case 55: /* ',' */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2151 "yyparse.cpp"
        break;
      case 57: /* program */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2158 "yyparse.cpp"
        break;
      case 58: /* structdef */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2165 "yyparse.cpp"
        break;
      case 59: /* fielddecl */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2172 "yyparse.cpp"
        break;
      case 60: /* basetype */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2179 "yyparse.cpp"
        break;
      case 61: /* function */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2186 "yyparse.cpp"
        break;
      case 62: /* identdecl */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2193 "yyparse.cpp"
        break;
      case 63: /* block */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2200 "yyparse.cpp"
        break;
      case 64: /* statement */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2207 "yyparse.cpp"
        break;
      case 65: /* vardecl */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2214 "yyparse.cpp"
        break;
      case 66: /* while */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2221 "yyparse.cpp"
        break;
      case 67: /* ifelse */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2228 "yyparse.cpp"
        break;
      case 68: /* return */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2235 "yyparse.cpp"
        break;
      case 69: /* expr */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2242 "yyparse.cpp"
        break;
      case 70: /* allocator */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2249 "yyparse.cpp"
        break;
      case 71: /* call */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2256 "yyparse.cpp"
        break;
      case 72: /* variable */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2263 "yyparse.cpp"
        break;
      case 73: /* constant */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2270 "yyparse.cpp"
        break;
      case 74: /* UNOP */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2277 "yyparse.cpp"
        break;
      case 75: /* BINOP */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2284 "yyparse.cpp"
        break;
      case 76: /* token */
/* Line 1398 of yacc.c  */
#line 24 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2291 "yyparse.cpp"
        break;

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
/* Line 1575 of yacc.c  */
#line 27 "parser.y"
{
   parser::root = new astree (ROOT, {0, 0, 0}, "<<ROOT>>");
}
/* Line 1575 of yacc.c  */
#line 2409 "yyparse.cpp"
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1792 of yacc.c  */
#line 2590 "yyparse.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 115 "parser.y"



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

