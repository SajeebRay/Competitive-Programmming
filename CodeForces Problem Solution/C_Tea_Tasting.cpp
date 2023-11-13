#include<bits/stdc++.h>
#define ll long long
using namespace std;
//Here i use partial prefix sum;
/**
 * consider index 1 to 5 contain element;
 * 0    1   2  3     4    5 <-- indexes
 * _    _   _  _     _    _   for these element, i want find how many times the element present in the output
 * -1   _   _  1     _    _   means the fist element can contain the value 1 index, upto 3 index
 * -1   -1  _  1     1    _   means the second element can contain value 2 index upto 4 index
 * -1   -1  _ (1-1) (1+1) _   means the fourth element can contain value 4 upto 5
 * 0    1   2  2     2    0   is the final array of partial sum...
 *     1*a 2*b 2*c  2*d  0*e  for five element.. for this we need to have another array, which can contain the adding element
 * in this problem i declare the array as "add".
**/
void solve()
{
  ll n;     cin >> n;
  vector<ll> tea(n+1), tester(n+1), add(n+1,0), partial_sum(n+1,0), prefix_sTea(n+1,0);
  for(ll i = 1; i <= n; ++i){
    cin >> tea[i];
  }
  for(ll i = 1; i <= n; ++i){
    cin >> tester[i];
    prefix_sTea[i] += (prefix_sTea[i-1]+tester[i]);
  }
  for(ll i = 1; i <= n; ++i){
    ll finding = prefix_sTea[i-1]+tea[i];
    ll posi = lower_bound(prefix_sTea.begin(), prefix_sTea.end(), tea[i]+prefix_sTea[i-1]) - prefix_sTea.begin();
    if(posi > n) posi = n;
    
    partial_sum[i-1] -= 1;
    if(finding < prefix_sTea[posi]){
      partial_sum[posi-1] += 1;
      // cout << i-1 << " " << posi << finding-prefix_sTea[posi-1] << endl;
      add[posi] += finding-prefix_sTea[posi-1];
    }
    else {
      partial_sum[posi] += 1;
    }
  }
  vector<ll> drink(n);
  for(ll i = n-1; i >= 0; --i) partial_sum[i] += partial_sum[i+1];
  for(ll i = 1; i <= n; i++){
    drink[i-1] = tester[i]*partial_sum[i];
    drink[i-1] += add[i];
  }
  for(auto x: drink) cout << x << " ";
  cout << endl;
}
int main()
{
  ll t;
  cin >> t;
  while(t--) solve();
}