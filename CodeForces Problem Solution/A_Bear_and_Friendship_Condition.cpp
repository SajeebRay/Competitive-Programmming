#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn = 150005;
bool vis[maxn];
vector<ll> adj[maxn];
bool ok = true;
ll v, e;

void dfs(ll sv){
  vis[sv] = true;
  v++;
  e += adj[sv].size();
  cout << endl;
  for(auto x : adj[sv]){
    if(!vis[x]) dfs(x);
  }
}
void solve(){
  ll n, m;
  cin >> n >> m;
  for(int i= 0; i < m; i++){
    ll x, y;
    cin >> x >> y;
    x, y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int i = 1; i <= n; i++){
    if(!vis[i]){
      v = 0, e = 0;
      dfs(i);
      if(e != (v*(v-1))) {
        ok = false;
        break;
      }
    }
    
  }
  //ans ? cout << "YES\n" : cout << "NO\n";
  if(ok) cout << "YES" << endl;
  else cout << "NO" << endl;
}
int main()
{
  solve();

  return 0;
}