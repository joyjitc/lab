%{
	#include <stdio.h>
	int valid = 1;
	int yylex();

%}
%token A B
%%
start: A a B;
a: start | ;
%%
int yyerror(){
	valid = 0;
	printf("Invalid\n");
}
int main(){
	printf("Enter the input : ");
	yyparse();
	if(valid)
		printf("valid\n");
}