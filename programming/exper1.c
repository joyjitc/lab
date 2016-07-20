#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    int i;
	for(i=0;i<=100;i++)
	{

		printf("\r Percentage complete is ::%d%%",i);
        Sleep(500);
        	fflush(stdout);



	}
}
