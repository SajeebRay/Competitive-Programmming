#include<iostream>
using namespace std;

/** Divide an conquer method **/
void prepare_to_merge_sort(int a[], int n);
void merge(int arra[], int low, int mid, int high);
void merge_sort(int arra[], int low, int high);
void print(int arra[], int n);
/*** this code merge two sorted arra

void merging(int ara[], int ara2[], int m, int n){
    int arra[m+n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n){
        if(ara[i] <= ara2[j])
            arra[k++] = ara[i++];
        else
            arra[k++] = ara2[j++];
    }
    while(i < m)
        arra[k++] = ara[i++];
    while(j < n)
        arra[k++] = ara2[j++];
    cout << "Now the sorted array: ";
    for(int x : arra)
        cout << x << " ";
    cout << endl;
}
*/
int main()
{
    cout << "This is array: ";
    int a[] = {62,5,66,47,45,73,98,4,23,13};
    int m = 10;
    for (int x : a)
        cout << x << " ";
    cout << endl;
    prepare_to_merge_sort(a, m);

    /*cout << "This is first array: ";
    int a[] = {2,5,6,7,45,73,98,234,236,1235};
    for (int x : a)
        cout << x << " ";
    cout << endl;
    int m = 11, n = 5;
    cout << "This is second array: ";
    int b[] = {43,44,46,47,49};
    for (int x : b)
        cout << x << " ";
    cout << endl;
    merging(a,b,m,n);*/

    return 0;
}
void prepare_to_merge_sort(int a[], int n){
    int low = 0;
    int high = n-1;
    merge_sort(a,low,high);
    print(a, n);
}
void print(int arra[], int n){
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arra[i] << " ";
    cout << endl << "Thank You" << endl;
}
void merge_sort(int arra[], int low, int high){
    int mid;
    if(low < high){
        mid = (low+high)/2;
        merge_sort(arra, low, mid);
        merge_sort(arra, mid+1, high);
        merge(arra, low, mid, high);
    }
}
void merge(int arra[], int low, int mid, int high){
    int a[10000];
    int i, j, k;
    i = k = low;
    j = mid+1;

    while(i <= mid && j <= high){
        if(arra[i] < arra[j])
            a[k++] = arra[i++];
        else
            a[k++] = arra[j++];
    }
    if(i <= mid)
        while(i <= mid)
            a[k++] = arra[i++];
    else
        while(j <= high)
            a[k++] = arra[j++];
    for(int k = low; k <= high; k++)
        arra[k] = a[k];
}
