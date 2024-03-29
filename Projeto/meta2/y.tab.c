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
	Node* tree;
	Node* aux_node;
	Node* aux_node2;
	Node* aux_node3;

#line 83 "y.tab.c" /* yacc.c:339  */

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
    BOOLLIT = 305,
    UMINUS = 306,
    UPLUS = 307,
    UNARY = 308
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
#define UMINUS 306
#define UPLUS 307
#define UNARY 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "jucompiler.y" /* yacc.c:355  */

	char* string;
	struct node* node;

#line 234 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   441

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   118,   118,   130,   137,   144,   145,   151,   163,   166,
     167,   182,   183,   184,   187,   196,   209,   226,   237,   246,
     249,   250,   264,   267,   268,   279,   291,   305,   306,   320,
     330,   354,   367,   379,   386,   390,   395,   401,   402,   415,
     416,   419,   420,   421,   422,   425,   426,   433,   443,   455,
     461,   469,   475,   482,   485,   486,   498,   499,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   537,   538,   539,   540,   546,   547,   550
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
  "STRLIT", "BOOLLIT", "UMINUS", "UPLUS", "UNARY", "$accept", "Program",
  "SubProgram", "FieldDecl", "SubFieldDecl", "Type", "MethodDecl",
  "MethodHeader", "FormalParams", "SubFormalParams", "MethodBody",
  "SubMethodBody", "VarDecl", "SubVarDecl", "Statement",
  "MultipleStatements", "OptExpr", "OptMethodinvoAssignParseargs",
  "ExprStrlit", "Assignment", "MethodInvocation", "ParseArgs",
  "OptExprCommaExpr", "MultipleCommaExpr", "Expr", "ExprWithoutAssign",
  "OptDotLength", "Empty", YY_NULLPTR
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
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -61

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-61)))

