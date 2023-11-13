#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	int area;
	struct node *next;
};
void printf(struct node  *head)
{
	while (head != NULL)
	{
		printf("%d", head->data);
		printf(" %d ", head->area);
		head = head->next;
	}
}
int main()
{
	struct node *head = 0;
	struct node *second = 0, *third = 0;
	
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data = 1;
	head->area = 13;
	head->next = second;
	
	second->data = 2;
	second->area = 23;
	second->next = third;
	
	third->data = 3;
	third->area = 33;
	third->next = NULL;
	
	printf(head);


}

