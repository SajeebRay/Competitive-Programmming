#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
const ll mod = 998244353;

vector<ll> fact(51);
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
    return (fact[n] * modPow(fact[r], mod-2,mod)%mod *
                     modPow(fact[n-r],mod-2,mod)%mod)%mod;
}
void factor(){
    fact[0] = 1;
    for(ll i = 1; i <= 50; i++)
        fact[i] = (fact[i-1]*i);
}

void solve()
{
  string s, t;
  cin >> s >> t;
  ll lens = s.length();
  ll lent = t.length();
  ll a = 0;
  for(ll i = 0; i < lent; i++){
    if(t[i] == 'a') a++;
  }
  if(a == lent && lent == 1) cout << 1;
  else if(a >= 1) cout << -1;
  else{
    ll ans = pow(2,lens);
    cout << ans;
  }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    factor();
    ll t; cin >> t;
    while(t--){
      solve();
      cout << endl;
    }
    return 0;
}