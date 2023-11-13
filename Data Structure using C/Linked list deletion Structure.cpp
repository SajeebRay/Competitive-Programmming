#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void deletionFirst(struct node *head);
void deletionMid(struct node *head);
void deletionLast(struct node *head);
void print(struct node *head);

void print(struct node *head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		printf("%d ", head->data);
		head = head->next;
	}
	printf("  Count %d\n", count);
}
void deletionLast(struct node *head)
{
	struct node *prenode, *temp = head;
	while (temp->next != NULL)
	{
		prenode = temp;
		temp = temp->next;
	}
	if (head == prenode)
	{
		head = 0;
	}
	else
	{
		prenode->next = NULL;
	}
	free(temp);
	print(head);
	deletionMid(head);
}
void deletionMid(struct node *head)
{
	int i = 1, pos = 3;
	struct node *nextnode, *temp = head;
	
	while (i < pos-1)
	{
		temp = temp->next ;
		i++;
	}
	
	nextnode = temp->next ;
	temp->next = nextnode->next ;
	free(nextnode);
	print(head);
}
void deletionFirst(struct node *head)
{	
	struct node *temp = head;
	head = head->next ;
	free(temp);
	print(head);
	deletionLast(head);
}
int main()
{
	struct node *head, *newnode, *temp;
	int choice = 1;
	head = NULL;
	
	while (choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data );
		newnode->next = NULL;
		
		if (head == NULL)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		
		printf("Enter your choice (0 , 1): ");
		scanf("%d", &choice);
	}	
	print(head);
	deletionFirst(head);
	
	return 0;
}	

