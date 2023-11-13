#include<iostream>
#include<vector>
using namespace std;

int minCost(vector<int> *mat, int m, int n){
    /*vector<int> table[m]; //one way
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            table[i].push_back(0);
        }
    }*/
    vector<vector<int> > table(m, vector<int> (n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            table[i].push_back(0);
        }
    }
    table[0][0] = mat[0][0];
    for (int i = 1; i < m; i++)
        table[i][0] = mat[i][0] + table[i-1][0];
    for (int j = 1; j < n; j++)
        table[0][j] = mat[0][j] + table[0][j-1];
    for (int i = 1; i < m; i++){
        for (int j = 1; j < n; j++){
            table[i][j] = mat[i][j] + min(table[i][j-1], min(table[i-1][j-1], table[i-1][j]));
        }
    }
    cout << "Vector is: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Minimum cost table is: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return table[m-1][n-1];
}
int main()
{
    vector<int> mat[] = {{1,2,3}, {4,8,2}, {1,5,3}};
    int x = minCost(mat, 3, 3);
    cout << "Minimum cost: " << x << endl;
    return 0;
}
