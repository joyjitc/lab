#include <bits/stdc++.h>
using namespace std;
int main()
{
	fstream file;
	char str[1000];
	char str2[1000];
	char ch;
	file.open("file1.txt");
	int i=0;
	while(file.get(ch))
	{
		str[i++]=ch;
	}
	file.close();
	/*i=0;
	while(i<strlen(str))
	{
		cout<<str[i++];
	}*/
	int tab=0;
	int j=0;
	i=0;
	int temp;
	while(i<strlen(str))
	{	
		temp=0;
		
		if(str[i]=='{')
			tab++;
		else if(str[i+1]=='}')
			tab--;
		str2[j]=str[i];

		if(str[i]=='\n')
		{
			while(temp<tab)
				{
					str2[++j]='\t';
					temp++;
				}
		}
		j++;
		i++;
	}
	i=0;
	while(i<strlen(str2))
	{
		cout<<str2[i++];
	}

	cout<<i<<strlen(str2);
	i=0;


	file.open("file1.txt",ios::app);

	while(i<strlen(str2)-1)
	{
		
		file<<str2[i++];
		//i++;
	}

}