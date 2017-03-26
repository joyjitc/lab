%{
	#include<stdio.h>
%}
%%
"//"[^\n]*"\n" ;
\/\*(.*\n)*.*\*\/ ;

%%

int main(){
	yyin = fopen("x.cpp","r");
	yyout = fopen("y.cpp","w");
	yylex();
	return 0;
}
