#include<iostream>
int main()
{
    for(int i=20;i>0;i--)
    {
 for(int z=20-i;z>0;z--)
       {std::cout<<" ";}
       for(int n=i;n>0;n--)
        {std::cout<<"*";}
        std::cout<<"\n";
    }
}
