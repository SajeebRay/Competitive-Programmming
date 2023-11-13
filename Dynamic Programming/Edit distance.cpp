#include<iostream>
#include<algorithm>
using namespace std;

int dis(char a[], char b[], int m, int n){
    int distance[m+1][n+1];
    for (int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if (i == 0)
                distance[i][j] = j;
            else if (j == 0)
                distance[i][j] = i;
            else if (a[i-1] == b[j-1])
                distance[i][j] = distance[i-1][j-1];
            else{
                int x = min(distance[i-1][j-1], distance[i-1][j]);
                distance[i][j] = 1 + min(distance[i][j-1],x);
            }
        }
    }
    return distance[m][n];
}
int main()
{
    char s1[] = "sunday";
    char s2[] = "saturday";
    int m = 6, n = 8;

    cout << "Operation required: " << dis(s1,s2,m,n) << endl;
    return 0;
}
