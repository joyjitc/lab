#include<stdio.h>
/*int fib(int a)
{
    if(a==0||a==1)
    return a;
    else
    return (fib(a-1)+fib(a-2));

}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        printf("\n%d",fib(i));
    return 0;
}
*/

int main()
{

int a[100],n,i,sum=0;
int *j;

printf("Enter the number of elements  :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);

 }

 j=&a[0];
for(i=0;i<n;i++)
 {
     sum=sum+*j;
     j++;

 }

printf("The sum is: %d ",sum);
    return 0;

}
/*long fact(int a)
{
    long fact=1;
    while(a>1)
    {

        fact=fact*a;
        a--;

    }
    return fact;
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    printf("\n%ld",(fact(n)/(fact(n-r)*fact(r))));

    return 0;

}*/
