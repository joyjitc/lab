#include<iostream>
int main()
{
   int b=0;
    for(int i=20;i>=0;i--)
    {

       for(int z=i-1;z>0;z--)
       {std::cout<<" ";}
         for(int n=(2*b)+1;n>0;n-- )
        {std::cout<<"*";}
        std::cout<<"\n";
        b++;
    }
}
