#include<iostream>
int main()
{
int a,b;
std::cout<<"\n Enter 'a','b'  :";
std::cin>>a>>b;
std::cout<<"a=  "<<a<<"\t"<<"b=   "<<b;
a=a+b;
b=a-b;
a=a-b;
std::cout<<"\na=  "<<a<<"\t"<<"b=   "<<b;
return 0;
}
