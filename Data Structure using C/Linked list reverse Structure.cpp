#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void reverse(struct node* head)
{
	if (head == NULL)
		return;
	else
	{
		reverse(head->next);
		printf("%d ", head->data);
	}
}
int main()
{
	struct node *head, *temp, *newnode;
	head = 0;
	int choice = 1;
	while (choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data );
		newnode->next = NULL;
		
		if (head == 0)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Enter choice: ");
		scanf("%d", &choice);
	}
	reverse(head);
}
