#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next; //ek ptr hai next naam ka struct me struct type ka
};
void insert_last(struct node **head,int value)
struct node *new_node;
new_node = (struct node *)malloc(sizeof(struct node)); //allocating memory to new node in heap

new_node->data=value;
new_node->next=NULL;

if(*head=NULL)
{
	*head=new_node;
}

while(n!=NULL)
{
		n=n->next;
		n->next=new_node;
		return;
}

void printList(struct node *head)
{
	while(n!=NULL){
		printf("%d",n->data);
		n=n->next;
	}
}

int main()
{
	struct node *head=NULL; //Declaring three local pointers and assigning their value to null
	struct node *second=NULL;
	struct node *third=NULL;

head=(struct node *)malloc(sizeof(struct node)); //allocating three nodes in heap as ll is always created in heap
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

head->data=1; //assigning value in node 1
head -> next=second; //linking node 1 and 2

second->data=2;
second-> next=third;

third->data=3;
third->next=NULL;

insert_last(&head, 4);
printList(head);


return 0;
}
