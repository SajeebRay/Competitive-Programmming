#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head, *tail, *temp, *newnode;
void createNew();
void display();
void reverse(struct node *head);
int main()
{
	createNew();
	display();
	reverse(head);
	
	return 0;
}
void display()
{
	temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data );
		temp = temp->next ;
	}
}
void createNew()
{
	int choice = 1;
	head = NULL;
	while(choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data );
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
		printf("Do you want to contineu: ");
		scanf("%d", &choice);
	}
}
void reverse(struct node *head)
{
	
	if (head == NULL)
		return;
	else
	{
		(reverse(head->next));
		printf("%d ", head->data);
	}
}
