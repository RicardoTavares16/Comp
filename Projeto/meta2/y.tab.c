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
    AND = 258,
    ASSIGN = 259,
    STAR = 260,
    COMMA = 261,
    DIV = 262,
    EQ = 263,
    GE = 264,
    GT = 265,
    LBRACE = 266,
    LE = 267,
    LPAR = 268,
    LSQ = 269,
    LT = 270,
    MINUS = 271,
    MOD = 272,
    NE = 273,
    NOT = 274,
    OR = 275,
    PLUS = 276,
    RBRACE = 277,
    RPAR = 278,
    RSQ = 279,
    SEMICOLON = 280,
    ARROW = 281,
    LSHIFT = 282,
    RSHIFT = 283,
    XOR = 284,
    BOOL = 285,
    CLASS = 286,
    DOTLENGTH = 287,
    DOUBLE = 288,
    ELSE = 289,
    IF = 290,
    INT = 291,
    PRINT = 292,
    PARSEINT = 293,
    PUBLIC = 294,
    RETURN = 295,
    STATIC = 296,
    STRING = 297,
    VOID = 298,
    WHILE = 299,
    RESERVED = 300,
    ID = 301,
    INTLIT = 302,
    REALLIT = 303,
    STRLIT = 304,
    BOOLLIT = 305
  };
