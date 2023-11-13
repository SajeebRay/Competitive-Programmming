#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
	struct node *previous;
};
struct node *head, *newnode, *temp, *tail;

void createListTail();
void display();
void insertBeg();
void insertpos();
void insertEnd();
int main()
{
	createListTail();
	display();
	insertBeg();
	display();
	insertEnd();
	display();
	insertpos();
	display();
	return 0;
}
void display()
{
	temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data );
		temp = temp->next;
	}
}
void createListTail()
{
	head = NULL;
	int choice = 1;
	while (choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		newnode->previous = NULL;
		
		if (head == NULL)
		{
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			newnode->previous = tail;
			tail = newnode;
		}
		printf("Do you want to continue: ");
		scanf("%d", &choice);
	}
}
void insertBeg()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data );
	newnode->next = NULL;
	newnode->previous = NULL;
	
	head->previous = newnode;
	newnode->next = head;
	head = newnode;
}
void insertEnd()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data );
	newnode->next = NULL;
	newnode->previous = NULL;
	
	tail->next = newnode;
	newnode->previous = tail;
	tail = newnode;
}
void insertpos()
{
	int len = 0;
	int pos;
	temp = head;
	while (temp != NULL)
	{
		len++;
		temp = temp->next ;
	}
	printf("\nThere are %d node\n", len);
sajeeb:	
	printf("Enter position: ");
	scanf("%d", &pos);
	if ((pos == 0) || (pos > len))
	{
		printf("Invalid position\n");
		goto sajeeb;
	}
	else if (pos == 1)
		insertBeg();
	else
	{
		temp = head;
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data );
		newnode->next = NULL;
		newnode->previous = NULL;
		int i = 1;
		while(i < pos-1)
		{
			temp = temp->next;
			i++;
		}
		newnode->previous = temp;
		newnode->next = temp->next ;
		temp->next->previous = newnode;
		temp->next = newnode;
	}
}
