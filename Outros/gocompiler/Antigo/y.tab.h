/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "gocompiler.y"
{
    char* s;
    struct Token* token;
    struct node_ast* node;
}
/* Line 1529 of yacc.c.  */
#line 147 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

