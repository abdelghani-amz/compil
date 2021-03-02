
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
#line 1 "syntaxique.y"

	#include <stdio.h>
	char sauvType[25];
	char sauvOP[25];
	char sauvCst[25];
	char sauvIdf1[25];
	char sauvIdf[2][10] = {};
	char sauvidftab[25];
	int nb_ligne = 1;
	int col = 1;
	int choice;


/* Line 189 of yacc.c  */
#line 87 "syntaxique.tab.c"

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
     mc_pgm = 258,
     mc_integer = 259,
     mc_real = 260,
     mc_string = 261,
     mc_char = 262,
     mc_process = 263,
     mc_loop = 264,
     mc_array = 265,
     mc_var = 266,
     mc_const = 267,
     mc_eg = 268,
     mc_sup = 269,
     mc_supe = 270,
     mc_diff = 271,
     mc_infe = 272,
     mc_inf = 273,
     division = 274,
     addition = 275,
     substraction = 276,
     multi = 277,
     idf = 278,
     idftab = 279,
     cstInt = 280,
     cstReal = 281,
     car = 282,
     chaine = 283,
     dz = 284,
     dpts = 285,
     egality = 286,
     aff = 287,
     acc_o = 288,
     acc_f = 289,
     cro_o = 290,
     cro_f = 291,
     fin = 292,
     sep = 293,
     read = 294,
     write = 295,
     dots = 296,
     s_real = 297,
     s_string = 298,
     s_char = 299,
     par_o = 300,
     par_f = 301,
     text = 302,
     address = 303,
     separator = 304,
     exe = 305,
     mc_if = 306,
     mc_while = 307,
     end = 308,
     mc_else = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "syntaxique.y"
 
   int entier; 
   char* str;
   char chaine;
   char car;
   float real;



