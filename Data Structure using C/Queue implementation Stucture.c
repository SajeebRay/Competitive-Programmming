#include<stdio.h>
#define N 5
int front = -1;
int rear = -1;
int stack[N];

void enqueue(int x);
void dequeue();
void display();
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    dequeue();
    display();

    return 0;
}
void display()
{
    if (front == -1)
        printf("Empty\n");
    else
    {printf("%d %d", front, rear);
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}
void enqueue(int x)
{
    if (rear == (N-1))
    {
        printf("Overflow condition\n");
    }
    else if (front == -1)
    {
        front = rear = 0;
        stack[rear] = x;
    }
    else
    {
        rear++;
        stack[rear] = x;
    }
}
void dequeue()
{
    if ( front == -1)
    {
        printf("Underflow condition\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
