//bears the authority of alchemist95

#include<bits/stdc++.h>
using namespace std;


class MySet{

public:
	vector<int> v;
    int entered[1000];
    void FillSet();
    void Uni(MySet);
    void PrintSet();
    void Inter(MySet,MySet);

};

void MySet::FillSet()
{
	for(int i=0;i<1000;i++)
		this->entered[i]=0;

	int in;

cout<<"Enter no of elements you want to enter ";
int n;
cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>in;
		if(this->entered[in]==0)
		{
			entered[in]=1;
			this->v.push_back(in);
		}
	}

}

void MySet::PrintSet()
{

	for(int i=0;i<this->v.size();i++)
	{
		if(i!=this->v.size()-1)
		{
			cout<<this->v[i]<<", ";

		}
		else
			cout<<this->v[i];
	}

}

void MySet::Uni(MySet sec)
{

	for(int i=0;i<sec.v.size();i++)
	{
		if(this->entered[sec.v[i]]==0)
		{
			this->entered[sec.v[i]]=1;
			this->v.push_back(sec.v[i]);
		}
	}

}


void MySet::Inter(MySet a, MySet b)
{

	for(int i=0;i<1000;i++)
	{
		if(a.entered[i]==b.entered[i] && a.entered[i]==1)
		{
			this->v.push_back(i);
			this->entered[i]=1;
		}
	}

}



int main()
{

MySet a;
MySet b;

	cout<<"Enter elements for Set A"<<endl;
	a.FillSet();

	cout<<"Set A";
	cout<<"{ ";
	a.PrintSet();
	cout<<" }"<<endl;;

	cout<<"Enter elements for Set B"<<endl;;
	b.FillSet();

	cout<<"Set B";
	cout<<"{ ";
	b.PrintSet();
	cout<<" }"<<endl;

	cout<<" Let us perform A /\\ B "<<endl;

	MySet c;
	c.Inter(a,b);
	cout<<" Set A /\\ B ";
	cout<<"{ ";
	c.PrintSet();
	cout<<" }"<<endl;

	cout<<" Let us perform A U B "<<endl;

	a.Uni(b);
	cout<<" Set A U B";
	cout<<"{ ";
	a.PrintSet();
	cout<<" }"<<endl;


}
