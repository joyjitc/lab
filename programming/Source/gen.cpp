#include <bits/stdc++.h>
int main()
{
    int x,j,d,sqr;
    /*freopen("A-small-attempt0.in","r",stdin);*/
    freopen("A.txt","w",stdout);
    int i=1,counter=0;
    while(((4*i)+1)<=5000000)
        {
            x=((4*i)+1);
            sqr=(int)sqrt(x);
            d=0;
            for(int j=2;j<=sqr;j++)
            {
                if(x%j==0)
                {
                    d=1;
                    break;
                }
            }
            if(d==0)
            {
               printf("%d,",x) ;
               counter++;

            }
            i++;
        }
    printf("\n count=%d",counter);
    return 0;
}
