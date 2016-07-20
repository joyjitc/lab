#include<iostream>
using namespace std;
int t;
int n;
void Fib(int a,int b)
{
    if(b<=n)
    {
    cout<<b<<"  ";
    t=a;
    a=b;
    b=b+t;
    Fib(a,b);
    }
}
int main()
{
int a,b;
a=0;
b=1;
cout<<"\n Enter the upper limit ";
cin>>n;
cout<<"\n";
Fib(a,b);
return 0;
}
