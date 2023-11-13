#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, m, x, y, ans = 0;
vector<ll> a[100000];
bool visited[100000];

void dfs(ll sv){
   cout << sv << " ";
    visited[sv] = true;
    for(auto x: a[sv]){
      if(!visited[x]){
        dfs(x);
      }
    }
}
int main()
{
  cin >> n >> m;
  ll x = 0;
  for(int i = 1; i <= m; i++){
    ll o, p;
    cin >> o >> p;
    a[o].push_back(p);
    a[p].push_back(o);
    // cin >> y;
    // x += y;
    // for(int j = 1; j <= y; j++){
    //   ll z;
    //   cin >> z;
    //   a[i].push_back(z+n);
    //   a[z+n].push_back(i);
    // }
  }
  //if(x == 0) cout << n  << endl;
  //else {
    ll answer = 0;
    for(int i = 0; i < n; i++){
      if(visited[i+1] == false && (i+1) <= n){
        dfs(i+1);
        answer++;
        cout << answer << "A ";
      }
        
    }
    cout << --answer << endl;
  //}
}