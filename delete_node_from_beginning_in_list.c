#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

    struct node *head;
 	struct node *second;
	struct node *third;
 
delete_from_beg()
{
	if(head==NULL)
	printf("list is empty, nothing to delete.");
	else
	{
		struct node *temp;
		head=head->next;
		free(temp);
	}
}

void printList(struct node *n)
{
	while(n!=NULL){
	printf("%d",n->data);
	n=n->next;
}
}

int main()
{
head=(struct node *)malloc(sizeof (struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

head->data=1;
head->next=second;

second->data=4;
second->next=third;

third->data=5;
third->next=NULL;

delete_from_beg();
printList(head);
return 0;

	
}

