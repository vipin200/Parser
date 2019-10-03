
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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   607

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

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
       0,     0,     3,     6,    12,    19,    26,    30,    32,    37,
      39,    43,    46,    50,    52,    57,    59,    61,    63,    64,
      68,    71,    74,    79,    80,    82,    84,    88,    91,    94,
      95,    99,   101,   106,   110,   114,   118,   121,   125,   129,
     134,   136,   140,   145,   149,   156,   163,   165,   168,   172,
     174,   179,   184,   189,   192,   195,   199,   201,   205,   209,
     213,   217,   221,   225,   229,   233,   237,   241,   243,   246,
     249,   252,   255,   259,   264,   266,   268,   270,   272,   274,
     276,   278,   282,   286,   290,   293,   297,   301,   306,   308,
     312,   317,   321,   328,   335,   337,   340,   344,   346,   351,
     356,   361,   364,   367,   371,   373,   377,   381,   385,   389,
     393,   397,   401,   405,   409,   413,   415,   418,   421,   424,
     427,   431,   436,   441,   447,   449
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    50,    -1,     3,    64,     8,    67,
      56,    -1,     3,     4,    64,     8,    67,    56,    -1,     3,
      26,    64,     8,    67,    56,    -1,     9,    68,    57,    -1,
      57,    -1,    10,    13,    58,    59,    -1,    59,    -1,    58,
      47,    58,    -1,    68,    61,    -1,    11,    76,    60,    -1,
      60,    -1,    12,    13,    62,    63,    -1,    63,    -1,    16,
      -1,    15,    -1,    -1,    62,    47,    62,    -1,    76,    61,
      -1,    14,    38,    -1,    14,    38,    47,    38,    -1,    -1,
      65,    -1,    44,    -1,    65,    47,    65,    -1,    76,    66,
      -1,     5,    17,    -1,    -1,    67,    47,    67,    -1,    17,
      -1,    48,    55,    49,    66,    -1,    68,    19,    68,    -1,
      68,    21,    68,    -1,    68,    20,    68,    -1,    22,    68,
      -1,    48,    68,    49,    -1,    69,    23,    37,    -1,    69,
      23,    22,    37,    -1,    69,    -1,    69,    23,    24,    -1,
      69,    23,    22,    24,    -1,    69,    27,    70,    -1,    69,
      27,    26,    48,    55,    49,    -1,    69,    27,    25,    48,
      55,    49,    -1,    70,    -1,    73,    71,    -1,    73,    22,
      71,    -1,    73,    -1,    28,    48,    55,    49,    -1,    28,
      48,    72,    49,    -1,    29,    73,    20,    70,    -1,    30,
      74,    -1,    31,    73,    -1,    68,    47,    72,    -1,    68,
      -1,    73,    40,    73,    -1,    73,    41,    73,    -1,    73,
      32,    73,    -1,    73,    33,    73,    -1,    73,    42,    73,
      -1,    73,    43,    73,    -1,    73,    44,    73,    -1,    73,
      34,    73,    -1,    73,    35,    73,    -1,    73,    45,    73,
      -1,    74,    -1,    42,    74,    -1,    43,    74,    -1,    51,
      74,    -1,    52,    74,    -1,    48,    55,    49,    -1,    36,
      48,    55,    49,    -1,    75,    -1,    39,    -1,    24,    -1,
      18,    -1,    37,    -1,    17,    -1,    38,    -1,    76,    19,
      76,    -1,    76,    21,    76,    -1,    76,    20,    76,    -1,
      22,    76,    -1,    48,    76,    49,    -1,    77,    23,    37,
      -1,    77,    23,    22,    37,    -1,    77,    -1,    77,    23,
      24,    -1,    77,    23,    22,    24,    -1,    77,    27,    78,
      -1,    77,    27,    26,    48,    55,    49,    -1,    77,    27,
      25,    48,    55,    49,    -1,    78,    -1,    81,    79,    -1,
      81,    22,    79,    -1,    81,    -1,    28,    48,    55,    49,
      -1,    28,    48,    80,    49,    -1,    29,    81,    20,    78,
      -1,    30,    82,    -1,    31,    81,    -1,    76,    47,    80,
      -1,    76,    -1,    81,    40,    81,    -1,    81,    41,    81,
      -1,    81,    32,    81,    -1,    81,    33,    81,    -1,    81,
      42,    81,    -1,    81,    43,    81,    -1,    81,    44,    81,
      -1,    81,    34,    81,    -1,    81,    35,    81,    -1,    81,
      45,    81,    -1,    82,    -1,    42,    82,    -1,    43,    82,
      -1,    51,    82,    -1,    52,    82,    -1,    48,    55,    49,
      -1,    36,    48,    55,    49,    -1,     6,    48,    75,    49,
      -1,     6,    48,     4,    75,    49,    -1,     7,    -1,    75,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    40,    41,    42,    45,    46,    49,    50,
      53,    53,    55,    56,    59,    60,    63,    64,    65,    68,
      68,    70,    71,    72,    75,    76,    79,    80,    83,    83,
      85,    86,    87,    89,    90,    91,    92,    93,    94,    95,
      96,    99,   100,   101,   102,   103,   104,   107,   108,   109,
     112,   113,   114,   115,   116,   119,   119,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   134,   135,
     136,   137,   138,   139,   140,   143,   144,   145,   146,   147,
     148,   154,   155,   156,   157,   158,   159,   160,   161,   164,
     165,   166,   167,   168,   169,   172,   173,   174,   177,   178,
     179,   180,   181,   184,   184,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208
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
  "st8", "st9", "attr", "attrList", "alias", "tableList", "expr",
  "bool_prim", "pred", "pred1", "expr_lst", "bit_expr", "simple_expr",
  "val", "expr1", "bool_prim1", "pred2", "pred3", "expr1_lst", "bit_expr1",
  "simple_expr1", 0
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
       0,    53,    54,    55,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      62,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     6,     6,     3,     1,     4,     1,
       3,     2,     3,     1,     4,     1,     1,     1,     0,     3,
       2,     2,     4,     0,     1,     1,     3,     2,     2,     0,
       3,     1,     4,     3,     3,     3,     2,     3,     3,     4,
       1,     3,     4,     3,     6,     6,     1,     2,     3,     1,
       4,     4,     4,     2,     2,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     2,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     2,     3,     3,     4,     1,     3,
       4,     3,     6,     6,     1,     2,     3,     1,     4,     4,
       4,     2,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     2,
       3,     4,     4,     5,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   124,    79,    77,     0,
      76,     0,     0,    78,    80,    75,     0,     0,    25,     0,
       0,     0,     0,    24,   125,    29,    88,    94,    97,   115,
       1,     2,     0,     0,    84,     0,     0,     0,   116,   117,
       0,     0,   118,   119,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,     0,     0,     0,   120,    85,    31,     0,    23,    26,
      28,    81,    83,    82,     0,    89,    86,     0,     0,    91,
      96,     0,     0,   101,   102,   107,   108,   112,   113,   105,
     106,   109,   110,   111,   114,    23,     0,   122,    23,   121,
       0,     0,     0,     0,     0,     0,     0,     3,     7,     9,
      13,    15,    90,    87,     0,     0,     0,   104,     0,     0,
       4,   123,     5,    29,     0,     0,     0,     0,     0,     0,
       0,    23,    40,    46,    49,    67,    74,     0,    23,     0,
      21,    30,     0,     0,    98,     0,    99,   100,    32,    36,
       0,     0,    68,    69,     0,     0,    70,    71,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      23,    18,    12,    23,    18,     0,    93,    92,   103,     0,
      72,    37,    33,    35,    34,     0,    41,    38,     0,     0,
      43,    48,     0,     0,    53,    54,    59,    60,    64,    65,
      57,    58,    61,    62,    63,    66,     0,     8,    17,    16,
      11,     0,    14,    20,    22,    73,    42,    39,     0,     0,
       0,    56,     0,     0,    10,    19,     0,     0,    50,     0,
      51,    52,    45,    44,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    40,   117,   118,   190,   119,   120,   230,   193,
     121,    22,    23,    50,    78,   191,   142,   143,   189,   242,
     144,   145,    24,    25,    26,    27,    68,   128,    28,    29
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -170
static const yytype_int16 yypact[] =
{
      35,   211,    16,   -35,   250,    -2,  -170,  -170,  -170,   312,
    -170,   250,    14,  -170,  -170,  -170,   350,   350,  -170,    27,
     350,   350,    59,    29,  -170,   114,    45,  -170,   464,  -170,
    -170,  -170,    73,   119,  -170,    94,    35,    35,  -170,  -170,
      55,    80,  -170,  -170,    -5,   312,    93,   312,   312,   312,
    -170,    13,   289,   177,    63,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,  -170,    -5,
     207,    78,    -5,    81,  -170,  -170,  -170,    35,    10,  -170,
    -170,    11,  -170,   122,    18,  -170,  -170,    91,    98,  -170,
    -170,    27,   338,  -170,   502,   365,   365,   100,   100,   530,
     137,   175,   175,   100,  -170,    10,    99,  -170,    10,  -170,
     101,   402,   146,   312,   150,   129,    -5,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,    35,    35,   138,     7,   140,   350,
    -170,  -170,  -170,   181,   402,   142,   419,   419,    70,   419,
     419,   154,   105,  -170,   488,  -170,  -170,   402,   291,   312,
     164,  -170,   165,   167,  -170,   312,  -170,  -170,  -170,  -170,
      35,    35,  -170,  -170,   172,    95,  -170,  -170,   402,   402,
     402,  -170,    60,   379,   383,   174,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,  -170,
      84,   301,  -170,     9,   323,   188,  -170,  -170,  -170,   183,
    -170,  -170,    69,  -170,   193,    34,  -170,  -170,   182,   186,
    -170,  -170,    70,   440,  -170,   516,   434,   434,   191,   191,
     535,   549,   226,   226,   191,  -170,   402,  -170,  -170,  -170,
    -170,   312,  -170,  -170,  -170,  -170,  -170,  -170,    35,    35,
     194,   157,   202,   419,  -170,  -170,   203,   216,  -170,   402,
    -170,  -170,  -170,  -170,  -170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,     0,    12,   125,    43,    50,   143,    48,    66,
     106,    82,   245,   171,   -64,  -109,  -170,  -169,   126,    74,
      97,  -130,    15,    -8,  -170,   -49,   255,   169,   540,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       3,    34,   141,    89,   210,   105,   162,   163,   108,   166,
     167,    41,    76,    38,    39,    31,    30,    42,    43,   111,
     112,   113,   114,   115,   115,   159,    47,    48,    49,   165,
       1,    48,    49,     5,     6,    84,    73,    85,     1,    81,
      82,    83,   122,    77,     7,     8,    33,   214,    71,     9,
      86,    10,   151,    93,   155,   123,   231,   116,   236,   202,
     203,   204,    36,    12,    13,    14,    15,    44,    51,    16,
      17,   237,    52,     1,   251,    19,    45,   110,    20,    21,
     157,    69,   205,   127,   206,   106,    32,     7,     8,   169,
     170,   126,   134,    35,    10,   113,   114,   207,   115,    47,
      48,    49,    72,   241,    74,   148,   135,    13,    14,    15,
      80,    91,   136,   137,   168,   169,   170,   130,   138,    46,
     132,   139,   140,    70,   152,   153,   146,   107,   172,    75,
     109,   226,   173,    47,    48,    49,     7,     8,   164,   124,
     241,   194,    48,    10,   201,    67,   125,   127,   131,   146,
     133,   146,   146,   146,   146,   146,    13,    14,    15,   147,
     199,   164,   146,   149,   112,   113,   114,   150,   115,    58,
      59,    60,    61,   168,   169,   170,   168,   169,   170,    64,
      65,    66,    67,   146,   146,   146,    46,   154,   146,   156,
     160,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   249,    54,    55,    56,    57,    60,
      61,   195,   240,   169,   196,     4,   197,     5,     6,    66,
      67,   200,   212,   194,     7,     8,   234,   146,     7,     8,
     238,    10,   235,     9,   239,    10,   188,    11,   246,   247,
     227,   146,   233,   248,    13,    14,    15,    12,    13,    14,
      15,   250,   252,    16,    17,    18,     5,     6,   146,    19,
     181,   182,    20,    21,   146,   253,   171,     7,     8,   244,
     187,   188,     9,   213,    10,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,    12,    13,    14,    15,
      79,   192,    16,    17,    18,     5,     6,   245,    19,   232,
     211,    20,    21,   114,   158,   115,     7,     8,    90,     0,
      47,    48,    49,    10,    87,    88,   228,   229,     5,     6,
     168,   169,   170,   254,   198,    12,    13,    14,    15,     7,
       8,    16,    17,     0,     9,     0,    10,    37,   228,   229,
      20,    21,    47,    48,    49,     0,     0,     0,    12,    13,
      14,    15,     0,     0,    16,    17,     5,     6,   129,     0,
      19,     0,     0,    20,    21,     0,     0,     7,     8,     0,
      58,    59,    60,    61,    10,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    12,    13,    14,    15,
       0,     0,    16,    17,     0,     0,     7,     8,    37,    60,
      61,    20,    21,    10,   208,   209,     0,    64,    65,    66,
      67,   175,   176,   177,   178,   135,    13,    14,    15,     7,
       8,   136,   137,     0,   134,     0,    10,   161,     0,     0,
     139,   140,     0,     0,     0,     0,     7,     8,   135,    13,
      14,    15,     0,    10,   136,   137,     0,     0,     0,     0,
     138,     0,     0,   139,   140,   135,    13,    14,    15,     0,
     243,   136,   137,     0,     0,     0,     0,   161,   181,   182,
     139,   140,   179,   180,   181,   182,   185,   186,   187,   188,
     183,   184,   185,   186,   187,   188,    53,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
     174,     0,     0,     0,     0,     0,   175,   176,   177,   178,
     179,   180,   181,   182,     0,     0,     0,     0,   183,   184,
     185,   186,   187,   188,    58,    59,    60,    61,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,   179,   180,
     181,   182,     0,     0,     0,     0,   183,   184,   185,   186,
     187,   188,    58,    59,    60,    61,     0,   179,   180,   181,
     182,    63,    64,    65,    66,    67,   184,   185,   186,   187,
     188,   179,   180,   181,   182,     0,     0,     0,     0,     0,
       0,   185,   186,   187,   188,    92,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104
};

