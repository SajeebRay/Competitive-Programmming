#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  ll n, c;
  cin >> n >> c;
  vector<pair<ll, ll> > a(n);
  for(ll i = 0; i< n ;i++){
    cin >> a[i].first;
    a[i].second = a[i].first+i+1;
    a[i].first += min(i+1, n-i);
  }
  sort(a.begin(), a.end());
  vector<ll> pref(1,0);
  for(ll i = 0 ; i < n; i++){
    pref.push_back(pref.back()+a[i].first);
  }
  ll ans = 0;
  for(int i = 0; i < n;i++){
    ll cost = c-a[i].second;
    ll cnt = 0, left = 0, right = n, mid;
    while(left <= right){
      mid = (right+left)/2;
      ll taken = mid+1;
      ll sum = pref[mid];
      if(i < mid){
        taken--;
        sum -=  a[i].first;
      }
      if(sum <= cost){
        cnt = max(taken, cnt);
        left = mid+1;
      }
      else {
        right = mid-1;
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t = 1;
  cin >> t;
  while(t--){
    solve();
    cout << endl;
  }
}