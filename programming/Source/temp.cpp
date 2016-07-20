#include<stdio.h>
int main()
{
int z,k,x,m;
scanf("%d",&k);
        x=k+1;
   for(int i=0;i<10;i++)
   {
m=0;

        z=x;
while(x>0)
            {
                m=(m*10)+(x%10);
                x=x/10;

            }
printf("\n%d",m);
if(z==m)
   {

    printf("\nBITCH");
 }x=z;
 x++;  }
return 0;
}
