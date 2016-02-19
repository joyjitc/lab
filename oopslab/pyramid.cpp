#include<bits/stdc++.h>

using namespace std;

int main()
{
	cout<<"Enter no. of lines";
	int n,j;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<setw(n+5-i);
		for(j=1;j<=i;j++)
			cout<<"*";
		for(j=i-1;j>=1;j--)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}