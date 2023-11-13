#include<iostream>
#define lli long long
#define mod 10000007
#define REP(i, n) for(lli i = 0; i < n; i++)

using namespace std;
/******************************this is hackerRank solution ******/
lli Ar[2][2];
lli I[2][2];
void mul(lli A[][2], lli B[][2])
{
    lli R[2][2];

    REP(i, 2) REP(j, 2){
        R[i][j] = 0;
        REP(k, 2){
            lli x = (B[i][k] * A[k][j]) % mod;
            R[i][j] = R[i][j] + x;
        }
    }
    REP(i, 2) REP(j, 2)  A[i][j] = R[i][j];
}
void power(lli Ar[][2], lli n)
{
    I[0][0] = I[1][1] = 1;
    I[1][0] = I[0][1] = Ar[0][0] = 0;
    Ar[1][1] = Ar[1][0] = Ar[0][1] = 1;
    while(n> 0){
        if (n % 2){
            mul(I, Ar);
            n--;
        }
        else {
            n /= 2;
            mul(Ar, Ar);
        }
    }
    REP(i, 2) REP(j, 2) Ar[i][j] = I[i][j];
}
void fibonacci(lli Ar[][2], lli n, lli t1, lli t2)
{
    cout << n << "th elements is: " <<
        ((Ar[0][0] * t1 + Ar[1][0] * t2) % mod)<< endl;
}
/******************************this is hackerRank solution ******/
int main()
{
    int t;
    lli m, n, N;
    cin >> t;
    while (t--){
        cin >> m >> n >> N;
        if (N == 0)
            cout << N << "th elements is: " << m << endl;
        else if (N == 1)
            cout << N << "th elements is: " << n << endl;
        else {
            //n -= 1;
            power(Ar, N);
            fibonacci(Ar, N, m, n);
        }
    }
    return 0;
}
