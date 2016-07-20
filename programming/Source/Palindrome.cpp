#include<stdio.h>
#include<iostream>
int main()
{
    int a,z,m,t,k,x;
    scanf("%d",&a);
    while(a--)
    {
        t=0;
        scanf("%d",&k);
        for(x=k+1;t==0;x++)
        {
            printf("\n BITCH PLEAedSE");
            m=0;
            z=x;
            while(x>0)
            {
               printf("\n BITCH PLEASE");
                m=(m*10)+(x%10);
                x=x/10;

            }
            if(z==m)
                {
                    t=1;
                    printf("\n%d",z);
                }
        }

    }
return 0;
}
