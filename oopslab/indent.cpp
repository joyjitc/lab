#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ofstream outfile("indented_program.txt");
	ifstream infile("program.txt");
	int x=0,i;
	char ch;
	if(!infile){
		cout<<"Cannot open file\n";
		return 1;
	}
	while(infile){
		infile.get(ch);
		if(ch=='\n')
		{
			outfile<<'\n';
			infile.get(ch);
			if(ch=='}')
				x--;
			for(i=1;i<=x;i++)
				outfile<<'\t';
		}
		if(ch=='{')
			x++;

		if(ch!='\n')
		outfile<<ch;

	}
	infile.close();
	outfile.close();
	return 0;
}