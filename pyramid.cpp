#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j;
	cout<<"Enter the size of the pyramid :: ";
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<setw(n-i);
		for(j=1;j<=(2*i)+1;j++)
			cout<<"*";
        cout<<endl;


	}
}
