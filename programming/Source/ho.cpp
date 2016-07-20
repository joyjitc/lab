#include<stdio.h>
int main()
{
    int t,c,i;
    char b[100];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        i=0;
        scanf("%s",b);
        while(b[i]!=0)
        {
            if(b[i]==65||b[i]==68||b[i]==79||b[i]==80||b[i]==81||b[i]==82)
                c++;
            else if(b[i]==66)
                c+=2;
       i++;
        }

printf("%d\n",c);
    }



return 0;
}
