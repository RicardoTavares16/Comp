%{
//2014230130 Ricardo Sintra Tavares
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
decimal {number}[,.]{number}
lowerCase [a-z]+
upperCase [A-Z]+
reserved "++"|"--"|"null"|"Integer"|"System"|"break"|"byte"|"case"|"catch"|"char"|"const"|"enum"|"extends"|"final"|"finally"|"float"|"for"|"implements"|"import"|"instanceof"|"interface"|"long"|"native"|"new"|"protected"|"short"|"strictfp"|"super"|"this"|"throw"|"throws"|"transient"|"try"|"volatile"|"Integer"|"System"|"switch"|"assert"|"default"|"package"|"synchronized"|"do"|"goto"|"private"|"abstract"|"continue"|"null"
expo [eE][+-]{number}
id ({lowerCase}|{upperCase}|"_"|"$")({lowerCase}|{upperCase}|"_"|"$"|{number})*
intlit 0|[1-9]+|([1-9][,_]*{number})*

%X COMMENT
%X STRING
%%

"true"|"false" {if(printTokens == 1) {printf("BOOLLIT(%s)\n", yytext);} column += yyleng;}
"&&" {if(printTokens == 1) {printf("AND\n");} column += yyleng;}
"=" {if(printTokens == 1) {printf("ASSIGN\n");} column += yyleng;}
"*" {if(printTokens == 1) {printf("STAR\n");} column += yyleng;}
"," {if(printTokens == 1) {printf("COMMA\n");} column += yyleng;}
"/" {if(printTokens == 1) {printf("DIV\n");} column += yyleng;}
"==" {if(printTokens == 1) {printf("EQ\n");} column += yyleng;}
">=" {if(printTokens == 1) {printf("GE\n");} column += yyleng;}
">" {if(printTokens == 1) {printf("GT\n");} column += yyleng;}
"{" {if(printTokens == 1) {printf("LBRACE\n");} column += yyleng;}
"<=" {if(printTokens == 1) {printf("LE\n");} column += yyleng;}
"(" {if(printTokens == 1) {printf("LPAR\n");} column += yyleng;}
"[" {if(printTokens == 1) {printf("LSQ\n");} column += yyleng;}
"<" {if(printTokens == 1) {printf("LT\n");} column += yyleng;}
"-" {if(printTokens == 1) {printf("MINUS\n");} column += yyleng;}
"%" {if(printTokens == 1) {printf("MOD\n");} column += yyleng;}
"!=" {if(printTokens == 1) {printf("NE\n");} column += yyleng;}
"!" {if(printTokens == 1) {printf("NOT\n");} column += yyleng;}
"||" {if(printTokens == 1) {printf("OR\n");} column += yyleng;}
"+" {if(printTokens == 1) {printf("PLUS\n");} column += yyleng;}
"}" {if(printTokens == 1) {printf("RBRACE\n");} column += yyleng;}
")" {if(printTokens == 1) {printf("RPAR\n");} column += yyleng;}
"]" {if(printTokens == 1) {printf("RSQ\n");} column += yyleng;}
";" {if(printTokens == 1) {printf("SEMICOLON\n");} column += yyleng;}
"->" {if(printTokens == 1) {printf("ARROW\n");} column += yyleng;}
"<<" {if(printTokens == 1) {printf("LSHIFT\n");} column += yyleng;}
">>" {if(printTokens == 1) {printf("RSHIFT\n");} column += yyleng;}
"ˆ" {if(printTokens == 1) {printf("XOR\n");} column += yyleng;}
"boolean" {if(printTokens == 1) {printf("BOOL\n");} column += yyleng;}
"class" {if(printTokens == 1) {printf("CLASS\n");} column += yyleng;}
".length" {if(printTokens == 1) {printf("DOTLENGTH\n");} column += yyleng;}
"double" {if(printTokens == 1) {printf("DOUBLE\n");} column += yyleng;}
"else" {if(printTokens == 1) {printf("ELSE\n");} column += yyleng;}
"if" {if(printTokens == 1) {printf("IF\n");} column += yyleng;}
"int" {if(printTokens == 1) {printf("INT\n");} column += yyleng;}
"System.out.print" {if(printTokens == 1) {printf("PRINT\n");} column += yyleng;}
"Integer.parseInt" {if(printTokens == 1) {printf("PARSEINT\n");} column += yyleng;}
"public" {if(printTokens == 1) {printf("PUBLIC\n");} column += yyleng;}
"return" {if(printTokens == 1) {printf("RETURN\n");} column += yyleng;}
"static" {if(printTokens == 1) {printf("STATIC\n");} column += yyleng;}
"String" {if(printTokens == 1) {printf("STRING\n");} column += yyleng;}
"void" {if(printTokens == 1) {printf("VOID\n");} column += yyleng;}
"while" {if(printTokens == 1) {printf("WHILE\n");} column += yyleng;}
{reserved} {if(printTokens == 1) {printf("RESERVED(%s)\n",yytext);} column += yyleng;}
{id} {if(printTokens == 1) {printf("ID(%s)\n",yytext);} column += yyleng;}
{intlit} {if(printTokens == 1) {printf("INTLIT(%s)\n",yytext);} column += yyleng;}
(\t|" "|\f) {column += yyleng;}
(\n|\r|\r\n) {line++; column = 1;}

"//" {BEGIN COMMENT; column += yyleng;}
"/*" {multiLineComment = 1;BEGIN COMMENT; commentTracker.line = line; commentTracker.column = column; column += yyleng;}
<COMMENT>"*/" {if(multiLineComment == 1){multiLineComment = 0; BEGIN 0;} column = 1;}
<COMMENT>(\n|\r|\r\n) {if(multiLineComment == 0){;BEGIN 0;} line++; column += yyleng;} //apanha comentario simples
<COMMENT><<EOF>> {printf("Line %d, col %d: unterminated comment\n", commentTracker.line, commentTracker.column); yyterminate();}
<COMMENT>. //nao faz nada

\"  {stringTracker.line = line; stringTracker.column = column; column += yyleng; BEGIN STRING;}
<STRING>\" {if(printTokens == 1) {printf("STRLIT(%s)\n", yytext);} BEGIN 0; column += yyleng;}
<STRING>\t  {column += yyleng;}
<STRING>\\[^fnrt\\\"] {printf("Line %d, col %d: invalid escape sequence (%s)\n", line, column, yytext);}
<STRING><<EOF>> {printf("Line %d, col %d: unterminated string literal\n", stringTracker.line, stringTracker.column); yyterminate();}

. {printf("Line %d, col %d: illegal character (%s)\n", line, column, yytext); column += yyleng;}

%%
int main(int argc, char** argv)
{
    if(argc > 1 && strcmp(argv[1],"-l") == 0){
        printTokens = 1;
    }

    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}