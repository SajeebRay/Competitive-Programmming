#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head, *tail, *newnode, *temp, *t, *temp2;

void create();
void display();
void insertionBeg();
void insertionMid();
void insertionEnd();
int main()
{
	create();
	display();
	insertionBeg();
	display();
	insertionMid();
	display();
	insertionEnd();
	display();
	
	return 0;
}
void insertionBeg()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data);
	newnode->prev = tail;
	newnode->next = head;
	head = newnode;
	tail->next = newnode;
}
void insertionMid()
{
	int i = 1, pos, l = 1;
	t = head;
	while (t->next != tail->next )
	{
		l++;
		t = t->next ;
	}
	temp = head;
reEnter:
	printf("Enter positon: ");
	scanf("%d", &pos);
	if ((pos > l) || (pos == 0))
	{
		printf("\nInvalid\n");
		goto reEnter;
	}
	else if (pos == 1)
	{
		insertionBeg();
	}
	else
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data );
		while (i < pos-1)
		{
			temp = temp->next;
			i++;
		}
		temp2 = temp->next;
		newnode->next = temp->next ;
		newnode->prev = temp;
		temp2->prev = newnode;
		temp->next = newnode;
	}
}
void insertionEnd()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data);
	newnode->prev = tail;
	newnode->next = head;
	tail->next = newnode;
	tail = newnode;
	head->prev = tail;	
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
