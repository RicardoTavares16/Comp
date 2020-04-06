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
#line 1 "jucompiler.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
    #include <string.h>
	#include "node.h"
	#include "y.tab.h"

    extern int yylex(void);
    extern char* yytext;
	extern int line, column;
    void yyerror (const char *s);
	int syntaxError = 0;
	Node* tree;
	Node* aux_node;
	Node* aux_node2;
	Node* aux_node3;

#line 84 "y.tab.c" /* yacc.c:339  */

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
    BOOLLIT = 258,
    AND = 259,
    ASSIGN = 260,
    STAR = 261,
    COMMA = 262,
    DIV = 263,
    EQ = 264,
    GE = 265,
    GT = 266,
    LBRACE = 267,
    LE = 268,
    LPAR = 269,
    LSQ = 270,
    LT = 271,
    MINUS = 272,
    MOD = 273,
    NE = 274,
    NOT = 275,
    OR = 276,
    PLUS = 277,
    RBRACE = 278,
    RPAR = 279,
    RSQ = 280,
    SEMICOLON = 281,
    ARROW = 282,
    LSHIFT = 283,
    RSHIFT = 284,
    XOR = 285,
    BOOL = 286,
    CLASS = 287,
    DOTLENGTH = 288,
    DOUBLE = 289,
    ELSE = 290,
    IF = 291,
    INT = 292,
    PRINT = 293,
    PARSEINT = 294,
    PUBLIC = 295,
    RETURN = 296,
    STATIC = 297,
    STRING = 298,
    VOID = 299,
    WHILE = 300,
    RESERVED = 301,
    ID = 302,
    INTLIT = 303,
    REALLIT = 304,
    STRLIT = 305
  };
#endif
/* Tokens.  */
#define BOOLLIT 258
#define AND 259
#define ASSIGN 260
#define STAR 261
#define COMMA 262
#define DIV 263
#define EQ 264
#define GE 265
#define GT 266
#define LBRACE 267
#define LE 268
#define LPAR 269
#define LSQ 270
#define LT 271
#define MINUS 272
#define MOD 273
#define NE 274
#define NOT 275
#define OR 276
#define PLUS 277
#define RBRACE 278
#define RPAR 279
#define RSQ 280
#define SEMICOLON 281
#define ARROW 282
#define LSHIFT 283
#define RSHIFT 284
#define XOR 285
#define BOOL 286
#define CLASS 287
#define DOTLENGTH 288
#define DOUBLE 289
#define ELSE 290
#define IF 291
#define INT 292
#define PRINT 293
#define PARSEINT 294
#define PUBLIC 295
#define RETURN 296
#define STATIC 297
#define STRING 298
#define VOID 299
#define WHILE 300
#define RESERVED 301
#define ID 302
#define INTLIT 303
#define REALLIT 304
#define STRLIT 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "jucompiler.y" /* yacc.c:355  */

	char* string;
	struct node* node;

