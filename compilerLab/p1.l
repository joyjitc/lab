%{
int flag=0,i,x;
%}
%%
[#]"include"[<][a-zA-Z]+[.][h][>] { flag++; for(i=0;i<yyleng-1;i++)
{

if(x ==1)
printf("%c",yytext[i]);
if(yytext[i]=='<')
x=1;
}
printf("\n");
x=0;
}
. {}
%%
int main(int arg,char* argv)
{
yyin=fopen("x.txt","r");
//yyout=fopen("y.txt","w");
yylex();
printf("%d",flag);
return 0;
}
