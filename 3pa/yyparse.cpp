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
#line 2 "parser.y"

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
     FUNCTION = 259,
     DECL = 260,
     END_OF_FILE = 261,
     TOK_VOID = 262,
     TOK_CHAR = 263,
     TOK_INT = 264,
     TOK_STRING = 265,
     TOK_IF = 266,
     TOK_ELSE = 267,
     TOK_WHILE = 268,
     TOK_RETURN = 269,
     TOK_STRUCT = 270,
     TOK_NULL = 271,
     TOK_NEW = 272,
     TOK_ARRAY = 273,
     TOK_EQ = 274,
     TOK_NE = 275,
     TOK_LT = 276,
     TOK_LE = 277,
     TOK_GT = 278,
     TOK_GE = 279,
     TOK_IDENT = 280,
     TOK_INTCON = 281,
     TOK_CHARCON = 282,
     TOK_STRINGCON = 283,
     TOK_BLOCK = 284,
     TOK_CALL = 285,
     TOK_IFELSE = 286,
     TOK_INITDECL = 287,
     TOK_POS = 288,
     TOK_NEG = 289,
     TOK_NEWARRAY = 290,
     TOK_TYPEID = 291,
     TOK_FIELD = 292,
     TOK_ORD = 293,
     TOK_CHR = 294,
     TOK_ROOT = 295,
     NEG = 296,
     POS = 297
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
#line 193 "yyparse.cpp"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   488

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNRULES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    46,     2,     2,
      53,    54,    44,    42,    55,    43,    58,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    17,    18,    23,
      30,    38,    41,    45,    50,    56,    58,    62,    65,    69,
      71,    73,    75,    77,    79,    82,    86,    88,    91,    93,
      95,    97,    99,   101,   103,   106,   111,   117,   123,   131,
     134,   138,   142,   145,   147,   149,   153,   155,   157,   162,
     168,   174,   178,   183,   185,   190,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   224,   226,   228,   230,   232,   234,   236,   238,   240,
     242,   244,   246,   248,   250,   252,   254,   256,   258,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,   292,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    -1,    61,    64,    -1,    61,    62,
      -1,    61,    70,    -1,    61,    82,    -1,    -1,    15,    25,
      50,    51,    -1,    15,    25,    50,    63,    52,    51,    -1,
      15,    25,    50,    63,    52,    63,    51,    -1,    67,    25,
      -1,    67,    18,    25,    -1,    66,    53,    54,    68,    -1,
      66,    53,    65,    54,    68,    -1,    66,    -1,    65,    55,
      66,    -1,    67,    25,    -1,    67,    18,    25,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    25,    -1,    50,
      51,    -1,    50,    69,    51,    -1,    52,    -1,    69,    70,
      -1,    70,    -1,    68,    -1,    71,    -1,    72,    -1,    73,
      -1,    74,    -1,    75,    52,    -1,    66,    41,    75,    52,
      -1,    13,    53,    75,    54,    70,    -1,    11,    53,    75,
      54,    70,    -1,    11,    53,    75,    54,    70,    12,    70,
      -1,    14,    52,    -1,    14,    75,    52,    -1,    75,    81,
      75,    -1,    80,    75,    -1,    76,    -1,    77,    -1,    53,
      75,    54,    -1,    78,    -1,    79,    -1,    17,    25,    53,
      54,    -1,    17,    10,    53,    75,    54,    -1,    17,    67,
      56,    75,    57,    -1,    25,    53,    54,    -1,    25,    53,
      75,    54,    -1,    25,    -1,    75,    56,    75,    57,    -1,
      75,    58,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      16,    -1,    43,    -1,    42,    -1,    41,    -1,    43,    -1,
      44,    -1,    45,    -1,    53,    -1,    54,    -1,    56,    -1,
      57,    -1,    50,    -1,    51,    -1,    52,    -1,    55,    -1,
      58,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      38,    -1,    39,    -1,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    57,    58,    59,    60,    61,    64,    65,
      66,    68,    69,    72,    73,    75,    76,    78,    79,    81,
      81,    81,    81,    81,    83,    84,    85,    87,    88,    90,
      90,    90,    90,    90,    90,    92,    93,    94,    95,    97,
      98,   100,   101,   102,   103,   104,   105,   106,   108,   109,
     110,   112,   113,   115,   116,   117,   119,   120,   121,   122,
     124,   125,   125,   125,   125,   125,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   130,   130,   130,   130,
     130,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     133,   133,   133,   133,   134,   134,   134
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ROOT", "FUNCTION", "DECL",
  "END_OF_FILE", "TOK_VOID", "TOK_CHAR", "TOK_INT", "TOK_STRING", "TOK_IF",
  "TOK_ELSE", "TOK_WHILE", "TOK_RETURN", "TOK_STRUCT", "TOK_NULL",
  "TOK_NEW", "TOK_ARRAY", "TOK_EQ", "TOK_NE", "TOK_LT", "TOK_LE", "TOK_GT",
  "TOK_GE", "TOK_IDENT", "TOK_INTCON", "TOK_CHARCON", "TOK_STRINGCON",
  "TOK_BLOCK", "TOK_CALL", "TOK_IFELSE", "TOK_INITDECL", "TOK_POS",
  "TOK_NEG", "TOK_NEWARRAY", "TOK_TYPEID", "TOK_FIELD", "TOK_ORD",
  "TOK_CHR", "TOK_ROOT", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "NEG", "POS", "'{'", "'}'", "';'", "'('", "')'", "','", "'['", "']'",
  "'.'", "$accept", "start", "program", "structdef", "fielddecl",
  "function", "params", "identdecl", "basetype", "block", "blockrec",
  "statement", "vardecl", "while", "ifelse", "return", "expr", "allocator",
  "call", "variable", "constant", "UNOP", "BINOP", "token", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    61,    43,    45,    42,    47,    37,    33,   296,   297,
     123,   125,    59,    40,    41,    44,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    61,    61,    62,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    70,    71,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    77,    77,    78,    78,    78,    79,    79,    79,    79,
      80,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     0,     4,     6,
       7,     2,     3,     4,     5,     1,     3,     2,     3,     1,
       1,     1,     1,     1,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     4,     5,     5,     7,     2,
       3,     3,     2,     1,     1,     3,     1,     1,     4,     5,
       5,     3,     4,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     2,     1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    75,
      76,    77,    78,    79,    80,    81,    70,    71,    26,    66,
      67,    73,    68,    69,    74,     4,     3,     0,     0,    29,
       5,    30,    31,    32,    33,     0,    43,    44,    46,    47,
       0,     6,     0,     0,    59,     0,    53,    56,    57,    58,
      60,    39,     0,     0,     0,    19,    20,    21,    22,    23,
       0,     0,    22,     0,     0,     0,    53,     0,    24,    26,
       0,     0,    28,     0,     0,     0,     0,    17,    62,    61,
      63,    64,    65,    34,     0,     0,     0,    42,     0,     0,
      40,     0,     0,     0,     0,    51,     0,    25,    27,    45,
       0,    23,     0,     0,    15,    18,     0,    55,    41,     0,
       0,     8,     0,     0,     0,    48,     0,    52,    35,    13,
       0,     0,    54,    37,    36,     0,     0,    11,    49,    50,
      14,    16,     0,     9,     0,    12,    38,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    45,   132,    46,   123,    90,    48,    49,
      91,    92,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,   106,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -112
