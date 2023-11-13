#include<bits/stdc++.h>
using namespace std;

int static table[11][51];
int solve(int e, int f){
    if(table[e][f] != -1)
        return table[e][f];
    if(f == 0 || f == 1)
        return f;
    if(e == 1)
        return f;

    int mn = INT_MAX;
    for(int k = 1; k < f; k++){
        /***For optimization issue... I can change this line
        int temp =1 + max(solve(e-1, k-1), solve(e, f-k));*/
        int low, high;
        if(table[e-1][k-1] != -1)
            low = table[e-1][k-1];
        else{
            low = solve(e-1, k-1);
            table[e-1][k-1] = low;
        }
        if(table[e][f-k] != -1)
            high = table[e][f-k];
        else {
            high = solve(e, f-k);
            table[e][f-k] = high;
        }
        int temp = 1 + max(low, high);
        mn = min(mn, temp);
    }
    table[e][f] = mn;
    return table[e][f];
}
int main()
{
    int e = 2, f = 36;
    memset(table, -1, sizeof(table));
    cout << "Minimum step required: " << solve(e,f) << endl;

    return 0;
}

