/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMA = 258,
     ASSIGN = 259,
     OR = 260,
     AND = 261,
     GT = 262,
     GE = 263,
     LE = 264,
     LT = 265,
     NE = 266,
     EQ = 267,
     MINUS = 268,
     PLUS = 269,
     MOD = 270,
     DIV = 271,
     STAR = 272,
     NOT = 273,
     RSQ = 274,
     LSQ = 275,
     RPAR = 276,
     LPAR = 277,
     spec = 278,
     ID = 279,
     INTLIT = 280,
     REALLIT = 281,
     STRLIT = 282,
     PACKAGE = 283,
     SEMICOLON = 284,
     VAR = 285,
     INT = 286,
     FLOAT32 = 287,
     BOOL = 288,
     STRING = 289,
     BLANKID = 290,
     PARSEINT = 291,
     CMDARGS = 292,
     FUNC = 293,
     LBRACE = 294,
     RBRACE = 295,
     PRINT = 296,
     RETURN = 297,
     IF = 298,
     FOR = 299,
     ELSE = 300,
     RESERVED = 301
   };
#endif
/* Tokens.  */
#define COMMA 258
#define ASSIGN 259
#define OR 260
#define AND 261
#define GT 262
#define GE 263
#define LE 264
#define LT 265
#define NE 266
#define EQ 267
#define MINUS 268
#define PLUS 269
#define MOD 270
#define DIV 271
#define STAR 272
#define NOT 273
#define RSQ 274
#define LSQ 275
#define RPAR 276
#define LPAR 277
#define spec 278
#define ID 279
#define INTLIT 280
#define REALLIT 281
#define STRLIT 282
#define PACKAGE 283
#define SEMICOLON 284
#define VAR 285
#define INT 286
#define FLOAT32 287
#define BOOL 288
#define STRING 289
#define BLANKID 290
#define PARSEINT 291
#define CMDARGS 292
#define FUNC 293
#define LBRACE 294
#define RBRACE 295
#define PRINT 296
#define RETURN 297
#define IF 298
#define FOR 299
#define ELSE 300
#define RESERVED 301




