#include<bits/stdc++.h>
#include<vector>

using namespace std;

int count(int a[], int m, int n){
    vector<vector<int> > table(m+1, vector<int>(n+1));
    for(int i = 0; i <= m; i++)
        for(int j = 0; j <= n; j++)
            table[i].push_back(0);
        //first row 0, because 0 ta coin thakle choice 0
    for(int i = 1; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(j == 0)
                table[i][j] = 1; // kono coin na nilei choice 1
            else if(j-a[i-1] >= 0)
                table[i][j] = table[i-1][j] + table[i][j-a[i-1]];
            else
                table[i][j] = table[i-1][j];
        }
    }
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++)
            cout << table[i][j] << " ";
        cout << endl;
    }
    return table[m][n];
}
// Driver Code
int main()
{
	int arr[] = {1, 2, 3};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = 5;
    cout << "Maximum possibly change is: " << count(arr, m, n) << endl;
	return 0;
}
