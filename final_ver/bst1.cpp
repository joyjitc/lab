#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *left;
		node* right;
};
node* Root=NULL;
class BTree
{
	public:
		
		
		void setRoot(int val)
		{
			Root=new node;
			Root->data=val;
			Root->left=NULL;
			Root->right=NULL;
		}
		
		void insert(int val,node* leaf)
		{
			
			if(val>leaf->data)
			{
				if(leaf->right!=NULL)
				{
					insert(val,leaf->right);
				}
				else
				{
					
					node* X;
					X=new node;
					leaf->right=X;
					X->right=NULL;
					X->left=NULL;
					X->data=val;
					
				}
				
				
			}
			
			
					
			if(val<=leaf->data)
			{
				if(leaf->left!=NULL)
				{
					insert(val,leaf->left);
				}
				else
				{
					
					node* X;
					X=new node;
					leaf->left=X;
					X->right=NULL;
					X->left=NULL;
					X->data=val;
					
				}
				
				
			}
			
			
			
		}
		
	void printInorder(node* node)
{
     if (node == NULL)
          return;
 
    printInorder(node->left);
 
     
     cout<<(node->data)<<" ";  
 
     
     printInorder(node->right);
}
		
		
		
};

main()
{
	BTree tree;
	
	tree.setRoot(10);
	for(int i=0;i<10;i++)
	{
	int n;
	cin>>n;
	
	tree.insert(n,Root);
	}	
						
					
	tree.printInorder(Root);
	
	
}


