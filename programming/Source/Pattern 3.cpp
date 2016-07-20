#include<iostream>
int main()
{
   int i,j;
   for(i=3;i>=0;i--)
   {
       std::cout<<"\n";
       for(j=0;j<=6;j++)
       if(j>=i&&j+i<=6)
        std::cout<<"&";
       else
        std::cout<<" ";
   }
}
