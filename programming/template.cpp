#include <bits/stdc++.h>
int t,n,temp,i,j,sq,flag,sqr,d,x;
int prime(int n)
{
    int j;
    int d=0;
    int x=sqrt(n);
    for(int j=2;j<=x;j++)
    {
        if(n%j==0)
        {
            d=1;
            break;
        }
    }
    if(d==0)
        return 1;
    else
        return 0;


}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sq=sqrt(n);
        flag=0;
        for(i=2;i<=sq;i++)
        {
            if(n%i==0)
            {
               temp=n/i;
               if((i-1)%4==0&&prime(i))
               {
                   printf("YES\n");
                   flag=1;
                    break;

               }
               else if((temp-1)%4==0&&prime(temp))
               {
                   printf("YES\n");
                   flag=1;
                   break;
               }
            }

            if(flag==1)
                break;
        }
        if(flag==0)
            printf("NO\n");
    }
          /*  d=0;
            x=((4*i)+1);
            sqr=(int)sqrt(x);
            for(int j=2;j<=sqr;j++)
           {
             if(x%j==0)
                {
                 d=1;
                 break;
                 }
            }
            if(n%x==0&&d==0)
            {
                printf("YES\n");
                //printf("%d\n",i);
                flag=1;
                break;
            }
        }
        if(flag==1)
            continue;
        d=0;
        x=sqrt(n);
        for(int j=2;j<=x;j++)
        {
            if(n%j==0)
            {
                d=1;
                break;
            }
        }
        if(d==0&&((n-1)%4)==0)
         {
                printf("YES\n");
                //printf("%d\n",i);
                flag=1;

            }
        if(flag==0)
            printf("NO\n");
   }*/
    return 0;
}
