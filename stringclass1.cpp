
#include<bits/stdc++.h>

using namespace std;
class Mystring
{
	private:
		char str[100];

	public:
		void putdata()
		{
			
			cin>>(str);
				
					
		}

		void getdata()
		{
		for(int i=0;str[i]!='\0';i++)
			{
				cout<<str[i];
			}	
			cout<<endl;
		}
		int length()
	{
			
		int count=0;
		for(int i=0;str[i]!='\0';i++)
			{
				count++;
			}
		cout<<"\nLength is:"<<count<<endl;
		return count;	
	}

		void concat(char *p)
	{
		
		int k=0;
		for(int i=strlen(str);i<=strlen(str)+strlen(p);i++)
			{
				str[i]=p[k++];
			}	
	}


		void reverse()
{
	
int k=0;
char strx[100];
for(int i=strlen(str)-1;i>=0;i--)
			{
				strx[k++]=str[i];
			}
for(int i=0;str[i]!='\0';i++)
			{
				str[i]=strx[i];
			}	


}

};
int main()
{
	Mystring str;
	while(1)
{
	int choice;
	cout<<"1 to Enter data,2 to Get data,3 for length,4 for concat,5 to reverse:";
	cin>>choice;
if(choice==1)
str.putdata();
else if(choice==2)
str.getdata();
else if(choice==3)
str.length();
else if(choice==5)
str.reverse();
else if(choice==4)
{
char str2[100];	
cout<<"Enter String:";
	cin>>str2;
str.concat(str2);
} 
else break;
}
return 1;}
