#include<stdio.h>
#include<iostream>
int main()
{
    int a,z,m,t,k,x,j;
    scanf("%d",&a);
    while(a--)
    {

        m=0;
        t=0;
        scanf("%d",&k);

        for(x=k+1;t==0;x++)
        {
            j=x;
            z=x;
            while(j>0)
            {
                m=(m*10)+(j%10);
                j=j/10;
            }
            if(z==m)
                {
                    t=1;
                    printf("%d\n",m);
                }
        }
    }
    return 0;
}
