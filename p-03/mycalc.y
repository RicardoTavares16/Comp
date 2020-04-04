%{
    #include <stdio.h>
    int yylex(void);
    void yyerror (const char *s);
%}

%right '-' '+'
%left '*' '/' 
%token NUMBER

%%

calc: expression                        {printf("%d\n", $1);}

expression: expression '+' expression   {$$=$1+$3;}
    |   expression '-' expression       {$$=$1-$3;}
    |   expression '*' expression       {$$=$1*$3;}
    |   expression '/' expression       {$$=$1/$3;}
    |   NUMBER                          {$$=$1;}
    ;
%%

int main() {
    yyparse();
    return 0;
}

