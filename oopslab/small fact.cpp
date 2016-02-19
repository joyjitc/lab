#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,i,j,k,m;
    int a[200];
    scanf("%ld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0 || n==1)
        {
            printf("1\n");
            continue;
        }
        else
        {
            a[0]=1;
            m=1;
            for(i=2;i<=n;i++)
            {
                long temp=0,x;
                for(j=0;j<m;j++)
                {x=a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
                }

                while(temp>0)
                {
                    a[m]=temp%10;
                    temp=temp/10;
                    m++;
                }
            }
            for(k=m-1;k>=0;k--)
            {
                printf("%d",a[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
