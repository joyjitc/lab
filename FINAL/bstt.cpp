#include<bits/stdc++.h>
using namespace std;
struct node
{
	int key;
	struct node *right,*left;
};
class bst
{
	public :
	struct node *t;
	void create();
	struct node *insert(struct node *,int);
	struct node *newnode(int);
	void inorder(struct node *);
	void preorder(struct node *);
	void postorder(struct node *);
};

void bst::create()
{
	struct node *root=NULL;
	int i,n,data;
	printf("Enter no. of nodes : ");
	scanf("%d",&n);
	printf("Enter data : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&data);
		root=insert(root,data);
		if(i==1)
		  t=root;
	}
}
struct node * bst::insert(struct node *node,int key)
{
	if(node==NULL)
	  return(newnode(key));
	if(key<node->key)
	  node->left=insert(node->left,key);
	if(key>node->key)
	  node->right=insert(node->right,key);
	return node;
}
struct node * bst::newnode(int item)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->key=item;
	temp->left=temp->right=NULL;
	return temp;
}
void bst::preorder(struct node *root)
{
	if(root!=NULL)
	{
		cout<<root->key<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void bst:: postorder(struct node *root)
{
	if(root!=NULL)
	{
		
		postorder(root->left);
		postorder(root->right);
		cout<<root->key<<" ";
	}
}
void bst::inorder(struct node *root)
{
	if(root!=NULL)
	{
		
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
int main()
{
	int ch;
	bst b;
	cout<<"Enter 1 to create, 2 for preorder, 3 for postorder, 4 for inorder"<<endl;
	while(1)
	{
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : b.create();
				 break;
			case 2 : b.preorder(b.t);
				 break;
			case 3 : b.postorder(b.t);
				 break;
			case 4 : b.inorder(b.t);
				 break;
			default : exit(0);
					
		}
	}
	return 0;
}
	
