%{
    //Gonçalo Filipe Lucas Menino Rodrigues Pinto nº2014202176
    //Gabriel Monteiro Maia Pereira nº2014204763
    
    #include <stdio.h>
    #include <string.h>
    int lines_num=1;
    int cols_num=1;
    int comment_type=0;
    int show_res=0;
    int string_error=0;
    int semicolon = 0;
    char* buffer;
    struct Pos{
        int col;
        int line;
    };
    struct Pos comment_pos;
    struct Pos string_pos;
    struct Pos illegal_pos;
    
%}

lower		[a-z]+
upper		[A-Z]+
number		[0-9]+
hex		[0][x|X][0-9a-fA-F]+   
oct		[0]{number}
expo		[e|E]("+"|"-")?{number}
scape		\\[fnrt\\\"]
id          ({lower}|{upper}|"_")({lower}|{upper}|("_")|{number})*
intlit      {number}|{hex}|{oct}
reallit     ({number}"."{number}?{expo}?)|("."{number}{expo}?)|({number}{expo})
strlit      [^\r\n\"]*\"{scape}+\"
reserved	"++"|"--"|"break"|"case"|"chan"|"const"|"continue"|"default"|"defer"|"fallthrough"|"go"|"goto"|"import"|"interface"|"map"|"range"|"select"|"struct"|"switch"|"type"

%X Comment
%X String

%%

\"([^\r\n\"\\]|{scape})*\"                          {if(show_res==1) printf("STRLIT(%s)\n",yytext);cols_num+=yyleng;semicolon=1;}
\"  {string_pos.line=lines_num;string_pos.col=cols_num;cols_num+=yyleng;BEGIN String;}
<String>(\n|\r|\r\n)    {printf("Line %d, column %d: unterminated string literal\n",string_pos.line,string_pos.col);lines_num++;cols_num=1;BEGIN 0;}
<String>\t  {cols_num+=yyleng;}
<String>\"      {BEGIN 0;if(show_res==1 && string_error==0)printf("STRLIT(%s)\n",buffer);cols_num+=yyleng;string_error=0;}
<String>([^\r\n\"\\]|{scape})*     {buffer=yytext;cols_num+=yyleng;}
<String>\\[^fnrt\\\"]   {printf("Line %d, column %d: invalid escape sequence (%s)\n",lines_num,cols_num,yytext);cols_num+=yyleng;string_error=1;}
<String><<EOF>> {printf("Line %d, column %d: unterminated string literal\n",string_pos.line,string_pos.col);exit(0);}


"//"				{comment_type=2;BEGIN Comment;cols_num+=yyleng;}
"/*"				{comment_type=1;BEGIN Comment;comment_pos.col=cols_num;comment_pos.line=lines_num;cols_num+=yyleng;}
<Comment>"*/"		{if(comment_type==1){comment_type=0;BEGIN 0;}cols_num+=yyleng;}
<Comment>(\n|\r|\r\n)	{if(comment_type==2){comment_type=0;BEGIN 0;};lines_num++;cols_num=1;}
<Comment><<EOF>>		{if(comment_type==1)	printf("Line %d, column %d: unterminated comment\n",comment_pos.line,comment_pos.col);exit(0);}
<Comment>.			{cols_num+=yyleng;}



";"		{if(show_res==1) printf("SEMICOLON\n");cols_num+=yyleng;semicolon=0;}
"_"		{if(show_res==1) printf("BLANKID\n");cols_num+=yyleng;semicolon=0;}
"package"	{if(show_res==1) printf("PACKAGE\n");cols_num+=yyleng;semicolon=0;}
"return"	{if(show_res==1) printf("RETURN\n");cols_num+=yyleng;semicolon=1;}
"&&"		{if(show_res==1) printf("AND\n");cols_num+=yyleng;semicolon=0;}
"="		{if(show_res==1) printf("ASSIGN\n");cols_num+=yyleng;semicolon=0;}
"*"		{if(show_res==1) printf("STAR\n");cols_num+=yyleng;semicolon=0;}
","		{if(show_res==1) printf("COMMA\n");cols_num+=yyleng;semicolon=0;}
"/"		{if(show_res==1) printf("DIV\n");cols_num+=yyleng;semicolon=0;}
"=="		{if(show_res==1) printf("EQ\n");cols_num+=yyleng;semicolon=0;}
">="		{if(show_res==1) printf("GE\n");cols_num+=yyleng;semicolon=0;}
">"		{if(show_res==1) printf("GT\n");cols_num+=yyleng;semicolon=0;}
"{"		{if(show_res==1) printf("LBRACE\n");cols_num+=yyleng;semicolon=0;}
"<="		{if(show_res==1) printf("LE\n");cols_num+=yyleng;semicolon=0;}
"("		{if(show_res==1) printf("LPAR\n");cols_num+=yyleng;semicolon=0;}
"["		{if(show_res==1) printf("LSQ\n");cols_num+=yyleng;semicolon=0;}
"<"		{if(show_res==1) printf("LT\n");cols_num+=yyleng;semicolon=0;}
"-"		{if(show_res==1) printf("MINUS\n");cols_num+=yyleng;semicolon=0;}
"%"		{if(show_res==1) printf("MOD\n");cols_num+=yyleng;semicolon=0;}
"!="		{if(show_res==1) printf("NE\n");cols_num+=yyleng;semicolon=0;}
"!"		{if(show_res==1) printf("NOT\n");cols_num+=yyleng;semicolon=0;}
"||"		{if(show_res==1) printf("OR\n");cols_num+=yyleng;semicolon=0;}
"+"		{if(show_res==1) printf("PLUS\n");cols_num+=yyleng;semicolon=0;}
"}"		{if(show_res==1) printf("RBRACE\n");cols_num+=yyleng;semicolon=1;}
")"		{if(show_res==1) printf("RPAR\n");cols_num+=yyleng;semicolon=1;}
"]"		{if(show_res==1) printf("RSQ\n");cols_num+=yyleng;semicolon=1;}
"else"		{if(show_res==1) printf("ELSE\n");cols_num+=yyleng;semicolon=0;}
"for"		{if(show_res==1) printf("FOR\n");cols_num+=yyleng;semicolon=0;}
"if"		{if(show_res==1) printf("IF\n");cols_num+=yyleng;semicolon=0;}
"var"		{if(show_res==1) printf("VAR\n");cols_num+=yyleng;semicolon=0;}
"int"		{if(show_res==1) printf("INT\n");cols_num+=yyleng;semicolon=0;}
"float32"	{if(show_res==1) printf("FLOAT32\n");cols_num+=yyleng;semicolon=0;}
"bool"		{if(show_res==1) printf("BOOL\n");cols_num+=yyleng;semicolon=0;}
"string"	{if(show_res==1) printf("STRING\n");cols_num+=yyleng;semicolon=0;}
"fmt.Println"	{if(show_res==1) printf("PRINT\n");cols_num+=yyleng;semicolon=0;}
"strconv.Atoi"	{if(show_res==1) printf("PARSEINT\n");cols_num+=yyleng;semicolon=0;}
"func"		{if(show_res==1) printf("FUNC\n");cols_num+=yyleng;semicolon=0;}
"os.Args"	{if(show_res==1) printf("CMDARGS\n");cols_num+=yyleng;semicolon=0;}
{reserved}	{if(show_res==1) printf("RESERVED(%s)\n",yytext);cols_num+=yyleng;semicolon=0;}
({lower}|{upper}|"_")({lower}|{upper}|("_")|{number})*		{if(show_res==1) printf("ID(%s)\n",yytext);cols_num+=yyleng;semicolon=1;}
{number}|{hex}|{oct}							{if(show_res==1) printf("INTLIT(%s)\n",yytext);cols_num+=yyleng;semicolon=1;}
({number}"."{number}?{expo}?)|("."{number}{expo}?)|({number}{expo})	{if(show_res==1) printf("REALLIT(%s)\n",yytext);cols_num+=yyleng;semicolon=1;}
(\t|" "|\f) {cols_num++;}
(\n|\r|\r\n)    {if(semicolon==1 && show_res==1) printf("SEMICOLON\n");lines_num++;cols_num=1;semicolon=0;}
<<EOF>>      {if(semicolon==1 && show_res==1) printf("SEMICOLON\n");exit(0);}
.   {printf("Line %d, column %d: illegal character (%s)\n",lines_num,cols_num,yytext);cols_num+=yyleng;semicolon=0;}

%%
int main(int argc, char** argv){
    if(argc>1){
        if(strcmp(argv[1],"-l")==0){
            show_res=1;
        }
    }
    yylex();
    return 0;
}

int yywrap(){
	return 1;
}