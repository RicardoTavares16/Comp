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
	Node* tree;
	Node* aux_node;
	Node* aux_node2;
	Node* aux_node3;
%}

%union{
	char* string;
	struct node* node;
}


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
%token <string> BOOLLIT

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
%type <node> ExprWithoutAssign
%type <node> OptExpr
%type <node> ExprStrlit
%type <node> Assignment
%type <node> MethodInvocation
%type <node> MultipleCommaExpr
%type <node> OptExprCommaExpr
%type <node> ParseArgs
%type <node> OptMethodinvoAssignParseargs
%type <node> OptDotLength


%left COMMA
%right ASSIGN
%left OR 
%left AND 
%left XOR
%left EQ NE
%left GE LE GT LT
%left LSHIFT RSHIFT
%left PLUS MINUS
%left STAR DIV MOD 
%right NOT UMINUS UPLUS UNARY
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
		 | error SEMICOLON { $$ = NULL; }
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

SubMethodBody: Empty { $$ = createNode(Node_MethodBody); }
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
						$$ = createNode(Node_Block);
						insertChild($$, $2);
					}
				}
			}
		 | IF LPAR Expr RPAR Statement ELSE Statement 
			{
				$$ = createNode(Node_If);
				insertChild($$, $3);
				if($5 == NULL){
					insertBrother($3,createNode(Node_Block));
				}
				else{
					insertBrother($3, $5);
				}
				if($7 == NULL){
					insertBrother($3,createNode(Node_Block));
				}
				if($7 != NULL){
					if($7->brother != NULL){
						aux_node = createNode(Node_Block);
						insertBrother($3,aux_node);
						insertChild(aux_node, $7);
					}
					else{
						insertBrother($3, $7);			
					}
				}
			}
		 | IF LPAR Expr RPAR Statement %prec ELSE 
			{
				$$ = createNode(Node_If);
				if($5 == NULL){
					insertChild($$, $3);
					insertBrother($3,createNode(Node_Block));
				}
				if($5 != NULL){
					insertChild($$, $3);
					insertBrother($3, $5);
				}
				insertBrother($3,createNode(Node_Block));
			}
		 | WHILE LPAR Expr RPAR Statement 
			{
				$$ = createNode(Node_While);
				if($5 == NULL){
					insertChild($$, $3);
					insertBrother($3,createNode(Node_Block));
				}
				if($5 != NULL){
					insertChild($$, $3);
					insertBrother($3, $5);
				}
			}
		 | RETURN OptExpr SEMICOLON 
			{
				$$ = createNode(Node_Return);
				if($2 != NULL){
					insertChild($$, $2);
				}
			}
		 | OptMethodinvoAssignParseargs SEMICOLON 
			{
				$$ = $1; 
			}
		 | PRINT LPAR ExprStrlit RPAR SEMICOLON 
			{
				$$ = createNode(Node_Print);
				insertChild($$, $3);
			}
    	 | error SEMICOLON 
			{
				$$ = NULL;
			}
		 ;

MultipleStatements: Empty { $$ = NULL; }
					| Statement MultipleStatements 
						{
							if($1 == NULL){
								$$ = $2;
							}
							if($1 != NULL){
								$$ = $1;
								insertBrother($$ , $2);
							}
						}
					;


OptExpr: Expr { $$ = $1; }
	   | Empty { $$ = NULL; }
	   ;

OptMethodinvoAssignParseargs: MethodInvocation { $$ = $1; }
							| Assignment { $$ = $1; }
							| ParseArgs { $$ = $1; }
							| Empty { $$ = NULL; }
							;

ExprStrlit: Expr { $$ = $1; }
		  | STRLIT 
		  	{
				$$ = createNode(Node_Strlit);
		  		$$->value = $1;
			}
		  ;

Assignment: ID ASSIGN Expr 
			{
				$$ = createNode(Node_Assign);
				aux_node = createNode(Node_Id);
				aux_node->value = $1;
				insertChild($$, aux_node);
				insertBrother($$->child, $3);
			}
		  ;

MethodInvocation: ID LPAR OptExprCommaExpr RPAR 
					{
						$$ = createNode(Node_Call);
						aux_node = createNode(Node_Id);
						aux_node->value = $1;
						insertChild($$, aux_node);
						if($3 != NULL){
							if($$->child != NULL){
								insertBrother($$->child, $3);
							}
						}
					}
				| ID LPAR error RPAR 
					{
						$$ = NULL;
					}
				;

