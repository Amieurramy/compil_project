
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
#line 2 "syntax.y"

#include <stdio.h>
#include "TS.h"
#include "quad.h"
#include <string.h>
extern int ld;
extern int cold;
extern int erreur;
extern char *errortext;
char pile[20][11];
int pileifbz[20];
int nifbz=0;
int pileifbr[20];
int nifbr=0;
int n=0;
int temp=1;
char tempvar[11];
struct hashMap symbolTable;
extern struct hashMap symbolTablemc;
extern struct hashMap symbolTables;
struct node* test;
char* int_type="INTEGER";
char* float_type="FLOAT";
char* const_type="CONST";
char* array_of_int="ARRAY OF INTEGER";
char* array_of_float="ARRAY OF FLOAT";
char* current_type;
extern int yylineno;
char tabtype[20];
int qc=0;
int wdebcond[20];
int nwdebcon=0;
int wend[20];
int nwend=0;

struct foridf forsauv[20];
int nforsauv=0;


/* Line 189 of yacc.c  */
#line 113 "syntax.tab.c"

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
     pvg = 258,
     aff = 259,
     idf = 260,
     prog = 261,
     var = 262,
     beg = 263,
     end = 264,
     entier = 265,
     reel = 266,
     intid = 267,
     floid = 268,
     constid = 269,
     ch = 270,
     ag = 271,
     ad = 272,
     pg = 273,
     pd = 274,
     virgule = 275,
     dpoints = 276,
     entiers = 277,
     reels = 278,
     sbg = 279,
     sbd = 280,
     and = 281,
     or = 282,
     equal = 283,
     nequal = 284,
     supe = 285,
     sup = 286,
     infe = 287,
     inf = 288,
     not = 289,
     plus = 290,
     min = 291,
     fo = 292,
     sur = 293,
     iff = 294,
     elsee = 295,
     forr = 296,
     whilee = 297,
     read = 298,
     write = 299,
     point = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 42 "syntax.y"

int entier;
 struct {
	int ligne;
	char *text; 
}str;
float reel;