#define YYTABLE_NINF -88

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,   -24,    25,    22,   -61,    20,    27,    20,    15,    35,
      20,    20,   -61,   -61,   -61,    96,   -61,   -61,   -61,   -61,
     -61,   -61,    -9,    16,    50,    52,    13,   -61,   -61,   145,
      21,   145,    45,   -61,   173,   -61,    61,    36,    58,   -61,
      79,    69,   -61,    71,   190,   -61,    91,    92,    94,   216,
      97,    11,    48,   -61,   -61,   100,   -61,   -61,   -61,   -61,
     103,   122,   -61,   -61,   -61,   -61,   190,   112,   105,   216,
      74,    12,    53,   239,   239,   239,    28,   -61,   -61,   -61,
     115,   -61,   -61,   -61,   -61,   312,   -61,   216,   216,    30,
     136,   -61,   102,   108,   -61,   -61,   -61,   -61,   123,   -61,
     131,   -61,   132,   142,   134,    23,   285,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     153,   -61,   157,   159,   177,   -61,   139,   161,   -61,   -61,
     144,   213,   167,   -61,   216,   -61,   -61,   364,   -61,   -61,
     413,   172,   172,   172,   172,    66,   -61,   413,   339,    66,
      81,    81,   389,   213,   -61,   -61,   216,   -61,   -61,   136,
     -61,   122,   160,   -61,   178,   -61,   177,   -61,   -61,   213,
     174,   -61,   -61,   -61
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     6,     8,     5,     0,     2,     4,     3,    11,
      13,    12,     0,     0,     0,     0,    87,    87,    14,    87,
       0,    87,     0,     9,     0,    23,     0,     0,     0,    19,
      87,     0,     7,     0,     0,    22,     0,     0,     0,    87,
       0,     0,     0,    25,    24,     0,    42,    41,    43,    44,
       0,    87,    16,    10,    15,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,    87,    81,    83,    82,
       0,    56,    78,    79,    39,    57,    40,     0,     0,     0,
      87,    34,     0,     0,    17,    20,    38,    29,     0,    46,
       0,    45,     0,     0,     0,    87,     0,    74,    75,    76,
      85,    80,    86,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,    87,    53,     0,     0,    27,    18,
       0,     0,     0,    51,     0,    84,    77,    63,    60,    61,
      68,    69,    70,    71,    72,    59,    62,    73,    64,    58,
      66,    67,    65,     0,    49,    48,     0,    52,    54,    87,
      26,    87,    31,    35,     0,    32,    87,    28,    21,     0,
       0,    55,    30,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -61,   -61,    37,   -61,   156,    -4,   -61,   -61,   176,    33,
     -61,   -61,   -61,    47,   -30,   152,   -61,   -61,   -61,   -32,
     -28,   -27,   -61,    29,   -60,    44,   -61,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    32,    37,    11,    24,    38,    94,
      28,    34,    53,   137,    66,    67,    80,    55,   100,    81,
      82,    83,   133,   167,    84,    85,   111,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    35,    56,    39,    54,    39,    57,    58,    59,    98,
     101,    23,    56,   102,    33,    88,    57,    58,    68,    30,
       1,     6,     3,    86,    89,     4,    31,   130,   131,   134,
      52,   132,    88,     5,    56,    95,    89,    25,    57,    58,
      68,    89,   -87,    72,    14,     7,    73,    17,    18,    74,
     112,    75,    13,   -87,   104,   110,    15,    16,   103,     8,
     110,    27,    26,   135,   138,    29,    72,    40,    48,    73,
      42,   115,    74,   116,    75,    60,    76,    77,    78,   112,
      79,    62,    61,   123,   174,    30,   115,    72,   116,   140,
      73,    48,    64,    74,    90,    75,    65,   122,   123,   105,
      77,    78,   126,    79,    69,    70,   176,    71,   168,    56,
      87,   172,    48,    57,    58,    59,   106,   107,   108,   109,
      76,    77,    78,    99,    79,    91,    19,    92,    93,    20,
     -44,    56,    21,   175,    97,    57,    58,    59,    19,    22,
     113,    20,   136,   138,    21,    95,   141,    56,   139,   182,
     168,    57,    58,    59,   142,   143,   144,   145,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    43,    19,   163,   115,    20,   116,
     164,    21,   165,   166,    44,   169,   170,    36,   122,   123,
     171,    43,   173,   126,   179,    45,    63,   183,   -87,   127,
     128,    44,   180,    19,   178,   181,    20,    41,    46,    21,
      47,    48,   -87,    49,    43,   -87,   177,    50,    96,    51,
       0,     0,     0,     0,    44,    46,     0,    47,    48,    72,
      49,     0,    73,     0,    50,    74,    51,    75,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      47,    48,    72,    49,    48,    73,     0,    50,    74,    51,
      75,     0,    76,    77,    78,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,   105,    77,    78,   114,    79,
     115,     0,   116,   117,   118,   119,     0,   120,     0,     0,
     121,   122,   123,   124,     0,   125,   126,     0,   146,     0,
       0,     0,   127,   128,   129,   114,     0,   115,     0,   116,
     117,   118,   119,     0,   120,     0,     0,   121,   122,   123,
     124,     0,   125,   126,     0,     0,     0,     0,     0,   127,
     128,   129,   114,     0,   115,     0,   116,   117,   118,   119,
       0,   120,     0,     0,   121,   122,   123,   124,     0,     0,
     126,     0,     0,     0,     0,     0,   127,   128,   129,   115,
       0,   116,   117,   118,   119,     0,   120,     0,     0,   121,
     122,   123,   124,     0,     0,   126,     0,     0,     0,     0,
       0,   127,   128,   129,   115,     0,   116,   117,   118,   119,
       0,   120,     0,     0,   121,   122,   123,   124,     0,     0,
     126,     0,     0,     0,     0,     0,   127,   128,   115,     0,
     116,     0,   118,   119,     0,   120,     0,     0,   121,   122,
     123,     0,     0,     0,   126,     0,     0,     0,     0,     0,
     127,   128
};

