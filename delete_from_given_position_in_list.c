#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;
struct node *temp=NULL;
struct node *temp2=NULL;
struct node *second=NULL;
struct node *third=NULL;
struct node *prev=NULL;


void printList(struct node *n)
{
	
	if(head==NULL)
	printf("list is empty, there is nothing to print!");
	
else
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}
}


void delete_from_position()
{
	int pos;
	printf("enter the position from where you want to delete: ");
	scanf("%d",&pos);
	
	if(head==NULL)
	printf("list is empty,nothing to delete.");
	 
	 else
	 {
	 	temp=head;
	 	temp2=head;
	 	prev=head;
	 	 
	 	 while(temp->next!=NULL)
		  {
	 	 	temp2=temp;
	 	 	temp=temp->next;
		  }
	 
	 prev->next=temp2->next;
	 free(temp2);
	 temp=NULL;	 
	 }
}
int main()
{
	
		head=(struct node *)malloc(sizeof (struct node));
		temp=(struct node *)malloc(sizeof (struct node));
			temp2=(struct node *)malloc(sizeof (struct node));
				second=(struct node *)malloc(sizeof (struct node));
					third=(struct node *)malloc(sizeof (struct node));
					prev=(struct node *)malloc(sizeof (struct node));
					
	head->data=2;
	head->next=second;
	
	second->data=4;
	second->next=third;
	
	third->data=9;
	third->next=NULL;
	
	delete_from_position();
	printList(head);
	return 0;
	
}
