#include<iostream>
using namespace std;

int binoCoffi(int n, int k){
    int C[k+1];
    for (int i = 1; i <= k; i++)
        C[i] = 0;
    C[0] = 1;

    for (int i = 1; i <= n; i++)
        for(int j = min(i, k); j > 0; j--)
            C[j] = C[j-1] + C[j];
    return C[k];
}
int main()
{
    int n = 5, k = 3;
    cout << "Coefficient value is: " << binoCoffi(n, k) << endl;
    return 0;
}
