#include <bits/stdc++.h>
using namespace std;
class set
{
	public:
		int *data;
		int *result;
		int hash[10000]={0};

		void input(void)
		{
			int n;
			cout<<"Enter the number of elements in Set::";
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Enter the "<<n+1<<"th element(Max 9999)::";
				cin>>data[n];
				hash(data[n])=1;
			}
		}
		void uni(set a)
		{
			

		}


}