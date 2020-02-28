%X JAVADOC
%%
"/**" {BEGIN JAVADOC;}
<JAVADOC>"@param".* {printf("\nParametro: %s", &yytext[6]);}
<JAVADOC>"@return".* {printf("\nDevolve: %s", &yytext[7]);}
<JAVADOC>"@see".* ; //ignorar
<JAVADOC>"* "* ;
<JAVADOC><p> {printf("\n");}
<JAVADOC>"*/" {BEGIN 0; printf("\n");} //regressar ao normal
<JAVADOC>\n ;
<JAVADOC>. ECHO;
. ; //caso seja codigo Java
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