/* Copy the first part of user declarations.  */
#line 1 "gocompiler.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include "node.h"
	extern int yylex(void);
	extern char* yytext;
	extern int flag_yacc_error;
	int yyerror(const char *s);
	extern int lines_num,cols_num,yyleng;
	extern int bracket_line,bracket_column,bracket_close,one_time;
	node* root = NULL;
	char type[10];
	#define YYDEBUG 1


 


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "gocompiler.y"
{
    char* s;
    struct Token* token;
    struct node_ast* node;
}
/* Line 193 of yacc.c.  */
#line 212 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 225 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   295

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    16,    18,    21,    27,    31,
      35,    39,    43,    47,    49,    53,    55,    59,    61,    65,
      67,    69,    71,    73,    75,    81,    88,    95,   103,   107,
     112,   114,   118,   122,   126,   129,   131,   135,   139,   145,
     155,   161,   166,   168,   171,   173,   175,   180,   185,   187,
     191,   193,   202,   207,   209,   213,   218,   222,   224,   227,
     229,   233,   237,   241,   245,   249,   253,   257,   261,   265,
     269,   273,   277,   281,   284,   287,   290,   292,   294,   296,
     298,   302,   304,   306
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    28,    24,    29,    49,    -1,    49,    50,
      29,    -1,    49,    57,    29,    -1,    71,    -1,    30,    51,
      -1,    30,    22,    51,    29,    21,    -1,    24,    52,    31,
      -1,    24,    53,    32,    -1,    24,    54,    33,    -1,    24,
      55,    34,    -1,     3,    24,    52,    -1,    71,    -1,     3,
      24,    53,    -1,    71,    -1,     3,    24,    54,    -1,    71,
      -1,     3,    24,    55,    -1,    71,    -1,    31,    -1,    32,
      -1,    33,    -1,    34,    -1,    38,    24,    22,    21,    60,
      -1,    38,    24,    22,    58,    21,    60,    -1,    38,    24,
      22,    21,    56,    60,    -1,    38,    24,    22,    58,    21,
      56,    60,    -1,    24,    56,    59,    -1,     3,    24,    56,
      59,    -1,    71,    -1,    39,    61,    40,    -1,    61,    50,
      29,    -1,    61,    62,    29,    -1,    61,    29,    -1,    71,
      -1,    24,     4,    69,    -1,    39,    63,    40,    -1,    43,
      69,    39,    63,    40,    -1,    43,    69,    39,    63,    40,
      45,    39,    63,    40,    -1,    44,    69,    39,    63,    40,
      -1,    44,    39,    63,    40,    -1,    42,    -1,    42,    69,
      -1,    66,    -1,    64,    -1,    41,    22,    69,    21,    -1,
      41,    22,    27,    21,    -1,     1,    -1,    62,    29,    63,
      -1,    71,    -1,    24,     3,    35,     4,    36,    22,    65,
      21,    -1,    37,    20,    69,    19,    -1,     1,    -1,    24,
      22,    21,    -1,    24,    22,    68,    21,    -1,     3,    69,
      67,    -1,    71,    -1,    69,    67,    -1,     1,    -1,    69,
       5,    69,    -1,    69,     6,    69,    -1,    69,    10,    69,
      -1,    69,     7,    69,    -1,    69,    12,    69,    -1,    69,
      11,    69,    -1,    69,     9,    69,    -1,    69,     8,    69,
      -1,    69,    14,    69,    -1,    69,    13,    69,    -1,    69,
      17,    69,    -1,    69,    16,    69,    -1,    69,    15,    69,
      -1,    18,    69,    -1,    13,    69,    -1,    14,    69,    -1,
      25,    -1,    26,    -1,    24,    -1,    66,    -1,    22,    70,
      21,    -1,    69,    -1,     1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    46,    47,    48,    50,    51,    54,    55,
      56,    57,    59,    60,    62,    63,    65,    66,    68,    69,
      71,    72,    73,    74,    76,    77,    78,    79,    81,    83,
      84,    86,    89,    90,    91,    92,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   108,
     109,   112,   115,   116,   118,   119,   122,   123,   125,   126,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   150,   151,   153
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMA", "ASSIGN", "OR", "AND", "GT",
  "GE", "LE", "LT", "NE", "EQ", "MINUS", "PLUS", "MOD", "DIV", "STAR",
  "NOT", "RSQ", "LSQ", "RPAR", "LPAR", "spec", "ID", "INTLIT", "REALLIT",
  "STRLIT", "PACKAGE", "SEMICOLON", "VAR", "INT", "FLOAT32", "BOOL",
  "STRING", "BLANKID", "PARSEINT", "CMDARGS", "FUNC", "LBRACE", "RBRACE",
  "PRINT", "RETURN", "IF", "FOR", "ELSE", "RESERVED", "$accept", "Program",
  "Declarations", "VarDeclaration", "VarSpec", "HVarSpecInt",
  "HVarSpecFloat", "HVarSpecBool", "HVarSpecString", "Type",
  "FuncDeclaration", "Parameters", "HParameters", "FuncBody",
  "VarsAndStatements", "Statement", "HStatement", "ParseArgs",
  "HParseArgs", "FuncInvocation", "HFuncInvocation", "HFuncInvocation2",
  "Expr", "HExpr", "Vazio", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    50,    50,    51,    51,
      51,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    56,    57,    57,    57,    57,    58,    59,
      59,    60,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     1,     2,     5,     3,     3,
       3,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     5,     6,     6,     7,     3,     4,
       1,     3,     3,     3,     2,     1,     3,     3,     5,     9,
       5,     4,     1,     2,     1,     1,     4,     4,     1,     3,
       1,     8,     4,     1,     3,     4,     3,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     1,     1,     1,     1,
       3,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    83,     2,     5,     0,     0,
       0,     0,     0,    83,     6,     0,     3,     4,     0,     0,
       0,     0,     0,     0,    13,     0,     0,    83,     8,     9,
      10,    11,     0,     0,     0,     7,    12,    14,    16,    18,
      20,    21,    22,    23,    83,     0,    24,    83,     0,     0,
      35,    26,     0,    28,    30,     0,    25,    48,     0,    34,
       0,    31,     0,    42,     0,     0,     0,     0,    45,    44,
       0,    27,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,    78,    76,    77,    79,    43,     0,     0,
       0,    32,    33,    83,     0,    36,    59,    54,     0,    83,
       0,    37,     0,     0,    74,    75,    73,    82,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    55,     0,
      58,    57,    49,    47,    46,    80,    60,    61,    63,    67,
      66,    62,    65,    64,    69,    68,    72,    71,    70,     0,
      41,     0,     0,    83,    38,    40,     0,    56,     0,    53,
       0,     0,     0,     0,    51,     0,     0,    39,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    10,    14,    20,    21,    22,    23,    45,
      11,    34,    53,    46,    49,    75,    76,    68,   161,    86,
     130,    98,    87,   109,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -73
