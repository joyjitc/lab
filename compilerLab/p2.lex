%{
	#include<stdio.h>
%}
%%
[a-zA-Z][-a-zA-Z_.]*[@][a-zA-Z]+[.][a-zA-Z]+ {printf("%s",yytext);}
%%
int main(){
	yyin = fopen("x.txt","r");
	yylex();
	return 0;
}