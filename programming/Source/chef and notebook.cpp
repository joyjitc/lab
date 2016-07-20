#include<stdio.h>
long t,x,y,k,n,p,c;
int note;
int main()
{
   scanf("%d",&t);
   while(t--)
   {
    note=0;
    scanf("%d %d %d %d",&x,&y,&k,&n);
      while(n--)
      {
         scanf("%d %d",&p,&c);
         if(((x-y)<=p)&&c<=k)
         {
             note=1;
        }
      }
      if(note==0)
       printf("\nUnluckyChef");
    else
    printf("\nLuckyChef");

   }
    return 0;
}
