#include<bits/stdc++.h>
using namespace std;
vector<int> arra = {2,0, 55,7,44,36,22,15,35,32,10};

void hepify(int n, int i){
    int largest = i;
    int left = (i*2) + 1;
    int right = (i*2) + 2;
    while((left <= n) && (arra[largest] < arra[left])){
        largest = left;
    }
    while((right <= n) && (arra[largest] < arra[right])){
        largest = right;
    }
    if(largest != i){
        int temp = arra[i];
        arra[i] = arra[largest];
        arra[largest] = temp;
        hepify(n, largest);
    }
}
void heapSort(int n){
    int i;
    for(int i = (n-1)/2; i >= 0; i--){cout << i << " ";
        hepify(n,i);
    }
    for(int i = n; i >= 0; i--){
        int temp = arra[0];
        arra[0] = arra[i];
        arra[i] = temp;
        hepify(i-1, 0);
    }
}
void print(int n){
    cout << "The sorted array using heapSort." << endl;
    for(int i = 0; i < n; i++)
        cout << arra[i] << " ";
    cout << endl;
}
int main()
{
    int n = arra.size();
    heapSort(n-1);
    print(n);

    return 0;
}
