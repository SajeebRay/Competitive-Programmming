#include<iostream>
using namespace std;
///Question: how to display this subsequence?
int LIS(int arra[], int n){
    int mElement;
    int lis[n];
    for(int i = 0; i < n; i++)
        lis[i] = 1;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if(arra[i] > arra[j] && lis[i] < lis[j]+1){
                lis[i] = lis[j] + 1;
                mElement = lis[i];
            }
        }
    }
    for (int x : lis)
        cout << x << " ";
        cout << endl;
    return mElement;
}
int main()
{
    int a[] ={15,1,25,30,5,10,20,45,50,60};
    for (int x : a)
        cout << x << " ";
        cout << endl;
    cout << LIS(a,10) << endl;
    return 0;
}
