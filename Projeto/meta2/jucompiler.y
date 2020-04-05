%{
	#include <stdio.h>
	#include <stdlib.h>
    #include <string.h>

    int yylex(void);
    extern char* yytext;
	extern int line, column;
    void yyerror (const char *s);
%}

%union{
	char* string;
	struct node* node;
}

%token BOOLIT
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
%type <node> VarDecl
%type <node> SubVarDecl

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


Empty: {;} 
	 ; 

%%

void yyerror (const char *s){
	printf ("Line %d, col %d: %s: %s\n", line, (int)(column - strlen(yytext)), s, yytext);
}