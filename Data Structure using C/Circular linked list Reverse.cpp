#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head, *newnode, *tail, *temp2, *temp, *t;
int i = 1, length;

void display();
void create();
void reverse(struct node * head);
int main()
{
	create();
	display();	
	reverse(head);
	
	return 0;
}
void reverse(struct node *head)
{
	if (head->next == tail->next )
	{
		printf("%d ", tail->data );
		return;
	}
	else
	{
		reverse (head->next );
		printf("%d ", head->data );
	}
}
void create()
{
	int choice = 1;
	head = NULL;
	while (choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->next = NULL;
		printf("Enter data: ");
		scanf("%d", &newnode->data );
		
		if (head == NULL)
			head = tail = newnode;
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		printf("Do you want to continue: ");
		scanf("%d", &choice);
	}
	tail->next = head;
}
void display()
{
	temp = head;
	while (temp->next != tail->next )
	{
		printf("%d ", temp->data );
		temp = temp->next;
	}
	printf("%d\n", temp->data );
}
