#include<stdio.h>
#define N 5
int arra[N];
int front = -1;
int rear = -1;
void enqueue(int x);
void dequeue();
void display();
int   main()
{
    enqueue(20);
    enqueue(21);
    enqueue(22);
    enqueue(23);
    enqueue(24);
    display();
    dequeue();
    dequeue();
    dequeue();
    display();
    enqueue(20);
    enqueue(21);
    enqueue(22);
    display();

    return 0;
}
void display()
{
    int i = front;
    while (i != rear)
    {
        printf("%d ", arra[i]);
        i = (i+1) % N;
    }
    printf("%d ", arra[i]);
}
void dequeue()
{
    if (front == -1 || rear == -1)
        printf("Underflow condition.\n");
    else if (rear == front)
        rear = front = -1;
    else
    {
        front = (front+1) % N;
    }
}
void enqueue(int x)
{
    if ((rear+1)%N == front)
    {
        printf("Overflow condition.\n");
    }
    else if ((rear == -1) || (front == -1))
    {
        rear = front = 0;
        arra[front] = x;
    }
    else
    {
        rear = (rear+1) % N;
        arra[rear] = x;
    }
}
