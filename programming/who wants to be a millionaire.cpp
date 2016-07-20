#include <stdio.h>
    int t,n,i,ca;
    char corr[1000],giv[1000];
    long w[1001],hi;
int main()
  {
    scanf("%d",&t);
    while(t--)
    {   ca=0;
        scanf("%d",&n);
        scanf("%s",&corr);
        scanf("%s",&giv);
        for(i=0;i<n+1;i++)
        {
            scanf("%ld",&w[i]);
        }
        for(i=0;i<n;i++)
        {
            if(corr[i]==giv[i])
                ca++;
        }

        if(ca==n)
            printf("%ld\n",w[ca]);
        else
        {
            hi=w[0];
            for(i=1;i<=ca;i++)
                {
                    if(w[i]>hi)
                    {
                        hi=w[i];
                    }
                }
            printf("%ld\n",hi);
        }
    }
    return 0;
  }
