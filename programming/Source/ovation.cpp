#include<stdio.h>
char arr[1000];

int main()
{
freopen("A-small-attempt0.in","r",stdin);
freopen("A-small-attempt0.out","w",stdout);

int t,i,a,counter,tot,cas=0;
scanf("%d",&t);
while(t--)
{   cas++;
    counter=0,tot=0;
    scanf("%d",&a);
    scanf("%s",&arr);
printf("%s",arr);
    for(i=0;i<=a;i++)
    {
     tot+=arr[i];
     if(tot<=i)
        counter+=(i-tot)+1;

        tot+=counter;

   }
printf("Case #%d: %d\n",cas,counter);
}


    return 0;
}
