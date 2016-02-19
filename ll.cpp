#include<iostream>
#include<stdlib.h>

using namespace std;

class node 
{       
        friend class linked;

        private:
                int data;

        public:
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

                void append(int item);
                void display();

};

void linked::append(int item)
{       
        ptr = new node();
        ptr->data=item;
        if(start==NULL)
        {
                start=ptr;
                ptr->link=NULL;
                temp=start;


        }
        else
        {
                while(temp->link!=NULL)
                {
                     temp=temp->link;

                }
                temp->link=ptr;
                ptr->link=NULL;

         }       


}
void linked::display()
{       
        node *trav=start;
        while(trav!=NULL)
        {
                cout<<trav->data<<endl;
                trav=trav->link;
        }

}
int  main()
{
        int i,choice,count=1;
        linked box;
	while(count=1)
       {
	cout<<"1>Append data to the Linked List\n2>Display the Linked List\n3>Exit"<<endl;
        cout<<"\nChoose wisely::";
	cin>>choice;
        switch(choice)
     {
	        case 1:
            cout<<"Enter the value to be appended:: "<<endl;
            cin>>i;
            box.append(i);
            break;
            case 2:
            box.display();
            break;
            exit(0);
     }
cout<<"Input 1 to continue::<<endl;
cin>>count;
}      
}