static const yytype_int16 yypact[] =
{
     -23,    -9,    16,    -8,   -73,   -73,   -27,   -73,    46,    -4,
       2,     7,    13,    40,   -73,    28,   -73,   -73,    44,    55,
      50,    53,    54,    59,   131,   -17,    68,    40,   -73,   -73,
     -73,   -73,   119,   259,    71,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,    56,   -73,    93,   119,     5,
     -73,   -73,    76,   -73,   -73,    56,   -73,   -73,    10,   -73,
      77,   -73,    80,   222,   222,    58,    75,    83,   -73,   -73,
     259,   -73,    70,   222,    85,    84,   114,   -73,   207,   222,
     222,   222,   148,   133,   -73,   -73,   -73,   244,   117,    77,
     130,   -73,   -73,    93,   111,   244,   -73,   -73,   136,   187,
      77,   -73,   138,   170,   -73,   -73,   -73,   -73,   244,   139,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,    77,   127,    77,   -73,   132,   -73,   222,
     -73,   -73,   -73,   -73,   -73,   -73,   256,   267,   272,   272,
     272,   272,   272,   272,   211,   211,   -73,   -73,   -73,   149,
     -73,   178,   166,   187,   126,   -73,     1,   -73,   183,   -73,
     203,   209,    77,   222,   -73,   184,   200,   -73,   -73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,   188,   226,   212,   214,   215,   216,    21,
     -73,   -73,   152,   -15,   -73,   245,   -72,   -73,   -73,   -48,
     142,   -73,   -55,   -73,    -5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
       7,    69,   159,     8,    32,     1,    57,    33,    24,    88,
      90,     9,    69,    72,    73,     3,     4,   124,    95,    99,
      15,     5,    24,   103,   104,   105,   106,   108,   132,    58,
      51,    16,    74,    56,    59,     8,    17,    13,   160,    50,
      71,    69,    54,    19,    60,    61,    62,    63,    64,    65,
      25,   149,    69,   151,    47,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    12,    55,
      13,    79,    80,    26,   153,    69,    81,    69,    57,    27,
      82,    28,    83,    84,    85,    29,    96,    30,    54,    35,
     165,    93,    48,    31,   131,    44,    52,    89,    79,    80,
      70,    58,    78,    81,    91,    94,    97,    82,   166,    83,
      84,    85,    92,   100,    69,   127,    60,   -83,    62,    63,
      64,    65,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   131,   107,
      40,    41,    42,    43,   101,    74,   123,   128,    44,   133,
     135,    79,    80,   -15,   -17,   -19,    81,   150,   152,   125,
      82,   158,    83,    84,    85,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   156,   154,
     129,   134,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   155,   168,
      79,    80,   162,   163,   167,    81,   120,   121,   122,    82,
     164,    83,    84,    85,   102,    79,    80,    66,    18,    36,
      81,    37,    38,    39,    82,   126,    83,    84,    85,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   118,   119,   120,   121,   122,
      40,    41,    42,    43,    67,   157
};

