#include<bits/stdc++.h>

#define pb push_back
#define lli long long
#define mod 10000007
#define endl '\n'
#define REP(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator
#define pi 3.1415926535
#define faster ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define file_i_o freopen("Input.txt", "r", stdin), freopen("Output.txt", "w", stdout);

using namespace std;
using ui = uint64_t;
int row, col;
vector<int> matrix[100];
vector<int> I[100];
void print();
void mul(vector<int> *A, vector<int> *B){
    vector<vector<int> > res(100, vector<int> (100, 0));
    REP(i, row) REP(j, col) REP(k, row)
        res[i][j] += (A[i][k] * B[k][j]);
    REP(i, row) REP(j, col)
        A[i][j] = res[i][j];
}
void exponen(vector<int> *mat, int p){
    REP(i, row) REP(j, col){
        if (i == j)
            I[i].pb(1);
        else
            I[i].pb(0);
    }
    while(p > 0){
        if (p & 1){
            mul(I, mat);
            p--;
        }
        else {
            mul(mat, mat);
            p /= 2;
        }
    }
    print();
}
void solve(){
    int x, power;
    cin >> row >> col >> power;
    REP(i, row) REP(j, col){
        cin >> x;
        matrix[i].pb(x);
    }
    exponen(matrix, power);

    /*for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }*/

}
int main()
{
    faster;
    file_i_o;
    int t;
    cin >> t;
    while(t--){

    solve();

    }
    return 0;
}
void print(){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
