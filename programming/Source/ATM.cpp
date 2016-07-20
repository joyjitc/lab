#include<stdio.h>
int main()
{

    int x;
    float a;
    scanf("%d %f",&x,&a);


    if(a>x+.5&&x%5==0)
    {
        a-=.50+x;
        printf("%.2f",a);

    }
    else
          printf("%.2f",a);


return 0;
}