static const yytype_int16 yycheck[] =
{
       0,     9,   111,    52,   173,    69,   136,   137,    72,   139,
     140,    19,    17,    16,    17,    50,     0,    20,    21,     9,
      10,    11,    12,    14,    14,   134,    19,    20,    21,   138,
       3,    20,    21,     6,     7,    22,    36,    24,     3,    47,
      48,    49,    24,    48,    17,    18,    48,   177,    33,    22,
      37,    24,   116,    56,    47,    37,    47,    47,    24,   168,
     169,   170,    48,    36,    37,    38,    39,     8,    23,    42,
      43,    37,    27,     3,   243,    48,    47,    77,    51,    52,
     129,     8,    22,    91,    24,    70,     4,    17,    18,    20,
      21,    91,    22,    11,    24,    11,    12,    37,    14,    19,
      20,    21,     8,   212,    49,   113,    36,    37,    38,    39,
      17,    48,    42,    43,    19,    20,    21,   105,    48,     5,
     108,    51,    52,     4,   124,   125,   111,    49,    23,    49,
      49,    47,    27,    19,    20,    21,    17,    18,   138,    48,
     249,   149,    20,    24,    49,    45,    48,   155,    49,   134,
      49,   136,   137,   138,   139,   140,    37,    38,    39,    13,
     160,   161,   147,    13,    10,    11,    12,    38,    14,    32,
      33,    34,    35,    19,    20,    21,    19,    20,    21,    42,
      43,    44,    45,   168,   169,   170,     5,    49,   173,    49,
      48,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,    47,    28,    29,    30,    31,    34,
      35,    47,   212,    20,    49,     4,    49,     6,     7,    44,
      45,    49,    48,   231,    17,    18,    38,   212,    17,    18,
      48,    24,    49,    22,    48,    24,    45,    26,   238,   239,
     190,   226,   194,    49,    37,    38,    39,    36,    37,    38,
      39,    49,    49,    42,    43,    44,     6,     7,   243,    48,
      34,    35,    51,    52,   249,    49,   141,    17,    18,   226,
      44,    45,    22,   176,    24,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    36,    37,    38,    39,
      45,   148,    42,    43,    44,     6,     7,   231,    48,   193,
     174,    51,    52,    12,   133,    14,    17,    18,    53,    -1,
      19,    20,    21,    24,    25,    26,    15,    16,     6,     7,
      19,    20,    21,   249,   155,    36,    37,    38,    39,    17,
      18,    42,    43,    -1,    22,    -1,    24,    48,    15,    16,
      51,    52,    19,    20,    21,    -1,    -1,    -1,    36,    37,
      38,    39,    -1,    -1,    42,    43,     6,     7,    20,    -1,
      48,    -1,    -1,    51,    52,    -1,    -1,    17,    18,    -1,
      32,    33,    34,    35,    24,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    -1,    -1,    36,    37,    38,    39,
      -1,    -1,    42,    43,    -1,    -1,    17,    18,    48,    34,
      35,    51,    52,    24,    25,    26,    -1,    42,    43,    44,
      45,    28,    29,    30,    31,    36,    37,    38,    39,    17,
      18,    42,    43,    -1,    22,    -1,    24,    48,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    17,    18,    36,    37,
      38,    39,    -1,    24,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    52,    36,    37,    38,    39,    -1,
      20,    42,    43,    -1,    -1,    -1,    -1,    48,    34,    35,
      51,    52,    32,    33,    34,    35,    42,    43,    44,    45,
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
      45,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    55,     4,     6,     7,    17,    18,    22,
      24,    26,    36,    37,    38,    39,    42,    43,    44,    48,
      51,    52,    64,    65,    75,    76,    77,    78,    81,    82,
       0,    50,    64,    48,    76,    64,    48,    48,    82,    82,
      55,    76,    82,    82,     8,    47,     5,    19,    20,    21,
      66,    23,    27,    22,    28,    29,    30,    31,    32,    33,
      34,    35,    40,    41,    42,    43,    44,    45,    79,     8,
       4,    75,     8,    55,    49,    49,    17,    48,    67,    65,
      17,    76,    76,    76,    22,    24,    37,    25,    26,    78,
      79,    48,    81,    82,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    67,    75,    49,    67,    49,
      55,     9,    10,    11,    12,    14,    47,    56,    57,    59,
      60,    63,    24,    37,    48,    48,    55,    76,    80,    20,
      56,    49,    56,    49,    22,    36,    42,    43,    48,    51,
      52,    68,    69,    70,    73,    74,    75,    13,    76,    13,
      38,    67,    55,    55,    49,    47,    49,    78,    66,    68,
      48,    48,    74,    74,    55,    68,    74,    74,    19,    20,
      21,    57,    23,    27,    22,    28,    29,    30,    31,    32,
      33,    34,    35,    40,    41,    42,    43,    44,    45,    71,
      58,    68,    60,    62,    76,    47,    49,    49,    80,    55,
      49,    49,    68,    68,    68,    22,    24,    37,    25,    26,
      70,    71,    48,    73,    74,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    47,    59,    15,    16,
      61,    47,    63,    61,    38,    49,    24,    37,    48,    48,
      55,    68,    72,    20,    58,    62,    55,    55,    49,    47,
      49,    70,    49,    49,    72
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
#line 1701 "y.tab.c"
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
#line 211 "select.y"


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


