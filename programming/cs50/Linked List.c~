/*Author: Joyjit Choudhury
NIT DURGAPUR
B.Tech 2nd Year
Last modified::23/08/15*/
#include <stdio.h>
#include <stdlib.h>
void display();
void insert();
void del();
void asc();
void des();
void search();
typedef struct list
{
	int data;
	struct list *link;
}List;
List *head=NULL,*temp=NULL,*cur=NULL,*next=NULL;
int size=0;
int main()
{
	int ch;
	while(1)
	{
		printf("\n1)Insert\n2)Delete\n3)Display\n4)Sort in ascending order\n5)Sort in descending order\n6)Search for an element\n7)Exit\nEnter your choice ::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
                    display();
					break;
			case 2: del();
                    display();
					break;
			case 3: display();
					break;
			case 4: asc();
					display();
					break;
			case 5: des();
					display();
					break;
			case 6: search();
					break;
			case 7: exit(1);

		}
	}
}
void insert()
{	
	int pos;
	printf("Enter the position::");
	scanf("%d",&pos);
	if(pos<1||pos>size+1)
	{
		printf("The position is out of range!!!\n");
		return;
	}
	int val;
	printf("Enter the value::");
	scanf("%d",&val);
	if(pos==1)
	{
		temp=(List *)malloc(sizeof(List));
		temp->data=val;
		temp->link=(head==NULL?NULL:head);
		head=temp;
		size++;
		return;
	}
	cur=head;
	pos=pos-2;
	while(pos--)
	{
		cur=cur->link;
	}
	temp=(List *)malloc(sizeof(List));
	temp->data=val;
	temp->link=(cur->link==NULL?NULL:cur->link);
	cur->link=temp;
	size++;
}
void display()
{
    if(head==NULL)
	{
		printf("\n || Empty List || \n");
		return;
	}
	cur=head;
	printf("\n");
	int n=size;
	while(n--)
	{
		printf("| %d |",cur->data);
		cur=cur->link;
	}
	printf("\n");
}
void del()
{
	if(head==NULL)
	{
		return;
	}
	int pos;
	printf("Enter the position::");
	scanf("%d",&pos);
	if(pos<1||pos>size)
	{
		printf("The position is out of range!!!\n");
		return;
	}
	if(pos==1)
	{
		temp=head;
		printf("\n The deleted value is:: %d\n",temp->data);
		head=(temp->link==NULL?NULL:temp->link);
		free(temp);
		size--;
		return;
	}
	cur=head;
	pos=pos-2;
	while(pos--)
	{
		cur=cur->link;
	}
	temp=cur->link;
	printf("\n The deleted value is:: %d\n",temp->data);
	next=(temp->link==NULL?NULL:temp->link);
	free(temp);
	cur->link=next;
	size--;
}
void asc()
{
	int n=size-1;
	while(n--)
	{
		cur=head;
		int t=0;
		while(t<=n)
		{
			next=cur->link;
			if(cur->data>next->data)
			{
				cur->data=cur->data+next->data;
				next->data=cur->data-next->data;
				cur->data=cur->data-next->data;
			}
			t++;
			cur=next;
		}
	}
}
void des()
{
	int n=size-1;
	while(n--)
	{
		cur=head;
		int t=0;
		while(t<=n)
		{
			next=cur->link;
			if(cur->data<next->data)
			{
				cur->data=cur->data+next->data;
				next->data=cur->data-next->data;
				cur->data=cur->data-next->data;
			}
			t++;
			cur=next;
		}
	}
}
void search()
{
	int n=0;
	int flag=0;
	int val;
	printf("\nEnter the value to be searched :: ");
	scanf("%d",&val);
	cur=head;
	while(n<size)
	{
		if(cur->data==val)
		{
			printf("\nThe Element | %d | is present in position :: %d \n",val,n+1);
			flag=1;
		}
	cur=cur->link;
	n++;
	}
	if(flag==0)
	{
		printf("\nThe Element %d is not present!! \n",val);
	}

}


