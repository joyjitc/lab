#include<stdio.h>
int a,z,m,t,k,x;
int main()
{

    scanf("%d",&a);
    while(a--)
    {
        t=0;
        scanf("%d",&k);
        x=k+1;
        while(t==0)
        {
            m=0;
            z=x;
            while(x>0)
            {
                m=(m*10)+(x%10);
                x=x/10;

            }
            if(z==m)
                {
                    t=1;
                    printf("%d\n",z);

                }
        x=z;
        x++;
        }

    }
return 0;
}
