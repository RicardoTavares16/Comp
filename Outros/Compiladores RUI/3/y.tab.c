/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "jac.y" /* yacc.c:339  */

    #include <stdio.h>
	#include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"
	#include "header.h"
//	#include "ast.h"
    int yylex(void);
    void yyerror (const char *s);
	extern int num_line;
	extern int num_col;
	extern char *yytext;
	int syn_error = 0;
	Node *tree;
	Node *aux_node;
	Node *aux_node2;
	Node *aux_node3;
	int flag=1;
	int buildingTree=1;

#line 87 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOL = 258,
    CLASS = 259,
    DO = 260,
    DOTLENGTH = 261,
    DOUBLE = 262,
    ELSE = 263,
    IF = 264,
    INT = 265,
    PARSEINT = 266,
    PRINT = 267,
    PUBLIC = 268,
    RETURN = 269,
    STATIC = 270,
    STRING = 271,
    VOID = 272,
    WHILE = 273,
    OCURV = 274,
    CCURV = 275,
    OBRACE = 276,
    CBRACE = 277,
    OSQUARE = 278,
    CSQUARE = 279,
    AND = 280,
    OR = 281,
    LT = 282,
    GT = 283,
    EQ = 284,
    NEQ = 285,
    LEQ = 286,
    GEQ = 287,
    PLUS = 288,
    MINUS = 289,
    STAR = 290,
    DIV = 291,
    MOD = 292,
    NOT = 293,
    ASSIGN = 294,
    SEMI = 295,
    COMMA = 296,
    RESERVED = 297,
    NEWLINE = 298,
    BOOLLIT = 299,
    STRLIT = 300,
    DECLIT = 301,
    REALLIT = 302,
    ID = 303
  };
#endif
/* Tokens.  */
#define BOOL 258
#define CLASS 259
#define DO 260
#define DOTLENGTH 261
#define DOUBLE 262
#define ELSE 263
#define IF 264
#define INT 265
#define PARSEINT 266
#define PRINT 267
#define PUBLIC 268
#define RETURN 269
#define STATIC 270
#define STRING 271
#define VOID 272
#define WHILE 273
#define OCURV 274
#define CCURV 275
#define OBRACE 276
#define CBRACE 277
#define OSQUARE 278
#define CSQUARE 279
#define AND 280
#define OR 281
#define LT 282
#define GT 283
#define EQ 284
#define NEQ 285
#define LEQ 286
#define GEQ 287
#define PLUS 288
#define MINUS 289
#define STAR 290
#define DIV 291
#define MOD 292
#define NOT 293
#define ASSIGN 294
#define SEMI 295
#define COMMA 296
#define RESERVED 297
#define NEWLINE 298
#define BOOLLIT 299
#define STRLIT 300
#define DECLIT 301
#define REALLIT 302
#define ID 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "jac.y" /* yacc.c:355  */

	char * string;
	struct node *node;

