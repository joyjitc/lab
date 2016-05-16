#include<iostream>
using namespace std;
template < typename T > class stack
{
    public:
        T elems[100];
        int top;
        stack(){
            top = -1;
        }
        void push(T element)
        {
            elems[++top]=element;
        }
        void pop()
        {
            cout<<"Popped::"<<elems[top]<<endl;
            top--;
        }
        void display()
        {
            for(int i=0;i<=top;i++)
                cout<<elems[i]<<" ";
            cout<<endl;
        }
};
int main()
{
    stack<char> myStack;
	while(true)
    {
        int ch;
        char ele;
        cout<<"1)Push\n2)Pop\n3)Display\nChoice::";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter element::";
                cin>>ele;
                myStack.push(ele);
                break;
            case 2:
                myStack.pop();
                break;
            case 3:
                myStack.display();
        }
    }
}