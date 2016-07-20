#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

int x,m;
cin>>x;
int z=x;
m=0;
while(x>0)

            {
                   m=(m*10)+(x%10);
                   x=(x/10);

            }
            if(z==m)
                {

                    printf("\n%d fuck yeah",z);
                }
                return 0;
}
