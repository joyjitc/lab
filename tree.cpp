#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
    string key;
    Node* left;
    Node* right;
public:
    Node() { key=-1; left=NULL; right=NULL; };
    void setKey(string aKey) { key = aKey; };
    void setLeft(Node* aLeft) { left = aLeft; };
    void setRight(Node* aRight) { right = aRight; };
    string Key() { return key; };
    Node* Left() { return left; };
    Node* Right() { return right; };
};

// Tree class
class Tree {
     Node* root;
public:
     Tree();
     ~Tree();
     Node* Root() { return root; };
     void addNode(string key);
     void levelOrder(Node* n);
     void Inorder(Node* );
    void Postorder(Node* );
    void Preorder(Node* node);
private:
     void addNode(string key, Node* leaf);
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
void Tree::addNode(string key) {
     // No elements. Add the root
     if ( root == NULL ) {
        cout << "add root node ... " << key << endl;
        Node* n = new Node();
        n->setKey(key);
    root = n;
     }
     else {
    cout << "add other node ... " << key << endl;
    addNode(key, root);
     }
}

// Add a node (private)
void Tree::addNode(string key, Node* leaf) {
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

// Print the tree level-order assisted by queue
void Tree::levelOrder(Node* n) {
   // Create a queue
   queue<Node*> q;

   // Push the root
   q.push(n);

   while ( ! q.empty() )
   {
       // Dequeue a node from front
       Node* v = q.front();
       cout << v->Key() << " ";

       // Enqueue the left children
       if ( v->Left() != NULL )
            q.push(v->Left());

       // Enqueue the right children
       if ( v->Right() != NULL )
            q.push(v->Right());

       // Pop the visited node
       q.pop();
   }
}

void Tree::Preorder(Node* node)
{
    if ( node )
    {
        cout << node->Key() << " ";
        Preorder(node->Left());
        Preorder(node->Right());
    }
}

void Tree:: Inorder(Node* Root)
{
    if(Root != NULL)
    {
        Inorder(Root->Left());
        cout << Root->Key() << endl;
        Inorder(Root->Right());

    }
}

void Tree:: Postorder(Node* Root)
{
    if(Root != NULL)
    {

        Postorder(Root->Left());
        Postorder(Root->Right());
        cout << Root->Key() << endl;

    }
}

// Test main program
int main() {
   Tree* tree = new Tree();
   char data;
   int choice;
   while(1)
   {
      cout<<"1> Add Node\n2> Pre order traversal\n3> In order traversal\n4>Post order traversal\n5> Exit\nCHOOSE WISELY::";
      cin>>choice;
      switch(choice)
      {
        case 1:
        cout<<"\nEnter data:";
        cin>>data;
        tree->addNode(data);
        break;
        case 2:
        cout << "Pre order traversal" << endl;
        tree->Preorder(tree->Root());
        cout << endl;
        break;
        case 3:
        cout << "In order traversal" << endl;
        tree->Inorder(tree->Root());
        cout << endl;
        break;
        case 4:
        cout << "Post order traversal" << endl;
        tree->Postorder(tree->Root());
        cout << endl;
        break;
        case 5:
        exit(0);  



      }
   }
   delete tree;
   return 0;
} 