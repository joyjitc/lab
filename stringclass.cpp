#include <bits/stdc++.h>
using namespace std;
class srg
{	
	public:
		char* value[];
	public:
		void leng(char* str)
		{
			int count=0;
			int i;
			while(str[i]!='\0')
			{
				count++;
				i++;
			}
			cout<<"\nThe length is:"<<count;

		}
}

int main()
{
	srg a;
	cin>>a.value;
	a.leng(a.value);


	return 0;
}