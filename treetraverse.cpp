#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
    int key;
    Node* left;
    Node* right;
public:
    Node() 
	{ 
	   key=-1; left=NULL; right=NULL; 
	};
    void setKey(int aKey) 
	{ 
	   key = aKey; 
	};
    void setLeft(Node* aLeft) 
	{ 
	   left = aLeft; 
	};
    void setRight(Node* aRight) 
	{ 
	   right = aRight; 
	};
    int Key() 
	{ 
	   return key; 
	};
    Node* Left() 
	{ 
	   return left; 
	};
    Node* Right() 
	{ 
	  return right; 
	};
};

// Tree class
class Tree {
     Node* root;
public:
     Tree();
     ~Tree();
     Node* Root() { return root; };
     void addNode(int key);
     void inOrder(Node* n);
     void preOrder(Node* n);
     void postOrder(Node* n);
private:
     void addNode(int key, Node* leaf);
     void freeNode(Node* leaf);
};

// Constructor
Tree::Tree() {
     root = NULL;
}

// Destructor
Tree::~Tree() {
     freeNode(root);
}

// Free the node
void Tree::freeNode(Node* leaf)
{
    if ( leaf != NULL )
    {
       freeNode(leaf->Left());
       freeNode(leaf->Right());
       delete leaf;
    }
}

// Add a node
void Tree::addNode(int key) {
     // No elements. Add the root
     if ( root == NULL ) {
        Node* n = new Node();
        n->setKey(key);
        root = n;
     }
     else 
       addNode(key, root);
}

// Add a node (private)
void Tree::addNode(int key, Node* leaf) {
    if ( key <= leaf->Key() ) {
       if ( leaf->Left() != NULL )
          addNode(key, leaf->Left());
       else {
          Node* n = new Node();
          n->setKey(key);
          leaf->setLeft(n);
       }
    }
    else {
       if ( leaf->Right() != NULL )
          addNode(key, leaf->Right());
       else {
          Node* n = new Node();
          n->setKey(key);
          leaf->setRight(n);
       }
    }
}

// Print the tree in-order
// Traverse the left sub-tree, root, right sub-tree
void Tree::inOrder(Node* n) {
    if ( n ) {
       inOrder(n->Left());
       cout << n->Key() << " ";
       inOrder(n->Right());
    }
}

// Print the tree pre-order
// Traverse the root, left sub-tree, right sub-tree
void Tree::preOrder(Node* n) {
    if ( n ) {
       cout << n->Key() << " ";
       preOrder(n->Left());
       preOrder(n->Right());
    }
}

// Print the tree post-order
// Traverse left sub-tree, right sub-tree, root
void Tree::postOrder(Node* n) {
    if ( n ) {
       postOrder(n->Left());
       postOrder(n->Right());
       cout << n->Key() << " ";
    }
}


// Test main program
int main() {
	int a=0,dat;
	char ch;
   Tree* tree = new Tree();
   cout<<"Enter y/Y to enter new node, any other key to stop adding node:  ";
   cin>>ch;
   do{
   cout<<"Enter node: ";
   cin>>dat;
   tree->addNode(dat);
   cout<<"Wanna continue adding? ";
   cin>>ch;
   }while(ch=='y' || ch=='Y');
   
   while(1){
   cout<<"Enter your choice:"<<endl<<"1. InOrder 2. PreOrder 3.PostOrder 4. Exit"<<endl;
   cin>>a;
   switch(a)
   {
   
   case 1:cout << "In order traversal" << endl;
   tree->inOrder(tree->Root());
   cout << endl;break;

   case 2:cout << "Pre order traversal" << endl;
   tree->preOrder(tree->Root());
   cout << endl;break;

   case 3:cout << "Post order traversal" << endl;
   tree->postOrder(tree->Root());
   cout << endl;break;
   
   case 4:exit(0);
   }
}
   delete tree;
   return 0;
}
