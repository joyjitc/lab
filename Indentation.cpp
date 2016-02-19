/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream myfile("trial.cpp");
	char ch;
	while(myfile.is_open())
	{
		myfile>>ch;
		cout<<ch;
	}
	myfile.close();

	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ofstream outfile("final.txt");
	ifstream infile("initial.txt");
	int x=0,i;
	char ch;
	if(!infile)
	{
		cout<<"Cannot open file\n";
		return 1;
	}
	while(infile)
	{
		infile.get(ch);
		if(ch=='{')
			x++;
		if(ch=='}')
			x--;
		if(ch=='\n')
		{
			for(i=1;i<=x;i++)
				outfile<<'\t';
		}

		outfile<<ch;
		

		if(ch=='{')
		{
			outfile<<'\n';
			for(i=1;i<=x;i++)
				outfile<<'\t';
		}

		
	}
	infile.close();
	outfile.close();
	return 0;
}