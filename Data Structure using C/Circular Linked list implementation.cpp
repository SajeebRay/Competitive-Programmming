#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head, *newnode, *temp, *temp2;
void createNew();
void display();
int main()
{
	createNew();
	display();
	
	return 0;
}
void display()
{
	temp2 = head;
	while (temp2->next != temp->next )
	{
		printf("%d ", temp2->data );
		temp2 = temp2->next ;
	}
	printf("%d", temp2->data );
}
void createNew()
{
	head = NULL;
	int choice = 1;
	while (choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data );
		newnode->next = NULL;
		
		if (head ==NULL)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Do you want to continue: ");
		scanf("%d", &choice);
	}
	newnode->next = head;
}
