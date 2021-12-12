#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
		struct node *temp;


void printList(struct node* n)
{
while(n!=0)
{
	printf("%d",n->data);
	n=n->next;
}
}

void getLength(){
	int count=0;

	temp=head;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	printf("\nlength is %d",count);
}

int main()
{

	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	printList(head);
	getLength();
	return 0;
	
	
	
}
