#include<iostream>
#include<malloc.h>
using namespace std;
class tree
{
    public:
     tree *leftchild;
    int data;
    tree *rightchild;
    tree*temp;
};

void insert(class tree **,int);
void inorder(class tree*);
void preorder(class tree*);
void postorder(class tree*);

void lcount(class tree*cur)
{

  int c=0;
  while(cur)
  {
    cur=cur->leftchild;
    ++c;

  }
  cout<<"leftchild:"<<c-1;
}
void rcount(class tree*cur)
{
  int c=0;
  while(cur)
  {
    cur=cur->rightchild;
    ++c;

  }
  cout<<"  Rightchild:"<<c-1<<endl;

}

void inorder(class tree *sr)
{
    if(sr!=NULL)
    {
        inorder(sr->leftchild);

        cout<<sr->data<<" --->";
        lcount(sr);
        rcount(sr);
        inorder(sr->rightchild);

    }

      //  return 0;
}

void insert(class tree **sr,int num)
{
    if(*sr==NULL)
    {   //class *sr=new class tree;
       *sr=(class tree*)malloc(sizeof(class tree));
        (*sr)->leftchild=NULL;
        (*sr)->data=num;

        (*sr)->rightchild=NULL;
      //return 0;
    }
    else
    {
        if(num<(*sr)->data)
            insert(&((*sr)->leftchild),num);
        else
            insert(&((*sr)->rightchild),num);
    }
  //  return 0;
}


int main()
{

    class tree *bt;
    int req,i=1,num;
    bt=NULL;

    cout<<"no. of data\n";
    cin>>req;

    while(i++<=req)
    {
        cout<<"enter data\n";
        cin>>num;
        insert(&bt,num);
    }
    cout<<"traversal:\n\n";
    cout<<"inorder:\n";
    inorder(bt);
    cout<<"\nPostorder:\n";
    postorder(bt);
    cout<<"\nPreorder:\n";
    preorder(bt);

}


void postorder(class tree *sr)
{
    if(sr!=NULL)
    {
        postorder(sr->leftchild);
        postorder(sr->rightchild);
        cout<<sr->data<<"  ";

    }

      //  return 0;
}

void preorder(class tree *sr)
{
    if(sr!=NULL)
    {    cout<<sr->data<<"  ";
        preorder(sr->leftchild);
        preorder(sr->rightchild);


    }

      //  return 0;
}

