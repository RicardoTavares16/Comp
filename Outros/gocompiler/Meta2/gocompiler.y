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
    struct node_ast* node;
}


%token <s> ID INTLIT REALLIT STRLIT PACKAGE SEMICOLON VAR INT FLOAT32 BOOL STRING BLANKID PARSEINT CMDARGS FUNC STAR LBRACE RBRACE PRINT RETURN IF LSQ RSQ FOR RPAR NOT COMMA ASSIGN LPAR ELSE RESERVED


%type <node> Program Declarations VarDeclaration VarSpec Type FuncDeclaration Parameters FuncBody VarsAndStatements Statement ParseArgs FuncInvocation Expr HParameters HStatement HFuncInvocation HExpr Vazio HFuncInvocation2 HParseArgs HVarSpecInt HVarSpecFloat HVarSpecBool HVarSpecString

%%

Program: PACKAGE ID SEMICOLON Declarations								{$$=add_node("Program");root=$$;if($4!=NULL){add_son($$,$4);};};

Declarations: Declarations VarDeclaration SEMICOLON						{if($1!=NULL){$$=$1;add_brother($$,$2);}else{$$=$2;};}
| Declarations FuncDeclaration SEMICOLON								{if($1!=NULL){$$=$1;add_brother($$,$2);}else{$$=$2;};}
| Vazio																	{$$=$1;};

VarDeclaration: VAR VarSpec												{$$=$2;}
| VAR LPAR VarSpec SEMICOLON RPAR										{$$=$3;};


VarSpec: ID HVarSpecInt INT												{$$=add_node("VarDecl");add_son($$,add_node("Int"));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};}
| ID HVarSpecFloat FLOAT32												{$$=add_node("VarDecl");add_son($$,add_node("Float32"));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};}
| ID HVarSpecBool BOOL													{$$=add_node("VarDecl");add_son($$,add_node("Bool"));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};}
| ID HVarSpecString STRING												{$$=add_node("VarDecl");add_son($$,add_node("String"));add_brother($$->filho,add_node_value("Id",$1));if($2!=NULL){add_brother($$,$2);};};

