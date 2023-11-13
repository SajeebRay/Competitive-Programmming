#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll t, n, m;
  cin >> t;
  while(t--){
    cin >> n >>m;
    vector<ll > v(n), vc(n);
    for(int i = 0; i < n ; i++){
      cin >> v[i];
    }
    vc = v;
    sort(v.begin(), v.end());
    ll win_i = 0, left =0, largest =0;
    for(int i = 0; i < n; i++){
      if(v[i] <= m) {win_i++; m = m-v[i]; largest = v[i];}
      else break;
    }
    if(n == win_i) 
      cout << 1 << endl;
    else if(vc[win_i]-largest <= m) 
      cout << n-win_i << endl;
    else
      cout << n-win_i+1<< endl;
  }
}