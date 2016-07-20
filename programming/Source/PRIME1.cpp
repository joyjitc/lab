#include<iostream>
#include<stdio.h>
#include<math.h>
int main()
{
    int b,c,d,a;
    scanf("%d",&a);
    while(a--)
    {
    printf("\n");

    scanf("%d %d",&b,&c);

        for(int i=b;i<=c;i++)
        {
           d=0;
            for(int j=2;j<=(int)sqrt(i);j++)
           {
             if(i%j==0)
                {
                 d=1;
                 break;
                 }
            }
             if((d==0)&&(i!=1))
                     printf("\n%d",i);

    }


}
 return 0;
}
