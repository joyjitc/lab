%{
	#include<stdio.h>
%}
%%
[a-zA-Z][-a-zA-Z._]*[@][a-zA-Z]+[.][-_a-zA-Z]+ {fprintf(yyout,"%s\n",yytext);}
. {}
[\n] {}
%%
int main(){
	yyin = fopen("x.txt","r");
	yyout = fopen("y.txt","w");
	yylex();
	return 0;
}
