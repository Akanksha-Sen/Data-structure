#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};


void printList(struct node *n)
{
	while(n!=0)
	printf("%d",n->data);
	n=n->next;
}
 int main()
 {
 	struct node *newnode=NULL;
 	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	struct node *temp=NULL;
newnode=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
head=(struct node*)malloc(sizeof(struct node));
temp=(struct node*)malloc(sizeof(struct node));


head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=NULL;

printf("enter the data you want to insert: ");
scanf("%d",newnode->data);

temp=head;

while(temp->next!=0)
{
	temp=temp->next;
}
temp->next=newnode;


printList(head);
return 0; 
}
