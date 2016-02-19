
#include<stdio.h>
#include<ctype.h>
#include<iostream>
using namespace std;
char s[100];
int top=-1;
int var[200],vi=0;
char ifx[50],pfx[50];

void pushi(int a)
{
	s[++top]=a;
}

int popi()
{
	return s[top--];
}

void push(int a)
{
	s[++top]=a;
}
void push(char el)
{
    s[++top]=el;

}

char pop()
{
    return (s[top--]);
}

void eval()
{   int i=0;
    char ch;
    while((ch=pfx[i])!='\0')
    {
        if(isalpha(ch))
        {
            cout<<pfx[i]<<"=";
            cin>>var[vi++];

        }
        ++i;
    }

}

void putval()
{
    int i=0,j=0;
    char ch,c;

    while((ch=pfx[i])!='\0')
    {
        if(isalpha(ch))
        {	c=(char)var[j++];
            pfx[i]=c;

        }
        ++i;
    }
}

int pr(char elem)
{ /* Function for precedence */
     switch (elem)
     {
         case '#':
          return 0;
         case '(':
          return 1;
         case '+':
         case '-':
          return 2;
         case '*':
         case '/':
          return 3;
     }
}

void pfeval()
{	int t1,t2,ans;
	int i=0;
	char ch;
	while((ch=pfx[i++])!='\0')
	{
		if(ch>='0' && ch<='9')
		{
			pushi(ch-'0'); //as ascii for 0 is 48 n implicit coversion gives values for 9 like 48+9

		}
		else
		{
			t1=popi();
			t2=popi();
			switch(ch)
			{
				case'+':ans=t1+t2;break;
				case'-':ans=t2-t1;break;
				case'*':ans=t1*t2;break;
				case'/':ans=t2/t1;break;
				case'%':ans=t2%t1;break;
			}
			pushi(ans);
		}
	}
	while(top!=-1)
    cout<<popi();
}





int main()
{
    int i=0,k=0;
    char ch;
    cout<<"Enter Infix expression\n";
    cin>>ifx;
    push('#');
    while((ch=ifx[i++])!='\0')
    {
        if(ch=='(')
            push(ch);
        else if(ch==')')
        {
            while(s[top]!='(')
                    pfx[k++]=pop();
            pop();
        }
        else if(isalnum(ch))
        {
            pfx[k++]=ch;
        }

        else
        {   while(pr(s[top])>=pr(ch))
            pfx[k++]=pop();
            push(ch);
        }
    }
    while(s[top]!='#')
        pfx[k++]=pop();
    pop();
    pfx[k]='\0';
    cout<<"\n\nGiven Postfix Expn: "<<pfx<<"\n";
    
    //EVALUATION

    eval();
    putval();
    pfeval();
    return 0;

}









