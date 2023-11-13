#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll v, e, ans = 0;
bool vis[200001];
bool iscycle;
vector<ll> a[200001];

void dfs(ll sv){
    vis[sv] = true;
    if(a[sv].size() != 2) iscycle = false;
    for(auto x : a[sv]){
      if(!vis[x]){
        dfs(x);
      }
    }
}
int main()
{
  cin >> v >> e;
  for(int i = 0; i < e; i++){
    ll x, y;
    cin >> x >> y;
    a[x].push_back(y);
    a[y].push_back(x);
  }
  for(int i = 1; i <= v; i++){
    if(vis[i] == false){
      iscycle = true;
      dfs(i);
      if(iscycle) ans++;
    }
  }
  cout << ans << endl;

  return 0;
}