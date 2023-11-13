#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long n, c, q;
  cin >> n>> c >> q;
  string str;
  cin >> str;

  vector<pair<long long, long long> > query(c), len(n);
  long long curr = n;

  for(long long i=0 ; i<c ; ++i){
    cin >> query[i].first >> query[i].second;
    long long qlen = query[i].second - query[i].first + 1;

    len[i].first = curr+1, len[i].second = curr+qlen;
    curr = len[i].second;
  }

  while(q--){
    long long qz, gap;
    cin >> qz;
    for(long long i = c-1; i >= 0; --i){
      if(qz >= len[i].first && qz <= len[i].second){
        gap = qz-len[i].first;
        qz = query[i].first + gap;
      }
    }
    cout << str[qz-1] << endl;;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int i = 1, tc = 1;
  cin >> tc;
  while(tc--){
    //cout << "Case#" << i++ << " ";
    solve();
    //cout << nl;
  }
  return 0;
}
