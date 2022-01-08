numero				[0-9]+
neg "-"
alineaA abc+
alineaB ab+c
alineaC a?(bc)+
%%
{numero}                        {printf(" Inteiro Positivo");}
{neg}{numero}   {printf(" Inteiro Negativo");}
{numero}[,.]{numero}		{printf(" Real Positivo Float");}
{neg}{numero}[,.]{numero}		{printf(" Real Negativo");}

{alineaA}   {printf(" Token!1");}
{alineaB}   {printf(" Token!2");}
{alineaC}   {printf(" Token!3");}

{numero}l {printf("long");}
{numero}u {printf("unsigned int");}
{numero}ul {printf("unsigned long");}
{numero}e[+-]1 {printf("floating point");}
{numero}f {printf("float");}

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