#endif
/* Tokens.  */
#define AND 258
#define ASSIGN 259
#define STAR 260
#define COMMA 261
#define DIV 262
#define EQ 263
#define GE 264
#define GT 265
#define LBRACE 266
#define LE 267
#define LPAR 268
#define LSQ 269
#define LT 270
#define MINUS 271
#define MOD 272
#define NE 273
#define NOT 274
#define OR 275
#define PLUS 276
#define RBRACE 277
#define RPAR 278
#define RSQ 279
#define SEMICOLON 280
#define ARROW 281
#define LSHIFT 282
#define RSHIFT 283
#define XOR 284
#define BOOL 285
#define CLASS 286
#define DOTLENGTH 287
#define DOUBLE 288
#define ELSE 289
#define IF 290
#define INT 291
#define PRINT 292
#define PARSEINT 293
#define PUBLIC 294
#define RETURN 295
#define STATIC 296
#define STRING 297
#define VOID 298
#define WHILE 299
#define RESERVED 300
#define ID 301
#define INTLIT 302
#define REALLIT 303
#define STRLIT 304
#define BOOLLIT 305

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
#define YYLAST   528

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

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
     331,   355,   368,   380,   387,   391,   396,   403,   404,   417,
     418,   421,   422,   423,   424,   427,   428,   435,   445,   457,
     464,   472,   479,   486,   489,   490,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     538,   539,   540,   541,   548,   549,   552
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ASSIGN", "STAR", "COMMA", "DIV",
  "EQ", "GE", "GT", "LBRACE", "LE", "LPAR", "LSQ", "LT", "MINUS", "MOD",
  "NE", "NOT", "OR", "PLUS", "RBRACE", "RPAR", "RSQ", "SEMICOLON", "ARROW",
  "LSHIFT", "RSHIFT", "XOR", "BOOL", "CLASS", "DOTLENGTH", "DOUBLE",
  "ELSE", "IF", "INT", "PRINT", "PARSEINT", "PUBLIC", "RETURN", "STATIC",
  "STRING", "VOID", "WHILE", "RESERVED", "ID", "INTLIT", "REALLIT",
  "STRLIT", "BOOLLIT", "$accept", "Program", "SubProgram", "FieldDecl",
  "SubFieldDecl", "Type", "MethodDecl", "MethodHeader", "FormalParams",
  "SubFormalParams", "MethodBody", "SubMethodBody", "VarDecl",
  "SubVarDecl", "Statement", "MultipleStatements", "OptExpr",
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
     -21,   -20,    44,    36,   -46,    64,    28,    64,    18,    34,
      64,    64,   -46,   -46,   -46,   216,   -46,   -46,   -46,   -46,
     -46,   -46,    38,    39,    49,    75,     9,   -46,   -46,    15,
      48,    15,    73,   -46,   152,   -46,    85,    54,    78,   -46,
      96,    81,   -46,    80,   175,   -46,    95,    97,   104,   218,
     105,     7,    74,   -46,   -46,    98,   -46,   -46,   -46,   -46,
     103,   115,   -46,   -46,   -46,   -46,   175,   100,   107,   218,
     195,     8,    45,   218,   218,   218,    83,   -46,   -46,   -46,
     112,   -46,   -46,   -46,   399,   -46,   218,   218,   123,   122,
     -46,    92,    19,   -46,   -46,   -46,   -46,   264,   -46,   117,
     399,   129,   140,   132,   291,    14,   -46,    14,   -46,   -46,
     -46,   -46,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   318,   399,
     134,   136,   345,   -46,   114,   137,   -46,   -46,   118,   192,
     141,   -46,   218,   -46,   -46,   451,   -46,   -46,   476,   151,
     151,   151,   151,    14,   -46,   476,   426,    14,   109,   109,
     500,   192,   -46,   -46,   218,   -46,   -46,   122,   -46,   115,
     131,   -46,   372,   -46,   345,   -46,   -46,   192,   157,   -46,
     -46,   -46
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
       0,     0,     0,     0,     0,     0,    86,    80,    82,    81,
       0,    77,    76,    78,    39,    40,     0,     0,     0,    86,
      34,     0,     0,    17,    20,    38,    29,     0,    46,     0,
      45,     0,     0,     0,     0,    72,    73,    74,    84,    79,
      85,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,    86,    53,     0,     0,    27,    18,     0,     0,
       0,    51,     0,    83,    75,    61,    58,    59,    66,    67,
      68,    69,    70,    57,    60,    71,    62,    56,    64,    65,
      63,     0,    49,    48,     0,    52,    54,    86,    26,    86,
      31,    35,     0,    32,    86,    28,    21,     0,     0,    55,
      30,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,    26,   -46,   135,    -2,   -46,   -46,   150,    22,
     -46,   -46,   -46,    16,   -30,   128,   -46,   -46,   -46,   -32,
     -28,   -27,   -46,    10,   -45,   -46,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    32,    37,    11,    24,    38,    93,
      28,    34,    53,   135,    66,    67,    80,    55,    99,    81,
      82,    83,   131,   165,    84,   109,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    35,    56,    39,    54,    39,    57,    58,    59,   101,
       1,    87,    56,    23,    33,    30,    57,    58,    68,   113,
      88,   114,    31,    85,    97,   100,     3,   104,   105,   106,
     107,   121,    52,    14,    56,    94,    17,    18,    57,    58,
      68,   128,   129,   132,     4,    19,   103,     5,    20,    19,
     110,    21,    20,    13,   102,    21,    16,    36,    72,    15,
      27,    73,   133,   136,    74,     6,    75,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,    48,    25,    26,   -86,    87,    29,     7,
     138,    76,    77,    78,    40,    79,    88,   172,    42,    60,
      61,    62,    30,     8,    64,    65,   166,    56,    69,   170,
      70,    57,    58,    59,   113,   108,   114,    71,    86,   174,
      89,    92,    96,    90,   130,   120,   121,    91,   134,    56,
     124,   173,   -44,    57,    58,    59,    72,   111,   137,    73,
     140,   136,    74,    94,    75,    56,   -86,   180,   166,    57,
      58,    59,   141,    43,   142,   143,   113,   162,   114,   163,
     167,    48,   168,    44,   169,   177,   171,   120,   121,    76,
      77,    78,   124,    79,    45,    63,    43,   -86,   125,   126,
     181,    41,    19,   175,   179,    20,    44,    46,    21,    47,
      48,   176,    49,    43,    95,     0,    50,   -86,    51,     0,
     -86,     0,     0,    44,     0,     0,     0,     0,    72,     0,
      46,    73,    47,    48,    74,    49,    75,   -86,     0,    50,
       0,    51,     0,     0,     0,     0,     0,    46,     0,    47,
      48,    72,    49,    48,    73,     0,    50,    74,    51,    75,
       0,    76,    77,    78,    98,    79,    19,     0,     0,    20,
       0,     0,    21,     0,     0,     0,    48,     0,     0,    22,
       0,     0,     0,     0,    76,    77,    78,   112,    79,   113,
       0,   114,   115,   116,   117,     0,   118,     0,     0,   119,
     120,   121,   122,     0,   123,   124,     0,   139,     0,     0,
       0,   125,   126,   127,   112,     0,   113,     0,   114,   115,
     116,   117,     0,   118,     0,     0,   119,   120,   121,   122,
       0,   123,   124,     0,   144,     0,     0,     0,   125,   126,
     127,   112,     0,   113,     0,   114,   115,   116,   117,     0,
     118,     0,     0,   119,   120,   121,   122,     0,   123,   124,
       0,   161,     0,     0,     0,   125,   126,   127,   112,     0,
     113,   164,   114,   115,   116,   117,     0,   118,     0,     0,
     119,   120,   121,   122,     0,   123,   124,     0,     0,     0,
       0,     0,   125,   126,   127,   112,     0,   113,     0,   114,
     115,   116,   117,     0,   118,     0,     0,   119,   120,   121,
     122,     0,   123,   124,     0,     0,   178,     0,     0,   125,
     126,   127,   112,     0,   113,     0,   114,   115,   116,   117,
       0,   118,     0,     0,   119,   120,   121,   122,     0,   123,
     124,     0,     0,     0,     0,     0,   125,   126,   127,   112,
       0,   113,     0,   114,   115,   116,   117,     0,   118,     0,
       0,   119,   120,   121,   122,     0,     0,   124,     0,     0,
       0,     0,     0,   125,   126,   127,   113,     0,   114,   115,
     116,   117,     0,   118,     0,     0,   119,   120,   121,   122,
       0,     0,   124,     0,     0,     0,     0,     0,   125,   126,
     127,   113,     0,   114,   -87,   116,   117,     0,   118,     0,
       0,   119,   120,   121,   -87,     0,     0,   124,     0,     0,
       0,     0,     0,   125,   126,   113,     0,   114,   115,   116,
     117,     0,   118,     0,     0,   119,   120,   121,   122,     0,
       0,   124,     0,     0,     0,     0,     0,   125,   126
};

