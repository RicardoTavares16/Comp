%{
//2014230130 Ricardo Sintra Tavares
int multiLineComment=0;
%}

number [0-9]+
reserved "++"|"--"|"null"|"Integer"|"System"

%X COMMENT
%%

"true"|"false" {printf("BOOLLIT\n");}
"&&" {printf("AND\n");}
"=" {printf("ASSIGN\n");}
"*" {printf("STAR\n");}
"," {printf("COMMA\n");}
"/" {printf("DIV\n");}
"==" {printf("EQ\n");}
">=" {printf("GE\n");}
">" {printf("GT\n");}
"{" {printf("LBRACE\n");}
"<=" {printf("LE\n");}
"(" {printf("LPAR\n");}
"[" {printf("LSQ\n");}
"<" {printf("LT\n");}
"-" {printf("MINUS\n");}
"%" {printf("MOD\n");}
"!=" {printf("NE\n");}
"!" {printf("NOT\n");}
"||" {printf("OR\n");}
"+" {printf("PLUS\n");}
"}" {printf("RBRACE\n");}
")" {printf("RPAR\n");}
"]" {printf("RSQ\n");}
";" {printf("SEMICOLON\n");}
"->" {printf("ARROW\n");}
"<<" {printf("LSHIFT\n");}
">>" {printf("RSHIFT\n");}
"ˆ" {printf("XOR\n");}
"boolean" {printf("BOOL\n");}
"class" {printf("CLASS\n");}
".length" {printf("DOTLENGTH\n");}
"double" {printf("DOUBLE\n");}
"else" {printf("ELSE\n");}
"if" {printf("IF\n");}
"int" {printf("INT\n");}
"System.out.print" {printf("PRINT\n");}
"Integer.parseInt" {printf("PARSEINT\n");}
"public" {printf("PUBLIC\n");}
"return" {printf("RETURN\n");}
"static" {printf("STATIC\n");}
"String" {printf("STRING\n");}
"void" {printf("VOID\n");}
"while" {printf("WHILE\n");}
{reserved} {printf("RESERVED\n");}

"//" {BEGIN COMMENT;}
"/*" {multiLineComment=1;BEGIN COMMENT;}
<COMMENT>"*/" {if(multiLineComment==1){multiLineComment=0;printf("fim comentario\n");BEGIN 0;}}
<COMMENT>(\n|\r|\r\n) {if(multiLineComment==0){printf("comentario simples\n");BEGIN 0;}} //apanha comentario simples
<COMMENT><<EOF>> {printf("ERRO COmentario\n");}
<COMMENT>. //nao faz nada
%%
int main()
{
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}