#line 229 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   475

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  181

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   131,   138,   145,   146,   152,   164,   167,
     168,   183,   184,   185,   188,   197,   210,   227,   238,   247,
     250,   251,   265,   268,   269,   280,   292,   306,   307,   321,
     322,   323,   324,   325,   326,   327,   328,   331,   332,   336,
     337,   340,   341,   342,   343,   346,   347,   350,   353,   354,
     357,   358,   361,   362,   365,   366,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   399,   400,   403
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLLIT", "AND", "ASSIGN", "STAR",
  "COMMA", "DIV", "EQ", "GE", "GT", "LBRACE", "LE", "LPAR", "LSQ", "LT",
  "MINUS", "MOD", "NE", "NOT", "OR", "PLUS", "RBRACE", "RPAR", "RSQ",
  "SEMICOLON", "ARROW", "LSHIFT", "RSHIFT", "XOR", "BOOL", "CLASS",
  "DOTLENGTH", "DOUBLE", "ELSE", "IF", "INT", "PRINT", "PARSEINT",
  "PUBLIC", "RETURN", "STATIC", "STRING", "VOID", "WHILE", "RESERVED",
  "ID", "INTLIT", "REALLIT", "STRLIT", "$accept", "Program", "SubProgram",
  "FieldDecl", "SubFieldDecl", "Type", "MethodDecl", "MethodHeader",
  "FormalParams", "SubFormalParams", "MethodBody", "SubMethodBody",
  "VarDecl", "SubVarDecl", "Statement", "MultipleStatements", "OptExpr",
  "OptAssignMethodinvoParseargs", "ExprStrlit", "Assignment",
  "MethodInvocation", "ParseArgs", "OptExprCommaExpr", "MultipleCommaExpr",
  "Expr", "OptDotLength", "Empty", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -87

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-87)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,   -25,    21,    14,   -46,    10,    18,    10,     6,    26,
      10,    10,   -46,   -46,   -46,    71,   -46,   -46,   -46,   -46,
     -46,   -46,     7,    38,    40,    43,    13,   -46,   -46,    67,
      41,    67,    34,   -46,   170,   -46,    79,    56,    96,   -46,
     115,    99,   -46,   106,   190,   -46,   129,   131,   133,   216,
     137,     5,   107,   -46,   -46,   130,   -46,   -46,   -46,   -46,
     136,   156,   -46,   -46,   -46,   -46,   190,   142,   140,   216,
     150,     8,   -46,    44,   216,   216,   216,    32,   -46,   -46,
     148,   -46,   -46,   -46,   370,   -46,   216,   216,   138,   168,
     -46,   134,    22,   -46,   -46,   -46,   -46,   262,   -46,   152,
     370,   154,   169,   159,   289,    81,   -46,    81,   -46,   -46,
     -46,   -46,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   316,   370,
     164,   166,   370,   -46,   145,   177,   -46,   -46,   147,   213,
     179,   -46,   216,   -46,   -46,   108,   -46,   -46,   422,   151,
     151,   151,   151,    81,   -46,   422,   397,    81,    78,    78,
     446,   213,   -46,   -46,   188,   -46,   168,   -46,   156,   175,
     -46,   343,   -46,   216,   -46,   -46,   213,   196,   370,   -46,
     -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     6,     8,     5,     0,     2,     4,     3,    11,
      13,    12,     0,     0,     0,     0,    86,    86,    14,    86,
       0,    86,     0,     9,     0,    23,     0,     0,     0,    19,
      86,     0,     7,     0,     0,    22,     0,     0,     0,    86,
       0,     0,     0,    25,    24,     0,    41,    42,    43,    44,
       0,    86,    16,    10,    15,    36,     0,     0,    37,     0,
       0,     0,    81,     0,     0,     0,     0,    86,    80,    82,
       0,    77,    76,    78,    39,    40,     0,     0,     0,    86,
      34,     0,     0,    17,    20,    38,    29,     0,    46,     0,
      45,     0,     0,     0,     0,    72,    73,    74,    84,    79,
      85,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,    86,    53,     0,     0,    27,    18,     0,     0,
       0,    51,     0,    83,    75,    61,    58,    59,    66,    67,
      68,    69,    70,    57,    60,    71,    62,    56,    64,    65,
      63,     0,    49,    48,    52,    54,    86,    26,    86,    31,
      35,     0,    32,     0,    28,    21,     0,     0,    55,    30,
      50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   211,   -46,   172,    -2,   -46,   -46,   192,    59,
     -46,   -46,   -46,    58,   -30,   174,   -46,   -46,   -46,   -32,
     -28,   -27,   -46,   -46,   -45,   -46,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    32,    37,    11,    24,    38,    93,
      28,    34,    53,   135,    66,    67,    80,    55,    99,    81,
      82,    83,   131,   164,    84,   109,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    35,    56,    39,    54,    39,    57,    58,    59,   101,
      87,     6,    56,    23,    33,     1,    57,    58,    68,    88,
      30,     4,     3,    85,    97,   100,     5,    31,   104,   105,
     106,   107,    52,   -86,    56,    94,     7,    87,    57,    58,
      68,   128,   129,   132,    13,   103,    88,    72,    15,    16,
       8,   110,    27,    19,    25,   102,    20,    29,    73,    21,
      42,    74,   133,   136,    75,   108,    76,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,    48,   113,    26,   114,   113,    40,   114,
     138,    77,    78,    79,    60,   120,   121,   171,    19,   121,
     124,    20,    19,    61,    21,    20,   165,    56,    21,   169,
      36,    57,    58,    59,   113,    22,   114,   115,   116,   117,
      62,   118,    30,    64,   119,   120,   121,   122,   178,    56,
     124,   172,    65,    57,    58,    59,   125,   126,   127,   130,
     136,    72,    94,    69,    56,    70,   179,    71,    57,    58,
      59,    86,    73,    72,    89,    74,    90,   113,    75,   114,
      76,    91,   -86,    92,    73,    96,   -44,    74,   120,   121,
      75,    43,    76,   124,   111,   134,   140,    48,   141,   125,
     126,   137,    44,   143,   142,    77,    78,    79,   162,    48,
     163,    43,   166,    45,   168,   173,   -86,    77,    78,    79,
      98,    19,    44,   167,    20,   170,    46,    21,    47,    48,
     176,    49,    63,   -86,    43,    50,   -86,    51,    14,    72,
     180,    17,    18,    41,   174,    44,    46,   175,    47,    48,
      73,    49,     0,    74,     0,    50,    75,    51,    76,   -86,
      95,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    47,    48,     0,    49,    48,     0,     0,    50,     0,
      51,     0,     0,    77,    78,    79,   112,     0,   113,     0,
     114,   115,   116,   117,     0,   118,     0,     0,   119,   120,
     121,   122,     0,   123,   124,     0,   139,     0,     0,     0,
     125,   126,   127,   112,     0,   113,     0,   114,   115,   116,
     117,     0,   118,     0,     0,   119,   120,   121,   122,     0,
     123,   124,     0,   144,     0,     0,     0,   125,   126,   127,
     112,     0,   113,     0,   114,   115,   116,   117,     0,   118,
       0,     0,   119,   120,   121,   122,     0,   123,   124,     0,
     161,     0,     0,     0,   125,   126,   127,   112,     0,   113,
       0,   114,   115,   116,   117,     0,   118,     0,     0,   119,
     120,   121,   122,     0,   123,   124,     0,     0,   177,     0,
       0,   125,   126,   127,   112,     0,   113,     0,   114,   115,
     116,   117,     0,   118,     0,     0,   119,   120,   121,   122,
       0,   123,   124,     0,     0,     0,     0,     0,   125,   126,
     127,   112,     0,   113,     0,   114,   115,   116,   117,     0,
     118,     0,     0,   119,   120,   121,   122,     0,     0,   124,
       0,     0,     0,     0,     0,   125,   126,   127,   113,     0,
     114,   -87,   116,   117,     0,   118,     0,     0,   119,   120,
     121,   -87,     0,     0,   124,     0,     0,     0,     0,     0,
     125,   126,   113,     0,   114,   115,   116,   117,     0,   118,
       0,     0,   119,   120,   121,   122,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   126
};

