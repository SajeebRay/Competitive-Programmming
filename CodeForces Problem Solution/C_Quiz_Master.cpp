#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  ll n, m;
  cin >> n >> m;
  vector< ll > v(n), factor[n];
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n; i++){
    for(int j = 1; j*j <= v[i]; j++){
      if(v[i]%j == 0)
      { ll fac1 = j;
        ll fac2 = v[i]/j;
        if(fac1 <= m) factor[i].push_back(fac1);
        if(fac2 <= m && fac2 != fac1) factor[i].push_back(fac2);
      }
    }
  }
  // for(int i = 0; i < n;i++){
  //   for(auto x: factor[i]) cout << x << " " ;
  //   cout << endl;
  // }
  ll right = 0, left = 0, ans = 1e18;
  set<ll> s;
  map<ll, ll> mp;
  while(left < n){
    if(s.size() < m){
      if(right >= n) break;
      for(auto x: factor[right]){
        s.insert(x);
        mp[x]++;
      }
      right++;
    }
    else{
      ans = min(ans, v[right-1]-v[left]);
      for(auto x: factor[left]){
        mp[x]--;
        if(mp[x]==0)s.erase(x);
      }
      left++;
    }  
  }
  if(ans == 1e18) cout << -1 << endl;
  else cout << ans << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}