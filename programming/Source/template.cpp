#include <bits/stdc++.h>
long t,n,temp,i,j,sq,flag,sqr,d,x;
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
        if((n-1)%4==0)
        {
          if(prime(n))
          {
            flag=1;
            printf("YES\n");
            continue;
          }
        }
        int i=1;
        while((((4*i)+1)<=n/2)&&(flag==0))
        {
            x=((4*i)+1);
            if(prime(x))
            {
                if(n%x==0)
                {
                    flag=1;
                    printf("YES\n");
                    break;
                }
            }
            i++;

        }
        /*for(i=2;i<=sq;i++)
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
        */if(flag==0)
            printf("NO\n");
    }

    return 0;
}
