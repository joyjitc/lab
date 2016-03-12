#include<bits/stdc++.h>
using namespace std;


class Str{

public:
	char input[100];
	char sub[100];
	char con[200];
	int len(char *);
	bool substringC();
	void concatIt();
};


int Str::len(char *t)
{
	return strlen(t);
}

bool Str::substringC()
{
	int flag;
	int j=0;
	for(int i=0;i<len(input);i++)
	{
		flag=0;
		if(sub[j]==input[i])
		{
			int k=i+1;
			flag=100;
			j++;
			while(j<strlen(sub))
			{
					if(sub[j++]!=input[k++])
					flag=55;
			}
			//cout<<"flag is "<<flag<<endl;
			j=0;
		}

		if(flag==100)
		break;

	}

if(flag==100)
	return true;
else
	return false;

}


void Str::concatIt()
{
	int i;

	for(i=0;i<strlen(input);i++)
	{
		con[i]=input[i];
	}

	for(int j=0;j<strlen(sub);j++)
		con[i++]=sub[j];

    con[i]='\0';

}


Str b;


int main()
{

	cout<<"Let's play with string!!"<<endl;
	cout<<"Enter a string :  ";
	cin>>b.input;
	cout<<b.input<<endl;
	cout<<b.len(b.input)<<endl;

	cout<<"Enter a piece of string to check whether it is a substring of the parent string : ";
	cin>>b.sub;

	if(b.substringC())
		cout<<"Present "<<endl;
	else
		cout<<"Nope!!"<<endl;

	cout<<"Enter a string to concat with the parent string ..."<<endl;
	cin>>b.sub;

	b.concatIt();
	cout<<b.con<<endl;

	return 0;
}



