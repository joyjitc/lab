#include<iostream>
using namespace std;
int U[]={1,2,3,4,5,6,7,8,9,10};
class set
{
	public:
	int a[1000];
	int size;
	void input()
	{
		cout<<"Enter the number of elemets of the set:";
		cin>>size;
		int x=size;
		int i=0;
		cout<<"Enter the elements"<<endl;
		for(int i=0;i<size;++i)
		cin>>a[i];
	}
	void Union(set X)
	{
		for(int i=0;i<size;++i)
		{
			cout<<a[i]<<" ";
			for(int j=0;j<X.size;++j)
			if(a[i]==X.a[j])
			X.a[j]-=20;
		}
		for(int j=0;j<X.size;++j)
		{
			if(X.a[j]>0)
			cout<<X.a[j]<<" ";
		}
		cout<<endl;
	}
	void Intersection(set X)
	{
		//cout<<"The Intersection of the sets are:";
		for(int i=0;i<size;++i)
		{
			for(int j=0;j<X.size;++j)
			{
				if(a[i]==X.a[j])
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
	void Complement()
	{
		int tmp[]={1,2,3,4,5,6,7,8,9,10};
		for(int i=0;i<size;++i)
		{
			for(int j=0;j<10;++j)
			{
				if(a[i]==tmp[j])
				tmp[j]-=20;
			}
		}
		//cout<<"The Complement is:"<<endl;
		for(int i=0;i<10;++i)
		if(tmp[i]>0)
		cout<<tmp[i]<<" ";
		cout<<endl;
	}
	void Difference(set X)
	{
		for(int i=0;i<X.size;++i)
		{
			for(int j=0;j<size;++j)
			{
				if(a[j]==X.a[i])
				a[j]-=20;
			}
		}
		//cout<<"The difference is:"<<endl;
		for(int i=0;i<size;++i)
		{
			if(a[i]>0)
			cout<<a[i]<<" ";
			else
			a[i]+=20;
		}
	}
};
int main()
{
	cout<<"Universal set={1,2,3,4,5,6,7,8,9,10}"<<endl;
	set A,B;
	cout<<"Enter Details of set A"<<endl;
	A.input();
	cout<<"Enter details of set B"<<endl;
	B.input();
	cout<<"A Union B is:";
	A.Union(B);
	cout<<"A intersection B is:";
	A.Intersection(B);
	cout<<"Complement of A is: ";
	A.Complement();
	cout<<"Complement of B is: ";
	B.Complement();
	cout<<"The result of A-B is:";
	A.Difference(B);
}
