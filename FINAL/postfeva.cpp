#include<iostream>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void push(int);
int pop();
int priority(char);
char infix[50],pofx[50],stack[50],s[50];
int top=-1;
int top1=-1;
void pushpostf(int ele)
{
	s[++top1]=ele;
}
int poppostf()
{
	return(s[top1--]);
}
int main()
{
	char ch,next;
	int i=0,p=0,op1,op2;
	stack[top]='#';
	cout<<"Enter the infix expression : "<<endl;
	while((infix[i]=getchar())!='\n')
	{
		ch=infix[i];
		switch(ch)
		{
			case '(' : push(ch);
				   break;
			case ')' : while((next=pop())!='(')
					pofx[p++]=next;
				   break;
			case '+' :
			case '-' :
			case '*' :
			case '/' :
			case '^' : while(priority(stack[top])>=priority(ch))
				   	pofx[p++]=pop();
				   push(ch);
				   break;
			default : pofx[p++]=ch;
		}
		i++;
	}
	while((next=pop())!='#')
		pofx[p++]=next;
	i=0;
	cout<<"Postfix expression is : ";
	while(pofx[i]!='\0')
	{
		cout<<pofx[i];
		i++;
	}
	cout<<endl;
	i=0;
	while(pofx[i]!='\0')
	{
		ch=pofx[i];
		if(isdigit(ch))
		{
			pushpostf(ch-'0');
		}
		else
		{
			op2=poppostf();
			op1=poppostf();
			switch(ch)
			{
				case '+' : pushpostf(op1+op2);
					   break;
				case '-' : pushpostf(op1-op2);
					   break;
				case '*' : pushpostf(op1*op2);
					   break;
				case '/' : pushpostf(op1/op2);
					   break;
			}
		}
		i++;
	  }
	cout<<"Result after evaluation "<<poppostf()<<endl;
	return 0;
}
int priority(char c)
{
	switch(c)
	{
		case '(' : return 0;
		case '+' :
		case '-' : return 1;
		case '*' :
		case '/' : return 2;
		case '^' : return 3;
   	 	default : return 0;
	}
}
void push(int symbol)
{
	if(top>=50)
	{
		cout<<"Stack overflow"<<endl;
		exit(0);
	}
	stack[++top]=symbol;
}
int pop()
{
	if(top<-1)
	{
		cout<<"Stack underflow"<<endl;
		exit(0);
	}
	return(stack[top--]);
} 
			
