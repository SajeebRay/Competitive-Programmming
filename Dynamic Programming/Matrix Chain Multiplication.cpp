#include<bits/stdc++.h>
using namespace std;
int table[1001][1001];
int solve(int ar[], int i, int j){
    if(i >= j)
        return 0;
    if(table[i][j] != -1)
        return table[i][j];
    int mn = INT_MAX;
    for(int k = i; k < j; k++){
        int temp = solve(ar, i, k) + solve(ar, k+1, j)
                    +ar[i-1]*ar[k]*ar[j];

        if(mn > temp)
            mn = temp;
    }
    table[i][j] = mn;
    return table[i][j];
}
int main()
{
    memset(table, -1, sizeof(table));
    int arr[] = {10,15,5,20,25};
    cout << "Minimum cost required: " << solve(arr, 1, 4) << endl;
    return 0;
}