static const yytype_int16 yycheck[] =
{
      26,    27,    34,    29,    34,    31,    34,    34,    34,     1,
      31,     4,    44,    15,    40,     6,    44,    44,    44,     5,
      13,     7,    13,    49,    69,    70,    46,    72,    73,    74,
      75,    17,    34,     7,    66,    61,    10,    11,    66,    66,
      66,    86,    87,    88,     0,    30,     1,    11,    33,    30,
      76,    36,    33,    25,    46,    36,    22,    42,    13,    41,
      11,    16,    88,    89,    19,     1,    21,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,    38,    46,    46,    22,     4,    13,    25,
      92,    46,    47,    48,    46,    50,    13,   142,    25,    14,
      46,    23,     6,    39,    23,    25,   132,   139,    13,   139,
      13,   139,   139,   139,     5,    32,     7,    13,    13,   164,
      46,     6,    22,    25,     1,    16,    17,    24,     6,   161,
      21,   161,    25,   161,   161,   161,    13,    25,    46,    16,
      23,   167,    19,   169,    21,   177,    23,   177,   174,   177,
     177,   177,    23,     1,    14,    23,     5,    23,     7,    23,
      46,    38,    25,    11,    46,    34,    25,    16,    17,    46,
      47,    48,    21,    50,    22,    40,     1,    25,    27,    28,
      23,    31,    30,   167,   174,    33,    11,    35,    36,    37,
      38,   169,    40,     1,    66,    -1,    44,    22,    46,    -1,
      25,    -1,    -1,    11,    -1,    -1,    -1,    -1,    13,    -1,
      35,    16,    37,    38,    19,    40,    21,    25,    -1,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      38,    13,    40,    38,    16,    -1,    44,    19,    46,    21,
      -1,    46,    47,    48,    49,    50,    30,    -1,    -1,    33,
      -1,    -1,    36,    -1,    -1,    -1,    38,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    46,    47,    48,     3,    50,     5,
      -1,     7,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    20,    21,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,     3,    -1,     5,    -1,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    20,    21,    -1,    23,    -1,    -1,    -1,    27,    28,
      29,     3,    -1,     5,    -1,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,     3,    -1,     5,    -1,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    27,
      28,    29,     3,    -1,     5,    -1,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,     3,
      -1,     5,    -1,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,     5,    -1,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,     5,    -1,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,     5,    -1,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    52,    46,     0,    11,     1,    25,    39,    53,
      54,    57,    77,    25,    53,    41,    22,    53,    53,    30,
      33,    36,    43,    56,    58,    46,    46,    11,    61,    13,
       6,    13,    55,    77,    62,    77,    42,    56,    59,    77,
      46,    59,    25,     1,    11,    22,    35,    37,    38,    40,
      44,    46,    56,    63,    65,    68,    70,    71,    72,    77,
      14,    46,    23,    55,    23,    25,    65,    66,    77,    13,
      13,    13,    13,    16,    19,    21,    46,    47,    48,    50,
      67,    70,    71,    72,    75,    77,    13,     4,    13,    46,
      25,    24,     6,    60,    77,    66,    22,    75,    49,    69,
      75,     1,    46,     1,    75,    75,    75,    75,    32,    76,
      77,    25,     3,     5,     7,     8,     9,    10,    12,    15,
      16,    17,    18,    20,    21,    27,    28,    29,    75,    75,
       1,    73,    75,    77,     6,    64,    77,    46,    56,    23,
      23,    23,    14,    23,    23,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    23,    23,    23,     6,    74,    77,    46,    25,    46,
      65,    25,    75,    65,    75,    64,    60,    34,    24,    74,
      65,    23
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
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 132 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[0].node) != NULL){
					insertBrother((yyval.node), (yyvsp[0].node));
				}
			}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 139 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[0].node) != NULL){
					insertBrother((yyval.node), (yyvsp[0].node));
				}
		  	}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 145 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 146 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1560 "y.tab.c" /* yacc.c:1646  */
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
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 164 "jucompiler.y" /* yacc.c:1646  */
    { syntaxError = 1; }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 167 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1588 "y.tab.c" /* yacc.c:1646  */
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
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 183 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Bool); }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 184 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Int); }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 185 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Double); }
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 189 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_MethodDecl);
				insertChild((yyval.node), (yyvsp[-1].node));
				insertBrother((yyval.node)->child, (yyvsp[0].node));
			}
