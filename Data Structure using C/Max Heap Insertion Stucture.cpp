//insert in max heap
#include<stdio.h>
void insertHeap(int ar[], int n, int value);
void print(int ar[], int l);
int main()
{
    int arra[] = {15,14,13,10,8};
    int length = 5;
    int insert = 20;

    insertHeap(arra, length, insert);

    print(arra, length);
}
void insertHeap(int ar[], int n, int value)
{

    ar[n] = value;
    int i = n;

    while (i >= 1)
    {
        int parent = (i-1)/2;
        if (ar[parent] < ar[i])
        {
            int temp = ar[i];
            ar[i] = ar[parent];
            ar[parent] = temp;
            i = parent;
        }
        else
        {
            return;
        }
    }
}
void print(int ar[], int l)
{
    for (int i = 0; i <= l; i++)
    {
        printf("%d ", ar[i]);
    }
}
