#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head, *tail, *newnode, *temp;

void create();
void display();
int main()
{
	create();
	display();
	
	return 0;
}
void display()
{
	temp = head;
	while (temp->next != tail->next )
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d", temp->data );
}
void create()
{
	int choice = 1;
	head = NULL;
	while (choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		newnode->prev = NULL;
		
		if (head == NULL)
		{
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			newnode->prev = tail;
			tail = newnode;
		}
		printf("Do you want to continue: ");
		scanf("%d", &choice);
	}
	tail->next = head;
	head->prev = tail;
}