HVarSpecInt: COMMA ID HVarSpecInt										{$$=add_node("VarDecl");add_son($$,add_node("Int"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

HVarSpecFloat: COMMA ID HVarSpecFloat									{$$=add_node("VarDecl");add_son($$,add_node("Float32"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

HVarSpecBool: COMMA ID HVarSpecBool										{$$=add_node("VarDecl");add_son($$,add_node("Bool"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

HVarSpecString: COMMA ID HVarSpecString									{$$=add_node("VarDecl");add_son($$,add_node("String"));add_brother($$->filho,add_node_value("Id",$2));if($3!=NULL){add_brother($$,$3);};}
| Vazio																	{$$=$1;};

Type: INT																{$$=add_node("Int");strcpy(type,$$->id);}
| FLOAT32																{$$=add_node("Float32");strcpy(type,$$->id);}
| BOOL																	{$$=add_node("Bool");strcpy(type,$$->id);}
| STRING																{$$=add_node("String");strcpy(type,$$->id);};

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

Statement: ID ASSIGN Expr												{$$=add_node("Assign");add_son($$,add_node_value("Id",$1));add_brother($$->filho,$3);}
| LBRACE HStatement RBRACE												{if($2!=NULL && $2->irmao!=NULL){$$=add_node("Block");add_son($$,$2);}else{$$=$2;}}
| IF Expr LBRACE HStatement RBRACE										{$$=add_node("If");if($2!=NULL){add_son($$,$2);add_brother($2,add_node("Block"));if($4!=NULL){add_son($2->irmao,$4);};add_brother($2->irmao,add_node("Block"));}}
| IF Expr LBRACE HStatement RBRACE ELSE LBRACE HStatement RBRACE		{$$=add_node("If");if($2!=NULL){add_son($$,$2);add_brother($2,add_node("Block"));if($4!=NULL){add_son($2->irmao,$4);};add_brother($2->irmao,add_node("Block"));if($8!=NULL){add_son($2->irmao->irmao,$8);};}}
| FOR Expr LBRACE HStatement RBRACE										{$$=add_node("For");add_son($$,$2);add_brother($2,add_node("Block"));if($4!=NULL){add_son($2->irmao,$4);};}
| FOR LBRACE HStatement RBRACE											{$$=add_node("For");add_son($$,add_node("Block"));if($3!=NULL){add_son($$->filho,$3);};}
| RETURN																{$$=add_node("Return");}								
| RETURN Expr															{$$=add_node("Return");add_son($$,$2);}
| FuncInvocation														{$$=$1;}
| ParseArgs																{$$=$1;}
| PRINT LPAR Expr RPAR													{$$=add_node("Print");add_son($$,$3);}
| PRINT LPAR STRLIT RPAR												{$$=add_node("Print");add_son($$,add_node_value("StrLit",$3));}
| error																	{$$=NULL;};

HStatement: Statement SEMICOLON HStatement								{if($1!=NULL){$$=$1;if($3!=NULL){add_brother($$,$3);};}else{if($3!=NULL){$$=$3;}else{$$=NULL;}}}
| Vazio																	{$$=NULL;};


ParseArgs: ID COMMA BLANKID ASSIGN PARSEINT LPAR HParseArgs RPAR		{$$=add_node("ParseArgs");add_son($$,add_node_value("Id",$1));if($7!=NULL){add_brother($$->filho,$7);}};


HParseArgs: CMDARGS LSQ Expr RSQ				{$$=$3;}
|error 											{$$=NULL;};

FuncInvocation: ID LPAR RPAR					{$$=add_node("Call");add_son($$,add_node_value("Id",$1));}
| ID LPAR HFuncInvocation2 RPAR					{$$=add_node("Call");add_son($$,add_node_value("Id",$1));if($3!=NULL){add_brother($$->filho,$3);}};


HFuncInvocation: COMMA Expr HFuncInvocation 	{$$=$2;if($3!=NULL){add_brother($$,$3);};}
| Vazio											{$$=NULL;};

HFuncInvocation2: Expr HFuncInvocation 			{$$=$1;if($2!=NULL){add_brother($$,$2);};}
|error											{$$=NULL;};

Expr: Expr OR Expr 								{$$=add_node("Or");add_son($$,$1);add_brother($1,$3);}
| Expr AND Expr 								{$$=add_node("And");add_son($$,$1);add_brother($1,$3);}
| Expr LT Expr  								{$$=add_node("Lt");add_son($$,$1);add_brother($1,$3);}
| Expr GT Expr  								{$$=add_node("Gt");add_son($$,$1);add_brother($1,$3);}
| Expr EQ Expr 									{$$=add_node("Eq");add_son($$,$1);add_brother($1,$3);}
| Expr NE Expr 									{$$=add_node("Ne");add_son($$,$1);add_brother($1,$3);}
| Expr LE Expr 									{$$=add_node("Le");add_son($$,$1);add_brother($1,$3);}
| Expr GE Expr 									{$$=add_node("Ge");add_son($$,$1);add_brother($1,$3);}
| Expr PLUS Expr 								{$$=add_node("Add");add_son($$,$1);add_brother($1,$3);}
| Expr MINUS Expr 								{$$=add_node("Sub");add_son($$,$1);add_brother($1,$3);}
| Expr STAR Expr 								{$$=add_node("Mul");add_son($$,$1);add_brother($1,$3);}
| Expr DIV Expr 								{$$=add_node("Div");add_son($$,$1);add_brother($1,$3);}
| Expr MOD Expr 								{$$=add_node("Mod");add_son($$,$1);add_brother($1,$3);}
| NOT Expr 	 	%prec spec						{$$=add_node("Not");add_son($$,$2);}
| MINUS Expr 	%prec spec						{$$=add_node("Minus");add_son($$,$2);}
| PLUS Expr 	%prec spec						{$$=add_node("Plus");add_son($$,$2);}
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
	//printf("Bracket_close before %d\n",bracket_close);
	//printf("One_time before %d\n",one_time);
	if(bracket_close!=0){
		if(one_time==1){
			if(bracket_close==1){
				//printf("Bracket_closeTest %d\n",bracket_close);
				//printf("Bracket Line %d\n",bracket_line);
				printf("Line %d, column %d: %s: %s\n",++bracket_line,1,s,yytext);
				one_time=0;
			}
				else{
				//printf("Bracket_close1 %d\n",bracket_close);
				//printf("One_time1 %d\n",one_time);
				printf("Line %d, column %d: %s: %s\n",bracket_line,(bracket_column-yyleng)+1,s,yytext);
				one_time=0;
			}
		}
		else{
			//printf("Bracket_close2 %d\n",bracket_close);
			//printf("One_time2 %d\n",one_time);
			printf("Line %d, column %d: %s: %s\n",lines_num,cols_num-yyleng,s,yytext);
		}
	}
	else{
		//printf("Bracket_close3 %d\n",bracket_close);
		//printf("One_time3 %d\n",one_time);
		printf("Line %d, column %d: %s: %s\n",lines_num,cols_num-yyleng,s,yytext);
	}
	return 0;
}