static const yytype_uint8 yycheck[] =
{
       5,    49,     1,    30,    21,    28,     1,    24,    13,    64,
      65,    38,    60,     3,     4,    24,     0,    89,    73,    74,
      24,    29,    27,    78,    79,    80,    81,    82,   100,    24,
      45,    29,    22,    48,    29,    30,    29,    24,    37,    44,
      55,    89,    47,     3,    39,    40,    41,    42,    43,    44,
      22,   123,   100,   125,    33,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    22,    48,
      24,    13,    14,    29,   129,   123,    18,   125,     1,    24,
      22,    31,    24,    25,    26,    32,     1,    33,    93,    21,
     162,    70,    21,    34,    99,    39,     3,    39,    13,    14,
      24,    24,    22,    18,    29,    35,    21,    22,   163,    24,
      25,    26,    29,    29,   162,     4,    39,    40,    41,    42,
      43,    44,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   153,     1,
      31,    32,    33,    34,    40,    22,    39,    21,    39,    21,
      21,    13,    14,    32,    33,    34,    18,    40,    36,    39,
      22,    45,    24,    25,    26,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    22,    40,
       3,    21,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    40,    19,
      13,    14,    39,    20,    40,    18,    15,    16,    17,    22,
      21,    24,    25,    26,    27,    13,    14,    49,    12,    27,
      18,    27,    27,    27,    22,    93,    24,    25,    26,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    13,    14,    15,    16,    17,
      31,    32,    33,    34,    49,   153
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    48,    24,     0,    29,    49,    71,    30,    38,
      50,    57,    22,    24,    51,    24,    29,    29,    51,     3,
      52,    53,    54,    55,    71,    22,    29,    24,    31,    32,
      33,    34,    21,    24,    58,    21,    52,    53,    54,    55,
      31,    32,    33,    34,    39,    56,    60,    56,    21,    61,
      71,    60,     3,    59,    71,    56,    60,     1,    24,    29,
      39,    40,    41,    42,    43,    44,    50,    62,    64,    66,
      24,    60,     3,     4,    22,    62,    63,    71,    22,    13,
      14,    18,    22,    24,    25,    26,    66,    69,    69,    39,
      69,    29,    29,    56,    35,    69,     1,    21,    68,    69,
      29,    40,    27,    69,    69,    69,    69,     1,    69,    70,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    39,    63,    39,    59,     4,    21,     3,
      67,    71,    63,    21,    21,    21,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    63,
      40,    63,    36,    69,    40,    40,    22,    67,    45,     1,
      37,    65,    39,    20,    21,    63,    69,    40,    19
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 44 "gocompiler.y"
    {(yyval.node)=add_node("Program");root=(yyval.node);if((yyvsp[(4) - (4)].node)!=NULL){add_son((yyval.node),(yyvsp[(4) - (4)].node));};}
    break;

  case 3:
#line 46 "gocompiler.y"
    {if((yyvsp[(1) - (3)].node)!=NULL){(yyval.node)=(yyvsp[(1) - (3)].node);add_brother((yyval.node),(yyvsp[(2) - (3)].node));}else{(yyval.node)=(yyvsp[(2) - (3)].node);};}
    break;

  case 4:
#line 47 "gocompiler.y"
    {if((yyvsp[(1) - (3)].node)!=NULL){(yyval.node)=(yyvsp[(1) - (3)].node);add_brother((yyval.node),(yyvsp[(2) - (3)].node));}else{(yyval.node)=(yyvsp[(2) - (3)].node);};}
    break;

  case 5:
#line 48 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 6:
#line 50 "gocompiler.y"
    {(yyval.node)=(yyvsp[(2) - (2)].node);}
    break;

  case 7:
#line 51 "gocompiler.y"
    {(yyval.node)=(yyvsp[(3) - (5)].node);}
    break;

  case 8:
#line 54 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node_value("Int",(yyvsp[(3) - (3)].token)));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(1) - (3)].token)));if((yyvsp[(2) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(2) - (3)].node));};}
    break;

  case 9:
#line 55 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node_value("Float32",(yyvsp[(3) - (3)].token)));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(1) - (3)].token)));if((yyvsp[(2) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(2) - (3)].node));};}
    break;

  case 10:
#line 56 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node_value("Bool",(yyvsp[(3) - (3)].token)));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(1) - (3)].token)));if((yyvsp[(2) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(2) - (3)].node));};}
    break;

  case 11:
#line 57 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node_value("String",(yyvsp[(3) - (3)].token)));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(1) - (3)].token)));if((yyvsp[(2) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(2) - (3)].node));};}
    break;

  case 12:
#line 59 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node("Int"));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (3)].token)));if((yyvsp[(3) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(3) - (3)].node));};}
    break;

  case 13:
#line 60 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 14:
#line 62 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node("Float32"));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (3)].token)));if((yyvsp[(3) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(3) - (3)].node));};}
    break;

  case 15:
#line 63 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 16:
#line 65 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node("Bool"));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (3)].token)));if((yyvsp[(3) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(3) - (3)].node));};}
    break;

  case 17:
#line 66 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 18:
#line 68 "gocompiler.y"
    {(yyval.node)=add_node("VarDecl");add_son((yyval.node),add_node("String"));add_brother((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (3)].token)));if((yyvsp[(3) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(3) - (3)].node));};}
    break;

  case 19:
