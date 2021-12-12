#include<stdio.h>
#include<stdlib.h> //library for malloc functions

struct node{ //declaring structure of node i.e node ke andr ye ye rahega
	int data;
	struct node *next;
};

void insert_front(struct node *head, int value)
{
    struct node *new_node; //declaring new node to be inserted

    new_node = (struct node *)malloc(sizeof(struct node)); //allocating memory to new node in heap


    new_node->data = value; /*Setting the value of the node*/
    new_node->next = *head; /*Pointing the new node where head is currently pointing to*/
	
    *head = new_node; // pointing head to new node because now it is the first node 
}
    void printList(struct node *n)
	{
    	while(n!=NULL){
    		//printf("%s","inside print");
    		printf("%d",n->data);
    		n=n->next;
		}
	}

int main(){
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

insert_front(&head, 4);
printList(head);


return 0;
}
