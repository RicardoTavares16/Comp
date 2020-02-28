%X LATEX
%%
"\documentclass".* {BEGIN LATEX;}
<LATEX>"\usepackage".* ;
<LATEX>"\begin".* ;
<LATEX>"\title".* {printf("\nTitle %s", &yytext[7]);}
<LATEX>"\section" {printf("\nSection");}
\n ; //nao faz nada
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