static const yytype_int16 yycheck[] =
{
      26,    27,    34,    29,    34,    31,    34,    34,    34,     1,
       5,     1,    44,    15,    40,    32,    44,    44,    44,    14,
       7,     0,    47,    49,    69,    70,    12,    14,    73,    74,
      75,    76,    34,    23,    66,    61,    26,     5,    66,    66,
      66,    86,    87,    88,    26,     1,    14,     3,    42,    23,
      40,    77,    12,    31,    47,    47,    34,    14,    14,    37,
      26,    17,    88,    89,    20,    33,    22,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,    39,     6,    47,     8,     6,    47,     8,
      92,    47,    48,    49,    15,    17,    18,   142,    31,    18,
      22,    34,    31,    47,    37,    34,   132,   139,    37,   139,
      43,   139,   139,   139,     6,    44,     8,     9,    10,    11,
      24,    13,     7,    24,    16,    17,    18,    19,   173,   161,
      22,   161,    26,   161,   161,   161,    28,    29,    30,     1,
     166,     3,   168,    14,   176,    14,   176,    14,   176,   176,
     176,    14,    14,     3,    47,    17,    26,     6,    20,     8,
      22,    25,    24,     7,    14,    23,    26,    17,    17,    18,
      20,     1,    22,    22,    26,     7,    24,    39,    24,    28,
      29,    47,    12,    24,    15,    47,    48,    49,    24,    39,
      24,     1,    47,    23,    47,     7,    26,    47,    48,    49,
      50,    31,    12,    26,    34,    26,    36,    37,    38,    39,
      35,    41,    40,    23,     1,    45,    26,    47,     7,     3,
      24,    10,    11,    31,   166,    12,    36,   168,    38,    39,
      14,    41,    -1,    17,    -1,    45,    20,    47,    22,    26,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    38,    39,    -1,    41,    39,    -1,    -1,    45,    -1,
      47,    -1,    -1,    47,    48,    49,     4,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    29,    30,     4,    -1,     6,    -1,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    18,    19,    -1,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    29,    30,
       4,    -1,     6,    -1,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    29,    30,     4,    -1,     6,
      -1,     8,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    25,    -1,
      -1,    28,    29,    30,     4,    -1,     6,    -1,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,     4,    -1,     6,    -1,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,     6,    -1,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      28,    29,     6,    -1,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    52,    47,     0,    12,     1,    26,    40,    53,
      54,    57,    77,    26,    53,    42,    23,    53,    53,    31,
      34,    37,    44,    56,    58,    47,    47,    12,    61,    14,
       7,    14,    55,    77,    62,    77,    43,    56,    59,    77,
      47,    59,    26,     1,    12,    23,    36,    38,    39,    41,
      45,    47,    56,    63,    65,    68,    70,    71,    72,    77,
      15,    47,    24,    55,    24,    26,    65,    66,    77,    14,
      14,    14,     3,    14,    17,    20,    22,    47,    48,    49,
      67,    70,    71,    72,    75,    77,    14,     5,    14,    47,
      26,    25,     7,    60,    77,    66,    23,    75,    50,    69,
      75,     1,    47,     1,    75,    75,    75,    75,    33,    76,
      77,    26,     4,     6,     8,     9,    10,    11,    13,    16,
      17,    18,    19,    21,    22,    28,    29,    30,    75,    75,
       1,    73,    75,    77,     7,    64,    77,    47,    56,    24,
      24,    24,    15,    24,    24,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    24,    24,    24,    74,    77,    47,    26,    47,    65,
      26,    75,    65,     7,    64,    60,    35,    25,    75,    65,
      24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    56,    57,    58,    58,    59,    59,    59,
      60,    60,    61,    62,    62,    62,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    69,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     1,     6,     2,     1,
       3,     1,     1,     1,     4,     5,     5,     3,     4,     1,
       1,     4,     3,     1,     2,     2,     4,     1,     3,     3,
       7,     5,     5,     3,     2,     5,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       7,     4,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     1,     1,     1,     2,
       1,     1,     1,     3,     1,     1,     0
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
#line 120 "jucompiler.y" /* yacc.c:1646  */
    {
		(yyval.node) = tree = createNode(Node_Program);
		aux_node = createNode(Node_Id);
		aux_node->value = (yyvsp[-3].string); 
		insertChild((yyval.node), aux_node);
		if((yyvsp[-1].node) != NULL){
			insertBrother(aux_node, (yyvsp[-1].node));
		}
	}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 132 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[0].node) != NULL){
					insertBrother((yyval.node), (yyvsp[0].node));
				}
			}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 139 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[0].node) != NULL){
					insertBrother((yyval.node), (yyvsp[0].node));
				}
		  	}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 145 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 146 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 153 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_FieldDecl); 
				insertChild((yyval.node), (yyvsp[-3].node));
				aux_node2 = createNode(Node_Id);
				aux_node2->value = (yyvsp[-2].string);
				insertBrother((yyval.node)->child, aux_node2);
				if((yyvsp[-1].node) != NULL){
					insertBrother((yyval.node), (yyvsp[-1].node));
					changeType((yyval.node), (yyvsp[-1].node));
				}
			}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 164 "jucompiler.y" /* yacc.c:1646  */
    { syntaxError = 1;}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 167 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 169 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_FieldDecl);
				aux_node = createNode(Node_Comp);
				insertChild((yyval.node), aux_node);	
				aux_node2 = createNode(Node_Id);
				aux_node2->value = (yyvsp[-1].string);
				if((yyval.node)  != NULL){
					insertBrother((yyval.node)->child, aux_node2);
					insertBrother((yyval.node), (yyvsp[0].node));
				}
			}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 183 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Bool); }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 184 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Int); }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 185 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Double); }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 189 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_MethodDecl);
				insertChild((yyval.node), (yyvsp[-1].node));
				insertBrother((yyval.node)->child, (yyvsp[0].node));
			}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 198 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_MethodHeader);
				insertChild((yyval.node), (yyvsp[-4].node));
				aux_node = createNode(Node_Id);
				aux_node->value = (yyvsp[-3].string);
				insertBrother((yyval.node)->child, aux_node);			
				aux_node3 = createNode(Node_MethodParams);		
				insertBrother((yyval.node)->child->brother, aux_node3);
				if((yyvsp[-1].node) != NULL){
					insertChild((yyval.node)->child->brother->brother, (yyvsp[-1].node));
				}
			}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 211 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_MethodHeader);
				aux_node = createNode(Node_Void);
				insertChild((yyval.node), aux_node);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = (yyvsp[-3].string);
				insertBrother((yyval.node)->child, aux_node2);
				aux_node3 = createNode(Node_MethodParams);
				insertBrother((yyval.node)->child->brother, aux_node3);
				if((yyvsp[-1].node) != NULL){
					insertChild((yyval.node)->child->brother->brother, (yyvsp[-1].node));
				}
			}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 228 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_ParamDecl);
				insertChild((yyval.node), (yyvsp[-2].node));
				aux_node = createNode(Node_Id);
				aux_node->value = (yyvsp[-1].string);
				insertBrother((yyval.node)->child, aux_node);
				if ((yyvsp[0].node) != NULL){
					insertBrother((yyval.node), (yyvsp[0].node));
				}
			}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 239 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_ParamDecl);
				aux_node = createNode(Node_StringArray);
				insertChild((yyval.node), aux_node);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = (yyvsp[0].string);
				insertBrother((yyval.node)->child, aux_node2);
			}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 247 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 250 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 252 "jucompiler.y" /* yacc.c:1646  */
    {
				   	(yyval.node) = createNode(Node_ParamDecl);
					insertChild((yyval.node), (yyvsp[-2].node));
					aux_node = createNode(Node_Id);
					aux_node->value = (yyvsp[-1].string);
					insertBrother((yyval.node)->child, aux_node);
					if((yyvsp[0].node) != NULL){
						insertBrother((yyval.node), (yyvsp[0].node));
					}
			   }
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 265 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 268 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.node) = createNode(Node_MethodBody);}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 270 "jucompiler.y" /* yacc.c:1646  */
    {
				if((yyvsp[0].node) != NULL){
					if((yyval.node)->child == NULL){
						insertChild((yyval.node), (yyvsp[0].node));
					}
					else{
						insertBrother((yyval.node)->child, (yyvsp[0].node));
					}
				}
			 }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 281 "jucompiler.y" /* yacc.c:1646  */
    {
				if((yyval.node)->child == NULL){
				insertChild((yyval.node), (yyvsp[0].node));
				}
				else{
					insertBrother((yyval.node)->child, (yyvsp[0].node));
				}
			 }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 293 "jucompiler.y" /* yacc.c:1646  */
    {
		   	(yyval.node) = createNode(Node_VarDecl);
			insertChild((yyval.node), (yyvsp[-3].node));
			aux_node = createNode(Node_Id);
			aux_node->value = (yyvsp[-2].string);
			insertBrother((yyval.node)->child, aux_node);
			if((yyvsp[-1].node)->child != NULL){
				insertBrother((yyval.node), (yyvsp[-1].node));
				changeType((yyval.node), (yyvsp[-1].node));
			}
	   }
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 306 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_VarDecl); }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 308 "jucompiler.y" /* yacc.c:1646  */
    {
			(yyval.node) = createNode(Node_VarDecl);
			aux_node2 = createNode(Node_Comp);
			insertChild((yyval.node), aux_node2);
			aux_node = createNode(Node_Id);
			aux_node->value = (yyvsp[-1].string);
			insertBrother((yyval.node)->child, aux_node);
			if((yyvsp[0].node)->child != NULL){
				insertBrother((yyval.node), (yyvsp[0].node));
			}
		  }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 321 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 322 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 323 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 324 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 325 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 326 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 327 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 328 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 331 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 332 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 336 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 337 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 340 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 341 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 342 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 343 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 346 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 347 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 350 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 353 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 354 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 357 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 358 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 361 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 362 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 365 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 366 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 369 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 370 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 371 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 372 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 373 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 374 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 375 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 376 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 377 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 378 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 379 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 380 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 381 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 382 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 383 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 384 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 385 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 386 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 387 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 388 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 389 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 390 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 391 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 392 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 393 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 394 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 395 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 396 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 399 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 400 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 403 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2142 "y.tab.c" /* yacc.c:1646  */
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
#line 406 "jucompiler.y" /* yacc.c:1906  */


void yyerror (const char *s){
	printf ("Line %d, col %d: %s: %s\n", line, (int)(column - strlen(yytext)), s, yytext);
}