#line 69 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 20:
#line 71 "gocompiler.y"
    {(yyval.node)=add_node_value("Int",(yyvsp[(1) - (1)].token));}
    break;

  case 21:
#line 72 "gocompiler.y"
    {(yyval.node)=add_node_value("Float32",(yyvsp[(1) - (1)].token));}
    break;

  case 22:
#line 73 "gocompiler.y"
    {(yyval.node)=add_node_value("Bool",(yyvsp[(1) - (1)].token));}
    break;

  case 23:
#line 74 "gocompiler.y"
    {(yyval.node)=add_node_value("String",(yyvsp[(1) - (1)].token));}
    break;

  case 24:
#line 76 "gocompiler.y"
    {(yyval.node)=add_node("FuncDecl");add_son((yyval.node),add_node("FuncHeader"));add_son((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (5)].token)));add_brother((yyval.node)->filho->filho,add_node("FuncParams"));add_brother((yyval.node)->filho,(yyvsp[(5) - (5)].node));}
    break;

  case 25:
#line 77 "gocompiler.y"
    {(yyval.node)=add_node("FuncDecl");add_son((yyval.node),add_node("FuncHeader"));add_son((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (6)].token)));add_brother((yyval.node)->filho->filho,(yyvsp[(4) - (6)].node));add_brother((yyval.node)->filho,(yyvsp[(6) - (6)].node));}
    break;

  case 26:
#line 78 "gocompiler.y"
    {(yyval.node)=add_node("FuncDecl");add_son((yyval.node),add_node("FuncHeader"));add_son((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (6)].token)));add_brother((yyval.node)->filho->filho,(yyvsp[(5) - (6)].node));add_brother((yyvsp[(5) - (6)].node),add_node("FuncParams"));add_brother((yyval.node)->filho,(yyvsp[(6) - (6)].node));}
    break;

  case 27:
