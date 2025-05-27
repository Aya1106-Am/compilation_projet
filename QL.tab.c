
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
#line 1 "QL.y"
   
    #include<stdio.h>   
    #include<stdlib.h>   
    int nb_ligne=1;  
    int nb_col=0; 
    char sauvT[30]; 
    char sauv[30]; 
    char sauvTy[30]; 
    char sauvI[30];   
    char tempvaleur[30];
    char tempidf[30]; 
     char id[30];    
    int yyerror(char *msg);  


/* Line 189 of yacc.c  */
#line 89 "QL.tab.c"

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
     BEGINN = 258,
     END = 259,
     DEFAULT = 260,
     CASE = 261,
     SWITCH = 262,
     BREAK = 263,
     LIRE = 264,
     ECRIRE = 265,
     CONST = 266,
     INT = 267,
     BOOL = 268,
     IDF = 269,
     FLOAT = 270,
     FOR = 271,
     WHILE = 272,
     DO = 273,
     IF = 274,
     ELSE = 275,
     TRU = 276,
     FALS = 277,
     INTEGER_N = 278,
     FLOAT_N = 279,
     F = 280,
     D = 281,
     PER = 282,
     SYMB = 283,
     TURN = 284,
     FUNC = 285,
     VOID = 286,
     AF = 287,
     AO = 288,
     FP = 289,
     EQ = 290,
     OP = 291,
     DIV = 292,
     MUL = 293,
     SUB = 294,
     ADD = 295,
     MOD = 296,
     PUI = 297,
     AFF = 298,
     INF = 299,
     SUP = 300,
     DIFF = 301,
     EG = 302,
     SE = 303,
     IE = 304,
     INCR = 305,
     DEC = 306,
     VRG = 307,
     PVG = 308,
     DP = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "QL.y"
  
int num;  
float numf;  
char* str;  



