#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>

int main()
{
    char A[20];
    gets(A);
    std::cout<<strlen(A)<<"\n";
    puts(A);
    char b[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        std::cin>>b[i][j];

    }


for(int i=0;i<5;i++)
    {
        std::cout<<"\n";
        for(int j=0;j<5;j++)
        {
            std::cout<<b[i][j]<<"  ";


        }

    }
}

