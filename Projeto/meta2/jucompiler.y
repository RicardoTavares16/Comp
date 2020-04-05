%{
	#include <stdio.h>
	#include <stdlib.h>
    #include <string.h>
	#include "node.h"

    int yylex(void);
    extern char* yytext;
	extern int line, column;
    void yyerror (const char *s);
%}

%union{
	char* string;
	struct node* node;
}

%token BOOLLIT
%token AND
%token ASSIGN
%token STAR
%token COMMA
%token DIV
%token EQ
%token GE
%token GT
%token LBRACE
%token LE
%token LPAR
%token LSQ
%token LT
%token MINUS
%token MOD
%token NE
%token NOT
%token OR
%token PLUS
%token RBRACE
%token RPAR
%token RSQ
%token SEMICOLON
%token ARROW
%token LSHIFT
%token RSHIFT
%token XOR
%token BOOL
%token CLASS
%token DOTLENGTH
%token DOUBLE
%token ELSE
%token IF
%token INT
%token PRINT
%token PARSEINT
%token PUBLIC
%token RETURN
%token STATIC
%token STRING
%token VOID
%token WHILE
%token <string> RESERVED
%token <string> ID
%token <string> INTLIT
%token <string> REALLIT
%token <string> STRLIT

%type <node> Program
%type <node> SubProgram
%type <node> MethodDecl
%type <node> FieldDecl
%type <node> Empty
%type <node> MethodHeader
%type <node> MethodBody
%type <node> SubFieldDecl
%type <node> Type
%type <node> OptFormalParams
%type <node> FormalParams
%type <node> SubFormalParams
%type <node> SubMethodBody
%type <node> Statement
%type <node> MultipleStatements
%type <node> VarDecl
%type <node> SubVarDecl
%type <node> Expr
%type <node> OptExpr
%type <node> ExprStrlit
%type <node> Assignment
%type <node> MethodInvocation
%type <node> MultipleCommaExpr
%type <node> OptExprCommaExpr
%type <node> ParseArgs
%type <node> OptAssignMethodinvoParseargs
%type <node> OptDotLength


%left COMMA
%right ASSIGN
%left OR 
%left AND 
%left XOR
%nonassoc EQ NE
%left GE LE GT LT
%left LSHIFT RSHIFT
%left PLUS MINUS
%left STAR DIV MOD 


%right NOT
%left LPAR RPAR LBRACE RBRACE LSQ RSQ 
%right ELSE

%%

Program: CLASS ID LBRACE SubProgram RBRACE{;}
	   ; 

SubProgram: SubProgram MethodDecl {;}
		  | SubProgram FieldDecl {;}
		  | SubProgram SEMICOLON {;}
		  | Empty {;}
		  ;


MethodDecl: PUBLIC STATIC MethodHeader MethodBody {;}
		  ;



FieldDecl: PUBLIC STATIC Type ID SubFieldDecl SEMICOLON {;}
		 | error SEMICOLON {;}
		 ;		  

SubFieldDecl: Empty {;}
			| SubFieldDecl COMMA ID {;}
			;


Type: BOOL {;}
	| INT {;}
	| DOUBLE {;}
	;


MethodHeader: Type ID LPAR OptFormalParams RPAR {;}
            | VOID ID LPAR OptFormalParams RPAR {;}
	    	;

OptFormalParams: FormalParams {;}
			   | Empty {;}
			   ;

FormalParams: Type ID SubFormalParams {;}
    		| STRING LSQ RSQ ID {;}
			;

SubFormalParams: Empty {;}
			   | SubFormalParams COMMA Type ID {;}
			   ;			   


MethodBody: LBRACE SubMethodBody RBRACE {;}
		  ;

SubMethodBody: Empty {;}
			 | SubMethodBody Statement {;}
			 | SubMethodBody VarDecl {;}
			 ;


VarDecl: Type ID SubVarDecl SEMICOLON {;}
	   ;

SubVarDecl: Empty {;}
		  | COMMA ID SubVarDecl {;}
	      ;

Statement: LBRACE MultipleStatements RBRACE {;}
		 | IF LPAR Expr RPAR Statement ELSE Statement {;}
		 | IF LPAR Expr RPAR Statement %prec ELSE {;}
		 | WHILE LPAR Expr RPAR Statement {;}
		 | RETURN OptExpr SEMICOLON {;}
		 | OptAssignMethodinvoParseargs SEMICOLON {;}
		 | PRINT LPAR ExprStrlit RPAR SEMICOLON {;}
    	 | error SEMICOLON {;}
		 ;

MultipleStatements: Empty {;}
		| Statement MultipleStatements {;}
		;


OptExpr: Expr {;}
	   | Empty {;}
	   ;

OptAssignMethodinvoParseargs: Assignment {;}
							| MethodInvocation {;}
							| ParseArgs {;}
							| Empty {;}
							;

ExprStrlit: Expr {;}
		  | STRLIT {;}
		  ;

Assignment: ID ASSIGN Expr {;}
		  ;

MethodInvocation: ID LPAR OptExprCommaExpr RPAR {;}
				| ID LPAR error RPAR {;}
				;

ParseArgs: PARSEINT LPAR ID LSQ Expr RSQ RPAR {;}
		 | PARSEINT LPAR error RPAR {;}
		 ;

OptExprCommaExpr: Expr MultipleCommaExpr {;}
				| Empty {;}
				;

MultipleCommaExpr: Empty {;}
				 | MultipleCommaExpr COMMA Expr {;}
				 ;

Expr: Expr PLUS Expr {;}
	| Expr MINUS Expr {;}
	| Expr STAR Expr {;}
	| Expr DIV Expr {;}
	| Expr MOD Expr {;}
    | Expr AND Expr {;}
    | Expr OR Expr {;}
	| Expr XOR Expr {;}
	| Expr LSHIFT Expr {;}
	| Expr RSHIFT Expr {;}
    | Expr EQ Expr {;}
    | Expr GE Expr {;}
    | Expr GT Expr {;}
    | Expr LE Expr {;}
    | Expr LT Expr {;}
    | Expr NE Expr {;}
    | MINUS Expr {;}
    | NOT Expr {;}
	| PLUS Expr {;}
    | LPAR Expr RPAR {;}
	| MethodInvocation {;}
 	| Assignment {;}
	| ParseArgs {;}
    | ID OptDotLength {;} 
	| INTLIT {;} 
    | BOOLLIT {;}
	| REALLIT {;}
    | LPAR error RPAR {;}
	;

OptDotLength: DOTLENGTH {;}
			| Empty {;}
			;	
	
Empty: {;} 
	 ; 

%%

void yyerror (const char *s){
	printf ("Line %d, col %d: %s: %s\n", line, (int)(column - strlen(yytext)), s, yytext);
}