#line 79 "gocompiler.y"
    {(yyval.node)=add_node("FuncDecl");add_son((yyval.node),add_node("FuncHeader"));add_son((yyval.node)->filho,add_node_value("Id",(yyvsp[(2) - (7)].token)));add_brother((yyval.node)->filho->filho,(yyvsp[(6) - (7)].node));add_brother((yyvsp[(6) - (7)].node),(yyvsp[(4) - (7)].node));add_brother((yyval.node)->filho,(yyvsp[(7) - (7)].node));}
    break;

  case 28:
#line 81 "gocompiler.y"
    {(yyval.node)=add_node("FuncParams");add_son((yyval.node),add_node("ParamDecl"));add_son((yyval.node)->filho,(yyvsp[(2) - (3)].node));add_brother((yyvsp[(2) - (3)].node),add_node_value("Id",(yyvsp[(1) - (3)].token)));if((yyvsp[(3) - (3)].node)!=NULL){add_brother((yyval.node)->filho,(yyvsp[(3) - (3)].node));};}
    break;

  case 29:
#line 83 "gocompiler.y"
    {(yyval.node)=add_node("ParamDecl");add_son((yyval.node),(yyvsp[(3) - (4)].node));add_brother((yyvsp[(3) - (4)].node),add_node_value("Id",(yyvsp[(2) - (4)].token)));if((yyvsp[(4) - (4)].node)!=NULL){add_brother((yyval.node),(yyvsp[(4) - (4)].node));};}
    break;

  case 30:
#line 84 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 31:
#line 86 "gocompiler.y"
    {(yyval.node)=add_node("FuncBody");if((yyvsp[(2) - (3)].node)!=NULL){add_son((yyval.node),(yyvsp[(2) - (3)].node));};}
    break;

  case 32:
#line 89 "gocompiler.y"
    {if((yyvsp[(1) - (3)].node)!=NULL){(yyval.node)=(yyvsp[(1) - (3)].node);add_brother((yyval.node),(yyvsp[(2) - (3)].node));}else{(yyval.node)=(yyvsp[(2) - (3)].node);};}
    break;

  case 33:
#line 90 "gocompiler.y"
    {if((yyvsp[(1) - (3)].node)!=NULL){(yyval.node)=(yyvsp[(1) - (3)].node);if((yyvsp[(2) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(2) - (3)].node));};}else{(yyval.node)=(yyvsp[(2) - (3)].node);};}
    break;

  case 34:
#line 91 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (2)].node);}
    break;

  case 35:
#line 92 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 36:
#line 94 "gocompiler.y"
    {(yyval.node)=add_node_value("Assign",(yyvsp[(2) - (3)].token));add_son((yyval.node),add_node_value("Id",(yyvsp[(1) - (3)].token)));add_brother((yyval.node)->filho,(yyvsp[(3) - (3)].node));}
    break;

  case 37:
#line 95 "gocompiler.y"
    {if((yyvsp[(2) - (3)].node)!=NULL && (yyvsp[(2) - (3)].node)->irmao!=NULL){(yyval.node)=add_node("Block");add_son((yyval.node),(yyvsp[(2) - (3)].node));}else{(yyval.node)=(yyvsp[(2) - (3)].node);}}
    break;

  case 38:
#line 96 "gocompiler.y"
    {(yyval.node)=add_node_value("If",(yyvsp[(1) - (5)].token));if((yyvsp[(2) - (5)].node)!=NULL){add_son((yyval.node),(yyvsp[(2) - (5)].node));add_brother((yyvsp[(2) - (5)].node),add_node("Block"));if((yyvsp[(4) - (5)].node)!=NULL){add_son((yyvsp[(2) - (5)].node)->irmao,(yyvsp[(4) - (5)].node));};add_brother((yyvsp[(2) - (5)].node)->irmao,add_node("Block"));}}
    break;

  case 39:
