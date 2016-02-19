#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define capacity 100
using namespace std;

class stack
{
    public:
    int arr[capacity];
    int top;
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==capacity-1)
        cout<<"Stack Overflow!";
        else
        {
            top++;
            arr[top]=x;
        }

    }
    int pop(void)
    {

        if(top==-1)
        cout<<"Stack Underflow!";
        else
        {
            int v=arr[top];
            top--;
            return v;
        }

    }
};
int main(void)
{
    stack A;
    int val;
    int ch;
    while(1)
    {
        cout<<"1.Push\n2.Pop\n3.Exit\nChoose wisely::";
   
        cin>>ch;
    
        switch(ch)
        {
            case 1: cout<<"Enter the value to be Pushed::";
                    cin>>val;
                    A.push(val);
                    break;
            case 2: cout<<A.pop()<<"\n";
                    break;
            case 3: exit(1);
        }
    }
    /*A.push(10);
    A.push(260);
    A.push(2);
    cout<<A.pop()<<"\n";
    cout<<A.pop();*/


}
