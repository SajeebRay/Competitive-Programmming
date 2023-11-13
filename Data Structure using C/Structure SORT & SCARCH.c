/* //binary scarch
#include<stdio.h>

int scarch_array(int ara[], int n, int find);
int main()
{
    int n;
    scanf("%d", &n);

    int arra[10000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    int scarch = 10;

    int possition = scarch_array(arra, n, scarch);

    if (possition == -1)
    {
        printf("There is no %d", scarch);
    }
    else
        printf("10 is %dth possition number\n", possition);


    return 0;
}

int scarch_array(int ara[], int n, int find)
{
    int i;
    int mid, left = 0, right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (ara[mid] == find)
        {
            return mid;
        }
        else if (ara[mid] < find)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
*/
/** //Bubble sort
 #include<stdio.h>
 int main()
 {
     int arra[100];
     int n, i;
     scanf("%d", &n);

     for (i = 0; i < n; i++)
     {
         scanf("%d", &arra[i]);
     }

     for (i = 1; i < n; i++)
     {
        int flag = 0;
         for (int j = 0; j < n-i; j++)
         {
             if (arra[j] > arra[j+1])
             {
                 int temp = arra[j];
                 arra[j] = arra[j+1];
                 arra[j+1] = temp;
                 flag = 1;
             }
         }
         if (flag == 0)
            break;
     }

     for (i = 0; i < n; i++)
     {
         printf("%d ", arra[i]);
     }
 }
*/
/** //Selection sort
 #include<stdio.h>
 int main()
 {
     int arra[100];
     int n, i, index;
     scanf("%d", &n);

     for (i = 0; i < n; i++)
     {
         scanf("%d", &arra[i]);
     }

     for (i = 0; i < n-1; i++)
     {
         index = i;
         for (int j = i+1; j < n; j++)
         {
             if (arra[index] > arra[j])
                index = j;
         }
         if (index != i)
         {
             int temp = arra[i];
             arra[i] = arra[index];
             arra[index] = temp;
         }
     }

     for (i = 0; i < n; i++)
     {
         printf("%d ", arra[i]);
     }
 }
*/
/** //Quick sort
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
*/
/** //Merge sort
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
*/
/** //insert in max heap
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
        int parent = i/2;
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
*/
/** //Heap sort
#include<stdio.h>

void maxHeapify(int arra[], int n, int i);
void heapSort(int arra[], int n);
void printing(int arra[], int limit);
int main()
{
    int arra[] = {2,55,7,44,36,22,15,35,32,10};
    int n = 9;

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
    {
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
    int l = (i*2);
    int r = (i*2) + 1;

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
*/
/** //Tree-String permutation
#include<stdio.h>
#include<string.h>
void permutation(char str[], int k);
void print(char str[], int k);
int main()
{
    char str[10] = "abcdefg";
    permutation(str, 0);
}
void permutation(char str[], int k)
{
    static int a[10] = {0};
    static char p[10];
    int i;

    if (str[k] == '\0')
    {
        static int l = 1;
        print(p, k);
        printf("   %d\n", l++);
    }

    else
    {
        for(i = 0; (str[i] != '\0'); i++)
        {
            if (a[i] == 0)
            {
            p[k] = str[i];
            a[i] = 1;

            permutation(str, k+1);
            a[i] = 0;
            }
        }
    }
}
void print(char str[], int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%c ", str[i]);
    }
}
*/

