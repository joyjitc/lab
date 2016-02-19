#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
class stack
{
 public:
 int ar[50];
 int top;
void initstack()
     {
      top=-1;
     }
void push(int a)
{
 if (top==49)
  cout<<"overflow error ";
else
{
 ar[++top]=a;
}
   }
int pop()
{
 if(top==-1)
 cout<<"\nunderflow error ";
  else
  return ar[top--];
 }
 void display()
{
 int t;
 t=top;
 while(t>=0)
 {
 cout<<"\t"<<ar[t];
 t--;
}
}
int isEmpty()
{
    return top==-1;
}
char peek()
{
    return ar[top];
}

};
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}
void infixToPostfix(char* exp)
{
    int i, k;
   stack s1;
   // Create a stack of capacity equal to expression size
   s1.initstack();
   for (i = 0, k = -1; exp[i]; ++i)
    {
         // If the scanned character is an operand, add it to output.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];

        // If the scanned character is an ‘(‘, push it to the stack.
        else if (exp[i] == '(')
            s1.push(exp[i]);

        //  If the scanned character is an ‘)’, pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (exp[i] == ')')
        {
            while (!s1.isEmpty() && s1.peek()!= '(')
                exp[++k] = s1.pop();
            s1.pop();
        }
        else // an operator is encountered
        {
            while (!s1.isEmpty() && Prec(exp[i]) <= Prec(s1.peek()))
                exp[++k] = s1.pop();
            s1.push(exp[i]);
        }

    }

    // pop all the operators from the stack
    while (!s1.isEmpty())
        exp[++k] = s1.pop();

    exp[++k] = '\0';

}
int val(int a,int b,char c)
{
 switch(c)
            {
             case '+':return (b + a); break;
             case '-': return( b - a); break;
             case '*': return(b* a); break;
             case '/':return(b/a);   break;
             case '^': return pow(b,a);break;
            }
}
int postfix_eval(char* ar)
{
  int i=0,a,b,value;
  stack s2;
  s2.initstack();
  while(i<strlen(ar))
   {
     if (ar[i]>='0'&&ar[i]<='9')
      s2.push(ar[i]-'0');

     else
     {
       a=(int)s2.pop();
       b=(int)s2.pop();
       value=val(a,b,ar[i]);
       s2.push(value);
      }
      i++;
 }
 return s2.pop();
}
int main(void)
{
  char str[50];
  char oprnd[50];
  char num[50];
  int i,j,d=0,r=0;
  cout<<"enter the expression ";
  gets(str);
  for(i=0;i<strlen(str);i++)
  {
    if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
       oprnd[d++]=str[i];
 }
 oprnd[d]='\0';
 puts(oprnd);
 infixToPostfix(str);
 cout<<"\nenter the values ";
 for(i=0;i<strlen(oprnd);i++)
 {
   cout<<"\n"<<oprnd[i]<<" = ";
   cin>>num[i];
 }
 num[i]='\0';
 j=0;
for(i=0;i<strlen(str);i++)
   {
    if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
    {
      str[i]=num[j];
      j++;
    }
}
int value=postfix_eval(str);
cout<<"the value of the expression is "<<value;
    return 0;
}


