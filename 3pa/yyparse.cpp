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

#include <string>
#include <vector>
using namespace std;

#include <stdio.h>

#include "auxlib.h"

#include <cassert>

#include "lyutils.h"
#include "astree.h"


/* Line 371 of yacc.c  */
#line 84 "yyparse.cpp"

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
     PARAM = 261,
     DECLID = 262,
     BLOCK = 263,
     VARDECL = 264,
     CALL = 265,
     TOK_VOID = 266,
     TOK_CHAR = 267,
     TOK_INT = 268,
     TOK_STRING = 269,
     TOK_IF = 270,
     TOK_ELSE = 271,
     TOK_WHILE = 272,
     TOK_RETURN = 273,
     TOK_STRUCT = 274,
     TOK_NULL = 275,
     TOK_NEW = 276,
     TOK_ARRAY = 277,
     TOK_EQ = 278,
     TOK_NE = 279,
     TOK_LT = 280,
     TOK_LE = 281,
     TOK_GT = 282,
     TOK_GE = 283,
     TOK_IDENT = 284,
     TOK_INTCON = 285,
     TOK_CHARCON = 286,
     TOK_STRINGCON = 287,
     TOK_BLOCK = 288,
     TOK_CALL = 289,
     TOK_IFELSE = 290,
     TOK_INITDECL = 291,
     TOK_POS = 292,
     TOK_NEG = 293,
     TOK_NEWARRAY = 294,
     TOK_TYPEID = 295,
     TOK_FIELD = 296,
     TOK_ORD = 297,
     TOK_CHR = 298,
     TOK_ROOT = 299,
     NEG = 300,
     POS = 301
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
#line 196 "yyparse.cpp"

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
#define YYLAST   677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,     2,     2,    50,     2,     2,
      59,    60,    48,    46,    61,    47,    54,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      52,    53
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
     282,   284,   286,   288,   290,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   310
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    65,    -1,    65,    68,    -1,    65,    66,
      -1,    65,    74,    -1,    65,    86,    -1,    -1,    19,    29,
      56,    57,    -1,    19,    29,    56,    67,    58,    57,    -1,
      19,    29,    56,    67,    58,    67,    57,    -1,    71,    29,
      -1,    71,    22,    29,    -1,    70,    59,    60,    72,    -1,
      70,    59,    69,    60,    72,    -1,    70,    -1,    69,    61,
      70,    -1,    71,    29,    -1,    71,    22,    29,    -1,    11,
      -1,    12,    -1,    13,    -1,    14,    -1,    29,    -1,    56,
      57,    -1,    56,    73,    57,    -1,    58,    -1,    73,    74,
      -1,    74,    -1,    72,    -1,    75,    -1,    76,    -1,    77,
      -1,    78,    -1,    79,    58,    -1,    70,    45,    79,    58,
      -1,    17,    59,    79,    60,    74,    -1,    15,    59,    79,
      60,    74,    -1,    15,    59,    79,    60,    74,    16,    74,
      -1,    18,    58,    -1,    18,    79,    58,    -1,    79,    85,
      79,    -1,    84,    79,    -1,    80,    -1,    81,    -1,    59,
      79,    60,    -1,    82,    -1,    83,    -1,    21,    29,    59,
      60,    -1,    21,    14,    59,    79,    60,    -1,    21,    71,
      55,    79,    62,    -1,    29,    59,    60,    -1,    29,    59,
      79,    60,    -1,    29,    -1,    79,    55,    79,    62,    -1,
      79,    54,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      20,    -1,    47,    -1,    46,    -1,    45,    -1,    47,    -1,
      48,    -1,    49,    -1,    24,    -1,    23,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    54,    -1,    55,    -1,
      59,    -1,    60,    -1,    55,    -1,    62,    -1,    56,    -1,
      57,    -1,    58,    -1,    61,    -1,    54,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      51,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    42,    -1,    43,    -1,
      44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    56,    57,    58,    59,    60,    63,    64,
      65,    67,    68,    71,    72,    74,    75,    77,    78,    80,
      80,    80,    80,    80,    82,    83,    84,    86,    87,    89,
      90,    91,    92,    93,    94,    97,    99,   101,   102,   104,
     105,   107,   108,   109,   110,   111,   112,   113,   115,   116,
     117,   119,   120,   122,   123,   124,   126,   127,   128,   129,
     131,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   133,   133,   133,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   138,   138,   138,   138,   138,   139,
     139,   139,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   141,   142,   142,   142
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ROOT", "FUNCTION", "DECL", "PARAM",
  "DECLID", "BLOCK", "VARDECL", "CALL", "TOK_VOID", "TOK_CHAR", "TOK_INT",
  "TOK_STRING", "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN",
  "TOK_STRUCT", "TOK_NULL", "TOK_NEW", "TOK_ARRAY", "TOK_EQ", "TOK_NE",
  "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_IDENT", "TOK_INTCON",
  "TOK_CHARCON", "TOK_STRINGCON", "TOK_BLOCK", "TOK_CALL", "TOK_IFELSE",
  "TOK_INITDECL", "TOK_POS", "TOK_NEG", "TOK_NEWARRAY", "TOK_TYPEID",
  "TOK_FIELD", "TOK_ORD", "TOK_CHR", "TOK_ROOT", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "NEG", "POS", "'.'", "'['", "'{'", "'}'",
  "';'", "'('", "')'", "','", "']'", "$accept", "start", "program",
  "structdef", "fielddecl", "function", "params", "identdecl", "basetype",
  "block", "blockrec", "statement", "vardecl", "while", "ifelse", "return",
  "expr", "allocator", "call", "variable", "constant", "UNOP", "BINOP",
  "token", YY_NULL
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
     295,   296,   297,   298,   299,    61,    43,    45,    42,    47,
      37,    33,   300,   301,    46,    91,   123,   125,    59,    40,
      41,    44,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    75,    76,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    82,    82,    82,    83,    83,    83,    83,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     2,     1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    83,
      84,    85,    86,    87,    88,    89,    82,    76,    78,    79,
      26,    74,    75,    81,    77,     4,     3,     0,     0,    29,
       5,    30,    31,    32,    33,     0,    43,    44,    46,    47,
       0,     6,     0,     0,    59,     0,    53,    56,    57,    58,
      60,    39,     0,     0,     0,    19,    20,    21,    22,    23,
       0,     0,    22,     0,     0,     0,    53,     0,    24,    26,
       0,     0,    28,     0,     0,     0,     0,    17,    67,    66,
      68,    69,    70,    71,    62,    61,    63,    64,    65,    72,
      73,    34,     0,    42,     0,     0,    40,     0,     0,     0,
       0,    51,     0,    25,    27,    45,     0,    23,     0,     0,
      15,    18,    55,     0,    41,     0,     0,     8,     0,     0,
       0,    48,     0,    52,    35,    13,     0,     0,    54,    37,
      36,     0,     0,    11,    49,    50,    14,    16,     0,     9,
       0,    12,    38,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    45,   138,    46,   129,    90,    48,    49,
      91,    92,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,   112,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -125
