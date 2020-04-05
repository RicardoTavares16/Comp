%{
    //Gonçalo Filipe Lucas Menino Rodrigues Pinto nº2014202176
    //Gabriel Monteiro Maia Pereira nº2014204763
    
    #include "y.tab.h"
    #include <stdio.h>
    #include <string.h>
    #include "semantics.h"
                                                                                                       

    int lines_num=1;
    int cols_num=1;
    int comment_type=0;
    int show_res=0;
    int string_error=0;
    int flag_yacc_error=0;
    int semicolon = 0;
    int bracket_line = 0;
    int bracket_column = 0;
    int bracket_close = 0;
    int one_time = 0;
    char* buffer;
    extern int yydebug;
    extern node* root;
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

\"([^\r\n\"\\]|{scape})*\"                          {cols_num+=yyleng;bracket_column=cols_num;bracket_line=lines_num;semicolon=1;if(show_res==1) printf("STRLIT(%s)\n",yytext);else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return STRLIT;}}
\"  {string_pos.line=lines_num;string_pos.col=cols_num;cols_num+=yyleng;BEGIN String;}
<String>(\n|\r|\r\n)    {printf("Line %d, column %d: unterminated string literal\n",string_pos.line,string_pos.col);lines_num++;cols_num=1;BEGIN 0;}
<String>\t  {cols_num+=yyleng;}
<String>\"      {BEGIN 0;if(show_res==1 && string_error==0)printf("STRLIT(%s)\n",buffer);cols_num+=yyleng;string_error=0;}
<String>([^\r\n\"\\]|{scape})*     {buffer=yytext;cols_num+=yyleng;}
<String>\\[^fnrt\\\"]   {printf("Line %d, column %d: invalid escape sequence (%s)\n",lines_num,cols_num,yytext);cols_num+=yyleng;string_error=1;}
<String><<EOF>> {printf("Line %d, column %d: unterminated string literal\n",string_pos.line,string_pos.col);yyterminate();}


"//"				{comment_type=2;BEGIN Comment;cols_num+=yyleng;}
"/*"				{comment_type=1;BEGIN Comment;comment_pos.col=cols_num;comment_pos.line=lines_num;cols_num+=yyleng;}
<Comment>"*/"		{if(comment_type==1){comment_type=0;BEGIN 0;}cols_num+=yyleng;}
<Comment>(\n|\r|\r\n)	{if(comment_type==2){comment_type=0;BEGIN 0;};lines_num++;cols_num=1;}
<Comment><<EOF>>		{if(comment_type==1)	printf("Line %d, column %d: unterminated comment\n",comment_pos.line,comment_pos.col);yyterminate();}
<Comment>.			{cols_num+=yyleng;}



";"		{cols_num+=yyleng;bracket_column=cols_num;bracket_line=lines_num;semicolon=0;if(show_res==1) printf("SEMICOLON\n");else{ yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return SEMICOLON;}}
"_"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("BLANKID\n");else{ yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return BLANKID;}}
"package"	{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("PACKAGE\n");else{ yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return PACKAGE;}}
"return"	{cols_num+=yyleng;semicolon=1;if(show_res==1) printf("RETURN\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return RETURN;}}
"&&"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("AND\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return AND;}}
"="		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("ASSIGN\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return ASSIGN;}}
"*"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("STAR\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return STAR;}}
","		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("COMMA\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return COMMA;}}
"/"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("DIV\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return DIV;}}
"=="		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("EQ\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return EQ;}}
">="		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("GE\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return GE;}}
">"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("GT\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return GT;}}
"{"		{cols_num+=yyleng;bracket_column=cols_num;bracket_line=lines_num;bracket_close++;semicolon=0;if(show_res==1) printf("LBRACE\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return LBRACE;}}
"<="		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("LE\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return LE;}}
"("		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("LPAR\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return LPAR;}}
"["		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("LSQ\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return LSQ;}}
"<"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("LT\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return LT;}}
"-"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("MINUS\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return MINUS;}}
"%"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("MOD\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return MOD;}}
"!="		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("NE\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return NE;}}
"!"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("NOT\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return NOT;}}
"||"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("OR\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return OR;}}
"+"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("PLUS\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return PLUS;}}
"}"		{cols_num+=yyleng;bracket_column=cols_num;bracket_line=lines_num;bracket_close--;semicolon=1;if(show_res==1) printf("RBRACE\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return RBRACE;}}
")"		{cols_num+=yyleng;semicolon=1;if(show_res==1) printf("RPAR\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return RPAR;}}
"]"		{cols_num+=yyleng;semicolon=1;if(show_res==1) printf("RSQ\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return RSQ;}}
"else"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("ELSE\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return ELSE;}}
"for"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("FOR\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return FOR;}}
"if"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("IF\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return IF;}}
"var"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("VAR\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return VAR;}}
"int"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("INT\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return INT;}}
"float32"	{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("FLOAT32\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return FLOAT32;}}
"bool"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("BOOL\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return BOOL;}}
"string"	{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("STRING\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return STRING;}}
"fmt.Println"	{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("PRINT\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return PRINT;}}
"strconv.Atoi"	{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("PARSEINT\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return PARSEINT;}}
"func"		{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("FUNC\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return FUNC;}}
"os.Args"	{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("CMDARGS\n");else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng); return CMDARGS;}}
{reserved}	{cols_num+=yyleng;semicolon=0;if(show_res==1) printf("RESERVED(%s)\n",yytext);else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return RESERVED;}}
({lower}|{upper}|"_")({lower}|{upper}|("_")|{number})*		{cols_num+=yyleng;bracket_column=cols_num;bracket_line=lines_num;semicolon=1;if(show_res==1) printf("ID(%s)\n",yytext);else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return ID;}}
{number}|{hex}|{oct}							{cols_num+=yyleng;bracket_column=cols_num;bracket_line=lines_num;semicolon=1;if(show_res==1) printf("INTLIT(%s)\n",yytext);else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return INTLIT;}}
({number}"."{number}?{expo}?)|("."{number}{expo}?)|({number}{expo})	{cols_num+=yyleng;bracket_column=cols_num;bracket_line=lines_num;semicolon=1;if(show_res==1) printf("REALLIT(%s)\n",yytext);else{yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return REALLIT;}}
(\t|" "|\f) {cols_num++;}
(\n|\r|\r\n)    {lines_num++;cols_num=1;if(semicolon==1){if(show_res==1){printf("SEMICOLON\n");semicolon=0;}else{semicolon=0;yylval.token = new_token(yytext, lines_num, cols_num-yyleng);return SEMICOLON;}}}
<<EOF>>      {one_time=1;cols_num++;if(semicolon==1){if(show_res==1){printf("SEMICOLON\n");}else{semicolon=0;return SEMICOLON;}}yyterminate();}
.   {printf("Line %d, column %d: illegal character (%s)\n",lines_num,cols_num,yytext);cols_num+=yyleng;semicolon=0;}

%%
int main(int argc, char** argv){
    //yydebug=1;
    node* no;	
    if(argc>1){
        if(strcmp(argv[1],"-l")==0){
            show_res=1;
            yylex();
        }
        else if(strcmp(argv[1],"-t")==0){
            show_res = 0;
            yyparse();
            if(flag_yacc_error==0){
                print_tree(root,0);
                free_tree(root);
            }
        }
        else if(strcmp(argv[1],"-s")==0){
            show_res = 0;      
            yyparse();
            no = check_program(root);
            if(flag_yacc_error==0){
                print_symbol_table(ST);
		        printf("\n");
                print_anoted_tree(root,0);
                free_tree(root);
            }
        }
    }
    else{
        show_res = 0;
        yyparse();
        no = check_program(root);
    }
    return 0;
}

int yywrap(){
	return 1;
}
