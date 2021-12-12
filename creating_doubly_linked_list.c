#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head,*newnode,*temp;
void create()
{
	head=NULL;
newnode=(struct node *)malloc(sizeof(struct node));

newnode->prev=0;
newnode->next=0;

if(head==0)
{
	head=temp=newnode;	
}
else
{
	temp->next=newnode;
	newnode->prev=temp;
	temp=newnode;
}	
}

void display(struct node *n)
{
	while(temp->next!=0){
		printf("%d",temp->data);
		temp=temp->next;
	}
}

void main()
{
	
	printf("enter data you want to insert: ");
scanf("%d",&newnode->data);
	create();
	display(head);
	return 0;
}