static const yytype_int16 yypact[] =
{
    -125,    15,   146,  -125,     6,    22,    47,    71,   -54,  -125,
     -38,    16,    20,   458,    54,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,   297,   472,   508,   522,  -125,  -125,  -125,  -125,
    -125,    88,  -125,  -125,  -125,  -125,  -125,  -125,    67,  -125,
    -125,   282,  -125,  -125,  -125,  -125,  -125,   -39,    84,  -125,
    -125,  -125,  -125,  -125,  -125,   558,  -125,  -125,  -125,  -125,
     282,  -125,   282,   282,  -125,    54,    -9,  -125,  -125,  -125,
    -125,  -125,   282,   572,   -29,  -125,  -125,  -125,     2,    13,
       4,    11,  -125,   -54,   -38,    16,     1,    67,  -125,  -125,
      45,   198,  -125,   312,   282,    -4,    62,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,    63,
     120,  -125,   282,   622,   350,   366,  -125,     0,   282,    35,
     282,  -125,   404,  -125,  -125,  -125,   608,  -125,   -32,   -22,
    -125,  -125,  -125,   235,   622,   220,   220,  -125,    43,    93,
     420,  -125,   246,  -125,  -125,  -125,   -32,   116,  -125,    87,
    -125,     5,    78,  -125,  -125,  -125,  -125,  -125,   220,  -125,
      59,  -125,  -125,  -125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -125,  -125,  -125,  -125,   -40,  -125,  -125,    -1,   -12,  -124,
    -125,    -2,  -125,  -125,  -125,  -125,    -8,  -125,  -125,  -125,
    -125,  -125,  -125,  -125
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -61
static const yytype_int16 yytable[] =
{
      50,    47,    80,    73,   145,    62,    94,    75,    76,    77,
      82,    75,    76,    77,    82,     3,    75,    76,    77,    82,
      95,    63,   156,   -23,    87,   127,    89,   117,   -19,   127,
     -23,    64,    65,    93,   127,   -19,    64,    65,   146,   147,
      66,    67,    68,    69,   -20,    66,    67,    68,    69,    74,
      81,   -20,   113,    80,   114,   115,   128,   137,    70,   120,
      81,   118,   159,    70,    93,    75,    76,    77,    78,   -21,
      72,   121,   119,   122,    71,    72,   -21,    73,    75,    76,
      77,    82,    83,    79,    84,    85,   126,    64,    65,   124,
      94,   131,   132,   -22,   130,   141,    86,    67,    68,    69,
     -22,   151,   133,   158,   134,   139,    96,   161,   -60,   -60,
     140,   160,   142,    97,    70,   152,   163,   -60,   -60,   -60,
     -60,     0,   153,    87,    88,    89,    72,    75,    76,    77,
      82,     0,     0,   149,   150,   -60,     0,     0,     0,   139,
      64,     0,     0,     0,     0,   127,   157,   -60,     0,    66,
      67,    68,    69,     0,     0,     0,   162,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    72,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,     0,     0,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    75,
      76,    77,    82,    83,     0,    84,    85,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,    86,    67,    68,
      69,    75,    76,    77,    82,    83,     0,    84,    85,     0,
      64,    65,     0,     0,     0,    70,     0,     0,     0,    86,
      67,    68,    69,     0,    87,   123,    89,    72,    98,    99,
     100,   101,   102,   103,     0,     0,     0,    70,     0,    98,
      99,   100,   101,   102,   103,     0,    87,     0,    89,    72,
     104,   105,   106,   107,   108,     0,     0,     0,     0,   109,
     110,   104,   105,   106,   107,   108,     0,   148,     0,     0,
     109,   110,    64,    65,     0,     0,     0,     0,   155,     0,
       0,    66,    67,    68,    69,     0,     0,     0,     0,   -23,
     -53,   -53,   -53,   -53,   -53,   -53,   -23,     0,     0,    70,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,    72,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,
       0,   -53,   -53,     0,     0,   -53,    81,   104,   105,   106,
     107,   108,     0,     0,     0,     0,   109,   110,     0,     0,
       0,     0,   125,    98,    99,   100,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,   109,   110,     0,     0,     0,     0,
     135,   104,   105,   106,   107,   108,     0,     0,     0,     0,
     109,   110,     0,     0,     0,     0,   136,    98,    99,   100,
     101,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,     0,     0,     0,   109,   110,
       0,     0,     0,     0,   143,   104,   105,   106,   107,   108,
       0,     0,     0,     0,   109,   110,     0,     0,     0,     0,
     154,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,   -59,   -59,     0,     0,   -59,   -56,   -56,   -56,
     -56,   -56,     0,     0,     0,     0,   -56,   -56,     0,     0,
     -56,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,     0,   -57,   -57,     0,     0,   -57,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,   -58,   -58,     0,     0,
     -58,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,     0,     0,   104,   105,   106,   107,   108,     0,     0,
       0,     0,   109,   110,     0,     0,   111,   104,   105,   106,
     107,   108,     0,     0,     0,     0,   109,   110,     0,     0,
     116,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,     0,     0,   104,   105,   106,   107,   108,     0,     0,
       0,     0,   109,   110,     0,     0,   144,   104,   105,   106,
     107,   108,     0,     0,     0,     0,   109,   110
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     2,    14,    11,   128,    59,    45,    11,    12,    13,
      14,    11,    12,    13,    14,     0,    11,    12,    13,    14,
      59,    59,   146,    22,    56,    29,    58,    56,    22,    29,
      29,    20,    21,    41,    29,    29,    20,    21,    60,    61,
      29,    30,    31,    32,    22,    29,    30,    31,    32,    29,
      59,    29,    60,    65,    62,    63,    60,    57,    47,    55,
      59,    59,    57,    47,    72,    11,    12,    13,    14,    22,
      59,    60,    59,    81,    58,    59,    29,    85,    11,    12,
      13,    14,    15,    29,    17,    18,    94,    20,    21,    91,
      45,    29,    29,    22,    95,    60,    29,    30,    31,    32,
      29,    58,   110,    16,   112,   117,    22,    29,    20,    21,
     118,   151,   120,    29,    47,    22,    57,    29,    30,    31,
      32,    -1,    29,    56,    57,    58,    59,    11,    12,    13,
      14,    -1,    -1,   135,   136,    47,    -1,    -1,    -1,   151,
      20,    -1,    -1,    -1,    -1,    29,   147,    59,    -1,    29,
      30,    31,    32,    -1,    -1,    -1,   158,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    11,
      12,    13,    14,    15,    -1,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    11,    12,    13,    14,    15,    -1,    17,    18,    -1,
      20,    21,    -1,    -1,    -1,    47,    -1,    -1,    -1,    29,
      30,    31,    32,    -1,    56,    57,    58,    59,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    47,    -1,    23,
      24,    25,    26,    27,    28,    -1,    56,    -1,    58,    59,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,
      55,    45,    46,    47,    48,    49,    -1,    62,    -1,    -1,
      54,    55,    20,    21,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    59,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    58,    59,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    60,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      60,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    60,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    60,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      60,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    -1,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    -1,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    -1,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    -1,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    65,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    66,    68,    70,    71,    72,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    86,    59,    59,    20,    21,    29,    30,    31,    32,
      47,    58,    59,    79,    29,    11,    12,    13,    14,    29,
      71,    59,    14,    15,    17,    18,    29,    56,    57,    58,
      70,    73,    74,    79,    45,    59,    22,    29,    23,    24,
      25,    26,    27,    28,    45,    46,    47,    48,    49,    54,
      55,    58,    85,    79,    79,    79,    58,    56,    59,    59,
      55,    60,    79,    57,    74,    60,    79,    29,    60,    69,
      70,    29,    29,    79,    79,    60,    60,    57,    67,    71,
      79,    60,    79,    60,    58,    72,    60,    61,    62,    74,
      74,    58,    22,    29,    60,    62,    72,    70,    16,    57,
      67,    29,    74,    57
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
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 978 "yyparse.cpp"
        break;
      case 4: /* FUNCTION */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 985 "yyparse.cpp"
        break;
      case 5: /* DECL */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 992 "yyparse.cpp"
        break;
      case 6: /* PARAM */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 999 "yyparse.cpp"
        break;
      case 7: /* DECLID */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1006 "yyparse.cpp"
        break;
      case 8: /* BLOCK */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1013 "yyparse.cpp"
        break;
      case 9: /* VARDECL */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1020 "yyparse.cpp"
        break;
      case 10: /* CALL */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1027 "yyparse.cpp"
        break;
      case 11: /* TOK_VOID */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1034 "yyparse.cpp"
        break;
      case 12: /* TOK_CHAR */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1041 "yyparse.cpp"
        break;
      case 13: /* TOK_INT */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1048 "yyparse.cpp"
        break;
      case 14: /* TOK_STRING */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1055 "yyparse.cpp"
        break;
      case 15: /* TOK_IF */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1062 "yyparse.cpp"
        break;
      case 16: /* TOK_ELSE */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1069 "yyparse.cpp"
        break;
      case 17: /* TOK_WHILE */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1076 "yyparse.cpp"
        break;
      case 18: /* TOK_RETURN */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1083 "yyparse.cpp"
        break;
      case 19: /* TOK_STRUCT */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1090 "yyparse.cpp"
        break;
      case 20: /* TOK_NULL */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1097 "yyparse.cpp"
        break;
      case 21: /* TOK_NEW */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1104 "yyparse.cpp"
        break;
      case 22: /* TOK_ARRAY */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1111 "yyparse.cpp"
        break;
      case 23: /* TOK_EQ */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1118 "yyparse.cpp"
        break;
      case 24: /* TOK_NE */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1125 "yyparse.cpp"
        break;
      case 25: /* TOK_LT */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1132 "yyparse.cpp"
        break;
      case 26: /* TOK_LE */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1139 "yyparse.cpp"
        break;
      case 27: /* TOK_GT */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1146 "yyparse.cpp"
        break;
      case 28: /* TOK_GE */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1153 "yyparse.cpp"
        break;
      case 29: /* TOK_IDENT */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1160 "yyparse.cpp"
        break;
      case 30: /* TOK_INTCON */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1167 "yyparse.cpp"
        break;
      case 31: /* TOK_CHARCON */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1174 "yyparse.cpp"
        break;
      case 32: /* TOK_STRINGCON */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1181 "yyparse.cpp"
        break;
      case 33: /* TOK_BLOCK */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1188 "yyparse.cpp"
        break;
      case 34: /* TOK_CALL */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1195 "yyparse.cpp"
        break;
      case 35: /* TOK_IFELSE */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1202 "yyparse.cpp"
        break;
      case 36: /* TOK_INITDECL */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1209 "yyparse.cpp"
        break;
      case 37: /* TOK_POS */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1216 "yyparse.cpp"
        break;
      case 38: /* TOK_NEG */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1223 "yyparse.cpp"
        break;
      case 39: /* TOK_NEWARRAY */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1230 "yyparse.cpp"
        break;
      case 40: /* TOK_TYPEID */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1237 "yyparse.cpp"
        break;
      case 41: /* TOK_FIELD */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1244 "yyparse.cpp"
        break;
      case 42: /* TOK_ORD */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1251 "yyparse.cpp"
        break;
      case 43: /* TOK_CHR */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1258 "yyparse.cpp"
        break;
      case 44: /* TOK_ROOT */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1265 "yyparse.cpp"
        break;
      case 45: /* '=' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1272 "yyparse.cpp"
        break;
      case 46: /* '+' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1279 "yyparse.cpp"
        break;
      case 47: /* '-' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1286 "yyparse.cpp"
        break;
      case 48: /* '*' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1293 "yyparse.cpp"
        break;
      case 49: /* '/' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1300 "yyparse.cpp"
        break;
      case 50: /* '%' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1307 "yyparse.cpp"
        break;
      case 51: /* '!' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1314 "yyparse.cpp"
        break;
      case 52: /* NEG */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1321 "yyparse.cpp"
        break;
      case 53: /* POS */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1328 "yyparse.cpp"
        break;
      case 54: /* '.' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1335 "yyparse.cpp"
        break;
      case 55: /* '[' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1342 "yyparse.cpp"
        break;
      case 56: /* '{' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1349 "yyparse.cpp"
        break;
      case 57: /* '}' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1356 "yyparse.cpp"
        break;
      case 58: /* ';' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1363 "yyparse.cpp"
        break;
      case 59: /* '(' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1370 "yyparse.cpp"
        break;
      case 60: /* ')' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1377 "yyparse.cpp"
        break;
      case 61: /* ',' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1384 "yyparse.cpp"
        break;
      case 62: /* ']' */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1391 "yyparse.cpp"
        break;
      case 64: /* start */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1398 "yyparse.cpp"
        break;
      case 65: /* program */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1405 "yyparse.cpp"
        break;
      case 66: /* structdef */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1412 "yyparse.cpp"
        break;
      case 67: /* fielddecl */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1419 "yyparse.cpp"
        break;
      case 68: /* function */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1426 "yyparse.cpp"
        break;
      case 69: /* params */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1433 "yyparse.cpp"
        break;
      case 70: /* identdecl */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1440 "yyparse.cpp"
        break;
      case 71: /* basetype */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1447 "yyparse.cpp"
        break;
      case 72: /* block */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1454 "yyparse.cpp"
        break;
      case 73: /* blockrec */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1461 "yyparse.cpp"
        break;
      case 74: /* statement */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1468 "yyparse.cpp"
        break;
      case 75: /* vardecl */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1475 "yyparse.cpp"
        break;
      case 76: /* while */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1482 "yyparse.cpp"
        break;
      case 77: /* ifelse */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1489 "yyparse.cpp"
        break;
      case 78: /* return */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1496 "yyparse.cpp"
        break;
      case 79: /* expr */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1503 "yyparse.cpp"
        break;
      case 80: /* allocator */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1510 "yyparse.cpp"
        break;
      case 81: /* call */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1517 "yyparse.cpp"
        break;
      case 82: /* variable */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1524 "yyparse.cpp"
        break;
      case 83: /* constant */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1531 "yyparse.cpp"
        break;
      case 84: /* UNOP */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1538 "yyparse.cpp"
        break;
      case 85: /* BINOP */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1545 "yyparse.cpp"
        break;
      case 86: /* token */
/* Line 823 of yacc.c  */
#line 24 "parser.y"
        { astree::dump (yyoutput, (*yyvaluep)); };
/* Line 823 of yacc.c  */
#line 1552 "yyparse.cpp"
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
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1953 "yyparse.cpp"
        break;
      case 4: /* FUNCTION */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1960 "yyparse.cpp"
        break;
      case 5: /* DECL */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1967 "yyparse.cpp"
        break;
      case 6: /* PARAM */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1974 "yyparse.cpp"
        break;
      case 7: /* DECLID */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1981 "yyparse.cpp"
        break;
      case 8: /* BLOCK */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1988 "yyparse.cpp"
        break;
      case 9: /* VARDECL */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 1995 "yyparse.cpp"
        break;
      case 10: /* CALL */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2002 "yyparse.cpp"
        break;
      case 11: /* TOK_VOID */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2009 "yyparse.cpp"
        break;
      case 12: /* TOK_CHAR */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2016 "yyparse.cpp"
        break;
      case 13: /* TOK_INT */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2023 "yyparse.cpp"
        break;
      case 14: /* TOK_STRING */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2030 "yyparse.cpp"
        break;
      case 15: /* TOK_IF */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2037 "yyparse.cpp"
        break;
      case 16: /* TOK_ELSE */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2044 "yyparse.cpp"
        break;
      case 17: /* TOK_WHILE */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2051 "yyparse.cpp"
        break;
      case 18: /* TOK_RETURN */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2058 "yyparse.cpp"
        break;
      case 19: /* TOK_STRUCT */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2065 "yyparse.cpp"
        break;
      case 20: /* TOK_NULL */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2072 "yyparse.cpp"
        break;
      case 21: /* TOK_NEW */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2079 "yyparse.cpp"
        break;
      case 22: /* TOK_ARRAY */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2086 "yyparse.cpp"
        break;
      case 23: /* TOK_EQ */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2093 "yyparse.cpp"
        break;
      case 24: /* TOK_NE */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2100 "yyparse.cpp"
        break;
      case 25: /* TOK_LT */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2107 "yyparse.cpp"
        break;
      case 26: /* TOK_LE */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2114 "yyparse.cpp"
        break;
      case 27: /* TOK_GT */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2121 "yyparse.cpp"
        break;
      case 28: /* TOK_GE */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2128 "yyparse.cpp"
        break;
      case 29: /* TOK_IDENT */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2135 "yyparse.cpp"
        break;
      case 30: /* TOK_INTCON */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2142 "yyparse.cpp"
        break;
      case 31: /* TOK_CHARCON */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2149 "yyparse.cpp"
        break;
      case 32: /* TOK_STRINGCON */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2156 "yyparse.cpp"
        break;
      case 33: /* TOK_BLOCK */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2163 "yyparse.cpp"
        break;
      case 34: /* TOK_CALL */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2170 "yyparse.cpp"
        break;
      case 35: /* TOK_IFELSE */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2177 "yyparse.cpp"
        break;
      case 36: /* TOK_INITDECL */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2184 "yyparse.cpp"
        break;
      case 37: /* TOK_POS */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2191 "yyparse.cpp"
        break;
      case 38: /* TOK_NEG */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2198 "yyparse.cpp"
        break;
      case 39: /* TOK_NEWARRAY */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2205 "yyparse.cpp"
        break;
      case 40: /* TOK_TYPEID */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2212 "yyparse.cpp"
        break;
      case 41: /* TOK_FIELD */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2219 "yyparse.cpp"
        break;
      case 42: /* TOK_ORD */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2226 "yyparse.cpp"
        break;
      case 43: /* TOK_CHR */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2233 "yyparse.cpp"
        break;
      case 44: /* TOK_ROOT */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2240 "yyparse.cpp"
        break;
      case 45: /* '=' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2247 "yyparse.cpp"
        break;
      case 46: /* '+' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2254 "yyparse.cpp"
        break;
      case 47: /* '-' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2261 "yyparse.cpp"
        break;
      case 48: /* '*' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2268 "yyparse.cpp"
        break;
      case 49: /* '/' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2275 "yyparse.cpp"
        break;
      case 50: /* '%' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2282 "yyparse.cpp"
        break;
      case 51: /* '!' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2289 "yyparse.cpp"
        break;
      case 52: /* NEG */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2296 "yyparse.cpp"
        break;
      case 53: /* POS */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2303 "yyparse.cpp"
        break;
      case 54: /* '.' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2310 "yyparse.cpp"
        break;
      case 55: /* '[' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2317 "yyparse.cpp"
        break;
      case 56: /* '{' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2324 "yyparse.cpp"
        break;
      case 57: /* '}' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2331 "yyparse.cpp"
        break;
      case 58: /* ';' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2338 "yyparse.cpp"
        break;
      case 59: /* '(' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2345 "yyparse.cpp"
        break;
      case 60: /* ')' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2352 "yyparse.cpp"
        break;
      case 61: /* ',' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2359 "yyparse.cpp"
        break;
      case 62: /* ']' */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2366 "yyparse.cpp"
        break;
      case 64: /* start */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2373 "yyparse.cpp"
        break;
      case 65: /* program */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2380 "yyparse.cpp"
        break;
      case 66: /* structdef */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2387 "yyparse.cpp"
        break;
      case 67: /* fielddecl */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2394 "yyparse.cpp"
        break;
      case 68: /* function */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2401 "yyparse.cpp"
        break;
      case 69: /* params */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2408 "yyparse.cpp"
        break;
      case 70: /* identdecl */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2415 "yyparse.cpp"
        break;
      case 71: /* basetype */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2422 "yyparse.cpp"
        break;
      case 72: /* block */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2429 "yyparse.cpp"
        break;
      case 73: /* blockrec */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2436 "yyparse.cpp"
        break;
      case 74: /* statement */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2443 "yyparse.cpp"
        break;
      case 75: /* vardecl */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2450 "yyparse.cpp"
        break;
      case 76: /* while */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2457 "yyparse.cpp"
        break;
      case 77: /* ifelse */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2464 "yyparse.cpp"
        break;
      case 78: /* return */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2471 "yyparse.cpp"
        break;
      case 79: /* expr */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2478 "yyparse.cpp"
        break;
      case 80: /* allocator */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2485 "yyparse.cpp"
        break;
      case 81: /* call */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2492 "yyparse.cpp"
        break;
      case 82: /* variable */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2499 "yyparse.cpp"
        break;
      case 83: /* constant */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2506 "yyparse.cpp"
        break;
      case 84: /* UNOP */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2513 "yyparse.cpp"
        break;
      case 85: /* BINOP */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2520 "yyparse.cpp"
        break;
      case 86: /* token */
/* Line 1398 of yacc.c  */
#line 23 "parser.y"
        { destroy ((*yyvaluep)); };
/* Line 1398 of yacc.c  */
#line 2527 "yyparse.cpp"
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
#line 45 "parser.y"
{
   yyparse_astree = new astree (TOK_ROOT, {0, 0, 0}, "<<ROOT>>");
   fprintf(stderr,"created astree\n");
}
/* Line 1575 of yacc.c  */
#line 2646 "yyparse.cpp"
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
#line 54 "parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 56 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting function");}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 57 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting structdef");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 58 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting statement");}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 59 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"adopting");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 60 "parser.y"
    {(yyval)=yyparse_astree;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 63 "parser.y"
    {destroy((yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));(yyval)=(yyvsp[(1) - (4)])->adopt((yyvsp[(2) - (4)]));}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 64 "parser.y"
    {destroy((yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));destroy((yyvsp[(6) - (6)]));(yyval)=(yyvsp[(1) - (6)])->adopt((yyvsp[(2) - (6)]),(yyvsp[(4) - (6)]));}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 65 "parser.y"
    {destroy((yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]));destroy((yyvsp[(7) - (7)]));(yyval)=(yyvsp[(1) - (7)])->adopt((yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]));(yyval)->adopt((yyvsp[(6) - (7)]));}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 67 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 68 "parser.y"
    {(yyval)=(yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 71 "parser.y"
    {(yyval)=astree::new_subroot(FUNCTION,0,0,0,"")->adopt((yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 72 "parser.y"
    {destroy((yyvsp[(4) - (5)]));(yyvsp[(3) - (5)])=astree::new_subroot(PARAM,0,0,0,"(")->adopt((yyvsp[(3) - (5)]));(yyval)=astree::new_subroot(FUNCTION,0,0,0,"")->adopt((yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]));(yyval)=(yyval)->adopt((yyvsp[(5) - (5)]));}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 74 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 75 "parser.y"
    {(yyval)=(yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)]));}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 77 "parser.y"
    {(yyval)=(yyvsp[(1) - (2)])->adopt(astree::new_subroot(DECLID,0,0,0,"PLACEHOLDER"));}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    {(yyval)=(yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)]),astree::new_subroot(DECLID,0,0,0,"PLACEHOLDER"));}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 82 "parser.y"
    {destroy((yyvsp[(2) - (2)]));(yyval)=astree::new_subroot(BLOCK,0,0,0,"{");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 83 "parser.y"
    {(yyval)=astree::new_subroot(BLOCK,0,0,0,"{")->adopt((yyvsp[(2) - (3)])); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 86 "parser.y"
    { (yyval)=(yyval)->adopt((yyvsp[(2) - (2)]));fprintf(stderr,"In recursive block definition\n");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 87 "parser.y"
    { (yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 89 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 90 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 91 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 92 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 93 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    {destroy((yyvsp[(2) - (2)]));(yyval)=(yyvsp[(1) - (2)]);}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 97 "parser.y"
    {destroy((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));(yyval)=astree::new_subroot(VARDECL,0,0,0,"=")->adopt((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 99 "parser.y"
    {destroy((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])); (yyval)=(yyvsp[(1) - (5)])->adopt((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 101 "parser.y"
    {destroy((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));(yyval)=(yyvsp[(1) - (5)])->adopt((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 102 "parser.y"
    {}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 104 "parser.y"
    { destroy ((yyvsp[(2) - (2)])); (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 105 "parser.y"
    { destroy ((yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)])->adopt ((yyvsp[(2) - (3)])); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 107 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 108 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt ((yyvsp[(2) - (2)])); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 109 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 110 "parser.y"
    {(yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 111 "parser.y"
    { destroy ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 112 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 113 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 115 "parser.y"
    {destroy((yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));(yyval)=(yyvsp[(1) - (4)])->adopt((yyvsp[(2) - (4)]));}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 116 "parser.y"
    {destroy((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));(yyval)=(yyvsp[(1) - (5)])->adopt((yyvsp[(4) - (5)]));}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 117 "parser.y"
    {destroy((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));(yyval)=(yyvsp[(1) - (5)])->adopt((yyvsp[(4) - (5)]));}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 119 "parser.y"
    {(yyval)=astree::new_subroot(CALL,0,0,0,"(")->adopt((yyvsp[(1) - (3)]));}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 120 "parser.y"
    {(yyval)=astree::new_subroot(CALL,0,0,0,"(")->adopt((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 122 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 124 "parser.y"
    { (yyvsp[(3) - (3)])=astree::new_subroot(TOK_FIELD,0,0,0,"PLACEHOLDER");(yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 126 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 127 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 128 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 129 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;


/* Line 1792 of yacc.c  */
#line 3133 "yyparse.cpp"
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
#line 145 "parser.y"

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

