%{
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


 
%}

%left COMMA
%right ASSIGN
%left OR
%left AND
%left EQ NE LT LE GE GT
%left PLUS MINUS
%left STAR DIV MOD
%right NOT
%left LPAR RPAR LSQ RSQ
%nonassoc spec

%union{
    char* s;
    struct Token* token;
    struct node_ast* node;
}


%token <token> ID INTLIT REALLIT STRLIT PACKAGE SEMICOLON VAR INT FLOAT32 BOOL STRING BLANKID PARSEINT CMDARGS FUNC STAR LBRACE RBRACE PRINT RETURN IF LSQ RSQ FOR RPAR NOT COMMA ASSIGN LPAR ELSE RESERVED AND OR LT GT EQ NE LE GE PLUS MINUS MOD DIV 


%type <node> Program Declarations VarDeclaration VarSpec Type FuncDeclaration Parameters FuncBody VarsAndStatements Statement FuncInvocation Expr HParameters HStatement HFuncInvocation HExpr Vazio HFuncInvocation2 ParseArgs HParseArgs HVarSpecInt HVarSpecFloat HVarSpecBool HVarSpecString

%%

Program: PACKAGE ID SEMICOLON Declarations								{$$=add_node("Program");root=$$;if($4!=NULL){add_son($$,$4);};};

Declarations: Declarations VarDeclaration SEMICOLON						{if($1!=NULL){$$=$1;add_brother($$,$2);}else{$$=$2;};}
| Declarations FuncDeclaration SEMICOLON								{if($1!=NULL){$$=$1;add_brother($$,$2);}else{$$=$2;};}
| Vazio																	{$$=$1;};

VarDeclaration: VAR VarSpec												{$$=$2;}
| VAR LPAR VarSpec SEMICOLON RPAR										{$$=$3;};


VarSpec: ID HVarSpecInt INT												{$$=add_node("VarDecl");add_son($$,add_node_value("Int",$3));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};}
| ID HVarSpecFloat FLOAT32												{$$=add_node("VarDecl");add_son($$,add_node_value("Float32",$3));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};}
| ID HVarSpecBool BOOL													{$$=add_node("VarDecl");add_son($$,add_node_value("Bool",$3));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};}
| ID HVarSpecString STRING												{$$=add_node("VarDecl");add_son($$,add_node_value("String",$3));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};};

