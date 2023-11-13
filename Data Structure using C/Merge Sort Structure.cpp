 //Merge sort
#include<stdio.h>

void mergeSort(int arra[], int low, int high);
void merge(int arra[], int low, int mid, int high);
void print(int arra[], int limit);

int main()
{
    int ar[] = {5,2,5,8,6,4,7,1,9,3};
    int low = 0, high = 9;

    mergeSort(ar, low, high);
    print(ar, high);
}
void mergeSort(int arra[], int low, int high)
{
    if (low < high)
    {
        int mid = (low+high) / 2;

        mergeSort(arra, low, mid);
        mergeSort(arra, mid+1, high);
        merge(arra, low, mid, high);
    }
}
void merge(int arra[], int low, int mid, int high)
{
    int b[1000];
    int i = low;
    int j = mid+1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arra[i] <= arra[j])
        {
            b[k] = arra[i];
            i++;
        }
        else
        {
            b[k] = arra[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= high)
        {
            b[k] = arra[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arra[i];
            i++;
            k++;
        }
    }

    for (k = low; k <= high; k++)
    {
        arra[k] = b[k];
    }
}
void print(int arra[], int limit)
{
    for (int i = 0; i <= limit; i++)
    {
        printf("%d ", arra[i]);
    }
}
