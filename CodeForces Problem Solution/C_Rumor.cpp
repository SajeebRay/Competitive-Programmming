/***********JoyGuru************
 *                            *
 *  Author: Sajeeb Kumar Ray  *
 *     User id: sajeeb02      *
 *                            *
 ******************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> cost(100000);
vector<ll> adj[100000];
ll curr_min, answer =0, N, M;
bool visited[100000];

void dfs(ll node){
  if(!visited[node]){
    visited[node] = true;
    curr_min = min(curr_min, cost[node]);
    for(auto x : adj[node])
      dfs(x);
  }
}
int main() {
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        cin >> cost[i];
    }
    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        ///Change a and b to 0-based indexing
        a--;
        b--;
        ///Edges go in both directions
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i=0; i<N; i++) {
        if (!visited[i]) {
            ///Create a new component with node i
            curr_min = cost[i];
            dfs(i);
            ///curr_min is now the minimum amount of gold needed to bribe the component
            answer = answer + curr_min;
        }
    }

    ///We have searched every component
    cout << answer << endl;
}