#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	};
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

void printllist(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d",p->data);	
		p = p->next;
		
	}
	
}

int main()
{
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));
	
	one->data = 1;
	two->data = 2;
	three->data = 3;
	
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	head = one;
	printllist(head);
	
	return 0;	 
}
