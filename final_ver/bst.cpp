#include <bits/stdc++.h>
using namespace std;
class node
{	
	public:
	int data;
	node *left,*right;
	node()
	{
		left=right=NULL;
	} 
};
class bst
{	
	public:
	node *root;
	bst()
	{
		root = NULL;
	}
	void insert(node *point, int val)
	{
		if(point == NULL)
		{
			node* newnode = new node;
			newnode->data=val;
			point=newnode;
			if(root==NULL)
				root=point;

		}
		else if(val<=point->data)
		{	
			if(point->left==NULL)
			{
				node* newnode = new node;
				newnode->data=val;
				point->left=newnode;
			}
			else
				insert(point->left,val);
		}
		else 
		{	
			if(point->right==NULL)
			{
				node* newnode = new node;
				newnode->data=val;
				point->right=newnode;
			}
			else
				insert(point->right,val);
		}
	}
	void search(node *point, int data)
	{
		if(point==NULL)
		{
			cout<<"\nElement Not Found!!";
			return;
		}
		else if(point->data==data)
		{
			cout<<"\nElement Found!!";
			return;	
		}
		else if(data<point->data)
			search(point->left,data);
		else
			search(point->right,data);

	}
	void inorder(node *point)
	{
		if(point==NULL)
			return;
		inorder(point->left);
		cout<<point->data<<" ";
		inorder(point->right);
	}
	int height(node *point)
	{
		if(point==NULL)
			return 0;
		else
		 return 1+max(height(point->left),height(point->right));
	}
};
int main(void)
{
 	bst one;
 	one.insert(one.root,50);
 	one.inorder(one.root);
 	one.insert(one.root,34);
 	one.inorder(one.root);
	one.insert(one.root,23);
	one.inorder(one.root);
	one.insert(one.root,67);
	one.inorder(one.root);
	one.insert(one.root,39);
	one.inorder(one.root);
	one.insert(one.root,1);
	one.inorder(one.root);
	one.search(one.root,23);
	one.search(one.root,67);
	one.search(one.root,15);
	cout<<"height = "<<one.height(one.root);


}