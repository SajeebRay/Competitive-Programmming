#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  ll n;
  cin >> n;
  vector<ll> hair(n), cut(n);
  for(int i = 0; i < n; i++) cin >> hair[i];
  for(int i = 0; i < n; i++) cin >> cut[i];
  ll m;
  cin >> m;
  multiset<ll> razor;
  for(int i = 0; i < m; i++){
    ll x;
    cin >> x;
    razor.insert(x);
  }
  set<ll> s;
  bool ok = true;

  for(int i = 0; i < n; i++){
    if(hair[i] < cut[i]){
        ok = false;
        break;
    }
    while((!s.empty()) && *(s.begin()) < cut[i]){
      s.erase(s.begin());
    }
    if(cut[i] != hair[i] && !(s.count(cut[i]))){
      auto x = razor.find(cut[i]);
      if(x == razor.end()){
        ok = false;
        break;
      }
      razor.erase(x);
      s.insert(cut[i]);
    }
  }
  if(ok) cout << "YES\n";
  else cout << "NO\n";
}
int32_t main()
{
  ll t;
  cin >> t;
  while(t--) solve();

  return 0;
}