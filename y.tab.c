
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "select.y"

#include <stdio.h>
#include <stdlib.h>  
int yyerror();
int yylex();  



/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SELECT = 258,
     DISTINCT = 259,
     AS = 260,
     FUNC = 261,
     COUNT = 262,
     FROM = 263,
     WHERE = 264,
     GROUP = 265,
     HAVING = 266,
     ORDER = 267,
     BY = 268,
     LIMIT = 269,
     ASC = 270,
     DESC = 271,
     ID = 272,
     LITERAL = 273,
     OR = 274,
     AND = 275,
     XOR = 276,
     NOT = 277,
     IS = 278,
     NUL = 279,
     ANY = 280,
     ALL = 281,
     CMP = 282,
     IN = 283,
     BETWEEN = 284,
     LIKE = 285,
     REG = 286,
     LS = 287,
     RS = 288,
     DIV = 289,
     MOD = 290,
     EXISTS = 291,
     BOOL = 292,
     INT = 293,
     FLOAT = 294,
     UMINUS = 295
   };
#endif
/* Tokens.  */
#define SELECT 258
#define DISTINCT 259
#define AS 260
#define FUNC 261
#define COUNT 262
#define FROM 263
#define WHERE 264
#define GROUP 265
#define HAVING 266
#define ORDER 267
#define BY 268
#define LIMIT 269
#define ASC 270
#define DESC 271
#define ID 272
#define LITERAL 273
#define OR 274
#define AND 275
#define XOR 276
#define NOT 277
#define IS 278
#define NUL 279
#define ANY 280
#define ALL 281
#define CMP 282
#define IN 283
#define BETWEEN 284
#define LIKE 285
#define REG 286
#define LS 287
#define RS 288
#define DIV 289
#define MOD 290
#define EXISTS 291
#define BOOL 292
#define INT 293
#define FLOAT 294
#define UMINUS 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "y.tab.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  243

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,     2,    41,     2,
      48,    49,    44,    42,    47,    43,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    40,     2,    51,     2,     2,     2,
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
      35,    36,    37,    38,    39,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    12,    19,    23,    25,    30,    32,
      36,    39,    42,    46,    48,    52,    53,    55,    57,    58,
      60,    62,    65,    69,    72,    75,    76,    80,    82,    87,
      91,    95,    99,   102,   106,   110,   115,   117,   121,   126,
     130,   137,   144,   146,   149,   153,   155,   160,   165,   170,
     173,   176,   180,   182,   186,   190,   194,   198,   202,   206,
     210,   214,   218,   222,   224,   227,   230,   233,   236,   240,
     245,   247,   249,   251,   253,   255,   257,   259,   263,   267,
     271,   274,   278,   282,   287,   289,   293,   298,   302,   309,
     316,   318,   321,   325,   327,   332,   337,   342,   345,   348,
     352,   354,   358,   362,   366,   370,   374,   378,   382,   386,
     390,   394,   396,   399,   402,   405,   408,   412,   417,   422,
     428
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    50,    -1,     3,    62,     8,    65,
      56,    -1,     3,     4,    62,     8,    65,    56,    -1,     9,
      66,    57,    -1,    57,    -1,    10,    13,    58,    59,    -1,
      59,    -1,    58,    47,    58,    -1,    17,    61,    -1,    38,
      61,    -1,    11,    74,    60,    -1,    60,    -1,    12,    13,
      58,    -1,    -1,    16,    -1,    15,    -1,    -1,    63,    -1,
      44,    -1,     7,    64,    -1,    63,    47,    63,    -1,    74,
      64,    -1,     5,    17,    -1,    -1,    65,    47,    65,    -1,
      17,    -1,    48,    55,    49,    64,    -1,    66,    19,    66,
      -1,    66,    21,    66,    -1,    66,    20,    66,    -1,    22,
      66,    -1,    48,    66,    49,    -1,    67,    23,    37,    -1,
      67,    23,    22,    37,    -1,    67,    -1,    67,    23,    24,
      -1,    67,    23,    22,    24,    -1,    67,    27,    68,    -1,
      67,    27,    26,    48,    55,    49,    -1,    67,    27,    25,
      48,    55,    49,    -1,    68,    -1,    71,    69,    -1,    71,
      22,    69,    -1,    71,    -1,    28,    48,    55,    49,    -1,
      28,    48,    70,    49,    -1,    29,    71,    20,    68,    -1,
      30,    72,    -1,    31,    71,    -1,    66,    47,    70,    -1,
      66,    -1,    71,    40,    71,    -1,    71,    41,    71,    -1,
      71,    32,    71,    -1,    71,    33,    71,    -1,    71,    42,
      71,    -1,    71,    43,    71,    -1,    71,    44,    71,    -1,
      71,    34,    71,    -1,    71,    35,    71,    -1,    71,    45,
      71,    -1,    72,    -1,    42,    72,    -1,    43,    72,    -1,
      51,    72,    -1,    52,    72,    -1,    48,    55,    49,    -1,
      36,    48,    55,    49,    -1,    73,    -1,    39,    -1,    24,
      -1,    18,    -1,    37,    -1,    17,    -1,    38,    -1,    74,
      19,    74,    -1,    74,    21,    74,    -1,    74,    20,    74,
      -1,    22,    74,    -1,    48,    74,    49,    -1,    75,    23,
      37,    -1,    75,    23,    22,    37,    -1,    75,    -1,    75,
      23,    24,    -1,    75,    23,    22,    24,    -1,    75,    27,
      76,    -1,    75,    27,    26,    48,    55,    49,    -1,    75,
      27,    25,    48,    55,    49,    -1,    76,    -1,    79,    77,
      -1,    79,    22,    77,    -1,    79,    -1,    28,    48,    55,
      49,    -1,    28,    48,    78,    49,    -1,    29,    79,    20,
      76,    -1,    30,    80,    -1,    31,    79,    -1,    74,    47,
      78,    -1,    74,    -1,    79,    40,    79,    -1,    79,    41,
      79,    -1,    79,    32,    79,    -1,    79,    33,    79,    -1,
      79,    42,    79,    -1,    79,    43,    79,    -1,    79,    44,
      79,    -1,    79,    34,    79,    -1,    79,    35,    79,    -1,
      79,    45,    79,    -1,    80,    -1,    42,    80,    -1,    43,
      80,    -1,    51,    80,    -1,    52,    80,    -1,    48,    55,
      49,    -1,    36,    48,    55,    49,    -1,     6,    48,    73,
      49,    -1,     6,    48,     4,    73,    49,    -1,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    40,    41,    44,    45,    48,    49,    52,
      52,    52,    54,    55,    58,    59,    62,    63,    64,    67,
      68,    69,    72,    73,    76,    76,    78,    79,    80,    82,
      83,    84,    85,    86,    87,    88,    89,    92,    93,    94,
      95,    96,    97,   100,   101,   102,   105,   106,   107,   108,
     109,   112,   112,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   127,   128,   129,   130,   131,   132,
     133,   136,   137,   138,   139,   140,   141,   147,   148,   149,
     150,   151,   152,   153,   154,   157,   158,   159,   160,   161,
     162,   165,   166,   167,   170,   171,   172,   173,   174,   177,
     177,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   192,   193,   194,   195,   196,   197,   198,   199,
     200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SELECT", "DISTINCT", "AS", "FUNC",
  "COUNT", "FROM", "WHERE", "GROUP", "HAVING", "ORDER", "BY", "LIMIT",
  "ASC", "DESC", "ID", "LITERAL", "OR", "AND", "XOR", "NOT", "IS", "NUL",
  "ANY", "ALL", "CMP", "IN", "BETWEEN", "LIKE", "REG", "LS", "RS", "DIV",
  "MOD", "EXISTS", "BOOL", "INT", "FLOAT", "'|'", "'&'", "'+'", "'-'",
  "'*'", "'^'", "UMINUS", "','", "'('", "')'", "';'", "'~'", "'!'",
  "$accept", "start", "st1", "st2", "st3", "st4", "st5", "st6", "st7",
  "attr", "attrList", "alias", "tableList", "expr", "bool_prim", "pred",
  "pred1", "expr_lst", "bit_expr", "simple_expr", "val", "expr1",
  "bool_prim1", "pred2", "pred3", "expr1_lst", "bit_expr1", "simple_expr1", 0
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
     124,    38,    43,    45,    42,    94,   295,    44,    40,    41,
      59,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     6,     3,     1,     4,     1,     3,
       2,     2,     3,     1,     3,     0,     1,     1,     0,     1,
       1,     2,     3,     2,     2,     0,     3,     1,     4,     3,
       3,     3,     2,     3,     3,     4,     1,     3,     4,     3,
       6,     6,     1,     2,     3,     1,     4,     4,     4,     2,
       2,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     2,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     3,     3,     4,     1,     3,     4,     3,     6,     6,
       1,     2,     3,     1,     4,     4,     4,     2,     2,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     3,     4,     4,     5,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    25,    75,    73,     0,
      72,     0,    74,    76,    71,     0,     0,    20,     0,     0,
       0,     0,    19,   120,    25,    84,    90,    93,   111,     1,
       2,     0,     0,     0,    21,    80,     0,     0,   112,   113,
       0,     0,   114,   115,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,    24,     0,   116,    81,    27,     0,    15,    22,    77,
      79,    78,     0,    85,    82,     0,     0,    87,    92,     0,
       0,    97,    98,   103,   104,   108,   109,   101,   102,   105,
     106,   107,   110,    15,     0,   118,   117,     0,     0,     0,
       0,     0,     0,     3,     6,     8,    13,    86,    83,     0,
       0,     0,   100,     0,     0,     4,   119,    25,     0,     0,
       0,     0,     0,     0,     0,    15,    36,    42,    45,    63,
      70,     0,    15,     0,    26,     0,     0,    94,     0,    95,
      96,    28,    32,     0,     0,    64,    65,     0,     0,    66,
      67,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    18,    18,    15,    12,    14,    89,    88,
      99,     0,    68,    33,    29,    31,    30,     0,    37,    34,
       0,     0,    39,    44,     0,     0,    49,    50,    55,    56,
      60,    61,    53,    54,    57,    58,    59,    62,    17,    16,
      10,    11,     0,     7,    69,    38,    35,     0,     0,     0,
      52,     0,     0,     9,     0,     0,    46,     0,    47,    48,
      41,    40,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    40,   113,   114,   185,   115,   116,   220,    21,
      22,    34,    77,   230,   136,   137,   182,   231,   138,   139,
      23,    24,    25,    26,    67,   123,    27,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -164
