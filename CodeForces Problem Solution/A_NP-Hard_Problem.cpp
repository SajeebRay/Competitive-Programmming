#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> v, adj[100005], col;
bool vis[100005];
ll color = 0;

bool dfs(ll v, ll color){
  vis[v] = true;
  col[v] = color;
  for(auto child: adj[v]){
    if(!vis[child] && dfs(child,color^1) == false) 
      return false;
    else if(col[v] == col[child])
      return false;
  }
  return true;
}
int32_t main()
{
  ll n, e;
  cin >> n >> e;
  v.resize(n+1);
  col.resize(n+1, -1);
  for(int i = 0; i<e; i++){
    ll x,y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  vector<ll> ans1, ans2;
  bool ans;
  for(int i = 1; i <= n; i++){
    if(adj[i].size() > 0 && (!vis[i])){
      ans = dfs(i,color);
      if(!ans) break;
    }
  
  }
  for(int j = 1; j <= n; j++){
    if(col[j] == 1) ans1.push_back(j);
    else if(col[j] == 0) ans2.push_back(j);
  }
  if(ans) {  
    cout << ans1.size() << endl;
    for(auto x : ans1) cout << x << " ";
    cout << endl;
    cout << ans2.size() << endl;
    for(auto x: ans2) cout << x << " ";
    cout << endl;
  }
  else cout << -1 << endl;
  
  return 0;
}