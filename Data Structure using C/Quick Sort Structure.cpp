 //Quick sort
#include<stdio.h>

int partition(int arr[], int low, int high);
void quick_sort(int arr[], int low, int high);
void printing(int arr[], int size);

int main()
{
    int arra[10000];
    int n;
    printf("Enter the size ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    int low = 0, high = n-1;

    quick_sort(arra, low, high);
    printing(arra, n);

    return 0;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int start = low;
    int end = high;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            ++start;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    int temp = arr[end];
    arr[end] = arr[low];
    arr[low] = temp;
    return end;
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, (pi -1));
        quick_sort(arr, (pi+1), high);
    }
}

void printing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
