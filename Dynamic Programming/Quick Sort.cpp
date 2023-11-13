#include<bits/stdc++.h>
using namespace std;

vector<int> arra = {15,5,55,7,44,36,22,35,32,10};
int partition(int left, int right){
    int pivot = arra[left];
    int start = left;
    int end = right;
    while(start < end){
        while(arra[start] <= pivot)
            start++;
        while(arra[end] > pivot)
            end--;
        if(start < end){
            int temp = arra[start];
            arra[start] = arra[end];
            arra[end] = temp;
        }
    }
    int temp = arra[left];
    arra[left] = arra[end];
    arra[end] = temp;
    return end;
}
void quickSort(int left, int right){
    if(left < right){
        int mid = partition(left, right);

        quickSort(left, mid-1);
        quickSort(mid+1, right);
    }
}
void print(int n){
    cout << "The sorted array using quickSort." << endl;
    for(int i = 0; i < n; i++)
        cout << arra[i] << " ";
    cout << endl;
}
int main()
{
    int n = arra.size();
    quickSort(0, n-1);
    print(n);

    return 0;
}