#line 97 "gocompiler.y"
    {(yyval.node)=add_node_value("If",(yyvsp[(1) - (9)].token));if((yyvsp[(2) - (9)].node)!=NULL){add_son((yyval.node),(yyvsp[(2) - (9)].node));add_brother((yyvsp[(2) - (9)].node),add_node("Block"));if((yyvsp[(4) - (9)].node)!=NULL){add_son((yyvsp[(2) - (9)].node)->irmao,(yyvsp[(4) - (9)].node));};add_brother((yyvsp[(2) - (9)].node)->irmao,add_node("Block"));if((yyvsp[(8) - (9)].node)!=NULL){add_son((yyvsp[(2) - (9)].node)->irmao->irmao,(yyvsp[(8) - (9)].node));};}}
    break;

  case 40:
#line 98 "gocompiler.y"
    {(yyval.node)=add_node_value("For",(yyvsp[(1) - (5)].token));add_son((yyval.node),(yyvsp[(2) - (5)].node));add_brother((yyvsp[(2) - (5)].node),add_node("Block"));if((yyvsp[(4) - (5)].node)!=NULL){add_son((yyvsp[(2) - (5)].node)->irmao,(yyvsp[(4) - (5)].node));};}
    break;

  case 41:
#line 99 "gocompiler.y"
    {(yyval.node)=add_node_value("For",(yyvsp[(1) - (4)].token));add_son((yyval.node),add_node("Block"));if((yyvsp[(3) - (4)].node)!=NULL){add_son((yyval.node)->filho,(yyvsp[(3) - (4)].node));};}
    break;

  case 42:
#line 100 "gocompiler.y"
    {(yyval.node)=add_node_value("Return",(yyvsp[(1) - (1)].token));}
    break;

  case 43:
#line 101 "gocompiler.y"
    {(yyval.node)=add_node_value("Return",(yyvsp[(1) - (2)].token));add_son((yyval.node),(yyvsp[(2) - (2)].node));}
    break;

  case 44:
#line 102 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 45:
#line 103 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 46:
#line 104 "gocompiler.y"
    {(yyval.node)=add_node_value("Print",(yyvsp[(1) - (4)].token));add_son((yyval.node),(yyvsp[(3) - (4)].node));}
    break;

  case 47:
#line 105 "gocompiler.y"
    {(yyval.node)=add_node_value("Print",(yyvsp[(1) - (4)].token));add_son((yyval.node),add_node_value("StrLit",(yyvsp[(3) - (4)].token)));}
    break;

  case 48:
#line 106 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 49:
#line 108 "gocompiler.y"
    {if((yyvsp[(1) - (3)].node)!=NULL){(yyval.node)=(yyvsp[(1) - (3)].node);if((yyvsp[(3) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(3) - (3)].node));};}else{if((yyvsp[(3) - (3)].node)!=NULL){(yyval.node)=(yyvsp[(3) - (3)].node);}else{(yyval.node)=NULL;}}}
    break;

  case 50:
#line 109 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 51:
#line 112 "gocompiler.y"
    {(yyval.node)=add_node_value("ParseArgs",(yyvsp[(5) - (8)].token));add_son((yyval.node),add_node_value("Id",(yyvsp[(1) - (8)].token)));if((yyvsp[(7) - (8)].node)!=NULL){add_brother((yyval.node)->filho,(yyvsp[(7) - (8)].node));}}
    break;

  case 52:
#line 115 "gocompiler.y"
    {(yyval.node)=(yyvsp[(3) - (4)].node);}
    break;

  case 53:
#line 116 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 54:
#line 118 "gocompiler.y"
    {(yyval.node)=add_node("Call");add_son((yyval.node),add_node_value("Id",(yyvsp[(1) - (3)].token)));}
    break;

  case 55:
#line 119 "gocompiler.y"
    {(yyval.node)=add_node("Call");add_son((yyval.node),add_node_value("Id",(yyvsp[(1) - (4)].token)));if((yyvsp[(3) - (4)].node)!=NULL){add_brother((yyval.node)->filho,(yyvsp[(3) - (4)].node));}}
    break;

  case 56:
