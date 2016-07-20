#include<stdio.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&z);
      z=(z-2)/2;
      printf("%d\n",(((z+1)*z)/2));
    }
return 0;
}
