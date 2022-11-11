#include<stdio.h>
#include<stdlib.h>
struct val { 
	int a,b;
	float c;
}n;

void main()
{
	n.a = 10;
	n.b = 20;
	n.c = 10;
	printf("\na = %d\nb = %d\nc = %f \n",n.a,n.b,n.c);
	struct val *p;
	p = (struct val *)malloc(sizeof(struct val));
	printf("address  structure is %p",p);
	(*p).a = 23;
	(*p).b = 23;
	(*p).c = 2.5;
	printf("\na = %d\nb = %d\nc = %f",(*p).a,(*p).b,(*p).c);
	struct val *p1;
	p1 = &n;
	printf("\np1 a = %d\np1 b = %d\np1 c = %f",p1->a,p1->b,p1->c);
}
