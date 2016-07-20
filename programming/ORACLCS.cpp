#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,m,ans,a,b,i,j;
    char str[100][101];
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       scanf("%s",&str[0]);
       m=strlen(str[0]);
       a=0,b=0;
       i=0;
       while(i<m)
       {
           if(str[0][i]=='a')
            a++;
           i++;
       }
       b=m-a;
       ans=a;
       if(b<ans)
        ans=b;
       for(j=1;j<n;j++)
       {
           scanf("%s",&str[j]);
           a=0,b=0;
           i=0;
           while(i<m)
            {
                if(str[j][i]=='a')
                    a++;

                i++;
            }
            b=m-a;
            if(a<ans)
            ans=a;
            if(b<ans)
            ans=b;
        }
  printf("%d\n",ans);
    }
    return 0;
}
