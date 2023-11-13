#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> adj[200005];
set<ll> tree;
bool vis[200005];
void dfs(ll v){
  vis[v] = true;
  if(adj[v].size() == 0) tree.insert(v);
  else{
    for(auto x: adj[v]){
      if(!vis[x]){
        if(tree.size() == 0) tree.insert(v);
        tree.insert(x);
        dfs(x);
      }
    }
  }
}
int main()
{
  ll v, e;
  cin>> v >> e;
  for(ll i = 0; i < e; i++){
    ll x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  ll cnt = 0;
  for(int i = 1; i<= v; i++){
      dfs(i);
      if(!tree.empty() )
        cnt += tree.size()-1;
      tree.clear();
  }
  cout << e - cnt << endl;

  return 0 ;
}