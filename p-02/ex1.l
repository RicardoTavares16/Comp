%X LATEX
%%
\\documentclass.* {BEGIN LATEX; printf("\nTitle %s", yytext);}
<LATEX>\\usepackage.* {printf("\nentrou");};
<LATEX>\\begin.* ;
<LATEX>\\title.* {printf("\nTitle %s", &yytext[0]);}
<LATEX>\\section {printf("\nSection");}
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
