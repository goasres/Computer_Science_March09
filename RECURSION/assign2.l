%{
#include<stdio.h>
%}
%%
[0-9]+"."[0-9]+ {ECHO; printf("\nDecimal Number\n");}
[0-9]+ {ECHO; printf("\nInteger Number\n");}
double|int|struct|break|else|long|switch|case|enum|register|typedef|char|exter n|union|continue|for|signed|void|do|if|static |while|default|goto|sizeof|volatile|const|float|short { printf("\nKEYWORD\n");}
[&&,||,!] {ECHO; printf("\nLogical Operators\n");} ([a-zA-Z][0-9])+|[a-zA-Z]* {ECHO; printf("\nIdentifier\t");}
[+,-,*,/] {ECHO; printf("\nArithmetic Operator\n");}
[>,>=,<,<=,!=] {ECHO; printf("\nRelational Operators\n");}
%%
int yywrap()
{return 1;}
int main(void){
yylex();
return 0; }