#line 228 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 245 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   132,   133,   140,   146,   149,   161,   163,
     187,   190,   197,   211,   226,   231,   240,   251,   255,   273,
     283,   288,   308,   312,   330,   342,   347,   348,   349,   352,
     362,   386,   400,   412,   424,   429,   431,   437,   442,   443,
     455,   456,   461,   462,   463,   464,   467,   468,   471,   481,
     493,   496,   497,   510,   516,   521,   529,   532,   535,   538,
     539,   542,   543,   544,   550,   556,   562,   568,   574,   580,
     586,   592,   598,   604,   610,   616,   622,   627,   632,   637,
     650,   651,   652,   657,   662,   669
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "CLASS", "DO", "DOTLENGTH",
  "DOUBLE", "ELSE", "IF", "INT", "PARSEINT", "PRINT", "PUBLIC", "RETURN",
  "STATIC", "STRING", "VOID", "WHILE", "OCURV", "CCURV", "OBRACE",
  "CBRACE", "OSQUARE", "CSQUARE", "AND", "OR", "LT", "GT", "EQ", "NEQ",
  "LEQ", "GEQ", "PLUS", "MINUS", "STAR", "DIV", "MOD", "NOT", "ASSIGN",
  "SEMI", "COMMA", "RESERVED", "NEWLINE", "BOOLLIT", "STRLIT", "DECLIT",
  "REALLIT", "ID", "$accept", "Program", "SubProgram", "FieldDecl",
  "SubFieldDecl", "MethodDecl", "MethodHeader", "MethodBody",
  "SubMethodBody", "FormalParams", "SubFormalParams", "VarDecl",
  "SubVarDecl", "Type", "Statement", "MultipleStatements", "ExprStrlit",
  "OptAMIPA", "OptExpr", "Assignment", "MethodInvocation",
  "MultipleCommaExpr", "OptExprCommaExprs", "ParseArgs", "OptDotLength",
  "Expr", "Expre", "Empty", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -53

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -23,    34,    23,   -53,    30,     5,    20,    30,    31,
      30,    30,   -53,   -53,   156,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,    12,    42,    21,    54,   -53,   -53,    -8,    74,
     186,   -53,    74,    38,    48,   -53,    55,    62,    45,   -53,
      56,   200,    75,    80,    82,   208,    87,    86,   -53,    -9,
     -53,    63,   -53,    65,   -53,   -53,   -53,   -53,    90,    76,
     -53,    91,   -53,    79,   -53,   105,   208,     7,   191,   108,
     232,   232,   232,   -53,   -53,   -53,    40,    84,   -53,   -53,
     -53,   -53,   256,   -53,   208,    86,   114,    97,    28,   208,
      98,   -53,   -53,   -53,    95,   115,   -53,   -53,   119,   124,
     125,   126,   -53,   127,   -53,   128,   137,    22,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   140,   -53,
     -53,   141,   145,   130,   -53,   -53,   120,   129,   -53,   -53,
     142,   208,   200,   -53,   208,   132,   -53,   -53,   280,   269,
     224,   224,   291,   291,   224,   224,    14,    14,   -53,   -53,
     -53,   200,   -53,   -53,   208,   -53,   -53,    98,   -53,    79,
     147,   180,   168,   -53,   -53,   130,   -53,   -53,   154,   200,
     179,   -53,   -53,   -53,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     3,     8,     0,     6,     2,     4,     5,    26,
      28,    27,     0,     0,     0,     0,    85,    11,    85,    85,
       0,    17,    85,     0,     0,    10,     0,     0,     0,    20,
       0,     0,     0,     0,     0,    85,     0,     0,    14,     0,
      15,     0,    16,     0,    42,    43,    44,    45,     0,    85,
       7,     0,    13,    85,    37,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    83,    84,    85,     0,    59,    61,
      62,    46,    60,    47,     0,     0,     0,    38,     0,     0,
      85,    35,    12,     9,     0,     0,    18,    22,     0,     0,
       0,     0,    41,     0,    40,     0,     0,    85,    76,    77,
      78,    57,    79,    58,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      29,     0,     0,    85,    54,    48,     0,     0,    25,    19,
       0,     0,     0,    56,     0,     0,    81,    80,    63,    64,
      69,    67,    65,    70,    68,    66,    72,    71,    73,    74,
      75,     0,    50,    49,     0,    53,    51,    85,    23,    85,
       0,    31,     0,    34,    32,    85,    24,    21,     0,     0,
       0,    52,    33,    30,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,    57,   -53,   144,   -53,   -53,   -53,   -53,   174,
      44,   -53,    49,     8,   -26,   135,   -53,   -53,   -53,   -29,
     -28,    47,   -53,   -21,   -53,   -52,    59,    -5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    34,    11,    23,    27,    30,    37,
      96,    50,   137,    38,    85,    86,   103,    53,    77,    78,
      79,   165,   132,    80,   112,    81,    82,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    54,    55,    12,    52,    12,    12,     1,   100,    56,
      88,    32,    54,    55,    99,    65,   104,   106,    54,    55,
      56,    31,    24,    35,    39,     3,    56,    39,   111,   131,
      89,     6,   128,    33,     4,    14,   133,   135,    51,    43,
      83,    88,    87,     7,     5,    13,   111,    69,   -85,   125,
     126,   127,   -85,    16,    35,   101,    54,    55,    97,    88,
      25,    70,    71,    26,    56,    15,    72,    17,    18,    28,
       8,   113,    73,    29,    74,    75,    76,    19,    61,    89,
      87,    20,    62,   134,    21,   138,    59,    40,    60,   170,
      36,    41,   172,    63,    66,    42,    64,    43,    44,    67,
      45,    68,   113,   140,    46,    91,    84,    47,   -85,   105,
      92,    90,   175,    54,    55,    94,   171,    33,    19,    43,
      95,    56,    20,    98,   114,    21,   -85,    69,   166,   108,
     109,   110,    54,    55,    49,   174,   130,   -45,   141,   136,
      56,    70,    71,   139,   142,   143,    72,   145,   146,   144,
      54,    55,    73,   183,    74,    75,    76,   147,    56,    19,
     161,   162,   138,    20,    97,   163,    21,   178,   167,   168,
     166,   164,   173,    22,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    40,   179,    19,
     169,    41,   180,    20,   182,    42,    21,    43,    44,   184,
      45,    40,    43,    93,    46,    41,    58,    47,    48,    42,
      69,    43,    44,   177,    45,     0,   176,     0,    46,    43,
     129,    47,   181,     0,    70,    71,   -85,    69,     0,    72,
       0,     0,     0,     0,    49,    73,   102,    74,    75,    76,
     -85,    70,    71,    43,     0,     0,    72,     0,    49,     0,
       0,    69,    73,     0,    74,    75,    76,   123,   124,   125,
     126,   127,     0,     0,     0,    70,    71,     0,     0,     0,
      72,     0,     0,     0,     0,     0,    73,     0,    74,    75,
     107,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   115,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   117,   118,
       0,     0,   121,   122,   123,   124,   125,   126,   127
};

