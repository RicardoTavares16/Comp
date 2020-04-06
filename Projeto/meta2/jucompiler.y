%{
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

Program: CLASS ID LBRACE SubProgram RBRACE
	{
		$$ = tree = createNode(Node_Program);
		aux_node = createNode(Node_Id);
		aux_node->value = $2; 
		insertChild($$, aux_node);
		if($4 != NULL){
			insertBrother(aux_node, $4);
		}
	}
	   ; 

SubProgram: MethodDecl SubProgram 
			{
				$$ = $1;
				if($2 != NULL){
					insertBrother($$, $2);
				}
			}
		  | FieldDecl SubProgram 
		  	{
				$$ = $1;
				if($2 != NULL){
					insertBrother($$, $2);
				}
		  	}
		  | SEMICOLON SubProgram { $$ = $2; }
		  | Empty { $$ = NULL; }
		  ;




FieldDecl: PUBLIC STATIC Type ID SubFieldDecl SEMICOLON 
		   {
				$$ = createNode(Node_FieldDecl); 
				insertChild($$, $3);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = $4;
				insertBrother($$->child, aux_node2);
				if($5 != NULL){
					insertBrother($$, $5);
					changeType($$, $5);
				}
			}
		 | error SEMICOLON { syntaxError = 1;}
		 ;		  

SubFieldDecl: Empty { $$ = NULL; }
			| COMMA ID SubFieldDecl 
			{
				$$ = createNode(Node_FieldDecl);
				aux_node = createNode(Node_Comp);
				insertChild($$, aux_node);	
				aux_node2 = createNode(Node_Id);
				aux_node2->value = $2;
				if($$  != NULL){
					insertBrother($$->child, aux_node2);
					insertBrother($$, $3);
				}
			}
			;


Type: BOOL { $$ = createNode(Node_Bool); }
	| INT { $$ = createNode(Node_Int); }
	| DOUBLE { $$ = createNode(Node_Double); }
	;

MethodDecl: PUBLIC STATIC MethodHeader MethodBody 
			{
				$$ = createNode(Node_MethodDecl);
				insertChild($$, $3);
				insertBrother($$->child, $4);
			}
		  ;


MethodHeader: Type ID LPAR FormalParams RPAR 
			{
				$$ = createNode(Node_MethodHeader);
				insertChild($$, $1);
				aux_node = createNode(Node_Id);
				aux_node->value = $2;
				insertBrother($$->child, aux_node);			
				aux_node3 = createNode(Node_MethodParams);		
				insertBrother($$->child->brother, aux_node3);
				if($4 != NULL){
					insertChild($$->child->brother->brother, $4);
				}
			}
            | VOID ID LPAR FormalParams RPAR 
			{
				$$ = createNode(Node_MethodHeader);
				aux_node = createNode(Node_Void);
				insertChild($$, aux_node);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = $2;
				insertBrother($$->child, aux_node2);
				aux_node3 = createNode(Node_MethodParams);
				insertBrother($$->child->brother, aux_node3);
				if($4 != NULL){
					insertChild($$->child->brother->brother, $4);
				}
			}
	    	;


FormalParams: Type ID SubFormalParams 
			{
				$$ = createNode(Node_ParamDecl);
				insertChild($$, $1);
				aux_node = createNode(Node_Id);
				aux_node->value = $2;
				insertBrother($$->child, aux_node);
				if ($3 != NULL){
					insertBrother($$, $3);
				}
			}
    		| STRING LSQ RSQ ID 
			{
				$$ = createNode(Node_ParamDecl);
				aux_node = createNode(Node_StringArray);
				insertChild($$, aux_node);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = $4;
				insertBrother($$->child, aux_node2);
			}
			| Empty { $$ = NULL; }
			;

SubFormalParams: Empty { $$ = NULL; }
			   | COMMA Type ID SubFormalParams 
			   {
				   	$$ = createNode(Node_ParamDecl);
					insertChild($$, $2);
					aux_node = createNode(Node_Id);
					aux_node->value = $3;
					insertBrother($$->child, aux_node);
					if($4 != NULL){
						insertBrother($$, $4);
					}
			   }
			   ;			   


MethodBody: LBRACE SubMethodBody RBRACE { $$ = $2; }
		  ;

SubMethodBody: Empty {$$ = createNode(Node_MethodBody);}
			 | SubMethodBody Statement 
			 {
				if($2 != NULL){
					if($$->child == NULL){
						insertChild($$, $2);
					}
					else{
						insertBrother($$->child, $2);
					}
				}
			 }
			 | SubMethodBody VarDecl 
			 {
				if($$->child == NULL){
				insertChild($$, $2);
				}
				else{
					insertBrother($$->child, $2);
				}
			 }
			 ;


VarDecl: Type ID SubVarDecl SEMICOLON 
	   {
		   	$$ = createNode(Node_VarDecl);
			insertChild($$, $1);
			aux_node = createNode(Node_Id);
			aux_node->value = $2;
			insertBrother($$->child, aux_node);
			if($3->child != NULL){
				insertBrother($$, $3);
				changeType($$, $3);
			}
	   }
	   ;

SubVarDecl: Empty { $$ = createNode(Node_VarDecl); }
		  | COMMA ID SubVarDecl 
		  {
			$$ = createNode(Node_VarDecl);
			aux_node2 = createNode(Node_Comp);
			insertChild($$, aux_node2);
			aux_node = createNode(Node_Id);
			aux_node->value = $2;
			insertBrother($$->child, aux_node);
			if($3->child != NULL){
				insertBrother($$, $3);
			}
		  }
	      ;

Statement: LBRACE MultipleStatements RBRACE 
		 {
			 $$ = $2;
			if($2 != NULL){
				if($2->brother != NULL){
					$$ = create_node(NODE_Block);
					insert_child($$,$2);
				}
			}
		 }
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