#include<bits/stdc++.h>

using namespace std;

int main()
{
	cout<<"Enter degrees in multiple of 10\n";
	int n,j;
	cin>>n;
	int i,p;
	cout<<setw(40)<<" *\n";
	for(i=1;i<n/10;i++)
	{
		float k=36.0*sin(i*3.14/18);
		p=(int)k;
		if(k>0)
		{
			cout<<setw(38)<<" ";
		}
		else
		{
			cout<<setw(39+p)<<" ";
			p=p*(-1);
		}
		for(j=0;j<p;j++)
		{
			cout<<"*";
		}
		if(p==0)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}