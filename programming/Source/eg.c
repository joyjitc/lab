#include<stdio.h>
int main()
{
    int i=0,j=0;
    char str[2][100];
    scanf("%s",str[0]);
    scanf("%s",str[1]);
    printf("%s\n",str[0]);
    printf("%s",str[1]);
        while(str[0][i]!='\0')
            i++;
        while(str[1][j]!='\0')
        {
           str[0][i]=str[1][j];
           i++;j++;
        }
        str[0][i]='\0';
        printf("\n%s",str[0]);
    printf("%c",str[0][i]);


    return 0;
}
