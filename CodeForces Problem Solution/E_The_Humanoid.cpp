#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll n, h;
  cin >> n >> h;
  vector<ll> v(n), s = {2,2,3};
  for(int i = 0 ; i < n ; i++) cin >> v[i];
  sort(v.begin(), v.end());
  ll ans = 0;
  do
  {
    ll i = 0, cnt = 0, power = h;
    for(ll j = 0; j < n; j++){
      while(v[j] >= power){
        if(i == 3) break;
        power *= s[i];
        i++;
      }
      if(v[j] < power){
        cnt++;
        power += v[j]/2;
      }
      ans = max(cnt, ans);
    }
  } while (next_permutation(s.begin(), s.end()));
  
  
  cout << ans;
}
int main()
{
  ll t;
  cin >> t;
  while(t--){
    solve();
    cout << endl;
  }

  return 0;
}