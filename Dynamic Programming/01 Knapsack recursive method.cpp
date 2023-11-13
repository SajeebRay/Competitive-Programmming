#include<bits/stdc++.h>
using namespace std;
static int dp[102][10002];
int recursiveDP(int wet[], int p[], int w, int n){
    if(w == 0 || n ==0)
        return 0;
    if(dp[n][w] != -1)
        return dp[n][w];
    else if(wet[n-1] <= w)
        return dp[n][w] = max(p[n-1] + recursiveDP(wet, p, w-wet[n-1], n-1),
                              recursiveDP(wet, p, w, n-1));
    else
        return dp[n][w] = recursiveDP(wet, p, w, n-1);
}
int main()
{
    int n = 4, tw = 8;
    memset(dp, -1, sizeof(dp));
    int p[] = {1, 2, 9, 6};
    int w[] = {2, 3, 4, 5};
    int x = recursiveDP(w, p, tw, n);
    cout << x << endl;
    return 0;
}
