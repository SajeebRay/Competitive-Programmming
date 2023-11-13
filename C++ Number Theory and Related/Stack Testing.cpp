/**
*************************
**Researched by Sajeeb Kumar Ray
**Pabna University of Science Technology
**Research about Pointer
**************************
**Research motivation coming for implementing Matrix Exponential
**Thank you so much for watching this
**************************
**/

#include<iostream>
#include<stack>

using namespace std;

void mul(int a[10], int n)
{
    for(int i = 0; i  < 10; i++) a[i] += n;
}

int main()
{
    int arr[10];
    int n;
    while (1){
        cout << "Enter n: ";
        cin >> n;
        for(int i = 0; i  < 10; i++) arr[i] = 2;
        for(int i = 0; i  < 3; i++) mul(arr, n);
        for(int i = 0; i  < 10; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

#include<iostream>
#include<stack>

using namespace std;

void mul(int *a, int n)
{
        *a += n;
}

int main()
{
    int ar;
    int n;
    while (1){
        cout << "Enter n: ";
        cin >> n;
        ar = 2;
        for(int i = 0; i  < 3; i++) mul(&ar, n);
        cout << ar << " ";
        cout << endl;
    }
    return 0;
}

