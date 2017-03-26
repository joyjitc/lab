%{
#include<stdio.h>
int flag=0;
%}
%%
[\n]+[a-zA-Z][a-zA-Z0-9]*[.|_]?[a-zA-Z0-9]*[@][a-zA-Z]+[.][a-z]+ { flag++; fprintf(yyout,"%s",yytext);}
. {}
%%
main(int arg,char* argv)
{
yyin=fopen("x.txt","r");
yyout=fopen("y.txt","w");
yylex();
printf("Number of email-id is:%d",flag);

}
