#include <bits/stdc++.h>
int t,h,m;
float a,x,diff;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f",&a);
        for(h=0;h<12;h++)
        {

            for(m=0;m<60;m++)
            {
                x=fabs(((30.0*h)+(0.5*m))-(6.0*m));
                x=(x>180)?(float)(360-x):x;
                if(fabs(x-a)<0.00833)
                {
                    if(h<10)
                        printf("0%d:",h);
                    else
                        printf("%d:",h);
                    if(m<10)
                        printf("0%d\n",m);
                    else
                        printf("%d\n",m);
                }
            }
        }
    }
    return 0;
}
