#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 998244353;

ll modPow(ll x, ll y, ll m){
    ll res = 1;
    x %= m;
    while(y > 0){
        if(y&1)
            res = (x*res)%m;
        x = (x*x)%m;
        y /=2;
    }
    return res%m;
}
ll nCrmod(ll n, ll r){
    if(r > n) return 0;
    if(n < 0 && r < 0) return 0;
    if(r == 0) return 1;
    vector<ll> fact(n+1);
    fact[0] = 1;
    for(ll i = 1; i <= n; i++)
        fact[i] = (fact[i-1]*i)%mod;
    return (fact[n] * modPow(fact[r], mod-2,mod)%mod *
                     modPow(fact[n-r],mod-2,mod)%mod)%mod;
}
void solve()
{
    ll n, ans = 1;
    set<ll> s;
    map<ll, ll> cnt;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        cnt[x]++;
        s.insert(x);
        if(i%3 == 2){
            if(s.size() == 3){
                ans *= 1;
            }
            else if(s.size() == 2){
                ans *= cnt[*s.begin()];
            }
            else ans *= 3;

            ans %= mod;
            cnt.clear();
            s.clear();
        }
    }
    n /= 3;
    cout << (nCrmod(n, n/2)%mod* ans%mod)%mod << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}