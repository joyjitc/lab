#include<iostream>
#include<stdlib.h>

using namespace std;

class node 
{       
        public:
                int data;
                node *link;
                node()
                {
                        data=0;
                        link=NULL;

                }


};
class linked
{
        public:
                node *start=NULL;
                node *ptr;
                node *temp=NULL;

                void add_beg(int item){
                    ptr = new node();
                    ptr->data=item;
                    ptr->link=start;
                    start=ptr;
                };
                void add_end(int item){
                    ptr = new node();
                    ptr->data=item;
                    if(start==NULL)
                    {
                        start=ptr;
                        return;
                    }
                    temp=start;
                    while(temp->link!=NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=ptr;
                };
                void del(int pos){
                    int count=1;
                    temp=start;
                    while(count<1&&temp!=NULL)
                    {
                        temp=temp->link;
                    }
                    if(count!=pos-1)
                    {
                        cout<<"Invalid Position\n";
                        return;
                    }
                    else
                    {
                        cout<<"Deleted Value::"<<temp->link->data<<"\n";
                        temp->link=temp->link->link;
                    }
                };
                void display(){
                    cout<<"LIST::";
                    temp=start;
                    while(temp!=NULL)
                    {
                        cout<<temp->data<<" ";
                        temp=temp->link;
                    }
                    cout<<"\n";
                };

};
int  main()
{
        int i,choice;
        linked list1;
	while(true)
       {
	cout<<"1.Add data to beginning\n2.Add data to end\n3. Display the data\n4.Delete\n5.Exit"<<endl;
        cout<<"Enter your choice::";
	cin>>choice;
        switch(choice)
     {
	case 1:
        cout<<"Enter the value to be added in the beginning::"<<endl;
        cin>>i;
        list1.add_beg(i);
        break;
        case 2:
        cout<<"Enter the value to be added in the end::"<<endl;
        cin>>i;
        list1.add_end(i);
        break;
        case 3:
            list1.display();
            break;
        case 4:
            cout<<"Enter the position::"<<endl;
        cin>>i;
        list1.del(i);
        break;
        case 5:
        exit(0);
     }
    }      
}

