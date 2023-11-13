#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void print(struct node* n);
void insertionFirst(struct node* head);
void insertionMid(struct node *head);
void insertionLast(struct node *head);

void print(struct node* n)
{
	while(n != NULL)
	{
		printf("%d ", n->data);
		n = n->next;
	}
}
void insertionFirst(struct node* head)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter your new data: ");
	scanf("%d", &newnode->data);
	
	newnode->next = head;
	head = newnode;
	
	print(head);
	insertionLast(head);
}
void insertionMid(struct node *head)
{
	struct node *temp = head, *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	int i = 1, pos = 2;
	printf("Enter the value: ");
	scanf("%d", &newnode->data);
	
	while (i < pos)
	{
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next; // tail connect first
	temp->next = newnode;
	
	print(head);
}
void insertionLast(struct node *head)
{
	struct node *newnode, *temp;
	temp = head;
	newnode = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter your number: ");
	scanf("%d", &newnode->data);
	newnode->next = NULL;
	
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	
	print(head);
	insertionMid(head);
}
int main()
{
	struct node *head, *newnode, *temp;
	head = NULL;
	int choice = 1;
	while(choice)
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
		printf("Do you want to continue (0 or 1): ");
		scanf("%d", &choice);
	}
	print(head);
	insertionFirst(head);
	
	return 0;
}