#line 122 "gocompiler.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);if((yyvsp[(3) - (3)].node)!=NULL){add_brother((yyval.node),(yyvsp[(3) - (3)].node));};}
    break;

  case 57:
#line 123 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 58:
#line 125 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (2)].node);if((yyvsp[(2) - (2)].node)!=NULL){add_brother((yyval.node),(yyvsp[(2) - (2)].node));};}
    break;

  case 59:
#line 126 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 60:
#line 128 "gocompiler.y"
    {(yyval.node)=add_node_value("Or",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 61:
#line 129 "gocompiler.y"
    {(yyval.node)=add_node_value("And",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 62:
#line 130 "gocompiler.y"
    {(yyval.node)=add_node_value("Lt",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 63:
#line 131 "gocompiler.y"
    {(yyval.node)=add_node_value("Gt",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 64:
#line 132 "gocompiler.y"
    {(yyval.node)=add_node_value("Eq",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 65:
#line 133 "gocompiler.y"
    {(yyval.node)=add_node_value("Ne",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 66:
#line 134 "gocompiler.y"
    {(yyval.node)=add_node_value("Le",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 67:
#line 135 "gocompiler.y"
    {(yyval.node)=add_node_value("Ge",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 68:
#line 136 "gocompiler.y"
    {(yyval.node)=add_node_value("Add",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 69:
#line 137 "gocompiler.y"
    {(yyval.node)=add_node_value("Sub",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 70:
#line 138 "gocompiler.y"
    {(yyval.node)=add_node_value("Mul",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 71:
#line 139 "gocompiler.y"
    {(yyval.node)=add_node_value("Div",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 72:
#line 140 "gocompiler.y"
    {(yyval.node)=add_node_value("Mod",(yyvsp[(2) - (3)].token));add_son((yyval.node),(yyvsp[(1) - (3)].node));add_brother((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 73:
#line 141 "gocompiler.y"
    {(yyval.node)=add_node_value("Not",(yyvsp[(1) - (2)].token));add_son((yyval.node),(yyvsp[(2) - (2)].node));}
    break;

  case 74:
#line 142 "gocompiler.y"
    {(yyval.node)=add_node_value("Minus",(yyvsp[(1) - (2)].token));add_son((yyval.node),(yyvsp[(2) - (2)].node));}
    break;

  case 75:
#line 143 "gocompiler.y"
    {(yyval.node)=add_node_value("Plus",(yyvsp[(1) - (2)].token));add_son((yyval.node),(yyvsp[(2) - (2)].node));}
    break;

  case 76:
#line 144 "gocompiler.y"
    {(yyval.node)=add_node_value("IntLit",(yyvsp[(1) - (1)].token));}
    break;

  case 77:
#line 145 "gocompiler.y"
    {(yyval.node)=add_node_value("RealLit",(yyvsp[(1) - (1)].token));}
    break;

  case 78:
#line 146 "gocompiler.y"
    {(yyval.node)=add_node_value("Id",(yyvsp[(1) - (1)].token));}
    break;

  case 79:
#line 147 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 80:
#line 148 "gocompiler.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);}
    break;

  case 81:
#line 150 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 82:
#line 151 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 83:
#line 153 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;


/* Line 1267 of yacc.c.  */
#line 2005 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 154 "gocompiler.y"



int yyerror(const char *s){
	flag_yacc_error=1;
	if(bracket_close!=0){
		if(one_time==1){
			if(bracket_close==1){
				printf("Line %d, column %d: %s: %s\n",++bracket_line,1,s,yytext);
				one_time=0;
			}
				else{
					printf("Line %d, column %d: %s: %s\n",bracket_line,(bracket_column-yyleng)+1,s,yytext);
					one_time=0;
			}
		}
		else{
			printf("Line %d, column %d: %s: %s\n",lines_num,cols_num-yyleng,s,yytext);
		}
	}
	else{
		printf("Line %d, column %d: %s: %s\n",lines_num,cols_num-yyleng,s,yytext);
	}
	return 0;
}

