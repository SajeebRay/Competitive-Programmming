#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head, *tail, *newnode, *temp;
void display();
void createNew();
void deletionBeg();
void deletionMid();
void deletionEnd();
int main()
{
	createNew();
	display();
	deletionBeg();
	display();
	deletionEnd();
	display();
	deletionMid();
	display();
	
	return 0;
}
void createNew()
{
	head = NULL;
	int choice = 1;
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
		printf("Do you want to continue: ");
		scanf("%d", &choice);	
	}
}
void display()
{
	temp = head;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void deletionBeg()
{
	temp = head;

	head = head->next;
	head->prev = NULL;
	free(temp);
}
void deletionMid()
{
	struct node *temp2, *t;
	int c;
	//list treverse
	temp = t = head;
	while(t != NULL)
	{
		c++;
		t = t->next;
	}
	//deletion
	int pos, i = 1;
reEnter:
	printf("Enter position: ");
	scanf("%d", &pos);
	if ((pos == 0) || (pos > c))
	{
		printf("Invalid position\n");
		goto reEnter;
	}
	else if(pos == 1)
	{
		deletionBeg();	
	}
	else
	{
		while (i < pos-1)
		{
			temp = temp->next ;
			i++;
		}
		temp2 = temp->next->next ;
		temp2->prev = temp;
		temp->next = temp2;
	}
}
void deletionEnd()
{
	temp = tail;
	temp->prev->next = NULL;
	tail = temp->prev ;
	free(temp);
}
