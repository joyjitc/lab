#include <bits/stdc++.h>
int t,n,temp,i,sq,flag;
long x;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        flag=0;
        for(i=(n%2==0?n-2:n-1);i>=2;i-=2)
        {
            x=(n+i)*(n-i);
            temp = sqrt(x);
            if(temp*temp == x)
            {
                printf("YES\n");
                //printf("%d\n",i);
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("NO\n");
    }
    return 0;
}

