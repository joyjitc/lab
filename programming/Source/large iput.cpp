#include<stdio.h>
int main()
{
    long a,b;
    long c;
    long count=0;
    scanf("%d %d",&a,&b);
    while(a--)
    {
       scanf("%d",&c);
       if(c%b==0)
        count++;
    }
    printf("%d",count);
return 0;
}