static const yytype_int16 yycheck[] =
{
      26,    27,    34,    29,    34,    31,    34,    34,    34,    69,
      70,    15,    44,     1,    40,     4,    44,    44,    44,     6,
      31,     1,    46,    49,    13,     0,    13,    87,    88,    89,
      34,     1,     4,    11,    66,    61,    13,    46,    66,    66,
      66,    13,    22,    13,     7,    25,    16,    10,    11,    19,
      76,    21,    25,    23,     1,    32,    41,    22,    46,    39,
      32,    11,    46,    89,    90,    13,    13,    46,    38,    16,
      25,     5,    19,     7,    21,    14,    46,    47,    48,   105,
      50,    23,    46,    17,   144,     6,     5,    13,     7,    93,
      16,    38,    23,    19,    46,    21,    25,    16,    17,    46,
      47,    48,    21,    50,    13,    13,   166,    13,   134,   141,
      13,   141,    38,   141,   141,   141,    72,    73,    74,    75,
      46,    47,    48,    49,    50,    25,    30,    24,     6,    33,
      25,   163,    36,   163,    22,   163,   163,   163,    30,    43,
      25,    33,     6,   169,    36,   171,    23,   179,    46,   179,
     176,   179,   179,   179,    23,    23,    14,    23,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,     1,    30,    23,     5,    33,     7,
      23,    36,    23,     6,    11,    46,    25,    42,    16,    17,
      46,     1,    25,    21,    34,    22,    40,    23,    25,    27,
      28,    11,    24,    30,   171,   176,    33,    31,    35,    36,
      37,    38,    22,    40,     1,    25,   169,    44,    66,    46,
      -1,    -1,    -1,    -1,    11,    35,    -1,    37,    38,    13,
      40,    -1,    16,    -1,    44,    19,    46,    21,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    38,    13,    40,    38,    16,    -1,    44,    19,    46,
      21,    -1,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,     3,    50,
       5,    -1,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,     3,    -1,     5,    -1,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,     3,    -1,     5,    -1,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,     5,
      -1,     7,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,     5,    -1,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    -1,    -1,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    55,    46,     0,    11,     1,    25,    39,    56,
      57,    60,    81,    25,    56,    41,    22,    56,    56,    30,
      33,    36,    43,    59,    61,    46,    46,    11,    64,    13,
       6,    13,    58,    81,    65,    81,    42,    59,    62,    81,
      46,    62,    25,     1,    11,    22,    35,    37,    38,    40,
      44,    46,    59,    66,    68,    71,    73,    74,    75,    81,
      14,    46,    23,    58,    23,    25,    68,    69,    81,    13,
      13,    13,    13,    16,    19,    21,    46,    47,    48,    50,
      70,    73,    74,    75,    78,    79,    81,    13,     4,    13,
      46,    25,    24,     6,    63,    81,    69,    22,    78,    49,
      72,    78,     1,    46,     1,    46,    79,    79,    79,    79,
      32,    80,    81,    25,     3,     5,     7,     8,     9,    10,
      12,    15,    16,    17,    18,    20,    21,    27,    28,    29,
      78,    78,     1,    76,    78,    81,     6,    67,    81,    46,
      59,    23,    23,    23,    14,    23,    23,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    23,    23,    23,     6,    77,    81,    46,
      25,    46,    68,    25,    78,    68,    78,    67,    63,    34,
      24,    77,    68,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    59,    59,    60,    61,    61,    62,    62,    62,
      63,    63,    64,    65,    65,    65,    66,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    72,    72,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     1,     6,     2,     1,
       3,     1,     1,     1,     4,     5,     5,     3,     4,     1,
       1,     4,     3,     1,     2,     2,     4,     1,     3,     3,
       7,     5,     5,     3,     2,     5,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       7,     4,     2,     1,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     3,     1,     1,
       2,     1,     1,     1,     3,     1,     1,     0
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
#line 119 "jucompiler.y" /* yacc.c:1646  */
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
#line 131 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[0].node) != NULL){
					insertBrother((yyval.node), (yyvsp[0].node));
				}
			}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 138 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[0].node) != NULL){
					insertBrother((yyval.node), (yyvsp[0].node));
				}
		  	}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 145 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 152 "jucompiler.y" /* yacc.c:1646  */
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
#line 163 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 166 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 168 "jucompiler.y" /* yacc.c:1646  */
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
#line 182 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Bool); }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 183 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Int); }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 184 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Double); }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 188 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_MethodDecl);
				insertChild((yyval.node), (yyvsp[-1].node));
				insertBrother((yyval.node)->child, (yyvsp[0].node));
			}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 197 "jucompiler.y" /* yacc.c:1646  */
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
#line 210 "jucompiler.y" /* yacc.c:1646  */
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
#line 227 "jucompiler.y" /* yacc.c:1646  */
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
#line 238 "jucompiler.y" /* yacc.c:1646  */
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
#line 246 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 249 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 251 "jucompiler.y" /* yacc.c:1646  */
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
#line 264 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 267 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_MethodBody); }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 269 "jucompiler.y" /* yacc.c:1646  */
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
#line 280 "jucompiler.y" /* yacc.c:1646  */
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
#line 292 "jucompiler.y" /* yacc.c:1646  */
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
#line 305 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_VarDecl); }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 307 "jucompiler.y" /* yacc.c:1646  */
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
    {
				(yyval.node) = (yyvsp[-1].node);
				if((yyvsp[-1].node) != NULL){
					if((yyvsp[-1].node)->brother != NULL){
						(yyval.node) = createNode(Node_Block);
						insertChild((yyval.node), (yyvsp[-1].node));
					}
				}
			}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 331 "jucompiler.y" /* yacc.c:1646  */
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
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 355 "jucompiler.y" /* yacc.c:1646  */
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
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 368 "jucompiler.y" /* yacc.c:1646  */
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
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 380 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Return);
				if((yyvsp[-1].node) != NULL){
					insertChild((yyval.node), (yyvsp[-1].node));
				}
			}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 387 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = (yyvsp[-1].node); 
			}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 391 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Print);
				insertChild((yyval.node), (yyvsp[-2].node));
			}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 396 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = NULL;
			}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 401 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 403 "jucompiler.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].node) == NULL){
								(yyval.node) = (yyvsp[0].node);
							}
							if((yyvsp[-1].node) != NULL){
								(yyval.node) = (yyvsp[-1].node);
								insertBrother((yyval.node) , (yyvsp[0].node));
							}
						}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 415 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 416 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 419 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 420 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 421 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 422 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 425 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 427 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Strlit);
		  		(yyval.node)->value = (yyvsp[0].string);
			}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 434 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_Assign);
				aux_node = createNode(Node_Id);
				aux_node->value = (yyvsp[-2].string);
				insertChild((yyval.node), aux_node);
				insertBrother((yyval.node)->child, (yyvsp[0].node));
			}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 444 "jucompiler.y" /* yacc.c:1646  */
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
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 456 "jucompiler.y" /* yacc.c:1646  */
    {
						(yyval.node) = NULL;
					}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 462 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = createNode(Node_ParseArgs);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = (yyvsp[-4].string);
				insertChild((yyval.node),aux_node2);
				insertBrother((yyval.node)->child, (yyvsp[-2].node));
			}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 470 "jucompiler.y" /* yacc.c:1646  */
    {
				(yyval.node) = NULL;
			}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 476 "jucompiler.y" /* yacc.c:1646  */
    {
					(yyval.node) = (yyvsp[-1].node);
					if((yyvsp[0].node) != NULL){
				 		insertBrother((yyval.node) , (yyvsp[0].node));
					}
				}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 482 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 485 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 487 "jucompiler.y" /* yacc.c:1646  */
    {
						if((yyvsp[0].node) != NULL){
							(yyval.node) = (yyvsp[-1].node);
							insertBrother((yyval.node) , (yyvsp[0].node));
						}
						if((yyvsp[0].node) == NULL){
							(yyval.node) = (yyvsp[-1].node);
						}
					}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 498 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 499 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); /*Evita que dentro da expressao leia Assignment*/}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 502 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Add); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 503 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Sub); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 504 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Mul); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 505 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Div); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 506 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Mod); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 507 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_And); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 508 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Or); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 509 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Xor); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 510 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_LShift); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 511 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_RShift); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 512 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Eq); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 513 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Ge); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 514 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Gt); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 515 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Le); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 516 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Lt); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 517 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Ne); insertChild((yyval.node), (yyvsp[-2].node)); insertBrother((yyval.node)->child, (yyvsp[0].node)); }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 518 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Minus); insertChild((yyval.node), (yyvsp[0].node)); }
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 519 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Not); insertChild((yyval.node), (yyvsp[0].node)); }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 520 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Plus); insertChild((yyval.node), (yyvsp[0].node)); }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 521 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 522 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 523 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 525 "jucompiler.y" /* yacc.c:1646  */
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
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 537 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Intlit); (yyval.node)->value = (yyvsp[0].string); }
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 538 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Boolit); (yyval.node)->value = (yyvsp[0].string); }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 539 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Reallit); (yyval.node)->value = (yyvsp[0].string); }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 541 "jucompiler.y" /* yacc.c:1646  */
    {
			(yyval.node) = NULL;
		}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 546 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = createNode(Node_Length); }
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 547 "jucompiler.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 550 "jucompiler.y" /* yacc.c:1646  */
    {; }
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2274 "y.tab.c" /* yacc.c:1646  */
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
#line 553 "jucompiler.y" /* yacc.c:1906  */


