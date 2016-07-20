#include<stdio.h>
void main()
{
    int a,z,m,t,k,x;
    scanf("%d",a);
    while(a--)
    {
        t=0;
        scanf("%d",k);
        for(x=k+1;t=0;x++)
        {
            z=x;
            while(x>0)
            {
                m=(m*10)+(x%10);

            }
            if(z==m)
                {
                    t=1;
                    printf("\n%d",z);
                }
        }

    }
}
