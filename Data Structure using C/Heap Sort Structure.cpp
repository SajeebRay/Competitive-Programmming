#include<bits/stdc++.h>
using namespace std;

void maxHeapify(int arra[], int n, int i);
void heapSort(int arra[], int n);
void printing(int arra[], int limit);
int main()
{
    int arra[] = {2,0,55,7,44,36,22,15,35,32,10};
    int n = 10;

    heapSort(arra, n);
    printing(arra, n);
}
void printing(int arra[], int limit)
{
    for (int i = 0; i <= limit; i++)
    {
        printf("%d ", arra[i]);
    }
}
void heapSort(int arra[], int n)
{
    for (int i = (n-1)/2; i >= 0; i--) //change
    {   cout << i << " ";
        maxHeapify(arra, n, i);
    }
    for (int i = n; i >= 0; i--)
    {
        int temp = arra[0];
        arra[0] = arra[i];
        arra[i] = temp;
        maxHeapify(arra, i-1, 0);
    }
}
void maxHeapify(int arra[], int n, int i)
{
    int largest = i;
    int l = (i*2) + 1;
    int r = (i*2) + 2;

    while ((l <= n) && (arra[l] > arra[largest]))
    {
        largest = l;
    }
    while ((r <= n) && (arra[r] > arra[largest]))
    {
        largest = r;
    }

    if (largest != i)
    {
        int temp = arra[i];
        arra[i] = arra[largest];
        arra[largest] = temp;
        maxHeapify(arra, n,largest);
	}
}