/* Line 214 of yacc.c  */
#line 205 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 217 "syntax.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    14,    19,    24,    28,    29,    34,    39,
      44,    49,    51,    56,    60,    67,    69,    74,    78,    85,
      88,    91,    94,    97,   100,   103,   104,   109,   117,   125,
     128,   133,   138,   143,   144,   149,   153,   157,   166,   175,
     180,   182,   187,   191,   195,   197,   202,   207,   209,   211,
     213,   215,   218,   222,   226,   230,   234,   238,   242,   246,
     250,   254,   258,   262,   266,   270,   276,   282,   289,   295
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,     6,     5,     7,    16,    48,    17,     8,
      52,     9,    45,    -1,    12,    50,     3,    48,    -1,    13,
      51,     3,    48,    -1,    14,    49,    48,    -1,    -1,     5,
       4,    10,     3,    -1,     5,     4,    11,     3,    -1,     5,
       4,    22,     3,    -1,     5,     4,    23,     3,    -1,     5,
      -1,     5,    24,    10,    25,    -1,     5,    20,    50,    -1,
       5,    24,    10,    25,    20,    50,    -1,     5,    -1,     5,
      24,    10,    25,    -1,     5,    20,    51,    -1,     5,    24,
      10,    25,    20,    51,    -1,    53,    52,    -1,    54,    52,
      -1,    58,    52,    -1,    61,    52,    -1,    66,    52,    -1,
      67,    52,    -1,    -1,     5,     4,    65,     3,    -1,     5,
      24,     5,    25,     4,    65,     3,    -1,     5,    24,    10,
      25,     4,    65,     3,    -1,    56,    57,    -1,    39,    18,
      65,    19,    -1,    55,    16,    52,    17,    -1,    40,    16,
      52,    17,    -1,    -1,    59,    16,    52,    17,    -1,    60,
       5,    19,    -1,    60,    10,    19,    -1,    41,    18,     5,
      21,    10,    21,    10,    21,    -1,    41,    18,     5,    21,
      22,    21,    10,    21,    -1,    63,    16,    52,    17,    -1,
      42,    -1,    62,    18,    65,    19,    -1,    24,     5,    25,
      -1,    24,    10,    25,    -1,     5,    -1,     5,    24,     5,
      25,    -1,     5,    24,    10,    25,    -1,    10,    -1,    23,
      -1,    22,    -1,    11,    -1,    34,    65,    -1,    65,    27,
      65,    -1,    65,    26,    65,    -1,    65,    31,    65,    -1,
      65,    30,    65,    -1,    65,    28,    65,    -1,    65,    29,
      65,    -1,    65,    32,    65,    -1,    65,    33,    65,    -1,
      65,    35,    65,    -1,    65,    36,    65,    -1,    65,    38,
      65,    -1,    65,    37,    65,    -1,    18,    65,    19,    -1,
      44,    18,    15,    19,     3,    -1,    44,    18,     5,    19,
       3,    -1,    44,    18,     5,    64,    19,     3,    -1,    43,
      18,     5,    19,     3,    -1,    43,    18,     5,    64,    19,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    70,    71,    72,    73,    76,    78,    80,
      82,    89,    91,    93,    95,   100,   102,   104,   106,   111,
     112,   113,   114,   115,   116,   117,   121,   132,   146,   162,
     166,   170,   175,   176,   180,   187,   197,   204,   214,   229,
     233,   236,   242,   243,   248,   254,   269,   282,   284,   285,
     286,   287,   290,   292,   294,   296,   298,   300,   302,   304,
     306,   308,   310,   312,   314,   318,   319,   320,   324,   325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "pvg", "aff", "idf", "prog", "var",
  "beg", "end", "entier", "reel", "intid", "floid", "constid", "ch", "ag",
  "ad", "pg", "pd", "virgule", "dpoints", "entiers", "reels", "sbg", "sbd",
  "and", "or", "equal", "nequal", "supe", "sup", "infe", "inf", "not",
  "plus", "min", "fo", "sur", "iff", "elsee", "forr", "whilee", "read",
  "write", "point", "$accept", "S", "DECLARATIONS", "choixconst",
  "MULTIDEFINT", "MULTIDEFFLOAT", "INSTRUCTIONS", "AFFECTATION",
  "ifcondition", "ifcondpart", "ifinstructpart", "elsecondition",
  "forloop", "forcond", "forloopdebut", "whileloop", "whiledebut",
  "whilecond", "INDEX", "EXPRESSION", "print", "input", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    48,    49,    49,    49,
      49,    50,    50,    50,    50,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    54,
      55,    56,    57,    57,    58,    59,    59,    60,    60,    61,
      62,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    67,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     4,     4,     3,     0,     4,     4,     4,
       4,     1,     4,     3,     6,     1,     4,     3,     6,     2,
       2,     2,     2,     2,     2,     0,     4,     7,     7,     2,
       4,     4,     4,     0,     4,     3,     3,     8,     8,     4,
       1,     4,     3,     3,     1,     4,     4,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     5,     6,     5,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     6,     0,     0,     0,
       0,    11,     0,    15,     0,     0,     6,     0,     0,     0,
       6,     0,     0,     6,     0,     5,    25,    13,     0,     3,
      17,     0,     4,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,     0,    25,    25,     0,    33,    25,     0,
       0,    25,     0,     0,    25,    25,    12,    16,     7,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    19,
      20,    25,     0,    29,    21,    25,     0,     0,    22,     0,
      25,    23,    24,     0,     0,    44,    47,    50,     0,    49,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,    25,     0,    35,    36,     0,     0,    14,    18,
       0,     0,    51,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    34,    41,
      39,     0,     0,    64,    53,    52,    56,    57,    55,    54,
      58,    59,    60,    61,    63,    62,     0,     0,     0,     0,
      68,     0,     0,     0,    66,     0,    65,    32,    45,    46,
       0,     0,     0,     0,    42,    43,    69,    67,    27,    28,
       0,     0,    37,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    16,    12,    14,    43,    44,    45,    46,
      47,    73,    48,    49,    50,    51,    52,    53,   132,    92,
      54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
      22,     7,    14,    31,   -65,    33,    83,    57,    58,    78,
      67,     2,    86,    70,    88,   102,    83,   122,    57,   121,
      83,    58,   124,    83,     8,   -65,     4,   -65,   108,   -65,
     -65,   110,   -65,   135,   136,   137,   140,    -1,   126,   127,
     -65,   128,   129,   132,     4,     4,   146,   147,     4,   161,
      29,     4,   145,   162,     4,     4,   173,   180,   -65,   -65,
     -65,   -65,   114,    30,   114,   206,   211,     6,   172,   -65,
     -65,     4,   202,   -65,   -65,     4,   200,   201,   -65,   114,
       4,   -65,   -65,    57,    58,   197,   -65,   -65,   114,   -65,
     -65,   114,    41,   198,   199,   123,   204,    17,    61,   203,
     -65,   209,     4,   210,   -65,   -65,   138,   212,   -65,   -65,
      76,   153,   -65,   -65,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   224,   226,   -65,    -2,
     228,    77,   213,   230,   215,   232,   -65,   219,   -65,   -65,
     -65,   214,   216,   -65,   177,   166,    91,    91,    91,    91,
      91,    91,   -33,   -33,   -65,   -65,   114,   114,   217,   221,
     -65,   218,   220,   234,   -65,   237,   -65,   -65,   -65,   -65,
      72,    85,   236,   238,   -65,   -65,   -65,   -65,   -65,   -65,
     223,   229,   -65,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,     9,   -65,   -17,   -19,   -38,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   149,   -64,
     -65,   -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      95,    27,    30,    62,   124,   125,    69,    70,   158,    37,
      74,    98,     3,    78,     4,   106,    81,    82,    33,    34,
     159,    99,    18,    63,   111,    25,    19,   112,     1,    29,
      35,    36,    32,   101,    76,    93,   130,   103,     5,    77,
      94,   131,   107,    38,   113,    39,    40,    41,    42,     6,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    11,    13,   137,   109,   108,   114,   115,   116,
     117,   118,   119,   120,   121,   178,   122,   123,   124,   125,
     133,   141,   161,    15,    17,   131,   142,   162,   179,    20,
      21,    23,   170,   171,    22,     7,     8,     9,   114,   115,
     116,   117,   118,   119,   120,   121,    24,   122,   123,   124,
     125,   114,   115,   116,   117,   118,   119,   120,   121,    85,
     122,   123,   124,   125,    86,    87,   122,   123,   124,   125,
      26,    28,    88,    56,    31,    57,    89,    90,    58,    59,
      60,    68,   128,    61,    64,    65,    66,    67,    91,   114,
     115,   116,   117,   118,   119,   120,   121,   139,   122,   123,
     124,   125,    71,    79,   114,   115,   116,   117,   118,   119,
     120,   121,   143,   122,   123,   124,   125,    75,    80,   114,
     115,   116,   117,   118,   119,   120,   121,    72,   122,   123,
     124,   125,   114,    83,   116,   117,   118,   119,   120,   121,
      84,   122,   123,   124,   125,   116,   117,   118,   119,   120,
     121,    96,   122,   123,   124,   125,    97,   100,   102,   104,
     105,   110,   135,   126,   127,   129,   136,   138,   156,   140,
     157,   160,   163,   164,   165,   166,   167,   176,   172,   168,
     177,   169,   173,   174,   182,   175,   180,   134,   181,     0,
     183
};

