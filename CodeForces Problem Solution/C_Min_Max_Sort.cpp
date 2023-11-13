#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  ll n;
  cin>> n;
  vector<ll> v(n+1);
  for(int i = 0; i < n ; i++) {
    ll x;
    cin >> x;
    v[x] = i+1;
  }
  ll l = (n+1)/2;
  ll r = (n+2)/2;
  ll ans = l;
  while(l >= 1 && (l == r || (v[l] < v[l+1] && v[r-1] < v[r]))){
    l--;
    r++;
    ans--;
  }
  cout << ans;
}
int main()
{
  int t;
  cin >> t;
  while(t--){
    solve();
    cout << endl;
  }
}