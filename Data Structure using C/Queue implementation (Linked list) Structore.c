#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front, *rear, *temp, *newnode;

void enqueue(int x);
void dequeue();
void display();
int main()
{
    front = NULL;
    enqueue(20);
    enqueue(21);
    enqueue(22);
    enqueue(23);
    enqueue(24);
    display();
    dequeue();
    dequeue();
    dequeue();
    enqueue(24);
    enqueue(24);
    display();

    return 0;
}
void display()
{
    temp = front;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }while (temp->next != 0);
    printf("%d ", temp->data);
}
void dequeue()
{
    if (front == 0)
        printf("Underflow condition\n");
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}
void enqueue(int x)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if (front == 0)
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
