%{
//2014230130 Ricardo Sintra Tavares

#include "y.tab.h"
int multiLineComment = 0;
int line = 1;
int column = 1;
int printTokens = 0;

struct Position {
        int column;
        int line;
    };
struct Position commentTracker;
struct Position stringTracker;
%}

number [0-9]+
lowerCase [a-z]+
upperCase [A-Z]+
reserved "++"|"--"|"System"|"break"|"byte"|"case"|"catch"|"char"|"const"|"enum"|"extends"|"final"|"finally"|"float"|"for"|"implements"|"import"|"instanceof"|"interface"|"long"|"native"|"new"|"protected"|"short"|"strictfp"|"super"|"this"|"throw"|"throws"|"transient"|"try"|"volatile"|"Integer"|"switch"|"assert"|"default"|"package"|"synchronized"|"do"|"goto"|"private"|"abstract"|"continue"|"null"
expo [eE][+-]?
reallitnumber [0-9]+(([0-9]|_)*[0-9])*
id ({lowerCase}|{upperCase}|"_"|"$")+({lowerCase}|{upperCase}|"_"|"$"|{number})*
intlit 0|[1-9](\_+{number}|{number})*
reallit {reallitnumber}({expo}{reallitnumber})|({reallitnumber}"."(({reallitnumber}{expo}{reallitnumber})|{reallitnumber}|{expo}{reallitnumber})?)|"."{reallitnumber}({expo}{reallitnumber})?
escapes \\n|\\t|\\r|\\f|\\\"|\\\\
undefEscapes \\[^ntrf\"\\]
newlineCarriage \n|\r|\r\n
strlit "\""(([^"\\\n\r]|({escapes}))*)"\""

%X COMMENT
%X STRINGSTATE
%%

"true"|"false" {if(printTokens == 1) {printf("BOOLLIT(%s)\n", yytext);} column += yyleng; if(printTokens == 0){return BOOLIT;}}
"&&" {if(printTokens == 1) {printf("AND\n");} column += yyleng; if(printTokens == 0){return AND;}}
"=" {if(printTokens == 1) {printf("ASSIGN\n");} column += yyleng; if(printTokens == 0){return ASSIGN;}}
"*" {if(printTokens == 1) {printf("STAR\n");} column += yyleng; if(printTokens == 0){return STAR;}}
"," {if(printTokens == 1) {printf("COMMA\n");} column += yyleng; if(printTokens == 0){return COMMA;}}
"/" {if(printTokens == 1) {printf("DIV\n");} column += yyleng; if(printTokens == 0){return DIV;}}
"==" {if(printTokens == 1) {printf("EQ\n");} column += yyleng; if(printTokens == 0){return EQ;}}
">=" {if(printTokens == 1) {printf("GE\n");} column += yyleng; if(printTokens == 0){return GE;}}
">" {if(printTokens == 1) {printf("GT\n");} column += yyleng; if(printTokens == 0){return GT;}}
"{" {if(printTokens == 1) {printf("LBRACE\n");} column += yyleng; if(printTokens == 0){return LBRACE;}}
"<=" {if(printTokens == 1) {printf("LE\n");} column += yyleng; if(printTokens == 0){return LE;}}
"(" {if(printTokens == 1) {printf("LPAR\n");} column += yyleng; if(printTokens == 0){return LPAR;}}
"[" {if(printTokens == 1) {printf("LSQ\n");} column += yyleng; if(printTokens == 0){return LSQ;}}
"<" {if(printTokens == 1) {printf("LT\n");} column += yyleng; if(printTokens == 0){return LT;}}
"-" {if(printTokens == 1) {printf("MINUS\n");} column += yyleng; if(printTokens == 0){return MINUS;}}
"%" {if(printTokens == 1) {printf("MOD\n");} column += yyleng; if(printTokens == 0){return MOD;}}
"!=" {if(printTokens == 1) {printf("NE\n");} column += yyleng; if(printTokens == 0){return NE;}}
"!" {if(printTokens == 1) {printf("NOT\n");} column += yyleng; if(printTokens == 0){return NOT;}}
"||" {if(printTokens == 1) {printf("OR\n");} column += yyleng; if(printTokens == 0){return OR;}}
"+" {if(printTokens == 1) {printf("PLUS\n");} column += yyleng; if(printTokens == 0){return PLUS;}}
"}" {if(printTokens == 1) {printf("RBRACE\n");} column += yyleng; if(printTokens == 0){return RBRACE;}}
")" {if(printTokens == 1) {printf("RPAR\n");} column += yyleng; if(printTokens == 0){return RPAR;}}
"]" {if(printTokens == 1) {printf("RSQ\n");} column += yyleng; if(printTokens == 0){return RSQ;}}
";" {if(printTokens == 1) {printf("SEMICOLON\n");} column += yyleng; if(printTokens == 0){return SEMICOLON;}}
"->" {if(printTokens == 1) {printf("ARROW\n");} column += yyleng; if(printTokens == 0){return ARROW;}}
"<<" {if(printTokens == 1) {printf("LSHIFT\n");} column += yyleng; if(printTokens == 0){return LSHIFT;}}
">>" {if(printTokens == 1) {printf("RSHIFT\n");} column += yyleng; if(printTokens == 0){return RSHIFT;}}
\^ {if(printTokens == 1) {printf("XOR\n");} column += yyleng; if(printTokens == 0){return XOR;}}
"boolean" {if(printTokens == 1) {printf("BOOL\n");} column += yyleng; if(printTokens == 0){return BOOL;}}
"class" {if(printTokens == 1) {printf("CLASS\n");} column += yyleng; if(printTokens == 0){return CLASS;}}
".length" {if(printTokens == 1) {printf("DOTLENGTH\n");} column += yyleng; if(printTokens == 0){return DOTLENGTH;}}
"double" {if(printTokens == 1) {printf("DOUBLE\n");} column += yyleng; if(printTokens == 0){return DOUBLE;}}
"else" {if(printTokens == 1) {printf("ELSE\n");} column += yyleng; if(printTokens == 0){return ELSE;}}
"if" {if(printTokens == 1) {printf("IF\n");} column += yyleng; if(printTokens == 0){return IF;}}
"int" {if(printTokens == 1) {printf("INT\n");} column += yyleng; if(printTokens == 0){return INT;}}
"System.out.print" {if(printTokens == 1) {printf("PRINT\n");} column += yyleng; if(printTokens == 0){return PRINT;}}
"Integer.parseInt" {if(printTokens == 1) {printf("PARSEINT\n");} column += yyleng; if(printTokens == 0){return PARSEINT;}}
"public" {if(printTokens == 1) {printf("PUBLIC\n");} column += yyleng; if(printTokens == 0){return PUBLIC;}}
"return" {if(printTokens == 1) {printf("RETURN\n");} column += yyleng; if(printTokens == 0){return RETURN;}}
"static" {if(printTokens == 1) {printf("STATIC\n");} column += yyleng; if(printTokens == 0){return STATIC;}}
"String" {if(printTokens == 1) {printf("STRING\n");} column += yyleng; if(printTokens == 0){return STRING;}}
"void" {if(printTokens == 1) {printf("VOID\n");} column += yyleng; if(printTokens == 0){return VOID;}}
"while" {if(printTokens == 1) {printf("WHILE\n");} column += yyleng; if(printTokens == 0){return WHILE;}}



{reserved} {if(printTokens == 1) {printf("RESERVED(%s)\n",yytext);} column += yyleng; if(printTokens == 0){return RESERVED;}}
{id} {if(printTokens == 1) {printf("ID(%s)\n",yytext);} column += yyleng; if(printTokens == 0){return ID;}}
{intlit} {if(printTokens == 1) {printf("INTLIT(%s)\n",yytext);} column += yyleng; if(printTokens == 0){return INTLIT;}}
{reallit} {if(printTokens == 1) {printf("REALLIT(%s)\n",yytext);} column += yyleng; if(printTokens == 0){return REALLIT;}}
{strlit} {if(printTokens == 1) {printf("STRLIT(%s)\n",yytext);} column += yyleng; if(printTokens == 0){return STRLIT;}}



"//" {BEGIN COMMENT; column += yyleng;}
"/*" {multiLineComment = 1;BEGIN COMMENT; commentTracker.line = line; commentTracker.column = column; column += yyleng;}
<COMMENT>"*/" {if(multiLineComment == 1){multiLineComment = 0; BEGIN 0;} column = 1;}
<COMMENT>(\n|\r|\r\n) {if(multiLineComment == 0){BEGIN 0;} line++; column = 1;} //apanha comentario simples
<COMMENT><<EOF>> {printf("Line %d, col %d: unterminated comment\n", commentTracker.line, commentTracker.column); yyterminate();}
<COMMENT>. {column += yyleng;}



"\""  {column += yyleng; stringTracker.line = line; stringTracker.column = (int)(column-yyleng); BEGIN STRINGSTATE;}
<STRINGSTATE>"\"" {BEGIN 0; column += yyleng;}
<STRINGSTATE>{escapes} {column += yyleng;}
<STRINGSTATE>\\{newlineCarriage} {BEGIN 0; column += yyleng; printf("Line %d, col %d: invalid escape sequence (\\)\n", line, (int)(column-yyleng)); printf("Line %d, col %d: unterminated string literal\n", stringTracker.line, stringTracker.column); column = 1; line++;}
<STRINGSTATE>{newlineCarriage} {BEGIN 0; printf("Line %d, col %d: unterminated string literal\n", stringTracker.line, stringTracker.column) ; column = 1; line++;}
<STRINGSTATE><<EOF>> {column += yyleng; printf("Line %d, col %d: unterminated string literal\n", stringTracker.line, stringTracker.column); yyterminate();}
<STRINGSTATE>{undefEscapes}	{column += yyleng; printf("Line %d, col %d: invalid escape sequence (%s)\n", line, (int)(column-yyleng), yytext);}
<STRINGSTATE>. {column += yyleng;}



(\t|\f) {column += yyleng;}
" " {column += 1;}
{newlineCarriage} {line++; column = 1;}
. {column += yyleng; printf("Line %d, col %d: illegal character (%s)\n", line, (int)(column-yyleng), yytext);}

%%
int main(int argc, char** argv)
{
    if(argc > 1){
        if (strcmp(argv[1],"-l") == 0 || strcmp(argv[1],"-e1") == 0){
            if(strcmp(argv[1], "-l") == 0){
                printTokens = 1;
            }
            yylex();
        }
        else if(strcmp(argv[1],"-e2") == 0){
			printTokens = 0;
			yyparse();
		}
    }
    else if(argc == 1){
        printTokens = 0;
		yyparse();
    }
   
    return 0;
}

int yywrap()
{
    return 1;
}