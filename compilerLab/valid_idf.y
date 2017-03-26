%{
	#include <stdio.h>
	int valid = 1;
%}
%token NUM A E;
%%
start: A a;
a: A a|NUM a| ;
%%
int yyerror(){
	valid = 0;
	printf("Invalid Identifier\n");
	return 0;
}
int main(){
	printf("Enter the pattern : ");
	yyparse();
	if(valid)
		printf("Valid Identifier\n");
}