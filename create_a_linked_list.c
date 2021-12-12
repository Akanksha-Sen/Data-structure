#include<stdio.h>
#include<stdlib.h> //library for malloc functions

struct node{ //declaring structure of node i.e node ke andr ye ye rahega
	int data;
	struct node *next;
};

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

third->data=3;#include<stdio.h>
#include<stdlib.h> //library for malloc functions

struct node{ //declaring structure of node i.e node ke andr ye ye rahega
	int data;
	struct node *next;
};

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
third-> next=NULL;

return 0;
}
third-> next=NULL;

return 0;
}
