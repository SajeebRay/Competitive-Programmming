#include<iostream>
#include<cmath>
#define REP(i, n) for (int i = 0; i <= n; i++)
#define lli long long

using namespace std;

int pp[1000001];
int ar[1000001];
void sieve()
{
    lli maxN = 1000000, cnt = 0;
    REP(i, maxN)
        ar[i] = 1;
    ar[0] = ar[1] = 0;
    for (lli i = 2; i <= sqrt(maxN); i++){
        if (ar[i] == 1){
            for (lli j = i*i; j <= maxN; j += i){
                ar[j] = 0;
            }
        }
    }

    REP(i, maxN){
        if (ar[i] == 1)
            cnt++;
        if (ar[cnt] == 1)
            pp[i] = 1;
        else
            pp[i] = 0;
    }
    REP(i, maxN)
        pp[i] += pp[i-1];

}
int main()
{
    lli R, L;
    cin >> R >> L;
    sieve();
    int cnt = pp[R] - pp[L-1];
    cout << cnt << endl;

    return 0;
}
