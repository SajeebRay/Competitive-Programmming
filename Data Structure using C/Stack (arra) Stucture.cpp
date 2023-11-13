#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void display();
void push();
void pop();
int main()
{
	int choice;
sajeeb:
	printf("1 for pop\n2 for push\n3 for display\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice)
		{
			default:
				{
					printf("Enter correct: ");
					goto sajeeb;
					break;
				}
			case 1:
				{
					pop();
					break;
				}
			case 2:
				{
					push();
					break;
				}
			case 3:
				{
					display();
					break;
				}
		}
	goto sajeeb;
}
void push()
{
	int X;
	printf("Enter data: ");
	scanf("%d", &X);
	
	if (top == (N-1))
	{
		printf("Overflow\n");
	}
	else
	{
		top++;
		stack[top] = X;
	}
}
void pop()
{
	int item;
	if (top == -1)
	{
		printf("Underflow\n");
	}
	else
	{
		item = stack[top];
		top--;
		printf("%d", item);
	}
}
void display()
{
	int i;
	
	for (i = top; i >= 0; i--)
	{
		printf("%d ", stack[i]);
	}
}
