#include<iostream>
#define REP(i, n) for(int i = 1; i <= n; i++)

using namespace std;

int pre[100005],
    suff[100005],
    Ar[100001];

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}
int main()
{
    int t, n, q, L, R;
    cin >> t;
    while(t--){
        cin >> n >> q;
        REP(i, n) cin >> Ar[i];
        pre[0] = suff[n+1] = 0;
        REP(i, n) pre[i] = gcd(pre[i-1], Ar[i]);
        for (int i = n; i >= 1; i--)
            suff[i] = gcd(Ar[i], suff[i+1]);
        while(q--){
            cin >> L >> R;
            cout << gcd(pre[L-1], suff[R+1]) << endl;
        }
    }
    return 0;
}
