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
#define N 101

using namespace std;
using ui = uint64_t;

lli Ar[N][N];
lli I[N][N];
void print(lli A[][N], lli dim);
void mul(lli A[][N], lli B[][N], lli dim);
void power(lli Ar[][N], lli dim, lli n);
int main()
{
    file_i_o;

    lli t, n, dim;
    cin >> t;
    while (t--){
        cin >> dim >> n;
        REP(i, dim) REP(j, dim) cin >> Ar[i][j];

        power(Ar, dim, n);
        print(Ar, dim);
    }
    return 0;
}
void power(lli Ar[][N], lli dim, lli n)
{
    REP(i, dim) REP(j, dim){  //Because in while loop
        if (i == j)           //We use multiplication one more time
            I[i][j] = 1;      //And array of I*Array of A is equal to array of A
        else
            I[i][j] = 0;
    }
    while (n){
        if (n % 2){
            mul(I, Ar, dim);
            n--;
        }
        else {

            n /= 2;
            mul(Ar, Ar, dim);
        }
    }
    REP(i, dim) REP(j, dim) Ar[i][j] = I[i][j];
}
void mul(lli A[][N], lli B[][N], lli dim)
{
    lli res[dim + 1][dim + 1];
    REP(i, dim) REP(j, dim){
        res[i][j] = 0;
        REP(k, dim) res[i][j] += B[i][k] * A[k][j];
    }
    REP(i, dim) REP(j, dim) A[i][j] = res[i][j];
}
void print(lli Ar[][N], lli dim)
{
    for (lli i = 0; i < dim; i++) {
            for (lli j = 0; j < dim; j++) cout << Ar[i][j] << " ";
        cout << endl;
    }
}

