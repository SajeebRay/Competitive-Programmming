#include<stdio.h>
#include<stdlib.h>

	struct node
	{
		int data;
		struct node *next;
	};

print(struct node *temp)
{
	while (temp != NULL)
	{
		printf("%d ", temp->data );
		temp = temp->next;
	}	
}	
int main()
{
	
	struct node *head, *newnode, *temp;
	head = 0; 
	int choise = 1;
	
	while (choise)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		
		printf("Enter Data: ");
		scanf("%d", &newnode->data );
		newnode->next = 0;
		
		if (head == NULL)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		
		printf("Do you want to continue(0 or 1): ");
		scanf("%d", &choise);
	}
	
	print(head);
	
}