static const yytype_int16 yycheck[] =
{
       5,    30,    30,     8,    30,    10,    11,     4,     1,    30,
      19,    19,    41,    41,    66,    41,    68,    69,    47,    47,
      41,    26,    14,    28,    29,    48,    47,    32,     6,     1,
      39,     1,    84,    41,     0,    15,    88,    89,    30,    11,
      45,    19,    47,    13,    21,    40,     6,    19,    20,    35,
      36,    37,    22,    22,    59,    48,    85,    85,    63,    19,
      48,    33,    34,    21,    85,     8,    38,    10,    11,    48,
      40,    76,    44,    19,    46,    47,    48,     3,    23,    39,
      85,     7,    20,    88,    10,    90,    48,     1,    40,   141,
      16,     5,   144,    48,    19,     9,    40,    11,    12,    19,
      14,    19,   107,    95,    18,    40,    19,    21,    22,     1,
      20,    48,   164,   142,   142,    24,   142,    41,     3,    11,
      41,   142,     7,    18,    40,    10,    40,    19,   133,    70,
      71,    72,   161,   161,    48,   161,    22,    40,    19,    41,
     161,    33,    34,    48,    20,    20,    38,    20,    20,    23,
     179,   179,    44,   179,    46,    47,    48,    20,   179,     3,
      20,    20,   167,     7,   169,    20,    10,    20,    48,    40,
     175,    41,    40,    17,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     1,     8,     3,
      48,     5,    24,     7,    40,     9,    10,    11,    12,    20,
      14,     1,    11,    59,    18,     5,    32,    21,    22,     9,
      19,    11,    12,   169,    14,    -1,   167,    -1,    18,    11,
      85,    21,   175,    -1,    33,    34,    40,    19,    -1,    38,
      -1,    -1,    -1,    -1,    48,    44,    45,    46,    47,    48,
      40,    33,    34,    11,    -1,    -1,    38,    -1,    48,    -1,
      -1,    19,    44,    -1,    46,    47,    48,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      48,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    27,    28,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    50,    48,     0,    21,     1,    13,    40,    51,
      52,    54,    76,    40,    15,    51,    22,    51,    51,     3,
       7,    10,    17,    55,    62,    48,    21,    56,    48,    19,
      57,    76,    19,    41,    53,    76,    16,    58,    62,    76,
       1,     5,     9,    11,    12,    14,    18,    21,    22,    48,
      60,    62,    63,    66,    68,    69,    72,    76,    58,    48,
      40,    23,    20,    48,    40,    63,    19,    19,    19,    19,
      33,    34,    38,    44,    46,    47,    48,    67,    68,    69,
      72,    74,    75,    76,    19,    63,    64,    76,    19,    39,
      48,    40,    20,    53,    24,    41,    59,    76,    18,    74,
       1,    48,    45,    65,    74,     1,    74,    48,    75,    75,
      75,     6,    73,    76,    40,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    74,    64,
      22,     1,    71,    74,    76,    74,    41,    61,    76,    48,
      62,    19,    20,    20,    23,    20,    20,    20,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    20,    20,    20,    41,    70,    76,    48,    40,    48,
      74,    63,    74,    40,    63,    74,    61,    59,    20,     8,
      24,    70,    40,    63,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    52,    52,    53,
      53,    54,    55,    55,    56,    57,    57,    57,    58,    58,
      58,    59,    59,    60,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     2,     2,     2,     6,     2,     3,
       1,     4,     5,     5,     3,     2,     2,     1,     3,     4,
       1,     4,     1,     4,     3,     1,     1,     1,     1,     3,
       7,     5,     5,     7,     5,     2,     3,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       4,     1,     3,     2,     1,     7,     4,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     1,     1,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 119 "jac.y" /* yacc.c:1646  */
    {
	if(buildingTree==1){
		(yyval.node)=tree=create_node(NODE_Program);
		aux_node = create_node(NODE_Id);
		aux_node->value = (yyvsp[-3].string); 
		insert_child((yyval.node),aux_node);
		if((yyvsp[-1].node) != NULL){
			insert_brother(aux_node,(yyvsp[-1].node));
		}
	}
}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 132 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=NULL;}}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 133 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		  	(yyval.node) = (yyvsp[-1].node);
			if((yyvsp[0].node) != NULL){
				insert_brother((yyval.node),(yyvsp[0].node));
			}
		}
}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 140 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		  	(yyval.node) = (yyvsp[-1].node);
			if((yyvsp[0].node) != NULL){
				insert_brother((yyval.node),(yyvsp[0].node));
			}
}}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 146 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 149 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		(yyval.node)= create_node(NODE_FieldDecl); 
		insert_child((yyval.node),(yyvsp[-3].node));
		aux_node2 = create_node(NODE_Id);
		aux_node2->value = (yyvsp[-2].string);
		insert_brother((yyval.node)->child,aux_node2);
		if((yyvsp[-1].node) != NULL){
			insert_brother((yyval.node),(yyvsp[-1].node));
			change_type((yyval.node),(yyvsp[-1].node));
		}
	}
}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 161 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){buildingTree=0;syn_error=1;}}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 163 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			//printf("TIPO: %s",$1->type);
			/*aux_node = create_node(NODE_Comp);
			insert_child($3,aux_node);
			aux_node2 = create_node(NODE_Id);
			aux_node2->value = $2;
			insert_brother($3->child,aux_node2);
			$$ = create_node(NODE_FieldDecl);
			insert_brother($$,$3);
			*/

			(yyval.node) = create_node(NODE_FieldDecl);
			aux_node = create_node(NODE_Comp);
			insert_child((yyval.node),aux_node);	
			aux_node2 = create_node(NODE_Id);
			aux_node2->value = (yyvsp[-1].string);
			if((yyval.node)  != NULL){
				insert_brother((yyval.node)->child,aux_node2);
				insert_brother((yyval.node),(yyvsp[0].node));
			}
		}
			

}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 187 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node) = NULL/*create_node(NODE_FieldDecl)*/;}}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 190 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=create_node(NODE_MethodDecl);
		insert_child((yyval.node),(yyvsp[-1].node));
		insert_brother((yyval.node)->child,(yyvsp[0].node));
	}
}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 197 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node) = create_node(NODE_MethodHeader);
			insert_child((yyval.node),(yyvsp[-4].node));
			aux_node = create_node(NODE_Id);
			aux_node->value = (yyvsp[-3].string);
			insert_brother((yyval.node)->child,aux_node);			
			aux_node3 = create_node(NODE_MethodParams);		
			insert_brother((yyval.node)->child->brother,aux_node3);
			if((yyvsp[-1].node) != NULL){
				insert_child((yyval.node)->child->brother->brother,(yyvsp[-1].node));
			}
		}

			
}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 211 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node) = create_node(NODE_MethodHeader);
			aux_node = create_node(NODE_Void);
			insert_child((yyval.node),aux_node);
			aux_node2 = create_node(NODE_Id);
			aux_node2->value = (yyvsp[-3].string);
			insert_brother((yyval.node)->child,aux_node2);
			aux_node3 = create_node(NODE_MethodParams);
			insert_brother((yyval.node)->child->brother,aux_node3);
			if((yyvsp[-1].node) != NULL){
				insert_child((yyval.node)->child->brother->brother,(yyvsp[-1].node));
			}
		}
}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 226 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			(yyval.node) = (yyvsp[-1].node);}
		}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 231 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			if((yyval.node)->child == NULL){
				insert_child((yyval.node),(yyvsp[0].node));
			}
			else{
				insert_brother((yyval.node)->child,(yyvsp[0].node));
			}
		}
}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 240 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			if((yyvsp[0].node) != NULL){
				if((yyval.node)->child == NULL){
					insert_child((yyval.node),(yyvsp[0].node));
				}
				else{
					insert_brother((yyval.node)->child,(yyvsp[0].node));
				}
			}
		}
}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 251 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node) = create_node(NODE_MethodBody);}}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 255 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			//$$ = create_node(NODE_ParamDecl);
			(yyval.node) = create_node(NODE_ParamDecl);
			insert_child((yyval.node),(yyvsp[-2].node));
			aux_node = create_node(NODE_Id);
			aux_node->value = (yyvsp[-1].string);
			insert_brother((yyval.node)->child,aux_node);
			if ((yyvsp[0].node) != NULL){
				insert_brother((yyval.node),(yyvsp[0].node));
				// insert_child($$,$1);
				// aux_node = create_node(NODE_Id);
				// aux_node->value = $2;
				// insert_brother($$->child,aux_node);
			//insert_brother($$,$3);
			}
		}

}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 273 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    			(yyval.node) = create_node(NODE_ParamDecl);
				aux_node = create_node(NODE_StringArray);
				insert_child((yyval.node),aux_node);
				aux_node2 = create_node(NODE_Id);
				aux_node2->value = (yyvsp[0].string);
				insert_brother((yyval.node)->child,aux_node2);
			}
				
}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 283 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node) = NULL/*create_node(NODE_ParamDecl)*/;}}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 288 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			(yyval.node) = create_node(NODE_ParamDecl);
			insert_child((yyval.node),(yyvsp[-2].node));
			aux_node = create_node(NODE_Id);
			aux_node->value = (yyvsp[-1].string);
			insert_brother((yyval.node)->child,aux_node);
			if((yyvsp[0].node) != NULL){
				insert_brother((yyval.node),(yyvsp[0].node));
			}
			 //   	if($1 != NULL){
				// 	$1 = create_node(NODE_ParamDecl);
				// 	insert_child($1,$3);
				// 	aux_node = create_node(NODE_Id);
				// 	aux_node->value = $4;
				// 	insert_brother($1->child,aux_node);
			 //   		insert_brother($$,$1);
				// }
			}
}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 308 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node) = NULL/*create_node(NODE_ParamDecl)*/;}}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 312 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
				// $$ = $3;
				// insert_brother($3->child,$1);
				// aux_node = create_node(NODE_Id);
				// aux_node->value = $2;
				// insert_brother($$->child,aux_node);
				(yyval.node) = create_node(NODE_VarDecl);
				insert_child((yyval.node),(yyvsp[-3].node));
				aux_node = create_node(NODE_Id);
				aux_node->value = (yyvsp[-2].string);
				insert_brother((yyval.node)->child,aux_node);
				if((yyvsp[-1].node)->child != NULL){
					insert_brother((yyval.node),(yyvsp[-1].node));
					change_type((yyval.node),(yyvsp[-1].node));
				}
			}
}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 330 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
				(yyval.node) = create_node(NODE_VarDecl);
				aux_node2 = create_node(NODE_Comp);
				insert_child((yyval.node),aux_node2);
				aux_node = create_node(NODE_Id);
				aux_node->value = (yyvsp[-1].string);
				insert_brother((yyval.node)->child,aux_node);
				if((yyvsp[0].node)->child != NULL){
					insert_brother((yyval.node),(yyvsp[0].node));
				}
			}
}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 342 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
				(yyval.node) = create_node(NODE_VarDecl);
			}
			}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 347 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=create_node(NODE_Bool);}}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 348 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=create_node(NODE_Int);}}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 349 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=create_node(NODE_Double);}}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 352 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		(yyval.node) = (yyvsp[-1].node);
		if((yyvsp[-1].node) != NULL){
			if((yyvsp[-1].node)->brother != NULL){
				(yyval.node) = create_node(NODE_Block);
				insert_child((yyval.node),(yyvsp[-1].node));
			}
		}
	}
}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 362 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	(yyval.node)=create_node(NODE_If);
		insert_child((yyval.node),(yyvsp[-4].node));
    	if((yyvsp[-2].node)==NULL){
    		insert_brother((yyvsp[-4].node),create_node(NODE_Block));
    	}
    	else{
    		insert_brother((yyvsp[-4].node),(yyvsp[-2].node));
    	}
    	if((yyvsp[0].node)==NULL){
    		insert_brother((yyvsp[-4].node),create_node(NODE_Block));
    	}
    	if((yyvsp[0].node)!=NULL){
    		if((yyvsp[0].node)->brother != NULL){
    			aux_node = create_node(NODE_Block);
    			insert_brother((yyvsp[-4].node),aux_node);
    			insert_child(aux_node,(yyvsp[0].node));
    		}
    		else{
	    		insert_brother((yyvsp[-4].node),(yyvsp[0].node));			
    		}
    	}
    }
}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 386 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	(yyval.node)=create_node(NODE_If);
    	if((yyvsp[0].node)==NULL){
    		insert_child((yyval.node),(yyvsp[-2].node));
    		insert_brother((yyvsp[-2].node),create_node(NODE_Block));
    	}
    	if((yyvsp[0].node)!=NULL){
    		insert_child((yyval.node),(yyvsp[-2].node));
    		insert_brother((yyvsp[-2].node),(yyvsp[0].node));
    	}
    	insert_brother((yyvsp[-2].node),create_node(NODE_Block));
    }

}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 400 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	(yyval.node)=create_node(NODE_While);
    	if((yyvsp[0].node)==NULL){
    		insert_child((yyval.node),(yyvsp[-2].node));
    		insert_brother((yyvsp[-2].node),create_node(NODE_Block));
    	}
    	if((yyvsp[0].node)!=NULL){
    		insert_child((yyval.node),(yyvsp[-2].node));
    		insert_brother((yyvsp[-2].node),(yyvsp[0].node));
    	}
    }
}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 412 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	(yyval.node)=create_node(NODE_DoWhile);
    	if((yyvsp[-5].node)==NULL){
    		insert_child((yyval.node),create_node(NODE_Block));
    		insert_brother((yyval.node)->child,(yyvsp[-2].node));
    	}
    	if((yyvsp[-5].node)!=NULL){
    		insert_child((yyval.node),(yyvsp[-5].node));
    		insert_brother((yyvsp[-5].node),(yyvsp[-2].node));
    	}
    }
}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 424 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		(yyval.node)=create_node(NODE_Print);
		insert_child((yyval.node),(yyvsp[-2].node));
	}
}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 429 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=$1;
    	(yyval.node)=(yyvsp[-1].node);}}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 431 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=$2;
    	(yyval.node)=create_node(NODE_Return);
    	if((yyvsp[-1].node) != NULL){
    		insert_child((yyval.node),(yyvsp[-1].node));
    	}
    }}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 437 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	buildingTree=0;syn_error=1;(yyval.node)=create_node(NODE_Error);}}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 442 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=NULL;}}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 443 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
				  	if((yyvsp[-1].node) == NULL){
				  		(yyval.node)=(yyvsp[0].node);
				  	}
				  	if((yyvsp[-1].node) != NULL){
				  		(yyval.node)=(yyvsp[-1].node);
				  		insert_brother((yyval.node),(yyvsp[0].node));
				  	}
}}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 455 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 456 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		  	(yyval.node)=create_node(NODE_Strlit);
		  	(yyval.node)->value = (yyvsp[0].string);}}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 461 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 462 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 463 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 464 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=NULL;}}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 467 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 468 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=NULL;}}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 471 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		(yyval.node) = create_node(NODE_Assign);
		aux_node = create_node(NODE_Id);
		aux_node->value = (yyvsp[-2].string);
		insert_child((yyval.node),aux_node);
		insert_brother((yyval.node)->child,(yyvsp[0].node));
	}
	}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 481 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			(yyval.node) = create_node(NODE_Call);
			aux_node = create_node(NODE_Id);
			aux_node->value = (yyvsp[-3].string);
			insert_child((yyval.node),aux_node);
			if((yyvsp[-1].node) != NULL){
				if((yyval.node)->child != NULL){
					insert_brother((yyval.node)->child,(yyvsp[-1].node));
				}
			}

}}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 493 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){buildingTree=0;syn_error=1;(yyval.node)=create_node(NODE_Error);}}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 496 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=NULL;}}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 497 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
					if((yyvsp[0].node) != NULL){
						(yyval.node) = (yyvsp[-1].node);
						insert_brother((yyval.node),(yyvsp[0].node));
					}
					if((yyvsp[0].node) == NULL){
						(yyval.node) = (yyvsp[-1].node);
					}
					// $$ = $3;
					// if($1 != NULL){
					// 	insert_brother($$,$1);
}}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 510 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
					(yyval.node)=(yyvsp[-1].node);
					if((yyvsp[0].node) != NULL){
				 		insert_brother((yyval.node),(yyvsp[0].node));
					}
}}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 516 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
					(yyval.node) = NULL;
}}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 521 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){ //Integer.parseInt(ID[Expr])
			(yyval.node) = create_node(NODE_ParseArgs);
			aux_node2 = create_node(NODE_Id);
			aux_node2->value = (yyvsp[-4].string);
			insert_child((yyval.node),aux_node2);
			insert_brother((yyval.node)->child,(yyvsp[-2].node));
		}
}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 529 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){buildingTree=0;syn_error=1;(yyval.node)=create_node(NODE_Error);}}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 532 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
			(yyval.node) = create_node(NODE_Length);
		}}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 535 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=NULL;}}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 538 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 539 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 542 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 543 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[0].node);}}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 544 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_And);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 550 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Or);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 556 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Eq);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 562 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Geq);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 568 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Gt);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 574 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Leq);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 580 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Lt);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 586 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Neq);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 592 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Sub);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 598 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Add);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 604 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Mul);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 610 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Div);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 616 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
    	(yyval.node) = create_node(NODE_Mod);
    	insert_child((yyval.node),(yyvsp[-2].node));
    	insert_brother((yyval.node)->child,(yyvsp[0].node));
    }
}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 622 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	(yyval.node) = create_node(NODE_Plus);
    	insert_child((yyval.node),(yyvsp[0].node));
    }
}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 627 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	(yyval.node) = create_node(NODE_Minus);
    	insert_child((yyval.node),(yyvsp[0].node));
    }
}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 632 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	(yyval.node) = create_node(NODE_Not);
    	insert_child((yyval.node),(yyvsp[0].node));
    }
}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 637 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
    	if((yyvsp[0].node)==NULL){
    		(yyval.node) = create_node(NODE_Id);
    		(yyval.node)->value = (yyvsp[-1].string);
    	}
    	if((yyvsp[0].node) != NULL){
    		(yyval.node) = (yyvsp[0].node);
    		aux_node = create_node(NODE_Id);
    		aux_node->value = (yyvsp[-1].string);
    		insert_child((yyval.node),aux_node);
    	}
    }
}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 650 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){(yyval.node)=(yyvsp[-1].node);}}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 651 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){buildingTree=0;syn_error=1;(yyval.node)=create_node(NODE_Error);}}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 652 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
		(yyval.node) = create_node(NODE_Boolit);
		(yyval.node)->value = (yyvsp[0].string);
	}
}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 657 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){
		(yyval.node) = create_node(NODE_Declit);
		(yyval.node)->value = (yyvsp[0].string);
	}
}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 662 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){//$$=NULL;
		(yyval.node) = create_node(NODE_Reallit);
		(yyval.node)->value = (yyvsp[0].string);
	}
}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 669 "jac.y" /* yacc.c:1646  */
    {if(buildingTree==1){;}}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2390 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 672 "jac.y" /* yacc.c:1906  */


void yyerror (const char *s){
	syn_error++;
	printf ("Line %d, col %d: %s: %s\n",num_line, (int)(num_col- strlen(yytext)), s, yytext);
}