static const yytype_int16 yypact[] =
{
    -112,     9,   144,  -112,    19,    45,    53,    54,   -40,  -112,
     -17,   246,    23,   173,    58,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,    66,   272,   292,   297,  -112,  -112,  -112,  -112,
    -112,   259,  -112,  -112,  -112,  -112,     7,  -112,  -112,   279,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,   -11,    56,  -112,
    -112,  -112,  -112,  -112,  -112,   315,  -112,  -112,  -112,  -112,
     279,  -112,   279,   279,  -112,    58,    -4,  -112,  -112,  -112,
    -112,  -112,   279,   320,    11,  -112,  -112,  -112,    22,    32,
       6,   240,  -112,   -40,   -17,   246,    -6,     7,  -112,  -112,
      35,   196,  -112,   338,   279,    -3,    63,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,   279,    65,   279,   430,   343,   361,
    -112,    18,   279,    38,   279,  -112,   366,  -112,  -112,  -112,
     384,  -112,   -42,    -9,  -112,  -112,   389,  -112,   430,   227,
     227,  -112,    41,    62,   407,  -112,   412,  -112,  -112,  -112,
     -42,   105,  -112,    83,  -112,    31,    72,  -112,  -112,  -112,
    -112,  -112,   227,  -112,    49,  -112,  -112,  -112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -112,  -112,  -112,  -112,   -44,  -112,  -112,    -1,   -12,  -111,
    -112,    -2,  -112,  -112,  -112,  -112,    -8,  -112,  -112,  -112,
    -112,  -112,  -112,  -112
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -61
static const yytype_int16 yytable[] =
{
      50,    47,    80,    73,    75,    76,    77,    82,    87,     3,
      89,   139,   -23,    62,    75,    76,    77,    82,    83,   -23,
      84,    85,   121,    64,    65,    75,    76,    77,    82,   150,
      94,    93,    86,    67,    68,    69,    63,   -19,    75,    76,
      77,    82,    95,   121,   -19,   140,   141,    81,    74,    81,
      70,   122,   107,    80,   108,   109,   121,    87,    88,    89,
      72,   111,   114,   -20,    93,    75,    76,    77,    78,   131,
     -20,   -21,   -22,   116,    96,   112,    94,    73,   -21,   -22,
     146,    97,   153,    79,   -23,   113,   120,   147,   125,   118,
     127,   -23,   135,   145,   124,   152,   126,   155,   128,   133,
     157,   154,     0,     0,   134,     0,   136,   -53,   -53,   -53,
     -53,   -53,    75,    76,    77,    82,     0,     0,   -53,    81,
       0,     0,   -53,     0,   -53,     0,     0,   143,   144,     0,
     121,     0,     0,   133,     0,     0,     0,     0,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,     0,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    75,    76,    77,    82,    83,     0,    84,
      85,     0,    64,    65,   -59,   -59,   -59,   -59,   -59,     0,
       0,    86,    67,    68,    69,   -59,     0,     0,     0,   -59,
       0,   -59,     0,     0,    75,    76,    77,    82,    83,    70,
      84,    85,     0,    64,    65,     0,    87,   117,    89,    72,
       0,     0,    86,    67,    68,    69,    64,    65,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,     0,
      70,    66,    67,    68,    69,   -60,   -60,    87,     0,    89,
      72,     0,     0,    70,   -60,   -60,   -60,   -60,     0,    70,
       0,     0,     0,    72,   115,    64,    65,     0,    71,    72,
       0,     0,   -60,     0,    66,    67,    68,    69,     0,     0,
       0,     0,   -60,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,    70,     0,   -56,     0,     0,     0,   -56,     0,
     -56,     0,    72,   -57,   -57,   -57,   -57,   -57,   -58,   -58,
     -58,   -58,   -58,     0,   -57,     0,     0,     0,   -57,   -58,
     -57,     0,     0,   -58,     0,   -58,    98,    99,   100,   101,
     102,    98,    99,   100,   101,   102,     0,   103,     0,     0,
       0,   104,   110,   105,     0,     0,   104,     0,   105,    98,
      99,   100,   101,   102,    98,    99,   100,   101,   102,     0,
       0,     0,   119,     0,   104,     0,   105,   129,     0,   104,
       0,   105,    98,    99,   100,   101,   102,    98,    99,   100,
     101,   102,     0,     0,     0,   130,     0,   104,     0,   105,
     137,     0,   104,     0,   105,    98,    99,   100,   101,   102,
      98,    99,   100,   101,   102,     0,   138,     0,     0,     0,
     104,     0,   105,     0,     0,   104,   142,   105,    98,    99,
     100,   101,   102,    98,    99,   100,   101,   102,     0,     0,
       0,   148,     0,   104,     0,   105,     0,     0,   104,   149,
     105,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,     0,   105
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-112)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     2,    14,    11,     7,     8,     9,    10,    50,     0,
      52,   122,    18,    53,     7,     8,     9,    10,    11,    25,
      13,    14,    25,    16,    17,     7,     8,     9,    10,   140,
      41,    39,    25,    26,    27,    28,    53,    18,     7,     8,
       9,    10,    53,    25,    25,    54,    55,    53,    25,    53,
      43,    54,    60,    65,    62,    63,    25,    50,    51,    52,
      53,    50,    56,    18,    72,     7,     8,     9,    10,    51,
      25,    18,    18,    81,    18,    53,    41,    85,    25,    25,
      18,    25,    51,    25,    18,    53,    94,    25,    25,    91,
      25,    25,    54,    52,    95,    12,   104,    25,   106,   111,
      51,   145,    -1,    -1,   112,    -1,   114,    41,    42,    43,
      44,    45,     7,     8,     9,    10,    -1,    -1,    52,    53,
      -1,    -1,    56,    -1,    58,    -1,    -1,   129,   130,    -1,
      25,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    41,    42,    43,    44,    45,    -1,
      -1,    25,    26,    27,    28,    52,    -1,    -1,    -1,    56,
      -1,    58,    -1,    -1,     7,     8,     9,    10,    11,    43,
      13,    14,    -1,    16,    17,    -1,    50,    51,    52,    53,
      -1,    -1,    25,    26,    27,    28,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    25,    26,    27,    28,    -1,
      43,    25,    26,    27,    28,    16,    17,    50,    -1,    52,
      53,    -1,    -1,    43,    25,    26,    27,    28,    -1,    43,
      -1,    -1,    -1,    53,    54,    16,    17,    -1,    52,    53,
      -1,    -1,    43,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    53,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    43,    -1,    52,    -1,    -1,    -1,    56,    -1,
      58,    -1,    53,    41,    42,    43,    44,    45,    41,    42,
      43,    44,    45,    -1,    52,    -1,    -1,    -1,    56,    52,
      58,    -1,    -1,    56,    -1,    58,    41,    42,    43,    44,
      45,    41,    42,    43,    44,    45,    -1,    52,    -1,    -1,
      -1,    56,    52,    58,    -1,    -1,    56,    -1,    58,    41,
      42,    43,    44,    45,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    54,    -1,    56,    -1,    58,    54,    -1,    56,
      -1,    58,    41,    42,    43,    44,    45,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    54,    -1,    56,    -1,    58,
      54,    -1,    56,    -1,    58,    41,    42,    43,    44,    45,
      41,    42,    43,    44,    45,    -1,    52,    -1,    -1,    -1,
      56,    -1,    58,    -1,    -1,    56,    57,    58,    41,    42,
      43,    44,    45,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    54,    -1,    56,    -1,    58,    -1,    -1,    56,    57,
      58,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    61,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    62,    64,    66,    67,    68,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    82,    53,    53,    16,    17,    25,    26,    27,    28,
      43,    52,    53,    75,    25,     7,     8,     9,    10,    25,
      67,    53,    10,    11,    13,    14,    25,    50,    51,    52,
      66,    69,    70,    75,    41,    53,    18,    25,    41,    42,
      43,    44,    45,    52,    56,    58,    81,    75,    75,    75,
      52,    50,    53,    53,    56,    54,    75,    51,    70,    54,
      75,    25,    54,    65,    66,    25,    75,    25,    75,    54,
      54,    51,    63,    67,    75,    54,    75,    54,    52,    68,
      54,    55,    57,    70,    70,    52,    18,    25,    54,    57,
      68,    66,    12,    51,    63,    25,    70,    51
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
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 925 "yyparse.cpp"
        break;
      case 4: /* FUNCTION */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 932 "yyparse.cpp"
        break;
      case 5: /* DECL */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 939 "yyparse.cpp"
        break;
      case 6: /* END_OF_FILE */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 946 "yyparse.cpp"
        break;
      case 7: /* TOK_VOID */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 953 "yyparse.cpp"
        break;
      case 8: /* TOK_CHAR */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 960 "yyparse.cpp"
        break;
      case 9: /* TOK_INT */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 967 "yyparse.cpp"
        break;
      case 10: /* TOK_STRING */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 974 "yyparse.cpp"
        break;
      case 11: /* TOK_IF */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 981 "yyparse.cpp"
        break;
      case 12: /* TOK_ELSE */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 988 "yyparse.cpp"
        break;
      case 13: /* TOK_WHILE */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 995 "yyparse.cpp"
        break;
      case 14: /* TOK_RETURN */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1002 "yyparse.cpp"
        break;
      case 15: /* TOK_STRUCT */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1009 "yyparse.cpp"
        break;
      case 16: /* TOK_NULL */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1016 "yyparse.cpp"
        break;
      case 17: /* TOK_NEW */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1023 "yyparse.cpp"
        break;
      case 18: /* TOK_ARRAY */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1030 "yyparse.cpp"
        break;
      case 19: /* TOK_EQ */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1037 "yyparse.cpp"
        break;
      case 20: /* TOK_NE */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1044 "yyparse.cpp"
        break;
      case 21: /* TOK_LT */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1051 "yyparse.cpp"
        break;
      case 22: /* TOK_LE */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1058 "yyparse.cpp"
        break;
      case 23: /* TOK_GT */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1065 "yyparse.cpp"
        break;
      case 24: /* TOK_GE */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1072 "yyparse.cpp"
        break;
      case 25: /* TOK_IDENT */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1079 "yyparse.cpp"
        break;
      case 26: /* TOK_INTCON */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1086 "yyparse.cpp"
        break;
      case 27: /* TOK_CHARCON */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1093 "yyparse.cpp"
        break;
      case 28: /* TOK_STRINGCON */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1100 "yyparse.cpp"
        break;
      case 29: /* TOK_BLOCK */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1107 "yyparse.cpp"
        break;
      case 30: /* TOK_CALL */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1114 "yyparse.cpp"
        break;
      case 31: /* TOK_IFELSE */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1121 "yyparse.cpp"
        break;
      case 32: /* TOK_INITDECL */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1128 "yyparse.cpp"
        break;
      case 33: /* TOK_POS */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1135 "yyparse.cpp"
        break;
      case 34: /* TOK_NEG */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1142 "yyparse.cpp"
        break;
      case 35: /* TOK_NEWARRAY */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1149 "yyparse.cpp"
        break;
      case 36: /* TOK_TYPEID */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1156 "yyparse.cpp"
        break;
      case 37: /* TOK_FIELD */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1163 "yyparse.cpp"
        break;
      case 38: /* TOK_ORD */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1170 "yyparse.cpp"
        break;
      case 39: /* TOK_CHR */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1177 "yyparse.cpp"
        break;
      case 40: /* TOK_ROOT */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1184 "yyparse.cpp"
        break;
      case 41: /* '=' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1191 "yyparse.cpp"
        break;
      case 42: /* '+' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1198 "yyparse.cpp"
        break;
      case 43: /* '-' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1205 "yyparse.cpp"
        break;
      case 44: /* '*' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1212 "yyparse.cpp"
        break;
      case 45: /* '/' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1219 "yyparse.cpp"
        break;
      case 46: /* '%' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1226 "yyparse.cpp"
        break;
      case 47: /* '!' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1233 "yyparse.cpp"
        break;
      case 48: /* NEG */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1240 "yyparse.cpp"
        break;
      case 49: /* POS */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1247 "yyparse.cpp"
        break;
      case 50: /* '{' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1254 "yyparse.cpp"
        break;
      case 51: /* '}' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1261 "yyparse.cpp"
        break;
      case 52: /* ';' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1268 "yyparse.cpp"
        break;
      case 53: /* '(' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1275 "yyparse.cpp"
        break;
      case 54: /* ')' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1282 "yyparse.cpp"
        break;
      case 55: /* ',' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1289 "yyparse.cpp"
        break;
      case 56: /* '[' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1296 "yyparse.cpp"
        break;
      case 57: /* ']' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1303 "yyparse.cpp"
        break;
      case 58: /* '.' */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1310 "yyparse.cpp"
        break;
      case 60: /* start */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1317 "yyparse.cpp"
        break;
      case 61: /* program */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1324 "yyparse.cpp"
        break;
      case 62: /* structdef */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1331 "yyparse.cpp"
        break;
      case 63: /* fielddecl */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1338 "yyparse.cpp"
        break;
      case 64: /* function */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1345 "yyparse.cpp"
        break;
      case 65: /* params */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1352 "yyparse.cpp"
        break;
      case 66: /* identdecl */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1359 "yyparse.cpp"
        break;
      case 67: /* basetype */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1366 "yyparse.cpp"
        break;
      case 68: /* block */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1373 "yyparse.cpp"
        break;
      case 69: /* blockrec */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1380 "yyparse.cpp"
        break;
      case 70: /* statement */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1387 "yyparse.cpp"
        break;
      case 71: /* vardecl */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1394 "yyparse.cpp"
        break;
      case 72: /* while */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1401 "yyparse.cpp"
        break;
      case 73: /* ifelse */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1408 "yyparse.cpp"
        break;
      case 74: /* return */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1415 "yyparse.cpp"
        break;
      case 75: /* expr */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1422 "yyparse.cpp"
        break;
      case 76: /* allocator */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1429 "yyparse.cpp"
        break;
      case 77: /* call */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1436 "yyparse.cpp"
        break;
      case 78: /* variable */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1443 "yyparse.cpp"
        break;
      case 79: /* constant */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1450 "yyparse.cpp"
        break;
      case 80: /* UNOP */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1457 "yyparse.cpp"
        break;
      case 81: /* BINOP */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1464 "yyparse.cpp"
        break;
      case 82: /* token */
/* Line 823 of yacc.c  */
#line 26 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1471 "yyparse.cpp"
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
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1872 "yyparse.cpp"
        break;
      case 4: /* FUNCTION */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1879 "yyparse.cpp"
        break;
      case 5: /* DECL */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1886 "yyparse.cpp"
        break;
      case 6: /* END_OF_FILE */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1893 "yyparse.cpp"
        break;
      case 7: /* TOK_VOID */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1900 "yyparse.cpp"
        break;
      case 8: /* TOK_CHAR */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1907 "yyparse.cpp"
        break;
      case 9: /* TOK_INT */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1914 "yyparse.cpp"
        break;
      case 10: /* TOK_STRING */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1921 "yyparse.cpp"
        break;
      case 11: /* TOK_IF */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1928 "yyparse.cpp"
        break;
      case 12: /* TOK_ELSE */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1935 "yyparse.cpp"
        break;
      case 13: /* TOK_WHILE */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1942 "yyparse.cpp"
        break;
      case 14: /* TOK_RETURN */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1949 "yyparse.cpp"
        break;
      case 15: /* TOK_STRUCT */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1956 "yyparse.cpp"
        break;
      case 16: /* TOK_NULL */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1963 "yyparse.cpp"
        break;
      case 17: /* TOK_NEW */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1970 "yyparse.cpp"
        break;
      case 18: /* TOK_ARRAY */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1977 "yyparse.cpp"
        break;
      case 19: /* TOK_EQ */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1984 "yyparse.cpp"
        break;
      case 20: /* TOK_NE */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1991 "yyparse.cpp"
        break;
      case 21: /* TOK_LT */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1998 "yyparse.cpp"
        break;
      case 22: /* TOK_LE */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2005 "yyparse.cpp"
        break;
      case 23: /* TOK_GT */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2012 "yyparse.cpp"
        break;
      case 24: /* TOK_GE */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2019 "yyparse.cpp"
        break;
      case 25: /* TOK_IDENT */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2026 "yyparse.cpp"
        break;
      case 26: /* TOK_INTCON */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2033 "yyparse.cpp"
        break;
      case 27: /* TOK_CHARCON */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2040 "yyparse.cpp"
        break;
      case 28: /* TOK_STRINGCON */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2047 "yyparse.cpp"
        break;
      case 29: /* TOK_BLOCK */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2054 "yyparse.cpp"
        break;
      case 30: /* TOK_CALL */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2061 "yyparse.cpp"
        break;
      case 31: /* TOK_IFELSE */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2068 "yyparse.cpp"
        break;
      case 32: /* TOK_INITDECL */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2075 "yyparse.cpp"
        break;
      case 33: /* TOK_POS */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2082 "yyparse.cpp"
        break;
      case 34: /* TOK_NEG */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2089 "yyparse.cpp"
        break;
      case 35: /* TOK_NEWARRAY */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2096 "yyparse.cpp"
        break;
      case 36: /* TOK_TYPEID */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2103 "yyparse.cpp"
        break;
      case 37: /* TOK_FIELD */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2110 "yyparse.cpp"
        break;
      case 38: /* TOK_ORD */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2117 "yyparse.cpp"
        break;
      case 39: /* TOK_CHR */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2124 "yyparse.cpp"
        break;
      case 40: /* TOK_ROOT */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2131 "yyparse.cpp"
        break;
      case 41: /* '=' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2138 "yyparse.cpp"
        break;
      case 42: /* '+' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2145 "yyparse.cpp"
        break;
      case 43: /* '-' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2152 "yyparse.cpp"
        break;
      case 44: /* '*' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2159 "yyparse.cpp"
        break;
      case 45: /* '/' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2166 "yyparse.cpp"
        break;
      case 46: /* '%' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2173 "yyparse.cpp"
        break;
      case 47: /* '!' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2180 "yyparse.cpp"
        break;
      case 48: /* NEG */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2187 "yyparse.cpp"
        break;
      case 49: /* POS */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2194 "yyparse.cpp"
        break;
      case 50: /* '{' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2201 "yyparse.cpp"
        break;
      case 51: /* '}' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2208 "yyparse.cpp"
        break;
      case 52: /* ';' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2215 "yyparse.cpp"
        break;
      case 53: /* '(' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2222 "yyparse.cpp"
        break;
      case 54: /* ')' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2229 "yyparse.cpp"
        break;
      case 55: /* ',' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2236 "yyparse.cpp"
        break;
      case 56: /* '[' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2243 "yyparse.cpp"
        break;
      case 57: /* ']' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2250 "yyparse.cpp"
        break;
      case 58: /* '.' */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2257 "yyparse.cpp"
        break;
      case 60: /* start */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2264 "yyparse.cpp"
        break;
      case 61: /* program */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2271 "yyparse.cpp"
        break;
      case 62: /* structdef */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2278 "yyparse.cpp"
        break;
      case 63: /* fielddecl */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2285 "yyparse.cpp"
        break;
      case 64: /* function */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2292 "yyparse.cpp"
        break;
      case 65: /* params */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2299 "yyparse.cpp"
        break;
      case 66: /* identdecl */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2306 "yyparse.cpp"
        break;
      case 67: /* basetype */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2313 "yyparse.cpp"
        break;
      case 68: /* block */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2320 "yyparse.cpp"
        break;
      case 69: /* blockrec */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2327 "yyparse.cpp"
        break;
      case 70: /* statement */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2334 "yyparse.cpp"
        break;
      case 71: /* vardecl */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2341 "yyparse.cpp"
        break;
      case 72: /* while */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2348 "yyparse.cpp"
        break;
      case 73: /* ifelse */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2355 "yyparse.cpp"
        break;
      case 74: /* return */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2362 "yyparse.cpp"
        break;
      case 75: /* expr */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2369 "yyparse.cpp"
        break;
      case 76: /* allocator */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2376 "yyparse.cpp"
        break;
      case 77: /* call */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2383 "yyparse.cpp"
        break;
      case 78: /* variable */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2390 "yyparse.cpp"
        break;
      case 79: /* constant */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2397 "yyparse.cpp"
        break;
      case 80: /* UNOP */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2404 "yyparse.cpp"
        break;
      case 81: /* BINOP */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2411 "yyparse.cpp"
        break;
      case 82: /* token */
/* Line 1398 of yacc.c  */
#line 25 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2418 "yyparse.cpp"
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
#line 46 "parser.y"
{
   yyparse_astree = new astree (TOK_ROOT, {0, 0, 0}, "<<ROOT>>");
   fprintf(stderr,"created astree\n");
}
/* Line 1575 of yacc.c  */
#line 2537 "yyparse.cpp"
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
        case 2:
/* Line 1792 of yacc.c  */
#line 55 "parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 57 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting function");}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 58 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting structdef");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 59 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting statement");}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 60 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 61 "parser.y"
    {(yyval)=yyparse_astree;}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 73 "parser.y"
    { destroy((yyvsp[(4) - (5)])); (yyval)=(yyvsp[(2) - (5)])->adopt((yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]));(yyval)=(yyval)->adopt((yyvsp[(5) - (5)]));}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 84 "parser.y"
    { destroy((yyvsp[(3) - (3)])); (yyval)=(yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)])); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 87 "parser.y"
    { (yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 88 "parser.y"
    { (yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    {destroy((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));(yyval)=(yyvsp[(1) - (5)])->adopt((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 95 "parser.y"
    {}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 97 "parser.y"
    { destroy ((yyvsp[(2) - (2)])); (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 98 "parser.y"
    { destroy ((yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)])->adopt ((yyvsp[(2) - (3)])); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 100 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 101 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt ((yyvsp[(2) - (2)])); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 102 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 103 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 104 "parser.y"
    { destroy ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 105 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 106 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 109 "parser.y"
    {destroy((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));(yyval)=(yyvsp[(1) - (5)])->adopt((yyvsp[(4) - (5)]));}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 110 "parser.y"
    {destroy((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));(yyval)=(yyvsp[(1) - (5)])->adopt((yyvsp[(4) - (5)]));}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 115 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 117 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(3) - (3)])); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 119 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 120 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 121 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 122 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;


/* Line 1792 of yacc.c  */
#line 2892 "yyparse.cpp"
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
#line 137 "parser.y"

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