/* Line 214 of yacc.c  */
#line 187 "QL.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "QL.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    23,    24,    26,    28,    30,    32,
      33,    35,    36,    41,    47,    54,    61,    66,    67,    69,
      71,    75,    77,    78,    84,    88,    94,    98,   100,   102,
     105,   108,   111,   114,   117,   120,   131,   138,   141,   142,
     148,   152,   153,   155,   157,   166,   174,   175,   179,   184,
     189,   194,   199,   206,   213,   217,   221,   225,   227,   229,
     231,   235,   239,   243,   247,   252,   256,   260,   261,   263,
     265,   267,   281,   289,   301,   309,   319,   322,   325,   329,
     331,   333,   335,   337,   339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    60,     3,    65,     4,    -1,    58,
      30,    14,    36,    60,    34,    33,    60,    65,    59,    75,
      53,    32,    -1,    -1,    12,    -1,    15,    -1,    31,    -1,
      13,    -1,    -1,    29,    -1,    -1,    61,    62,    53,    60,
      -1,    11,    61,    63,    53,    60,    -1,    13,    14,    35,
      21,    53,    60,    -1,    13,    14,    35,    22,    53,    60,
      -1,    13,    14,    53,    60,    -1,    -1,    12,    -1,    15,
      -1,    14,    52,    62,    -1,    14,    -1,    -1,    14,    35,
      23,    52,    63,    -1,    14,    35,    24,    -1,    14,    35,
      24,    52,    63,    -1,    14,    35,    23,    -1,    23,    -1,
      24,    -1,    76,    65,    -1,    77,    65,    -1,    72,    65,
      -1,    78,    65,    -1,    79,    65,    -1,    69,    65,    -1,
       9,    36,    27,    68,    52,    28,    14,    34,    53,    65,
      -1,    10,    36,    67,    34,    53,    65,    -1,    66,    65,
      -1,    -1,    14,    36,    75,    34,    53,    -1,    52,    14,
      67,    -1,    -1,    26,    -1,    25,    -1,     7,    36,    75,
      34,    33,    70,    71,    32,    -1,     6,    75,    54,    65,
       8,    53,    70,    -1,    -1,     5,    54,    65,    -1,    14,
      43,    73,    53,    -1,    14,    43,    21,    53,    -1,    14,
      43,    22,    53,    -1,    14,    43,    80,    53,    -1,    14,
      43,    14,    37,    23,    53,    -1,    14,    43,    64,    37,
      23,    53,    -1,    14,    50,    53,    -1,    14,    51,    53,
      -1,    14,    43,    66,    -1,    14,    -1,    23,    -1,    24,
      -1,    73,    40,    74,    -1,    73,    39,    74,    -1,    73,
      38,    74,    -1,    73,    37,    74,    -1,    36,    73,    34,
      74,    -1,    73,    41,    74,    -1,    73,    42,    74,    -1,
      -1,    73,    -1,    64,    -1,    14,    -1,    16,    36,    14,
      43,    64,    52,    81,    52,    80,    34,    33,    65,    32,
      -1,    19,    36,    81,    34,    33,    65,    32,    -1,    19,
      36,    81,    34,    33,    65,    32,    20,    33,    65,    32,
      -1,    17,    36,    81,    34,    33,    65,    32,    -1,    18,
      33,    65,    32,    17,    36,    81,    34,    53,    -1,    14,
      50,    -1,    14,    51,    -1,    75,    82,    75,    -1,    47,
      -1,    49,    -1,    48,    -1,    46,    -1,    45,    -1,    44,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    29,    30,    34,    35,    36,    37,    38,
      41,    42,    44,    45,    46,    48,    51,    53,    56,    57,
      60,    62,    64,    67,    70,    74,    78,    83,    84,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    99,
     102,   103,   106,   107,   111,   114,   115,   118,   121,   132,
     133,   134,   135,   140,   144,   145,   146,   149,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   163,   166,
     167,   170,   172,   173,   175,   177,   180,   181,   184,   187,
     188,   189,   190,   191,   192
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEGINN", "END", "DEFAULT", "CASE",
  "SWITCH", "BREAK", "LIRE", "ECRIRE", "CONST", "INT", "BOOL", "IDF",
  "FLOAT", "FOR", "WHILE", "DO", "IF", "ELSE", "TRU", "FALS", "INTEGER_N",
  "FLOAT_N", "F", "D", "PER", "SYMB", "TURN", "FUNC", "VOID", "AF", "AO",
  "FP", "EQ", "OP", "DIV", "MUL", "SUB", "ADD", "MOD", "PUI", "AFF", "INF",
  "SUP", "DIFF", "EG", "SE", "IE", "INCR", "DEC", "VRG", "PVG", "DP",
  "$accept", "PROGRAMME", "FONCTION", "TYPEF", "RETURN", "DECLARATION",
  "TYPE", "LISTE_IDF", "LISTE_DECLARATION", "CNT", "INSTRUCTION",
  "APPEL_INST", "EVRG", "VAR", "INST_SWITCH", "CASES", "DEF", "INST_AFF",
  "arithmetic_expression", "EXP", "T", "INST_FOR", "INST_IF", "INST_W",
  "INST_DW", "COMPTEUR", "CONDITION", "COND", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    61,    61,
      62,    62,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      67,    67,    68,    68,    69,    70,    70,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      75,    76,    77,    77,    78,    79,    80,    80,    81,    82,
      82,    82,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,    13,     0,     1,     1,     1,     1,     0,
       1,     0,     4,     5,     6,     6,     4,     0,     1,     1,
       3,     1,     0,     5,     3,     5,     3,     1,     1,     2,
       2,     2,     2,     2,     2,    10,     6,     2,     0,     5,
       3,     0,     1,     1,     8,     7,     0,     3,     4,     4,
       4,     4,     6,     6,     3,     3,     3,     1,     1,     1,
       3,     3,     3,     3,     4,     3,     3,     0,     1,     1,
       1,    13,     7,    11,     7,     9,     2,     2,     3,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     5,     8,     6,     7,     0,    17,     0,     1,     0,
      18,     0,    19,     0,    22,     0,     0,     0,    38,    21,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    38,    38,    38,    38,
      38,    38,    22,    17,    17,     0,    17,     0,     0,    16,
       0,     0,    41,     0,    67,     0,     0,     0,     0,    38,
       0,     2,    37,    34,    31,    29,    30,    32,    33,    20,
      12,     0,    26,    24,    13,    17,    17,    70,    27,    28,
      69,     0,     0,     0,     0,     0,    57,     0,     0,    58,
      59,    67,     0,    56,     0,     0,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,    43,
      42,     0,    41,     0,     0,     0,    76,    77,    49,    50,
      57,    58,    59,     0,     0,    67,    67,    67,    67,    67,
      67,    48,    51,     0,    84,    83,    82,    79,    81,    80,
       0,     0,     0,     0,    17,    23,    25,    46,     0,    40,
      38,    39,     0,    67,     0,    68,    63,    62,    61,    60,
      65,    66,     0,    78,    38,     0,    38,    38,     0,     0,
       0,    36,    52,    64,    53,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,    74,     0,    72,    10,     0,
      38,    38,    44,     0,     0,     0,     0,     0,     0,    47,
      38,     0,     0,    75,    38,     0,     0,    35,     0,     0,
       3,    46,    38,    73,    45,     0,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,   189,    13,    14,    20,    23,    80,
      34,    35,    84,   111,    36,   169,   182,    37,   155,   156,
      99,    38,    39,    40,    41,    95,   100,   140
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -113
static const yytype_int16 yypact[] =
{
       7,  -113,  -113,  -113,  -113,    28,    31,   -19,  -113,    78,
    -113,    22,  -113,    37,    51,    60,    82,   -14,    59,    40,
      61,    80,    84,    68,    39,    31,    86,    92,    94,    21,
      97,    98,    90,    99,   116,    59,    59,    59,    59,    59,
      59,    59,    51,    31,    31,    71,    31,    83,    85,  -113,
      56,   110,    88,    56,     9,    89,    91,   125,    56,    59,
      56,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,   107,    93,    95,  -113,    31,    31,  -113,  -113,  -113,
    -113,   109,    57,   134,   115,   117,    12,   100,   101,   113,
     120,    11,   121,  -113,    14,   106,  -113,  -113,   118,    54,
     126,   130,   129,   119,    82,    82,  -113,  -113,   131,  -113,
    -113,   114,    88,   122,   123,   144,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,    47,   145,    11,    11,    11,    11,    11,
      11,  -113,  -113,    87,  -113,  -113,  -113,  -113,  -113,  -113,
      56,   137,   154,   139,    31,  -113,  -113,   167,   146,  -113,
      59,  -113,   127,    11,   128,    67,  -113,  -113,  -113,  -113,
    -113,  -113,   132,  -113,    59,   142,    59,    59,    56,   174,
     168,  -113,  -113,  -113,  -113,    56,   151,    56,   153,   157,
     133,   135,   156,   158,   138,  -113,   159,   171,  -113,    56,
      59,    59,  -113,   141,   181,   143,   164,   147,   190,  -113,
      59,    62,   165,  -113,    59,   169,   149,  -113,   170,   172,
    -113,   167,    59,  -113,  -113,   173,  -113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,  -113,  -113,   -17,   197,   166,    13,   -42,
     -35,   155,   102,  -113,  -113,    -4,  -113,  -113,   -41,  -112,
     -43,  -113,  -113,  -113,  -113,    16,   -51,  -113
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int16 yytable[] =
{
      62,    63,    64,    65,    66,    67,    68,    81,    49,   102,
      85,    15,    92,    94,   157,   158,   159,   160,   161,     1,
       2,    24,     3,    86,   101,   120,    70,    71,     8,    74,
      87,    88,    89,    90,   121,   122,    17,    -9,     4,    25,
      18,   173,     9,    10,    11,    91,    12,    91,    53,   115,
     123,   125,   126,   127,   128,   129,   130,    53,   106,   107,
      47,    48,   116,   117,    54,    19,    26,   131,    27,    28,
      77,    55,    56,    29,    21,    30,    31,    32,    33,    78,
      79,   153,   109,   110,   125,   126,   127,   128,   129,   130,
      10,   162,    42,    12,    72,    73,    22,   163,   134,   135,
     136,   137,   138,   139,   125,   126,   127,   128,   129,   130,
      78,    79,   116,   117,    43,   171,    44,   145,   146,    45,
      61,    46,    50,    59,   184,   180,   186,   167,    51,   176,
      52,   178,   179,    57,    58,    60,    75,    82,    76,    98,
      83,   103,    96,   108,    97,   104,   197,   105,   112,   113,
     -27,   114,   144,   118,   119,   198,   199,   -28,   124,   132,
     141,   133,   142,   143,   147,   207,   148,   152,   154,   209,
     164,   165,   166,   168,   170,   150,   151,   215,   177,   181,
     172,   174,   183,   185,   175,   187,   188,   190,   192,   191,
     194,   196,   193,   195,   200,   201,   203,   204,   206,   208,
     205,   210,   211,   212,   213,   216,    16,   214,    69,    93,
     202,     0,     0,     0,   149
};

static const yytype_int16 yycheck[] =
{
      35,    36,    37,    38,    39,    40,    41,    50,    25,    60,
      53,    30,    54,    54,   126,   127,   128,   129,   130,    12,
      13,    35,    15,    14,    59,    14,    43,    44,     0,    46,
      21,    22,    23,    24,    23,    24,    14,    30,    31,    53,
       3,   153,    11,    12,    13,    36,    15,    36,    36,    37,
      91,    37,    38,    39,    40,    41,    42,    36,    75,    76,
      21,    22,    50,    51,    43,    14,     7,    53,     9,    10,
      14,    50,    51,    14,    14,    16,    17,    18,    19,    23,
      24,    34,    25,    26,    37,    38,    39,    40,    41,    42,
      12,   133,    52,    15,    23,    24,    14,   140,    44,    45,
      46,    47,    48,    49,    37,    38,    39,    40,    41,    42,
      23,    24,    50,    51,    53,   150,    36,   104,   105,    35,
       4,    53,    36,    33,   175,   168,   177,   144,    36,   164,
      36,   166,   167,    36,    36,    36,    53,    27,    53,    14,
      52,    34,    53,    34,    53,    52,   189,    52,    14,    34,
      37,    34,    33,    53,    53,   190,   191,    37,    37,    53,
      34,    43,    32,    34,    33,   200,    52,    23,    23,   204,
      33,    17,    33,     6,    28,    53,    53,   212,    36,     5,
      53,    53,    14,    32,    52,    32,    29,    54,    32,    54,
      52,    20,    34,    34,    53,    14,    53,    33,     8,    34,
      53,    32,    53,    33,    32,    32,     9,   211,    42,    54,
     194,    -1,    -1,    -1,   112
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    31,    56,    57,    58,     0,    11,
      12,    13,    15,    60,    61,    30,    61,    14,     3,    14,
      62,    14,    14,    63,    35,    53,     7,     9,    10,    14,
      16,    17,    18,    19,    65,    66,    69,    72,    76,    77,
      78,    79,    52,    53,    36,    35,    53,    21,    22,    60,
      36,    36,    36,    36,    43,    50,    51,    36,    36,    33,
      36,     4,    65,    65,    65,    65,    65,    65,    65,    62,
      60,    60,    23,    24,    60,    53,    53,    14,    23,    24,
      64,    75,    27,    52,    67,    75,    14,    21,    22,    23,
      24,    36,    64,    66,    73,    80,    53,    53,    14,    75,
      81,    65,    81,    34,    52,    52,    60,    60,    34,    25,
      26,    68,    14,    34,    34,    37,    50,    51,    53,    53,
      14,    23,    24,    73,    37,    37,    38,    39,    40,    41,
      42,    53,    53,    43,    44,    45,    46,    47,    48,    49,
      82,    34,    32,    34,    33,    63,    63,    33,    52,    67,
      53,    53,    23,    34,    23,    73,    74,    74,    74,    74,
      74,    74,    64,    75,    33,    17,    33,    60,     6,    70,
      28,    65,    53,    74,    53,    52,    65,    36,    65,    65,
      75,     5,    71,    14,    81,    32,    81,    32,    29,    59,
      54,    54,    32,    34,    52,    34,    20,    75,    65,    65,
      53,    14,    80,    53,    33,    53,     8,    65,    34,    65,
      32,    53,    33,    32,    70,    65,    32
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
#line 26 "QL.y"
    { printf ("\n programme syntaxiquement juste");YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 29 "QL.y"
    {insererTYPE((yyvsp[(3) - (13)].str),sauv);;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 34 "QL.y"
    {strcpy(sauv,(yyvsp[(1) - (1)].str));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 35 "QL.y"
    {strcpy(sauv,(yyvsp[(1) - (1)].str));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 36 "QL.y"
    {strcpy(sauv,(yyvsp[(1) - (1)].str));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 37 "QL.y"
    {strcpy(sauv,(yyvsp[(1) - (1)].str));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 46 "QL.y"
    {if(DoubleDec((yyvsp[(2) - (6)].str))==0) {strcpy(sauvT,(yyvsp[(1) - (6)].str));  insererTYPE((yyvsp[(2) - (6)].str),sauvT);}  
                                else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (6)].str),nb_ligne-1,nb_col);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 48 "QL.y"
    {if(DoubleDec((yyvsp[(2) - (6)].str))==0) {strcpy(sauvT,(yyvsp[(1) - (6)].str));  insererTYPE((yyvsp[(2) - (6)].str),sauvT);} 
                                else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (6)].str),nb_ligne-1,nb_col);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 51 "QL.y"
    {if(DoubleDec((yyvsp[(2) - (4)].str))==0) {strcpy(sauvT,(yyvsp[(1) - (4)].str));  insererTYPE((yyvsp[(2) - (4)].str),sauvT);} 
                        else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (4)].str),nb_ligne-1,nb_col);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 56 "QL.y"
    {strcpy(sauvT,(yyvsp[(1) - (1)].str));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 57 "QL.y"
    {strcpy(sauvT,(yyvsp[(1) - (1)].str));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 60 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (3)].str))==0) insererTYPE((yyvsp[(1) - (3)].str),sauvT);
                               else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_col);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 62 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (1)].str))==0) insererTYPE((yyvsp[(1) - (1)].str),sauvT);
                 else printf("erreur semantique double declaration %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_col);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 67 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (5)].str))==0){ insererTYPE((yyvsp[(1) - (5)].str),sauvT);} 
                                    else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (5)].str),nb_ligne,nb_col);}  
                                    sprintf(tempvaleur,"%d",(yyvsp[(3) - (5)].num)); insererConstante((yyvsp[(1) - (5)].str),tempvaleur);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 70 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (3)].str))==0){ 
                            insererTYPE((yyvsp[(1) - (3)].str),sauvT);} 
                            else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_col);}  
                            sprintf(tempvaleur,"%f",(yyvsp[(3) - (3)].numf)); insererConstante((yyvsp[(1) - (3)].str),tempvaleur);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 74 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (5)].str))==0){ 
                                        insererTYPE((yyvsp[(1) - (5)].str),sauvT);} 
                                        else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (5)].str),nb_ligne,nb_col);}  
                                        sprintf(tempvaleur,"%f",(yyvsp[(3) - (5)].numf)); insererConstante((yyvsp[(1) - (5)].str),tempvaleur);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 78 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (3)].str))==0){insererTYPE((yyvsp[(1) - (3)].str),sauvT);} 
                                else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_col);}  
                                sprintf(tempvaleur,"%d",(yyvsp[(3) - (3)].num)); insererConstante((yyvsp[(1) - (3)].str),tempvaleur);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 83 "QL.y"
    { sprintf(sauvT, "%d", (yyvsp[(1) - (1)].num)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 84 "QL.y"
    { sprintf(sauvT, "%f", (yyvsp[(1) - (1)].numf)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 102 "QL.y"
    {if(DoubleDec((yyvsp[(2) - (3)].str))==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (3)].str));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 121 "QL.y"
    {strcpy(tempidf,(yyvsp[(1) - (4)].str));
                                   if(strcmp(id,"")!=0){
                                      if (checkTypeCompatibility((yyvsp[(1) - (4)].str), id)==0){
                                      printf("erreur semantique a la ligne %d  et la colonne %d : Non comptabilite des types dans l'assignation   \n", nb_ligne,nb_col);}}
                                   else if (checkTypeC((yyvsp[(1) - (4)].str), sauvTy)==0){
                                     printf("erreur semantique a la ligne %d  et la colonne %d : Non comptabilite des types dans l'assignation   \n", nb_ligne,nb_col);}
                                     
                                    if(DoubleDec((yyvsp[(1) - (4)].str))==0){
                                      printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (4)].str));}
                                    if(constvaleur((yyvsp[(1) - (4)].str))==1) printf("erreur semantique a la ligne %d : changement de valeur de la constante %s \n",nb_ligne,(yyvsp[(1) - (4)].str));
                                      ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 132 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (4)].str))==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (4)].str));};}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 133 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (4)].str))==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (4)].str));};}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 134 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (4)].str))==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (4)].str));};}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 135 "QL.y"
    {
if(DoubleDec((yyvsp[(1) - (6)].str))==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (6)].str));
if(DoubleDec((yyvsp[(3) - (6)].str))==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(3) - (6)].str));
if ((yyvsp[(5) - (6)].num)==0) printf("erreur : division sur zero a la ligne %d et la colonne %d\n",nb_ligne,nb_col) ;
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 140 "QL.y"
    {
if(DoubleDec((yyvsp[(1) - (6)].str))==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (6)].str));
if ((yyvsp[(5) - (6)].num)==0) printf("erreur : division sur zero a la ligne %d et la colonne %d\n",nb_ligne,nb_col) ;
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 144 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (3)].str))==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,(yyvsp[(1) - (3)].str));};}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 145 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (3)].str))==0){printf("erreur semantique la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,(yyvsp[(1) - (3)].str));};}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 146 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (3)].str))==0){printf("erreur semantique la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,(yyvsp[(1) - (3)].str));};}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 149 "QL.y"
    { strcpy(id,(yyvsp[(1) - (1)].str)); 
                      if(DoubleDec((yyvsp[(1) - (1)].str))==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,(yyvsp[(1) - (1)].str));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 151 "QL.y"
    {strcpy(sauvTy,"INT"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 152 "QL.y"
    { sprintf(sauvTy,"FLOAT");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 153 "QL.y"
    { /* Code pour traiter l'addition */ ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 154 "QL.y"
    { /* Code pour traiter la soustraction */ ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 155 "QL.y"
    { /* Code pour traiter la multiplication */ ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 156 "QL.y"
    { /* Code pour traiter la division */ ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 157 "QL.y"
    { /* Code pour traiter une expression entre parenthèses */ ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 167 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (1)].str))==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,(yyvsp[(1) - (1)].str));};}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 170 "QL.y"
    {if(DoubleDec((yyvsp[(3) - (13)].str))==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,(yyvsp[(3) - (13)].str));};}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 180 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (2)].str))==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,(yyvsp[(1) - (2)].str));};}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 181 "QL.y"
    {if(DoubleDec((yyvsp[(1) - (2)].str))==0){printf("erreur semantique la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,(yyvsp[(1) - (2)].str));};}
    break;



/* Line 1455 of yacc.c  */
#line 1890 "QL.tab.c"
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
#line 195 "QL.y"
   
main (){ 
    yyparse(); 
    afficher();
} 
yywrap(){}
yyerror(char* msg) {printf("erreur syntaxique a la ligne %d et la colonne %d \n",nb_ligne,nb_col);}