static const yytype_int16 yypact[] =
{
      22,   172,    52,    14,   212,    31,    65,  -164,  -164,   264,
    -164,    46,  -164,  -164,  -164,   281,   281,  -164,     6,   281,
     281,    93,    70,  -164,   220,   -13,  -164,   394,  -164,  -164,
    -164,    99,    92,   101,  -164,  -164,    22,    22,  -164,  -164,
      88,   131,  -164,  -164,    42,   264,   264,   264,   264,  -164,
      71,   241,   245,    90,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,  -164,    42,    74,
      94,  -164,    98,  -164,  -164,  -164,    22,    76,  -164,    54,
    -164,   138,    -2,  -164,  -164,   113,   114,  -164,  -164,     6,
     354,  -164,   432,   157,   157,   132,   132,   460,   479,   208,
     208,   132,  -164,    76,   139,  -164,  -164,   144,   333,   129,
     264,   168,    42,  -164,  -164,  -164,  -164,  -164,  -164,    22,
      22,   146,   166,   148,   281,  -164,  -164,    65,   333,   155,
      97,    97,    29,    97,    97,   545,   -10,  -164,   418,  -164,
    -164,    -9,   225,    -9,  -164,   173,   183,  -164,   264,  -164,
    -164,  -164,  -164,    22,    22,  -164,  -164,   189,   163,  -164,
    -164,   333,   333,   333,  -164,   122,   310,   266,   169,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,  -164,    84,    84,     9,  -164,   174,  -164,  -164,
    -164,   219,  -164,  -164,    85,  -164,   215,    60,  -164,  -164,
     209,   221,  -164,  -164,    29,   370,  -164,   446,   296,   296,
     240,   240,   465,   483,   227,   227,   240,  -164,  -164,  -164,
    -164,  -164,    -9,  -164,  -164,  -164,  -164,    22,    22,   242,
     186,   255,    97,  -164,   259,   260,  -164,   333,  -164,  -164,
    -164,  -164,  -164
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,     0,   187,   175,  -139,   126,   171,   130,   317,
     277,   -23,   -62,  -101,  -164,  -163,   158,    89,   360,  -115,
      -6,    -7,  -164,   -46,   285,   194,   488,    18
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       3,    49,    35,   202,   187,    87,   103,   135,   183,     1,
      50,    41,     5,   165,    51,   155,   156,   166,   159,   160,
     110,   111,   117,     7,     8,     1,    70,   152,     9,   184,
      10,   158,     1,    38,    39,   118,    72,    42,    43,    79,
      80,    81,    11,    12,    13,    14,     7,     8,    15,    16,
     144,   128,    29,    10,    18,   206,   222,    19,    20,    75,
     194,   195,   196,   104,    30,   129,    12,    13,    14,   239,
      33,   130,   131,    91,    47,    48,   107,   132,   150,    32,
     133,   134,   122,   233,   225,   108,   109,   110,   111,   121,
      76,     7,     8,    82,    36,    83,    69,   226,    10,   218,
     219,    44,   140,   142,   151,   162,   163,    68,    84,     7,
       8,    12,    13,    14,     7,     8,    10,    45,    71,   145,
     146,    10,   140,   112,   140,   140,   140,   140,   140,    12,
      13,    14,   157,   129,    12,    13,    14,    73,    89,   130,
     131,   122,   141,   105,   197,   154,   198,   106,   133,   134,
      46,    47,    48,   191,   157,   140,   140,   140,    47,   199,
     140,   119,   120,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,     4,    66,     5,     6,
      74,   143,   161,   162,   163,    46,    47,    48,   126,     7,
       8,    59,    60,   127,     9,   147,    10,   149,   140,    63,
      64,    65,    66,   153,   229,   161,   162,   163,    11,    12,
      13,    14,   193,   148,    15,    16,    17,   204,     5,     6,
      18,   222,   188,    19,    20,    33,   140,   234,   235,     7,
       8,   140,   189,   237,     9,   162,    10,   111,   192,    46,
      47,    48,    59,    60,    46,    47,    48,     5,    11,    12,
      13,    14,    65,    66,    15,    16,    17,   227,     7,     8,
      18,   174,   175,    19,    20,    10,    85,    86,   224,   228,
       5,   180,   181,    53,    54,    55,    56,    11,    12,    13,
      14,     7,     8,    15,    16,   181,     9,     5,    10,    37,
     125,   236,    19,    20,   168,   169,   170,   171,     7,     8,
      11,    12,    13,    14,   238,    10,    15,    16,   240,   241,
     164,   223,    18,   186,   221,    19,    20,    11,    12,    13,
      14,    31,    78,    15,    16,   203,   242,     7,     8,    37,
     174,   175,    19,    20,    10,   200,   201,    88,   178,   179,
     180,   181,   190,     0,     0,     0,   129,    12,    13,    14,
       7,     8,   130,   131,     0,   128,     0,    10,   154,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,   129,
      12,    13,    14,     0,   124,   130,   131,     0,     0,     0,
       0,   132,     0,     0,   133,   134,    57,    58,    59,    60,
     232,     0,     0,     0,    61,    62,    63,    64,    65,    66,
       0,     0,   172,   173,   174,   175,     0,     0,     0,     0,
     176,   177,   178,   179,   180,   181,    52,     0,     0,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
     167,     0,     0,     0,     0,     0,   168,   169,   170,   171,
     172,   173,   174,   175,     0,     0,     0,     0,   176,   177,
     178,   179,   180,   181,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,   172,   173,
     174,   175,     0,     0,     0,     0,   176,   177,   178,   179,
     180,   181,    57,    58,    59,    60,     0,   172,   173,   174,
     175,    62,    63,    64,    65,    66,   177,   178,   179,   180,
     181,    57,    58,    59,    60,   172,   173,   174,   175,     0,
       0,    63,    64,    65,    66,   178,   179,   180,   181,   205,
       0,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,    90,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   109,   110,   111,     0,     0,
       0,     0,     0,     0,   161,   162,   163
};

