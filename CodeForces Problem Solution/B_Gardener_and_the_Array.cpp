#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll n;
  cin >> n;
  vector<vector<ll> > v(n);
  map<ll, ll> mp;
  for(int i = 0; i < n; i++){
    ll k;
    cin >> k;
    for(int  j = 0;j < k; j++){
      ll x;
      cin >> x;
      v[i].push_back(x);
      mp[x]++;
    }
  }
  bool ans;
  for(int i = 0; i < n; i++){
    // map<ll, ll> m = mp;
    ans = true;
    for(auto x: v[i]){
      if(mp[x] == 1){
        ans = false;
        break;
      }
    }
    if(ans) break;
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}