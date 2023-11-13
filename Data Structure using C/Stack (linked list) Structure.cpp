#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *top, *temp, *newnode;

void push();
void pop();
void display();
int main()
{
	top = NULL;
	push();
	push();
	push();
	push();
	push();
	push();
	push();
	push();
	display();
	pop();
	display();
	
	return 0;
}
void display()
{
	temp = top;
	while(temp->next != NULL)
	{
		printf("%d ", temp->data );
		temp = temp->next ;
	}
		printf("%d ", temp->data );
}
void pop()
{
	printf("\n%d \n", top->data );
	top = top->next;
}
void push()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data );
	newnode->next = NULL;
	if (top == NULL)
		top = newnode;
	else
	{
		newnode->next = top;
		top = newnode;
	}
}
