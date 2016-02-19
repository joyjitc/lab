#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream fp("test.txt");
    char ch;
    char str[80];
    
    while(!fp.eof())
    {
    	fp.getline(str,80);
    	puts(str);
    }
    

    
    fp.close();
//    do
//    {
//        cin.getline(str,80);
//        strcat(str,"\n");
//        fputs(str,fp);
//
//    }while(*str!='\n');
//    rewind(fp);
//    while(!feof(fp))
//    {
//        fgets(str,79,fp);
//        cout<<str;
//    }
    //fclose(fp2);
   return 0;
}
