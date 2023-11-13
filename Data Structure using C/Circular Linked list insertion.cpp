#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head, *temp, *newnode, *temp2, *mid, *temp3;
void display();
void create();
void insertionBeg();
void insertionMid();
void insertionEnd();

int main()
{
	create();
	display();
	insertionBeg();
	display();
	insertionEnd();
	display();
	insertionMid();
	display();
	
	return 0;
}
void insertionEnd()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter dada: ");
	scanf("%d", &newnode->data );
	temp3 = temp;
	temp3->next = newnode;
	newnode->next = head;
	temp = newnode;
}
void insertionMid()
{
	temp2 = head;
	int pos, i = 1, c = 1;
	while (temp2->next != temp->next )
	{
		c++;
		temp2 = temp2->next ;
	}
	mid = head;
reEnter:
	printf("Enter position: ");
	scanf("%d", &pos);
	
	if ((pos == 0) || (pos > c))
	{
		printf("Invalid\n");
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
			mid = mid->next ;
			i++;
		}
		newnode->next = mid->next ;
		mid->next = newnode;
	}
}
void insertionBeg()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data );
	newnode->next = head;
	head = newnode;
	temp->next = newnode;
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
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		temp->next = head;
		printf("Do you want to continue: ");
		scanf("%d", &choice);
	}
}
void display()
{
	temp2 = head;
	while (temp2->next != temp->next )
	{
		printf("%d ", temp2->data );
		temp2 = temp2->next;
	}
	printf("%d\n", temp2->data );
}
