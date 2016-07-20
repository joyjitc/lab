#include<stdio.h>
int a[1000000];

int main()
{
int t,i,j,temp;

scanf("%d",&t);
for(i=0;i<t;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<t-1;i++)
{
    for(j=i+1;j<t;j++)
    {
     if(a[j]<a[i])
            {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            }

    }
}

for(i=0;i<t;i++)
{
    printf("%d\n",a[i]);
}

return 0;
}
