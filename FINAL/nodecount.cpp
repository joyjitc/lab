/* CODE BY
		ABHISHEK KUMAR	
		 */

#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<set>
using namespace std;

#define mem(a,b) memset(a,(b),sizeof(a))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define loop(i,x) for(int i=0;i<x;i++)
#define looop(i,a,b) for(int i=a;i<=b;i++)
#define l(x) strlen(x)
#define ef else if
#define pb(a) push_back(a)

typedef long long int llu;

void optimizeIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

struct node{
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node tree;

tree* newnode(int data)
{
	tree* newnode = (tree*)malloc(sizeof(tree));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

tree* Insert(tree* root,int data)
{
	if(root==NULL)
		root = newnode(data);
	ef(data<=root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int count(node *node)
{
    int c = 1;
    if (node == NULL)
        return 0;
    else
    {
        c += count(node->left);
        c += count(node->right);
        return c;
     }
}
							
int main()						
{   optimizeIO();
	tree* root = NULL;
	cout<<"Enter Number Of Elements That Should Be In The Binary Search Tree"<<endl;
	int n;
	cin>>n;
	cout<<"Enter The Values"<<endl;
	loop(i,n)
	{
		int a;
		cin>>a;
		root = Insert(root,a);
	}
	//int p,k,pp,kk;

	cout<<endl<<"number of nodes in left subtree\n"<<endl;
	int ans = count(root->left);
	cout<<ans<<endl;
	cout<<"number of nodes in right subtree\n";
	 ans = count(root->right);
	cout<<ans<<endl;
	return 0;
}