static const yytype_int16 yycheck[] =
{
       0,    24,     9,   166,   143,    51,    68,   108,    17,     3,
      23,    18,     6,    23,    27,   130,   131,    27,   133,   134,
      11,    12,    24,    17,    18,     3,    32,   128,    22,    38,
      24,   132,     3,    15,    16,    37,    36,    19,    20,    46,
      47,    48,    36,    37,    38,    39,    17,    18,    42,    43,
     112,    22,     0,    24,    48,   170,    47,    51,    52,    17,
     161,   162,   163,    69,    50,    36,    37,    38,    39,   232,
       5,    42,    43,    55,    20,    21,    76,    48,   124,    48,
      51,    52,    89,   222,    24,     9,    10,    11,    12,    89,
      48,    17,    18,    22,    48,    24,     4,    37,    24,    15,
      16,     8,   108,   110,   127,    20,    21,     8,    37,    17,
      18,    37,    38,    39,    17,    18,    24,    47,    17,   119,
     120,    24,   128,    47,   130,   131,   132,   133,   134,    37,
      38,    39,   132,    36,    37,    38,    39,    49,    48,    42,
      43,   148,    13,    49,    22,    48,    24,    49,    51,    52,
      19,    20,    21,   153,   154,   161,   162,   163,    20,    37,
     166,    48,    48,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,     4,    45,     6,     7,
      49,    13,    19,    20,    21,    19,    20,    21,    49,    17,
      18,    34,    35,    49,    22,    49,    24,    49,   204,    42,
      43,    44,    45,    48,   204,    19,    20,    21,    36,    37,
      38,    39,    49,    47,    42,    43,    44,    48,     6,     7,
      48,    47,    49,    51,    52,     5,   232,   227,   228,    17,
      18,   237,    49,    47,    22,    20,    24,    12,    49,    19,
      20,    21,    34,    35,    19,    20,    21,     6,    36,    37,
      38,    39,    44,    45,    42,    43,    44,    48,    17,    18,
      48,    34,    35,    51,    52,    24,    25,    26,    49,    48,
       6,    44,    45,    28,    29,    30,    31,    36,    37,    38,
      39,    17,    18,    42,    43,    45,    22,     6,    24,    48,
     103,    49,    51,    52,    28,    29,    30,    31,    17,    18,
      36,    37,    38,    39,    49,    24,    42,    43,    49,    49,
     135,   185,    48,   142,   184,    51,    52,    36,    37,    38,
      39,     4,    45,    42,    43,   167,   237,    17,    18,    48,
      34,    35,    51,    52,    24,    25,    26,    52,    42,    43,
      44,    45,   148,    -1,    -1,    -1,    36,    37,    38,    39,
      17,    18,    42,    43,    -1,    22,    -1,    24,    48,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    -1,    20,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    32,    33,    34,    35,
      20,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      22,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    32,    33,    34,    35,    -1,    32,    33,    34,
      35,    41,    42,    43,    44,    45,    41,    42,    43,    44,
      45,    32,    33,    34,    35,    32,    33,    34,    35,    -1,
      -1,    42,    43,    44,    45,    42,    43,    44,    45,   169,
      -1,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    55,     4,     6,     7,    17,    18,    22,
      24,    36,    37,    38,    39,    42,    43,    44,    48,    51,
      52,    62,    63,    73,    74,    75,    76,    79,    80,     0,
      50,    62,    48,     5,    64,    74,    48,    48,    80,    80,
      55,    74,    80,    80,     8,    47,    19,    20,    21,    64,
      23,    27,    22,    28,    29,    30,    31,    32,    33,    34,
      35,    40,    41,    42,    43,    44,    45,    77,     8,     4,
      73,    17,    55,    49,    49,    17,    48,    65,    63,    74,
      74,    74,    22,    24,    37,    25,    26,    76,    77,    48,
      79,    80,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    65,    73,    49,    49,    55,     9,    10,
      11,    12,    47,    56,    57,    59,    60,    24,    37,    48,
      48,    55,    74,    78,    20,    56,    49,    49,    22,    36,
      42,    43,    48,    51,    52,    66,    67,    68,    71,    72,
      73,    13,    74,    13,    65,    55,    55,    49,    47,    49,
      76,    64,    66,    48,    48,    72,    72,    55,    66,    72,
      72,    19,    20,    21,    57,    23,    27,    22,    28,    29,
      30,    31,    32,    33,    34,    35,    40,    41,    42,    43,
      44,    45,    69,    17,    38,    58,    60,    58,    49,    49,
      78,    55,    49,    49,    66,    66,    66,    22,    24,    37,
      25,    26,    68,    69,    48,    71,    72,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    15,    16,
      61,    61,    47,    59,    49,    24,    37,    48,    48,    55,
      66,    70,    20,    58,    55,    55,    49,    47,    49,    68,
      49,    49,    70
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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

/* Line 1455 of yacc.c  */
#line 34 "select.y"
    {  
                                    printf("INPUT ACCEPTED...\n");
                                    exit(1);
                                }
    break;



/* Line 1455 of yacc.c  */
#line 1686 "y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 203 "select.y"


int yyerror()
{
    printf("INVALID STATEMENT !\n");
    return 0;
}

int main()
{
    printf("ENTER THE QUERY :\n");
    yyparse();
    return 1;
}        


