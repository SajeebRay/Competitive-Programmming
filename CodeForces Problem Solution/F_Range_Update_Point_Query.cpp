#include<bits/stdc++.h>
#define nl "\n"
#define loop(i,m,n) for(ll i = m; i <= n; i++)
using namespace std;
typedef long long int ll; 
typedef set<long long> sl;
////////////////////* Solution *///////////////////
ll calc(ll x){
  ll s = 0;
  while(x){
    s += x%10;
    x /= 10;
  }
  return s;
}
void solve(){
  ll n, q;
  cin >> n >> q;
  vector<ll> v(n), add(n,0);
  sl s;
  loop(i,0,n-1){
    cin >> v[i];
    s.insert(i);
  }
  ll l = -1, r = -1;
  while(q--){
    ll op;
    cin >> op;
    if(op == 2){
      ll x;
      cin >> x;
      x--;
      cout << v[x] << endl;
    }
    if(op == 1){
      ll l, r;
      cin>> l >> r;
      l--,r--;
      if(s.empty()) continue;
      vector<ll> toErase;
      auto it = lower_bound(s.begin(), s.end(), l);
      loop(i,*it, r){
        v[i] = calc(v[i]);
        if(v[i] < 10)toErase.push_back(i);
      }
      for(auto xx:toErase) if(s.count(xx)) s.erase(xx);
    }
  }
}
int main()
{
  int i = 1, tc = 1;
  cin >> tc;
  while(tc--){
    //cout << "Case " << i++ << ": ";
    solve();
  }
  return 0;
}