/* Line 214 of yacc.c  */
#line 187 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "syntaxique.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  194

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
       0,     0,     3,    11,    14,    15,    19,    21,    23,    25,
      30,    35,    38,    41,    43,    45,    47,    49,    52,    54,
      59,    64,    69,    74,    80,    84,    90,    94,   100,   104,
     110,   114,   117,   119,   124,   128,   130,   134,   136,   138,
     140,   142,   144,   147,   148,   150,   152,   154,   156,   158,
     160,   165,   170,   175,   182,   186,   189,   192,   193,   199,
     205,   211,   217,   223,   229,   233,   237,   241,   245,   249,
     251,   253,   257,   259,   261,   263,   265,   276,   283,   287,
     290,   292,   294,   296,   298,   304,   313,   319,   325,   331,
     337,   339,   341,   343,   345,   347,   349
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,     3,    23,    33,    60,    73,    34,
      -1,    58,    57,    -1,    -1,    29,    59,    37,    -1,     9,
      -1,     8,    -1,    10,    -1,    11,    69,    12,    63,    -1,
      12,    63,    11,    69,    -1,    11,    69,    -1,    12,    63,
      -1,    25,    -1,    26,    -1,    23,    -1,    24,    -1,    64,
      63,    -1,    64,    -1,     7,    30,    65,    37,    -1,     6,
      30,    66,    37,    -1,     5,    30,    67,    37,    -1,     4,
      30,    68,    37,    -1,    23,    31,    27,    38,    66,    -1,
      23,    31,    27,    -1,    23,    31,    28,    38,    66,    -1,
      23,    31,    28,    -1,    23,    31,    26,    38,    67,    -1,
      23,    31,    26,    -1,    23,    31,    25,    38,    68,    -1,
      23,    31,    25,    -1,    70,    69,    -1,    70,    -1,    72,
      30,    71,    37,    -1,    23,    38,    71,    -1,    23,    -1,
      24,    38,    71,    -1,    24,    -1,     7,    -1,     6,    -1,
       5,    -1,     4,    -1,    74,    73,    -1,    -1,    75,    -1,
      76,    -1,    81,    -1,    82,    -1,    85,    -1,    88,    -1,
      62,    32,    61,    37,    -1,    62,    32,    23,    37,    -1,
      62,    32,    24,    37,    -1,    62,    32,    45,    62,    46,
      37,    -1,    62,    32,    76,    -1,    78,    37,    -1,    77,
      37,    -1,    -1,    45,    78,    46,    80,    78,    -1,    45,
      78,    46,    80,    79,    -1,    45,    78,    46,    80,    77,
      -1,    45,    77,    46,    80,    79,    -1,    45,    77,    46,
      79,    78,    -1,    45,    77,    46,    80,    78,    -1,    45,
      78,    46,    -1,    45,    77,    46,    -1,    79,    80,    79,
      -1,    79,    80,    77,    -1,    79,    80,    78,    -1,    61,
      -1,    62,    -1,    45,    62,    46,    -1,    20,    -1,    19,
      -1,    21,    -1,    22,    -1,    39,    45,    41,    84,    41,
      49,    48,    23,    46,    37,    -1,    40,    45,    28,    83,
      46,    37,    -1,    49,    23,    83,    -1,    49,    23,    -1,
      37,    -1,    42,    -1,    43,    -1,    44,    -1,    50,    73,
      51,    86,    53,    -1,    50,    73,    51,    86,    54,    50,
      73,    53,    -1,    45,    76,    87,    76,    46,    -1,    45,
      79,    87,    76,    46,    -1,    45,    76,    87,    79,    46,
      -1,    45,    79,    87,    79,    46,    -1,    18,    -1,    17,
      -1,    14,    -1,    15,    -1,    16,    -1,    13,    -1,    52,
      86,    33,    73,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    28,    29,    36,    38,    39,    40,    43,
      44,    45,    46,    50,    50,    53,    60,    69,    70,    73,
      74,    75,    76,    79,    80,    83,    84,    87,    97,   109,
     118,   130,   131,   134,   136,   140,   144,   148,   154,   155,
     156,   157,   160,   161,   164,   165,   166,   167,   168,   169,
     174,   180,   186,   192,   199,   205,   206,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   223,   238,   239,   243,
     244,   248,   254,   255,   256,   257,   261,   264,   268,   269,
     272,   273,   274,   275,   278,   279,   282,   283,   284,   285,
     288,   289,   290,   291,   292,   293,   296
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_pgm", "mc_integer", "mc_real",
  "mc_string", "mc_char", "mc_process", "mc_loop", "mc_array", "mc_var",
  "mc_const", "mc_eg", "mc_sup", "mc_supe", "mc_diff", "mc_infe", "mc_inf",
  "division", "addition", "substraction", "multi", "idf", "idftab",
  "cstInt", "cstReal", "car", "chaine", "dz", "dpts", "egality", "aff",
  "acc_o", "acc_f", "cro_o", "cro_f", "fin", "sep", "read", "write",
  "dots", "s_real", "s_string", "s_char", "par_o", "par_f", "text",
  "address", "separator", "exe", "mc_if", "mc_while", "end", "mc_else",
  "$accept", "S", "LIST_BIB", "BIB", "NAME_BIB", "DECLARATION", "CST",
  "IDF", "LIST_DEC_CONST", "DEC_CST", "LIST_IDF_CST_CHAR",
  "LIST_IDF_CST_STR", "LIST_IDF_CST_REAL", "LIST_IDF_CST_INT", "LIST_DEC",
  "DEC", "LIST_IDF", "TYPE", "INSTS", "INST", "INST_AFF", "INST_ARITH",
  "EXPRESSION_PAR", "EXPRESSION", "OPERAND", "OPERATION", "INPUT",
  "OUTPUT", "LIST_OUT_IDF", "SIGNS", "IF_STATEMENT", "CONDITION", "LOGIC",
  "LOOP", 0
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
       0,    55,    56,    57,    57,    58,    59,    59,    59,    60,
      60,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    71,    71,    71,    71,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    79,
      79,    79,    80,    80,    80,    80,    81,    82,    83,    83,
      84,    84,    84,    84,    85,    85,    86,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     0,     3,     1,     1,     1,     4,
       4,     2,     2,     1,     1,     1,     1,     2,     1,     4,
       4,     4,     4,     5,     3,     5,     3,     5,     3,     5,
       3,     2,     1,     4,     3,     1,     3,     1,     1,     1,
       1,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     6,     3,     2,     2,     0,     5,     5,
       5,     5,     5,     5,     3,     3,     3,     3,     3,     1,
       1,     3,     1,     1,     1,     1,    10,     6,     3,     2,
       1,     1,     1,     1,     5,     8,     5,     5,     5,     5,
       1,     1,     1,     1,     1,     1,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     4,     7,     6,     8,     0,     1,
       0,     3,     5,     0,     0,     0,     0,    43,    41,    40,
      39,    38,    11,    32,     0,     0,     0,     0,     0,    12,
      18,    15,    16,    13,    14,     0,     0,    57,    43,     0,
      69,    70,     0,    43,    44,    45,     0,     0,     0,    46,
      47,    48,    49,     0,    31,     0,     0,     0,     0,     0,
       0,    17,     0,     0,    70,     0,     0,     0,    57,     0,
      57,     2,    42,    56,    55,    73,    72,    74,    75,    57,
       9,    35,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,    71,    65,    64,     0,    70,
       0,     0,    43,    15,    16,    57,    69,    54,    67,    68,
      66,     0,     0,    33,     0,    22,     0,    21,     0,    20,
       0,    19,    80,    81,    82,    83,     0,     0,     0,     0,
       0,     0,    57,     0,    95,    92,    93,    94,    91,    90,
      57,    57,     0,    51,    52,    70,    50,    34,    36,    30,
      28,    26,    24,     0,    79,     0,     0,    62,    63,    61,
      60,    58,    59,    84,     0,     0,     0,     0,     0,    96,
      71,     0,     0,     0,     0,     0,    78,    77,    43,    86,
      88,    87,    89,    53,    29,    27,    25,    23,     0,     0,
       0,    85,     0,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    17,    40,    99,    29,    30,
      91,    89,    87,    85,    22,    23,    83,    24,    42,    43,
      44,    45,    46,    47,    48,    79,    49,    50,   128,   126,
      51,    69,   140,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -88
