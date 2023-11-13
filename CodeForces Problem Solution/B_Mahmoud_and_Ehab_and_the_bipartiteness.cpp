#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> adj[100005], col;
bool vis[100005];
ll color = 0;
void dfs(ll v, ll color){
  vis[v] = true;
  col[v] = color;
  for(auto child : adj[v]){
    if((!vis[child]))
      dfs(child, color^1);
  }
}
void solve(){
  ll n;
  cin >> n;
  for(int i = 1; i < n; i++){
    ll x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  col.resize(n+1,-1);
  ll a = 0, b = 0, ans;
  for(int i = 1; i < n; i++){
    if(adj[i].size() > 0 && (!vis[i])){
      dfs(i,color);
    }
  }
  for(int i = 1; i <= n; i++){
    if(col[i] == 1) a++;
    else if(col[i] == 0) b++;
  }
  ans = a*b - (n-1);
  cout << ans;
}
int main()
{
  solve();
  cout << endl;
}