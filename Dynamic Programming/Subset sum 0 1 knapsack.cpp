#include<bits/stdc++.h>
using namespace std;
bool subsetSum(int arra[], int sum, int n){
     bool dp[n+1][sum+1];
     for(int i = 0; i <=n; i++){
        for(int j = 0; j <= sum; j++){
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
            else if(arra[i-1] <= j)
                dp[i][j] = (dp[i-1][j-arra[i-1]] || //included in the knapsack
                            dp[i-1][j]);  //not included in the knapsack
            else
                dp[i][j] = dp[i-1][j];
        }
     }
     return dp[n][sum];
}
int main()
{
    int arra[] = {2, 5, 7, 9, 11};
    int len = sizeof(arra)/sizeof(arra[0]);
    int sum = 12;
    cout << subsetSum(arra, sum, len) << endl;
    return 0;
}