HVarSpecInt: COMMA ID HVarSpecInt										{$$=add_node("VarDecl");add_son($$,add_node("Int"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

HVarSpecFloat: COMMA ID HVarSpecFloat									{$$=add_node("VarDecl");add_son($$,add_node("Float32"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

HVarSpecBool: COMMA ID HVarSpecBool										{$$=add_node("VarDecl");add_son($$,add_node("Bool"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

HVarSpecString: COMMA ID HVarSpecString									{$$=add_node("VarDecl");add_son($$,add_node("String"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

Type: INT																{$$=add_node_value("Int",$1);}
| FLOAT32																{$$=add_node_value("Float32",$1);}
| BOOL																	{$$=add_node_value("Bool",$1);}
| STRING																{$$=add_node_value("String",$1);}

FuncDeclaration: FUNC ID LPAR RPAR FuncBody								{$$=add_node("FuncDecl");add_son($$,add_node("FuncHeader"));add_son($$->filho,add_node_value("Id",$2));add_brother($$->filho->filho,add_node("FuncParams"));add_brother($$->filho,$5);}
| FUNC ID LPAR Parameters RPAR FuncBody									{$$=add_node("FuncDecl");add_son($$,add_node("FuncHeader"));add_son($$->filho,add_node_value("Id",$2));add_brother($$->filho->filho,$4);add_brother($$->filho,$6);}
| FUNC ID LPAR RPAR Type FuncBody										{$$=add_node("FuncDecl");add_son($$,add_node("FuncHeader"));add_son($$->filho,add_node_value("Id",$2));add_brother($$->filho->filho,$5);add_brother($5,add_node("FuncParams"));add_brother($$->filho,$6);}
| FUNC ID LPAR Parameters RPAR Type FuncBody							{$$=add_node("FuncDecl");add_son($$,add_node("FuncHeader"));add_son($$->filho,add_node_value("Id",$2));add_brother($$->filho->filho,$6);add_brother($6,$4);add_brother($$->filho,$7);};

Parameters: ID Type HParameters											{$$=add_node("FuncParams");add_son($$,add_node("ParamDecl"));add_son($$->filho,$2);add_brother($2,add_node_value("Id",$1));if($3!=NULL){add_brother($$->filho,$3);};};

HParameters: COMMA ID Type HParameters									{$$=add_node("ParamDecl");add_son($$,$3);add_brother($3,add_node_value("Id",$2));if($4!=NULL){add_brother($$,$4);};}
| Vazio																	{$$=$1;};

FuncBody: LBRACE VarsAndStatements RBRACE								{$$=add_node("FuncBody");if($2!=NULL){add_son($$,$2);};};


VarsAndStatements: VarsAndStatements VarDeclaration SEMICOLON			{if($1!=NULL){$$=$1;add_brother($$,$2);}else{$$=$2;};}
| VarsAndStatements Statement SEMICOLON									{if($1!=NULL){$$=$1;if($2!=NULL){add_brother($$,$2);};}else{$$=$2;};}
| VarsAndStatements SEMICOLON											{$$=$1;}
| Vazio																	{$$=$1;};

Statement: ID ASSIGN Expr												{$$=add_node_value("Assign",$2);add_son($$,add_node_value("Id",$1));add_brother($$->filho,$3);}
| LBRACE HStatement RBRACE												{if($2!=NULL && $2->irmao!=NULL){$$=add_node("Block");add_son($$,$2);}else{$$=$2;}}
| IF Expr LBRACE HStatement RBRACE										{$$=add_node_value("If",$1);if($2!=NULL){add_son($$,$2);add_brother($2,add_node("Block"));if($4!=NULL){add_son($2->irmao,$4);};add_brother($2->irmao,add_node("Block"));}}
| IF Expr LBRACE HStatement RBRACE ELSE LBRACE HStatement RBRACE		{$$=add_node_value("If",$1);if($2!=NULL){add_son($$,$2);add_brother($2,add_node("Block"));if($4!=NULL){add_son($2->irmao,$4);};add_brother($2->irmao,add_node("Block"));if($8!=NULL){add_son($2->irmao->irmao,$8);};}}
| FOR Expr LBRACE HStatement RBRACE										{$$=add_node_value("For",$1);add_son($$,$2);add_brother($2,add_node("Block"));if($4!=NULL){add_son($2->irmao,$4);};}
| FOR LBRACE HStatement RBRACE											{$$=add_node_value("For",$1);add_son($$,add_node("Block"));if($3!=NULL){add_son($$->filho,$3);};}
| RETURN																{$$=add_node_value("Return",$1);}								
| RETURN Expr															{$$=add_node_value("Return",$1);add_son($$,$2);}
| FuncInvocation														{$$=$1;}
| ParseArgs																{$$=$1;}
| PRINT LPAR Expr RPAR													{$$=add_node_value("Print",$1);add_son($$,$3);}
| PRINT LPAR STRLIT RPAR												{$$=add_node_value("Print",$1);add_son($$,add_node_value("StrLit",$3));}
| error																	{$$=NULL;};

HStatement: Statement SEMICOLON HStatement								{if($1!=NULL){$$=$1;if($3!=NULL){add_brother($$,$3);};}else{if($3!=NULL){$$=$3;}else{$$=NULL;}}}
| Vazio																	{$$=NULL;};


ParseArgs: ID COMMA BLANKID ASSIGN PARSEINT LPAR HParseArgs RPAR		{$$=add_node_value("ParseArgs",$5);add_son($$,add_node_value("Id",$1));if($7!=NULL){add_brother($$->filho,$7);}};


HParseArgs: CMDARGS LSQ Expr RSQ				{$$=$3;}
|error 											{$$=NULL;};

FuncInvocation: ID LPAR RPAR					{$$=add_node("Call");add_son($$,add_node_value("Id",$1));}
| ID LPAR HFuncInvocation2 RPAR					{$$=add_node("Call");add_son($$,add_node_value("Id",$1));if($3!=NULL){add_brother($$->filho,$3);}};


HFuncInvocation: COMMA Expr HFuncInvocation 	{$$=$2;if($3!=NULL){add_brother($$,$3);};}
| Vazio											{$$=NULL;};

HFuncInvocation2: Expr HFuncInvocation 			{$$=$1;if($2!=NULL){add_brother($$,$2);};}
|error											{$$=NULL;};

Expr: Expr OR Expr 								{$$=add_node_value("Or",$2);add_son($$,$1);add_brother($1,$3);}
| Expr AND Expr 								{$$=add_node_value("And",$2);add_son($$,$1);add_brother($1,$3);}
| Expr LT Expr  								{$$=add_node_value("Lt",$2);add_son($$,$1);add_brother($1,$3);}
| Expr GT Expr  								{$$=add_node_value("Gt",$2);add_son($$,$1);add_brother($1,$3);}
| Expr EQ Expr 									{$$=add_node_value("Eq",$2);add_son($$,$1);add_brother($1,$3);}
| Expr NE Expr 									{$$=add_node_value("Ne",$2);add_son($$,$1);add_brother($1,$3);}
| Expr LE Expr 									{$$=add_node_value("Le",$2);add_son($$,$1);add_brother($1,$3);}
| Expr GE Expr 									{$$=add_node_value("Ge",$2);add_son($$,$1);add_brother($1,$3);}
| Expr PLUS Expr 								{$$=add_node_value("Add",$2);add_son($$,$1);add_brother($1,$3);}
| Expr MINUS Expr 								{$$=add_node_value("Sub",$2);add_son($$,$1);add_brother($1,$3);}
| Expr STAR Expr 								{$$=add_node_value("Mul",$2);add_son($$,$1);add_brother($1,$3);}
| Expr DIV Expr 								{$$=add_node_value("Div",$2);add_son($$,$1);add_brother($1,$3);}
| Expr MOD Expr 								{$$=add_node_value("Mod",$2);add_son($$,$1);add_brother($1,$3);}
| NOT Expr 	 	%prec spec						{$$=add_node_value("Not",$1);add_son($$,$2);}
| MINUS Expr 	%prec spec						{$$=add_node_value("Minus",$1);add_son($$,$2);}
| PLUS Expr 	%prec spec						{$$=add_node_value("Plus",$1);add_son($$,$2);}
| INTLIT 										{$$=add_node_value("IntLit",$1);}
| REALLIT 										{$$=add_node_value("RealLit",$1);}
| ID 											{$$=add_node_value("Id",$1);}
| FuncInvocation								{$$=$1;}
| LPAR HExpr RPAR								{$$=$2;};

HExpr: Expr										{$$=$1;}
| error											{$$=NULL;};

Vazio:											{$$=NULL;};
%%


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
