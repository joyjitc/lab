%{
#include<stdio.h>
int val1,val2;
int flag=0;
%}
%%
[0-9]* { val1=atoi(yytext);}
[+] {flag=1;}
[-] {flag=2;}
[*] {flag=3;}
[/] {flag=4;}
[\t][0-9]* { val2=atoi(yytext);}
%%
int main(int arg,char* argv)
{
yylex();
if(flag==1)
printf("%d",val1+val2);
else if(flag==2)
printf("%d",val1-val2);
else if(flag==3)
printf("%d",val1*val2);
else
printf("%d",val1/val2);
return 1;
}
