%{
#include "y.tab.h"
%}
%%
[0-9]+              {yylval.value=atoi(yytext);
                     return NUMBER;}
[a-zA-Z][a-zA-Z0-9_]*     {yylval.id=(char*)strdup(yytext);
                     return VAR;}  
[ \t]               ;
\n|.                return yytext[0];
%%
int yywrap() {
    return 1;
}

void yyerror (char *s)
{
printf ("%s\n", s);
}

int main()
{
yyparse();
return 0;
}


