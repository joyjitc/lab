#include <bits/stdc++.h>
using namespace std;

class node
{
	public:
		int id;
		node *link;
		node()
		{
			link=NULL;
		}


};

node *hash[10];
void add(int id)
{
	int key;
	key=id%10;
	node *point=new node;
	point->id=id;
	if(hash[key]==0)
	{
		hash[key]=point;
	}
	else
	{
		point->link=hash[key];
		hash[key]=point;

	}
}
void search(int id)
{
	int key=id%10;
	if(hash[key]==0)
	{
		cout<<"Element Not Present!\n";
		return;
	}
	else
	{
		node* point=hash[key];
		while(point!=NULL)
		{
			if(point->id==id)
			{
				cout<<"Element Found!!";
				return;
			}
		}


	}
	cout<<"Element Not Found!!\n";
	return;
}/*

void delete(int id)
{
	int key=id%10;
	if(hash[key]==0)
	{
		cout<<"Element Not Present!\n";
		return;
	}

}
*/

int main()
{
	int id;
	memset(hash,0,sizeof(hash));
	int choice;
	while(1)
	{
		cout<<"\n1.Add ID\n2.Search ID\n3.Exit\nCHOOSE WISELY::";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"Enter the ID::";
			cin>>id;
			add(id);
			break;

			case 2:
			cout<<"Enter the ID::";
			cin>>id;
			search(id);
			break;
			case 3:exit(0);
		}
	}
	


}