static const yytype_int16 yypact[] =
{
     -19,    14,    60,    36,   -19,   -88,   -88,   -88,     4,   -88,
      43,   -88,   -88,    42,    18,   119,   123,   -12,   -88,   -88,
     -88,   -88,    52,   119,    63,    72,    80,   109,   110,   131,
     123,   -88,   -88,   -88,   -88,    98,    99,    33,   -12,   101,
     -88,    37,   111,   -12,   -88,   -88,   113,   114,   112,   -88,
     -88,   -88,   -88,   123,   -88,    31,   124,   125,   126,   129,
     119,   -88,   115,   127,   107,   108,   116,   106,    33,   130,
      58,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    33,
     -88,   120,   121,   128,   133,   132,   135,   134,   136,   137,
     139,   138,   -88,    57,   140,   -88,    27,   112,   101,   -88,
      91,   100,   -12,   141,   142,    33,   143,   -88,   -88,   -88,
     112,    31,    31,   -88,   147,   -88,   150,   -88,   145,   -88,
     154,   -88,   -88,   -88,   -88,   -88,   144,   159,   122,    39,
      66,    66,    33,    20,   -88,   -88,   -88,   -88,   -88,   -88,
      33,    33,   149,   -88,   -88,   146,   -88,   -88,   -88,   148,
     152,   153,   155,   151,   140,   157,   107,   -88,   -88,   112,
     -88,   -88,   112,   -88,   156,   158,    -3,   161,    15,   -88,
     160,   124,   125,   126,   126,   162,   -88,   -88,   -12,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   164,   163,
     165,   -88,   166,   -88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   173,   -88,   -88,   -88,    90,   -17,   -22,   -88,
     -88,   -87,    12,    17,   -18,   -88,    24,   -88,   -37,   -88,
     -88,   -61,   -34,   -35,   -64,    41,   -88,   -88,    44,   -88,
     -88,    97,    95,   -88
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -58
static const yytype_int16 yytable[] =
{
      41,    67,    66,    65,   101,    54,    72,   100,    61,   107,
       1,    31,    32,    33,    34,   110,    75,    76,    77,    78,
      64,    41,     5,     6,     7,   -57,    41,    35,    36,    15,
      16,    80,   130,    37,    75,    76,    77,    78,    38,    10,
      39,    12,    92,   180,   109,   108,    75,    76,    77,    78,
      31,    32,    33,    34,    81,    82,    31,    32,    33,    34,
       9,   182,    31,    32,    53,   142,    13,   159,   162,    70,
      66,    65,   129,   163,   164,    14,   166,   168,    37,   165,
     167,   103,   104,    33,    34,    41,   186,   187,   145,    31,
      32,    33,    34,    55,   122,   157,   158,   161,   160,   123,
     124,   125,    56,   105,   134,   135,   136,   137,   138,   139,
      57,   129,   156,   134,   135,   136,   137,   138,   139,    75,
      76,    77,    78,    18,    19,    20,    21,    25,    26,    27,
      28,    75,    76,    77,    78,   147,   148,   131,   132,    58,
      59,   189,    60,    62,    63,    71,    68,    84,    86,    88,
      73,    74,    90,    95,    96,    94,    93,    98,   111,   112,
     106,    41,    97,   102,   114,   113,   116,   118,   155,   115,
     120,   117,   149,   151,   119,   121,   150,    11,   143,   144,
     146,   152,   154,   169,   185,   153,   171,   190,   184,   127,
     172,   173,   170,   174,   177,   133,   141,   183,   176,     0,
     175,     0,     0,   193,   179,     0,   178,   181,     0,     0,
     188,   192,     0,     0,     0,     0,   191
};

static const yytype_int16 yycheck[] =
{
      17,    38,    37,    37,    68,    23,    43,    68,    30,    70,
      29,    23,    24,    25,    26,    79,    19,    20,    21,    22,
      37,    38,     8,     9,    10,    37,    43,    39,    40,    11,
      12,    53,    96,    45,    19,    20,    21,    22,    50,     3,
      52,    37,    60,    46,    79,    79,    19,    20,    21,    22,
      23,    24,    25,    26,    23,    24,    23,    24,    25,    26,
       0,    46,    23,    24,    12,   102,    23,   131,   132,    32,
     105,   105,    45,    53,    54,    33,   140,   141,    45,   140,
     141,    23,    24,    25,    26,   102,   173,   174,   105,    23,
      24,    25,    26,    30,    37,   130,   131,   132,   132,    42,
      43,    44,    30,    45,    13,    14,    15,    16,    17,    18,
      30,    45,   129,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     4,     5,     6,     7,     4,     5,     6,
       7,    19,    20,    21,    22,   111,   112,    96,    97,    30,
      30,   178,    11,    45,    45,    34,    45,    23,    23,    23,
      37,    37,    23,    46,    46,    28,    41,    51,    38,    38,
      70,   178,    46,    33,    31,    37,    31,    31,    46,    37,
      31,    37,    25,    28,    37,    37,    26,     4,    37,    37,
      37,    27,    23,    34,   172,    41,    38,    23,   171,    49,
      38,    38,    46,    38,    37,    98,   101,    37,   154,    -1,
      49,    -1,    -1,    37,    46,    -1,    50,    46,    -1,    -1,
      48,    46,    -1,    -1,    -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    56,    57,    58,     8,     9,    10,    59,     0,
       3,    57,    37,    23,    33,    11,    12,    60,     4,     5,
       6,     7,    69,    70,    72,     4,     5,     6,     7,    63,
      64,    23,    24,    25,    26,    39,    40,    45,    50,    52,
      61,    62,    73,    74,    75,    76,    77,    78,    79,    81,
      82,    85,    88,    12,    69,    30,    30,    30,    30,    30,
      11,    63,    45,    45,    62,    77,    78,    73,    45,    86,
      32,    34,    73,    37,    37,    19,    20,    21,    22,    80,
      63,    23,    24,    71,    23,    68,    23,    67,    23,    66,
      23,    65,    69,    41,    28,    46,    46,    46,    51,    62,
      76,    79,    33,    23,    24,    45,    61,    76,    77,    78,
      79,    38,    38,    37,    31,    37,    31,    37,    31,    37,
      31,    37,    37,    42,    43,    44,    84,    49,    83,    45,
      79,    80,    80,    86,    13,    14,    15,    16,    17,    18,
      87,    87,    73,    37,    37,    62,    37,    71,    71,    25,
      26,    28,    27,    41,    23,    46,    62,    78,    78,    79,
      77,    78,    79,    53,    54,    76,    79,    76,    79,    34,
      46,    38,    38,    38,    38,    49,    83,    37,    50,    46,
      46,    46,    46,    37,    68,    67,    66,    66,    48,    73,
      23,    53,    46,    37
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
#line 26 "syntaxique.y"
    {printf("Programme syntaxiquement correct"); YYACCEPT;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 50 "syntaxique.y"
    { sprintf(sauvCst, "%d", (yyvsp[(1) - (1)].entier)); strcpy(sauvType,"entier");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 50 "syntaxique.y"
    { sprintf(sauvCst, "%f", (yyvsp[(1) - (1)].real)); strcpy(sauvType,"real");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 53 "syntaxique.y"
    {   
   			  if(doubleDeclaration((yyvsp[(1) - (1)].str))==0) 
			  printf("Erreur semantique: %s variable non declaree a la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);   
			  else
			   {strcpy(sauvIdf1,(yyvsp[(1) - (1)].str));
			   if  (strcmp(sauvIdf[0],"") == 0) strcpy(sauvIdf[0],(yyvsp[(1) - (1)].str));
    					else strcpy(sauvIdf[1],(yyvsp[(1) - (1)].str)); }   ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 60 "syntaxique.y"
    { 
			  if(doubleDeclaration((yyvsp[(1) - (1)].str))==0) 
			  printf("Erreur semantique: %s variable non declaree a la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);   
			  else
			   {strcmp(sauvIdf1,(yyvsp[(1) - (1)].str));
			   if  (strcmp(sauvIdf[0],"") == 0) strcpy(sauvIdf[0],(yyvsp[(1) - (1)].str));
    					else strcpy(sauvIdf[1],(yyvsp[(1) - (1)].str)); } ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 87 "syntaxique.y"
    {
					if(doubleDeclaration((yyvsp[(1) - (5)].str))==0)   
								    { 
   									    insererTYPE((yyvsp[(1) - (5)].str),"real");
										printf(" this is a float in syntaxic %f \n",(yyvsp[(3) - (5)].real));
										insertReal((yyvsp[(1) - (5)].str),atof((yyvsp[(3) - (5)].real)));
								    }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",(yyvsp[(1) - (5)].str),nb_ligne, col);
							  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 97 "syntaxique.y"
    {
		if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
								     { 
										printf("this is a float in syntaxic %f \n", (yyvsp[(3) - (3)].real));
   									    insererTYPE((yyvsp[(1) - (3)].str),"real");
										insertReal((yyvsp[(1) - (3)].str),atof((yyvsp[(3) - (3)].real)));
								     }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",(yyvsp[(1) - (3)].str),nb_ligne, col);
							  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 109 "syntaxique.y"
    { 
		                        if(doubleDeclaration((yyvsp[(1) - (5)].str))==0)   
								    { 
   									    insererTYPE((yyvsp[(1) - (5)].str),"entier");
										insertValEntiere((yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].entier));
								    }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",(yyvsp[(1) - (5)].str),nb_ligne, col);
							  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 118 "syntaxique.y"
    { 
		                        if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)   
								    { 
   									    insererTYPE((yyvsp[(1) - (3)].str),"entier");  
										insertValEntiere((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].entier));
								    }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",(yyvsp[(1) - (3)].str),nb_ligne, col);
							  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 136 "syntaxique.y"
    { if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)   { insererTYPE((yyvsp[(1) - (3)].str),sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,col);
							  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 140 "syntaxique.y"
    { if(doubleDeclaration((yyvsp[(1) - (1)].str))==0)   { insererTYPE((yyvsp[(1) - (1)].str),sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (1)].str),nb_ligne,col);
							  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 144 "syntaxique.y"
    { if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)   { insererTYPE((yyvsp[(1) - (3)].str),sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,col);
							  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 148 "syntaxique.y"
    { if(doubleDeclaration((yyvsp[(1) - (1)].str))==0)   { insererTYPE((yyvsp[(1) - (1)].str),sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (1)].str),nb_ligne,col);
							  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 154 "syntaxique.y"
    {strcpy(sauvType,"car");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 155 "syntaxique.y"
    {strcpy(sauvType,"chaine");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 156 "syntaxique.y"
    {strcpy(sauvType,"real");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 157 "syntaxique.y"
    {strcpy(sauvType,"entier"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 174 "syntaxique.y"
    {
							if(CompatibleType(sauvIdf1,sauvCst) == 1) {
							insertValEntiere(sauvIdf1,GetValue(sauvCst)) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 180 "syntaxique.y"
    {	
		 					if(CompatibleType(sauvIdf1,(yyvsp[(3) - (4)].str)) == 1) {
							insertValEntiere(sauvIdf1,GetValue((yyvsp[(3) - (4)].str))) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 186 "syntaxique.y"
    {
		 					if(CompatibleType(sauvIdf1,(yyvsp[(3) - (4)].str)) == 1) {
							insertValEntiere(sauvIdf1,GetValue((yyvsp[(3) - (4)].str))) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 192 "syntaxique.y"
    {
		 					if(CompatibleType(sauvIdf[0],sauvIdf[1]) == 1) {
							insertValEntiere(sauvIdf[0],GetValue(sauvIdf[1])) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 223 "syntaxique.y"
    {
				if(strcmp(sauvOP,"/") == 0){
					if(choice == 0) {
						if(GetValue(sauvCst) == 0)
						printf ("Erreur semantique division par 0 à la ligne %d et a la colonne %d \n",nb_ligne,col); 
					}

					else {
						if(GetValue(sauvIdf1) == 0)
						printf ("Erreur semantique division par 0 à la ligne %d et a la colonne %d \n",nb_ligne,col);
					}
				}
			;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 243 "syntaxique.y"
    {choice = 0;;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 244 "syntaxique.y"
    {
			choice = 1;
			strcpy(sauvIdf[0],"");
		;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 248 "syntaxique.y"
    {
		  choice =1;
		  strcpy(sauvIdf[0],"");
		;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 254 "syntaxique.y"
    {strcpy(sauvOP,"+");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 255 "syntaxique.y"
    {strcpy(sauvOP,"/");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 256 "syntaxique.y"
    {strcpy(sauvOP,"-");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 257 "syntaxique.y"
    {strcpy(sauvOP,"*");;}
    break;



/* Line 1455 of yacc.c  */
#line 1874 "syntaxique.tab.c"
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
#line 302 "syntaxique.y"

main()
{
  initialisation();
  yyparse();
  afficher();
}
yywrap()
{} 

yyerror (char*msg)
{
	printf("Erreur Syntaxique \nline : %d || colonne : %d\n ", nb_ligne, col);
}


