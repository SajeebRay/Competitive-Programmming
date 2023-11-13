#include<iostream>
#include<string>

using namespace std;

void process(int ar[], int ar1[], int ar2[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
        ar1[i] = (ar[i] - 1) % x;
    for (int i = 0; i < n; i++)
        ar2[i] = (ar[i] - 1) % y;
}
int main()
{
    int m, n;
    cin >> m >> n;
    string *str1, *str2;
    str1 = new string[m];
    str2 = new string[n];
    for (int i = 0; i < m; i++)
        cin >> str1[i];
    for (int j = 0; j < n; j++)
        cin >> str2[j];
    int o;
    cin >> o;
    int *ar;
    ar = new int[o];
    for (int k = 0; k < o; k++)
        cin >> ar[k];
    // input complete
    int *ar1, *ar2;
    ar1 = new int[o];
    ar2 = new int[o];
    process(ar,  ar1, ar2, o, m, n);
    //array processing complete


    for (int i = 0; i < o; i++)
        cout << str1[ar1[i]] + str2[ar2[i]] << endl;

    return 0;
}
