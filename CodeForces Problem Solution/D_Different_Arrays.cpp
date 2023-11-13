#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn = 2e5;
const ll mod = 998244353;

void solve()
{
  ll n,ans = 0;
    cin >> n;
    vector<ll> v(n);

    for(ll i=0 ; i<n ; ++i){
        cin >> v[i];
    }

    vector<ll> old_dp(maxn,0);

    old_dp[1e5 + v[1]] = 1; 

    for(ll i=1 ; i<n-1 ; ++i){

        vector<ll> new_dp(maxn,0);

        for(ll j=0 ; j<maxn ; ++j){
            if(!old_dp[j])
                continue;

            ll real_value = j - 1e5;

            new_dp[1e5 + v[i+1]-real_value] += old_dp[j];
            new_dp[1e5 + v[i+1]-real_value] %= mod;

            if(real_value){
                new_dp[1e5 + v[i+1]+real_value] += old_dp[j]; 
                new_dp[1e5 + v[i+1]+real_value] %= mod; 
            }   
        }

        swap(old_dp, new_dp);
    }

    for(ll i=0 ; i<maxn ; ++i){
        ans += old_dp[i];
        ans %= mod;
    }

    cout << ans << endl;
}
int main(){

  solve();

  return 0;
}
//copied from epsilon