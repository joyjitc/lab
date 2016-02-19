#include<iostream>
#define capacity 100
using namespace std;

class stack
{
    public:
    int arr[capacity];
    int top=-1;
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
    A.push(10);
    A.push(260);
    A.push(2);
    cout<<A.pop()<<"\n";
    cout<<A.pop();


}
