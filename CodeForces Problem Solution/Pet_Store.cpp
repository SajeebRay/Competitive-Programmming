#include<iostream>
using namespace std;
int LCS(char *a, char *b, int m, int n){
    int dp[m+1][n+1];
    for (int i = 0; i < m+1; i++)
        for(int j = 0; j < n+1; j++){
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = min(dp[i][j-1],
                                min(dp[i-1][j-1],
                                dp[i-1][j]));
        }
    return dp[m][n];
}
int main()
{
    char s1[] = "ab";
    char s2[] = "ba";
    int x = 7, y = 6;
    cout << "LCS is: " << LCS(s1, s2, x, y) << " is the length." << endl;
    return 0;
}