static const yytype_int16 yycheck[] =
{
      64,    18,    21,     4,    37,    38,    44,    45,    10,     5,
      48,     5,     5,    51,     0,    79,    54,    55,    10,    11,
      22,    15,    20,    24,    88,    16,    24,    91,     6,    20,
      22,    23,    23,    71,     5,     5,    19,    75,     7,    10,
      10,    24,    80,    39,     3,    41,    42,    43,    44,    16,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,     5,     5,   102,    84,    83,    26,    27,    28,
      29,    30,    31,    32,    33,     3,    35,    36,    37,    38,
      19,     5,     5,     5,    17,    24,    10,    10,     3,     3,
      20,     3,   156,   157,    24,    12,    13,    14,    26,    27,
      28,    29,    30,    31,    32,    33,     4,    35,    36,    37,
      38,    26,    27,    28,    29,    30,    31,    32,    33,     5,
      35,    36,    37,    38,    10,    11,    35,    36,    37,    38,
       8,    10,    18,    25,    10,    25,    22,    23,     3,     3,
       3,     9,    19,     3,    18,    18,    18,    18,    34,    26,
      27,    28,    29,    30,    31,    32,    33,    19,    35,    36,
      37,    38,    16,    18,    26,    27,    28,    29,    30,    31,
      32,    33,    19,    35,    36,    37,    38,    16,    16,    26,
      27,    28,    29,    30,    31,    32,    33,    40,    35,    36,
      37,    38,    26,    20,    28,    29,    30,    31,    32,    33,
      20,    35,    36,    37,    38,    28,    29,    30,    31,    32,
      33,     5,    35,    36,    37,    38,     5,    45,    16,    19,
      19,    24,    19,    25,    25,    21,    17,    17,     4,    17,
       4,     3,    19,     3,    19,     3,    17,     3,    21,    25,
       3,    25,    21,    25,    21,    25,    10,    98,    10,    -1,
      21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    47,     5,     0,     7,    16,    12,    13,    14,
      48,     5,    50,     5,    51,     5,    49,    17,    20,    24,
       3,    20,    24,     3,     4,    48,     8,    50,    10,    48,
      51,    10,    48,    10,    11,    22,    23,     5,    39,    41,
      42,    43,    44,    52,    53,    54,    55,    56,    58,    59,
      60,    61,    62,    63,    66,    67,    25,    25,     3,     3,
       3,     3,     4,    24,    18,    18,    18,    18,     9,    52,
      52,    16,    40,    57,    52,    16,     5,    10,    52,    18,
      16,    52,    52,    20,    20,     5,    10,    11,    18,    22,
      23,    34,    65,     5,    10,    65,     5,     5,     5,    15,
      45,    52,    16,    52,    19,    19,    65,    52,    50,    51,
      24,    65,    65,     3,    26,    27,    28,    29,    30,    31,
      32,    33,    35,    36,    37,    38,    25,    25,    19,    21,
      19,    24,    64,    19,    64,    19,    17,    52,    17,    19,
      17,     5,    10,    19,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,     4,     4,    10,    22,
       3,     5,    10,    19,     3,    19,     3,    17,    25,    25,
      65,    65,    21,    21,    25,    25,     3,     3,     3,     3,
      10,    10,    21,    21
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
#line 67 "syntax.y"
    {if(erreur==0)printf("Syntaxe correcte \n");YYACCEPT;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 76 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (4)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (4)].str)).text);
    else {insert(&symbolTable,((yyvsp[(1) - (4)].str)).text,(float)(yyvsp[(3) - (4)].entier),const_type); sprintf(tempvar,"%d",(yyvsp[(3) - (4)].entier));    quadr("=",tempvar," ",((yyvsp[(1) - (4)].str)).text);};}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 78 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (4)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (4)].str)).text);
    else{ insert(&symbolTable,((yyvsp[(1) - (4)].str)).text,(float)(yyvsp[(3) - (4)].reel),const_type);sprintf(tempvar,"%f",(yyvsp[(3) - (4)].reel));    quadr("=",tempvar," ",((yyvsp[(1) - (4)].str)).text);};}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 80 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (4)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (4)].str)).text);
    else{insert(&symbolTable,((yyvsp[(1) - (4)].str)).text,(float)(yyvsp[(3) - (4)].entier),const_type);sprintf(tempvar,"%d",(yyvsp[(3) - (4)].entier));    quadr("=",tempvar," ",((yyvsp[(1) - (4)].str)).text);};}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 82 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (4)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (4)].str)).text);
    else{ insert(&symbolTable,((yyvsp[(1) - (4)].str)).text,(float)(yyvsp[(3) - (4)].reel),const_type);sprintf(tempvar,"%f",(yyvsp[(3) - (4)].reel));    quadr("=",tempvar," ",((yyvsp[(1) - (4)].str)).text);};}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 89 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (1)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s\n",ld,((yyvsp[(1) - (1)].str)).text);
    else insert(&symbolTable,((yyvsp[(1) - (1)].str)).text,0,int_type);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 91 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (4)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (4)].str)).text);
    else{if((yyvsp[(3) - (4)].entier)==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,((yyvsp[(1) - (4)].str)).text);}else{ sprintf(tabtype,"%s[%-2d]",int_type,(yyvsp[(3) - (4)].entier)); insert(&symbolTable,((yyvsp[(1) - (4)].str)).text,(yyvsp[(3) - (4)].entier),tabtype);}};}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 93 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (3)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",ld,((yyvsp[(1) - (3)].str)).text);
    else insert(&symbolTable,((yyvsp[(1) - (3)].str)).text,0,int_type);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 95 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (6)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (6)].str)).text);
    else{ if((yyvsp[(3) - (6)].entier)==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,((yyvsp[(1) - (6)].str)).text);}else{sprintf(tabtype,"%s[%-2d]",int_type,(yyvsp[(3) - (6)].entier)); insert(&symbolTable,((yyvsp[(1) - (6)].str)).text,(yyvsp[(3) - (6)].entier),tabtype);}};}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 100 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (1)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s\n",ld,((yyvsp[(1) - (1)].str)).text);
    else insert(&symbolTable,((yyvsp[(1) - (1)].str)).text,0,float_type);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 102 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (4)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (4)].str)).text);
    else{if((yyvsp[(3) - (4)].entier)==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,((yyvsp[(1) - (4)].str)).text);}else{ sprintf(tabtype,"%s[%-2d]",float_type,(yyvsp[(3) - (4)].entier)); insert(&symbolTable,((yyvsp[(1) - (4)].str)).text,(yyvsp[(3) - (4)].entier),tabtype);}};}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 104 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (3)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",ld,((yyvsp[(1) - (3)].str)).text);
    else insert(&symbolTable,((yyvsp[(1) - (3)].str)).text,0,float_type);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 106 "syntax.y"
    {if(search(&symbolTable,((yyvsp[(1) - (6)].str)).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,((yyvsp[(1) - (6)].str)).text);
    else{if((yyvsp[(3) - (6)].entier)==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,((yyvsp[(1) - (6)].str)).text);}else{ sprintf(tabtype,"%s[%-2d]",float_type,(yyvsp[(3) - (6)].entier)); insert(&symbolTable,((yyvsp[(1) - (6)].str)).text,(yyvsp[(3) - (6)].entier),tabtype);}};}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 112 "syntax.y"
    {n=0;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 113 "syntax.y"
    {n=0;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 114 "syntax.y"
    {n=0;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 121 "syntax.y"
    {quadr("=",pile[n-1]," ",((yyvsp[(1) - (4)].str)).text);
    n=0;
    test = search(&symbolTable, ((yyvsp[(1) - (4)].str)).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text);
} else if (test->type != NULL && strcmp(test->type, const_type) == 0) {
    printf("Erreur semantique : la valeur d'une constante ne peut etre modifiee, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text);
}else{if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text); 
}
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 132 "syntax.y"
    {test = search(&symbolTable, ((yyvsp[(1) - (7)].str)).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (7)].str)).ligne, ((yyvsp[(1) - (7)].str)).text);}
