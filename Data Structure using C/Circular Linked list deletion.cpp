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
void deletetionBeg();
void deletionMid();
void deletionEnd();
int main()
{
	create();
	display();
	deletetionBeg();
	display();
	deletionMid();
	display();
	deletionEnd();
	display();
	
	
	return 0;
}
void deletionEnd()
{
	i = 1;
	t = head;
	length = 1;
	while (t->next != tail->next )
	{
		length++;
		t = t->next ;
	}
	temp = head;
	while (i < ((length) -1))
	{
		temp = temp->next;
		i++;
	}
	temp2 = temp->next ;
	temp->next = head;
	tail = temp;
	free(temp2);
}
void deletionMid()
{
	int pos;
	t = head;
	length = 1;
	while (t->next != tail->next )
	{
		length++;
		t = t->next ;
	}
	temp = head;
reEnter:
	printf("Enter position: ");
	scanf("%d", &pos);
	if ((pos > length) || (pos == 0))
	{
		printf("Re enter the position: ");
		goto reEnter;
	}
	else if (pos == 1)
	{
		deletetionBeg();
	}
	else
	{
		while (i < pos-1)
		{
			temp = temp->next;
			i++;
		}
		temp2 = temp->next ;
		temp->next = temp2->next;
		free(temp2);
	}
	
}
void deletetionBeg()
{
	temp = head;
	head = head->next ;
	tail->next = head;
	
	free(temp);
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
