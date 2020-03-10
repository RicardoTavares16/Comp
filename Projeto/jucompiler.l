%{
//2014230130 Ricardo Sintra Tavares

%}

%%
{numero}                        {printf(" Inteiro Positivo");}
{neg}{numero}   {printf(" Inteiro Negativo");}
{numero}[,.]{numero}		{printf(" Real Positivo Float");}
{neg}{numero}[,.]{numero}		{printf(" Real Negativo");}
{string} {printf(" String");}

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