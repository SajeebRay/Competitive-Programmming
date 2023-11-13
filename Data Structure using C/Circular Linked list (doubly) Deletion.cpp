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
void deletionBeg();
void deletionMid();
void deletionEnd();
int main()
{
	create();
	display();
	deletionBeg();
	display();
	deletionMid();
	display();
	deletionEnd();
	display();
	
	return 0;
}
void deletionBeg()
{
	temp = head;
	head = head->next ;
	head->prev = tail;
	tail->next = head;
	free(temp);
}
void deletionMid()
{
	t = head;
	int l = 1, i = 1, pos;
	while (t->next != tail->next )
	{
		l++;
		t = t->next ;
	}
	temp = head;
reEnter:
	printf("Enter position: ");
	scanf("%d", &pos);
	if ((pos > l) || (pos == 0))
	{
		printf("\nInvalid\n");
		goto reEnter;
	}
	else if (pos == 1)
		deletionBeg();
	else
	{
		while (i < pos-1)
		{
			temp = temp->next;
			i++;
		}
		temp2 = temp->next ;
		temp->next = temp2->next ;
	}
}
void deletionEnd()
{
	temp = tail;
	tail = tail->prev ;
	tail->next = head;
	head->prev = tail;
	free(temp);
}
void display()
{
	temp = head;
	while (temp->next != tail->next )
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data );
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