ParseArgs: PARSEINT LPAR ID LSQ Expr RSQ RPAR 
			{
				$$ = createNode(Node_ParseArgs);
				aux_node2 = createNode(Node_Id);
				aux_node2->value = $3;
				insertChild($$,aux_node2);
				insertBrother($$->child, $5);
			}
		 | PARSEINT LPAR error RPAR 
		 	{
				$$ = NULL;
			}
		 ;

OptExprCommaExpr: Expr MultipleCommaExpr
				{
					$$ = $1;
					if($2 != NULL){
				 		insertBrother($$ , $2);
					}
				}
				| Empty { $$ = NULL; }
				;

MultipleCommaExpr: Empty { $$ = NULL; }
				 | COMMA Expr MultipleCommaExpr
				 	{
						if($3 != NULL){
							$$ = $2;
							insertBrother($$ , $3);
						}
						if($3 == NULL){
							$$ = $2;
						}
					}
				 ;

Expr: Assignment { $$ = $1; }
	| ExprWithoutAssign { $$ = $1; /*Evita que dentro da expressao leia Assignment*/} 
	;

ExprWithoutAssign: ExprWithoutAssign PLUS ExprWithoutAssign { $$ = createNode(Node_Add); insertChild($$, $1); insertBrother($$->child, $3); }
	| ExprWithoutAssign MINUS ExprWithoutAssign { $$ = createNode(Node_Sub); insertChild($$, $1); insertBrother($$->child, $3); }
	| ExprWithoutAssign STAR ExprWithoutAssign { $$ = createNode(Node_Mul); insertChild($$, $1); insertBrother($$->child, $3); }
	| ExprWithoutAssign DIV ExprWithoutAssign { $$ = createNode(Node_Div); insertChild($$, $1); insertBrother($$->child, $3); }
	| ExprWithoutAssign MOD ExprWithoutAssign { $$ = createNode(Node_Mod); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign AND ExprWithoutAssign { $$ = createNode(Node_And); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign OR ExprWithoutAssign { $$ = createNode(Node_Or); insertChild($$, $1); insertBrother($$->child, $3); }
	| ExprWithoutAssign XOR ExprWithoutAssign { $$ = createNode(Node_Xor); insertChild($$, $1); insertBrother($$->child, $3); }
	| ExprWithoutAssign LSHIFT ExprWithoutAssign { $$ = createNode(Node_LShift); insertChild($$, $1); insertBrother($$->child, $3); }
	| ExprWithoutAssign RSHIFT ExprWithoutAssign { $$ = createNode(Node_RShift); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign EQ ExprWithoutAssign { $$ = createNode(Node_Eq); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign GE ExprWithoutAssign { $$ = createNode(Node_Ge); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign GT ExprWithoutAssign { $$ = createNode(Node_Gt); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign LE ExprWithoutAssign { $$ = createNode(Node_Le); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign LT ExprWithoutAssign { $$ = createNode(Node_Lt); insertChild($$, $1); insertBrother($$->child, $3); }
    | ExprWithoutAssign NE ExprWithoutAssign { $$ = createNode(Node_Ne); insertChild($$, $1); insertBrother($$->child, $3); }
    | MINUS ExprWithoutAssign %prec UNARY { $$ = createNode(Node_Minus); insertChild($$, $2); }
    | NOT ExprWithoutAssign %prec UNARY{ $$ = createNode(Node_Not); insertChild($$, $2); }
	| PLUS ExprWithoutAssign %prec UNARY { $$ = createNode(Node_Plus); insertChild($$, $2); }
    | LPAR Expr RPAR { $$ = $2; }
	| MethodInvocation { $$ = $1; }
	| ParseArgs { $$ = $1; }
    | ID OptDotLength 
		{
			if($2==NULL){
    		$$ = createNode(Node_Id);
    		$$->value = $1;
			}
			if($2 != NULL){
				$$ = $2;
				aux_node = createNode(Node_Id);
				aux_node->value = $1;
				insertChild($$,aux_node);
			}
		} 
	| INTLIT { $$ = createNode(Node_Intlit); $$->value = $1; } 
    | BOOLLIT { $$ = createNode(Node_Boolit); $$->value = $1; }
	| REALLIT { $$ = createNode(Node_Reallit); $$->value = $1; }
    | LPAR error RPAR 
		{
			$$ = NULL;
		}
	;

OptDotLength: DOTLENGTH { $$ = createNode(Node_Length); }
			| Empty { $$ = NULL; }
			;	
	
Empty: {; } 
	 ; 

%%

