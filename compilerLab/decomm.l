%{
	#include <stdio.h>
%}

%%
"//".*"\n" ;
"/*"(.|\n)*"*/" ;
%%

int main(){
	yyin = fopen("x.cpp","r");
	yyout = fopen("y.cpp","w");
	yylex();
}
