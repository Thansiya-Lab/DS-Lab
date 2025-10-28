#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header=NULL;
/*void createnode(int item)
{
	
}*/
void insertAtFront(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	
	if (header==NULL)
		header=newnode;
	else
	{
		newnode->link=header;
		header=newnode;
	}
}
void insertAtEnd(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	
	if (header==NULL)
		header=newnode;
	else
	{
		struct node *ptr;
		ptr=header;
		while(ptr->link != NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=newnode;
	}
}
void traverselist()
{	
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
int main()
{
	insertAtFront(10);
	insertAtFront(20);
	insertAtFront(30);
	insertAtFront(40);
	insertAtEnd(50);
	traverselist();
	return 0;
}