else{if(strlen(test->type)<8)
   printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (7)].str)).ligne, ((yyvsp[(1) - (7)].str)).text); 
else{struct node *test2;
test2=search(&symbolTable,((yyvsp[(3) - (7)].str)).text);
if(test2==NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree comme INDEX, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (7)].str)).ligne, ((yyvsp[(1) - (7)].str)).text);
}else if(strcmp(test2->type,int_type)!=0){
    printf("Erreur semantique : l'index d'un tableau doit etre de type INTEGER, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (7)].str)).ligne, ((yyvsp[(3) - (7)].str)).text);
    } 
}}sprintf(tempvar,"%s[%s]",((yyvsp[(1) - (7)].str)).text,((yyvsp[(3) - (7)].str)).text);quadr("=",pile[n-1]," ",tempvar);
    n=0;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 146 "syntax.y"
    {sprintf(tempvar,"%s[%d]",((yyvsp[(1) - (7)].str)).text,(yyvsp[(3) - (7)].entier));
    test = search(&symbolTable, ((yyvsp[(1) - (7)].str)).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (7)].str)).ligne, ((yyvsp[(1) - (7)].str)).text);
}else{if(strlen(test->type)<8)
    printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (7)].str)).ligne, ((yyvsp[(1) - (7)].str)).text);
    else{if((yyvsp[(3) - (7)].entier)>=(test->value)){
        printf("Erreur semantique : index hors limite , ligne %-2d , Entite fautive %d\n", ((yyvsp[(1) - (7)].str)).ligne, (yyvsp[(3) - (7)].entier));
    }
    }
}
quadr("=",pile[n-1]," ",tempvar);
    n=0;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 162 "syntax.y"
    {sprintf(tempvar,"%d",qc);updateQuad(pileifbr[nifbr-1],1,tempvar);nifbr--;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 166 "syntax.y"
    { pileifbz[nifbz]=qc; nifbz++; quadr("BZ"," ",quad[qc-1].res," ");
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 170 "syntax.y"
    {quadr("BR"," "," "," "); pileifbr[nifbr]=qc-1;nifbr++;sprintf(tempvar,"%d",qc);updateQuad(pileifbz[nifbz-1],1,tempvar);nifbz--;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 180 "syntax.y"
    {sprintf(tempvar,"%d",forsauv[nforsauv-1].step);
        quadr("+",forsauv[nforsauv-1].idf,tempvar,forsauv[nforsauv-1].idf);nforsauv--;
      sprintf(tempvar,"%d",wdebcond[nwdebcon-1]);nwdebcon--;quadr("BR",tempvar," "," ");sprintf(tempvar,"%d",qc);
    updateQuad(wend[nwend-1],1,tempvar);nwend--;  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 187 "syntax.y"
    { test = search(&symbolTable, ((yyvsp[(2) - (3)].str)).text);
    if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable ou constante non declaree, ligne %-2d , Entite fautive %s\n",((yyvsp[(2) - (3)].str)).ligne, ((yyvsp[(2) - (3)].str)).text);
    }else{if(strlen(test->type)>=8){
    printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ((yyvsp[(2) - (3)].str)).ligne, ((yyvsp[(2) - (3)].str)).text);
    }}
    quadr("BGE"," ",forsauv[nforsauv-1].idf,((yyvsp[(2) - (3)].str)).text);
    wdebcond[nwdebcon]=qc-1;nwdebcon++;
    wend[nwend]=qc-1; nwend++;
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 197 "syntax.y"
    {sprintf(tempvar,"%d",(yyvsp[(2) - (3)].entier));
    quadr("BGE"," ",forsauv[nforsauv-1].idf,tempvar);
    wdebcond[nwdebcon]=qc-1;nwdebcon++;
    wend[nwend]=qc-1;nwend++; 
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 204 "syntax.y"
    {test = search(&symbolTable, ((yyvsp[(3) - (8)].str)).text);
    if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n",((yyvsp[(3) - (8)].str)).ligne, ((yyvsp[(3) - (8)].str)).text);
    }else if (test->type != NULL && strcmp(test->type, const_type) == 0) {
    printf("Erreur semantique : la valeur d'une constante ne peut etre modifiee, ligne %-2d , Entite fautive %s\n", ((yyvsp[(3) - (8)].str)).ligne, ((yyvsp[(3) - (8)].str)).text);
    }else{if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ((yyvsp[(3) - (8)].str)).ligne, ((yyvsp[(3) - (8)].str)).text); 
}  sprintf(tempvar,"%d",(yyvsp[(5) - (8)].entier));quadr("=",tempvar," ",((yyvsp[(3) - (8)].str)).text);
forsauv[nforsauv].idf=((yyvsp[(3) - (8)].str)).text;forsauv[nforsauv].step=(yyvsp[(7) - (8)].entier);nforsauv++;;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 214 "syntax.y"
    {test = search(&symbolTable, ((yyvsp[(3) - (8)].str)).text);
    if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n",((yyvsp[(3) - (8)].str)).ligne, ((yyvsp[(3) - (8)].str)).text);
    }else if (test->type != NULL && strcmp(test->type, const_type) == 0) {
    printf("Erreur semantique : la valeur d'une constante ne peut etre modifiee, ligne %-2d , Entite fautive %s\n", ((yyvsp[(3) - (8)].str)).ligne, ((yyvsp[(3) - (8)].str)).text);
    }else{if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ((yyvsp[(3) - (8)].str)).ligne, ((yyvsp[(3) - (8)].str)).text); 
}  sprintf(tempvar,"%d",(yyvsp[(5) - (8)].entier));quadr("=",tempvar," ",((yyvsp[(3) - (8)].str)).text);
forsauv[nforsauv].idf=((yyvsp[(3) - (8)].str)).text;forsauv[nforsauv].step=(yyvsp[(7) - (8)].entier);nforsauv++;
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 229 "syntax.y"
    {sprintf(tempvar,"%d",wdebcond[nwdebcon-1]);nwdebcon--;quadr("BR",tempvar," "," ");sprintf(tempvar,"%d",qc);
    updateQuad(wend[nwend-1],1,tempvar);nwend--;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 233 "syntax.y"
    {wdebcond[nwdebcon]=qc;nwdebcon++;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 236 "syntax.y"
    {wend[nwend]=qc; nwend++;quadr("BZ"," ",quad[qc-1].res," ");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 248 "syntax.y"
    {test = search(&symbolTable, ((yyvsp[(1) - (1)].str)).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable ou constante non declaree, ligne %-2d, Entite fautive %s\n",((yyvsp[(1) - (1)].str)).ligne, ((yyvsp[(1) - (1)].str)).text);
}
sprintf(tempvar,"%s",((yyvsp[(1) - (1)].str)).text);sprintf(pile[n],"%s",tempvar);n++;
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 254 "syntax.y"
    {test = search(&symbolTable, ((yyvsp[(1) - (4)].str)).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text);}
else{if(strlen(test->type)<8)
   printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text); 
else{struct node *test2;
test2=search(&symbolTable,((yyvsp[(3) - (4)].str)).text);
if(test2==NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree comme INDEX, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text);
}else if(strcmp(test2->type,int_type)!=0){
    printf("Erreur semantique : l'index d'un tableau doit etre de type INTEGER, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(3) - (4)].str)).text);
    } 
}}
        sprintf(tempvar,"%s[%s]",((yyvsp[(1) - (4)].str)).text,((yyvsp[(3) - (4)].str)).text);sprintf(pile[n],"%s",tempvar);n++;
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 269 "syntax.y"
    {sprintf(tempvar,"%s[%d]",((yyvsp[(1) - (4)].str)).text,(yyvsp[(3) - (4)].entier));
    test = search(&symbolTable, ((yyvsp[(1) - (4)].str)).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text);
}else{if(strlen(test->type)<8)
    printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ((yyvsp[(1) - (4)].str)).ligne, ((yyvsp[(1) - (4)].str)).text);
    else{if((yyvsp[(3) - (4)].entier)>=(test->value)){
        printf("Erreur semantique : index hors limite , ligne %-2d , Entite fautive %d\n", ((yyvsp[(1) - (4)].str)).ligne, (yyvsp[(3) - (4)].entier));
    }
    }
}
        sprintf(tempvar,"%s[%d]",((yyvsp[(1) - (4)].str)).text,(yyvsp[(3) - (4)].entier));sprintf(pile[n],"%s",tempvar);n++;
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 282 "syntax.y"
    {
         sprintf(tempvar,"%-10d",(yyvsp[(1) - (1)].entier));sprintf(pile[n],"%s",tempvar);n++;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 284 "syntax.y"
    { sprintf(tempvar,"%-10.5f",(yyvsp[(1) - (1)].reel));sprintf(pile[n],"%s",tempvar);n++;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 285 "syntax.y"
    { sprintf(tempvar,"%-10d",(yyvsp[(1) - (1)].entier));sprintf(pile[n],"%s",tempvar);n++;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 286 "syntax.y"
    { sprintf(tempvar,"%-10.5f",(yyvsp[(1) - (1)].reel));sprintf(pile[n],"%s",tempvar);n++;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 287 "syntax.y"
    {
    sprintf(tempvar,"T%-2d",temp);temp++;quadr("!",pile[n-1]," ",tempvar);
    sprintf(pile[n-1],"%s",tempvar);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 290 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("||",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar); n--;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 292 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("&&",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 294 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr(">",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 296 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr(">=",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 298 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("==",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 300 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("!=",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar); n--;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 302 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("<=",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 304 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("<",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 306 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("+",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 308 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("-",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 310 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("/",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 312 "syntax.y"
    {sprintf(tempvar,"T%-2d",temp);temp++;quadr("*",pile[n-2],pile[n-1],tempvar);
    sprintf(pile[n-2],"%s",tempvar);  n--;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 314 "syntax.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2058 "syntax.tab.c"
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
#line 327 "syntax.y"

main ()
{

initializeHashMap(&symbolTable);
initializeHashMap(&symbolTablemc);
initializeHashMap(&symbolTables);
yyparse();
displaySymbolTable(&symbolTable,"IDF");
displaySymbolTable(&symbolTablemc,"MOT CLE");
displaySymbolTable(&symbolTables,"SEPARATEUR");
afficher_qdr();
}
yywrap()
{}
int yyerror(char *msg)
{   if (erreur==0)
    printf("Erreur syntaxique : ligne %-2d , col %-2d , Entite fautive %s\n",ld,cold,errortext);
    return 1;
}