#line 1632 "y.tab.c" /* yacc.c:1646  */
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
#line 1649 "y.tab.c" /* yacc.c:1646  */
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
#line 1667 "y.tab.c" /* yacc.c:1646  */
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
#line 1682 "y.tab.c" /* yacc.c:1646  */
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
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 247 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 250 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1707 "y.tab.c" /* yacc.c:1646  */
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
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 265 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 268 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_MethodBody); }
#line 1734 "y.tab.c" /* yacc.c:1646  */
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
#line 1749 "y.tab.c" /* yacc.c:1646  */
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
#line 1762 "y.tab.c" /* yacc.c:1646  */
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
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 306 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_VarDecl); }
#line 1784 "y.tab.c" /* yacc.c:1646  */
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
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 322 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[-1].node) != NULL){
					if((yyvsp[-1].node)->brother != NULL){
						(yyval.node) = createNode(Node_Block);
						insertChild((yyval.node), (yyvsp[-1].node));
					}
				}
			}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 332 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_If);
				insertChild((yyval.node), (yyvsp[-4].node));
				if((yyvsp[-2].node) == NULL){
					insertBrother((yyvsp[-4].node),createNode(Node_Block));
				}
				else{
					insertBrother((yyvsp[-4].node), (yyvsp[-2].node));
				}
				if((yyvsp[0].node) == NULL){
					insertBrother((yyvsp[-4].node),createNode(Node_Block));
				}
				if((yyvsp[0].node) != NULL){
					if((yyvsp[0].node)->brother != NULL){
						aux_node = createNode(Node_Block);
						insertBrother((yyvsp[-4].node),aux_node);
						insertChild(aux_node, (yyvsp[0].node));
					}
					else{
						insertBrother((yyvsp[-4].node), (yyvsp[0].node));			
					}
				}
			}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 356 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_If);
				if((yyvsp[0].node) == NULL){
					insertChild((yyval.node), (yyvsp[-2].node));
					insertBrother((yyvsp[-2].node),createNode(Node_Block));
				}
				if((yyvsp[0].node) != NULL){
					insertChild((yyval.node), (yyvsp[-2].node));
					insertBrother((yyvsp[-2].node), (yyvsp[0].node));
				}
				insertBrother((yyvsp[-2].node),createNode(Node_Block));
			}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 369 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_While);
				if((yyvsp[0].node) == NULL){
					insertChild((yyval.node), (yyvsp[-2].node));
					insertBrother((yyvsp[-2].node),createNode(Node_Block));
				}
				if((yyvsp[0].node) != NULL){
					insertChild((yyval.node), (yyvsp[-2].node));
					insertBrother((yyvsp[-2].node), (yyvsp[0].node));
				}
			}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 381 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Return);
				if((yyvsp[-1].node) != NULL){
					insertChild((yyval.node), (yyvsp[-1].node));
				}
			}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 388 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node); 
			}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 392 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Print);
				insertChild((yyval.node), (yyvsp[-2].node));
			}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 397 "jucompiler.y" /* yacc.c:1646  */
    {
				syntaxError = 1; 
				(yyval.node) = createNode(Node_Error);
			}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 403 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 405 "jucompiler.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].node) == NULL){
								(yyval.node) = (yyvsp[0].node);
							}
							if((yyvsp[-1].node) != NULL){
								(yyval.node) = (yyvsp[-1].node);
								insertBrother((yyval.node) , (yyvsp[0].node));
							}
						}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 417 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 418 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 421 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 422 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 423 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 424 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 427 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 429 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Strlit);
		  		(yyval.node)->value = (yyvsp[0].string);
			}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 436 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Assign);
				aux_node = createNode(Node_Id);
				aux_node->value = (yyvsp[-2].string);
				insertChild((yyval.node), aux_node);
				insertBrother((yyval.node)->child, (yyvsp[0].node));
			}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 446 "jucompiler.y" /* yacc.c:1646  */
    {
						(yyval.node) = createNode(Node_Call);
						aux_node = createNode(Node_Id);
						aux_node->value = (yyvsp[-3].string);
						insertChild((yyval.node), aux_node);
						if((yyvsp[-1].node) != NULL){
							if((yyval.node)->child != NULL){
								insertBrother((yyval.node)->child, (yyvsp[-1].node));
							}
						}
					}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 458 "jucompiler.y" /* yacc.c:1646  */
    {
						syntaxError = 1;
						(yyval.node) = createNode(Node_Error);
					}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 465 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_ParseArgs);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = (yyvsp[-4].string);
				insertChild((yyval.node),aux_node2);
				insertBrother((yyval.node)->child, (yyvsp[-2].node));
			}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 473 "jucompiler.y" /* yacc.c:1646  */
    {
				syntaxError = 1;
				(yyval.node) = createNode(Node_Error);
			}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 480 "jucompiler.y" /* yacc.c:1646  */
    {
					(yyval.node) = (yyvsp[-1].node);
					if((yyvsp[0].node) != NULL){
				 		insertBrother((yyval.node) , (yyvsp[0].node));
					}
				}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 486 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 489 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 491 "jucompiler.y" /* yacc.c:1646  */
    {
						if((yyvsp[0].node) != NULL){
							(yyval.node) = (yyvsp[-1].node);
							insertBrother((yyval.node) , (yyvsp[0].node));
						}
						if((yyvsp[0].node) == NULL){
							(yyval.node) = (yyvsp[-1].node);
						}
					}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 502 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Add); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 503 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Sub); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 504 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Mul); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 505 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Div); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 506 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Mod); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 507 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_And); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 508 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Or); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 509 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Xor); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 510 "jucompiler.y" /* yacc.c:1646  */
    {; }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 511 "jucompiler.y" /* yacc.c:1646  */
    {; }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 512 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Eq); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 513 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Ge); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 514 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Gt); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 515 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Le); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 516 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Lt); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 517 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Ne); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 518 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Minus); insertChild((yyval.node), (yyvsp[0].node)); }
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 519 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Not); insertChild((yyval.node), (yyvsp[0].node)); }
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 520 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Plus); insertChild((yyval.node), (yyvsp[0].node)); }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 521 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 522 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 523 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 524 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 526 "jucompiler.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].node)==NULL){
    		(yyval.node) = createNode(Node_Id);
    		(yyval.node)->value = (yyvsp[-1].string);
			}
			if((yyvsp[0].node) != NULL){
				(yyval.node) = (yyvsp[0].node);
				aux_node = createNode(Node_Id);
				aux_node->value = (yyvsp[-1].string);
				insertChild((yyval.node),aux_node);
			}
		}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 538 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Intlit); (yyval.node)->value = (yyvsp[0].string); }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 539 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Boolit); (yyval.node)->value = (yyvsp[0].string); }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 540 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Reallit); (yyval.node)->value = (yyvsp[0].string); }
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 542 "jucompiler.y" /* yacc.c:1646  */
    {
			syntaxError = 1;
			(yyval.node) = createNode(Node_Error);
		}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 548 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Length); }
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 549 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 552 "jucompiler.y" /* yacc.c:1646  */
    {; }
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2282 "y.tab.c" /* yacc.c:1646  */
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
#line 555 "jucompiler.y" /* yacc.c:1906  */


void yyerror (const char *s){
	printf ("Line %d, col %d: %s: %s\n", line, (int)(column - strlen(yytext)), s, yytext);
}
