#include<bits/stdc++.h>
using namespace std;

int n, ans;
string s, res;
vector<int> f[26];
int need[26];
void check(int k) {
  int cnt = n / k;
  int ops = 0;
  vector<array<int, 2>> v;
  for (int i = 0; i < 26; i++) {
    v.push_back({(int)f[i].size(), i});
    need[i] = i < k ? cnt : 0;
  }
  sort(v.rbegin(), v.rend());
  for (int i = 0; i < 26; i++) {
    ops += abs(v[i][0] - need[i]);
  }
  ops /= 2;
  // cout << k << ' ' << ops << '\n';
  if (ops < ans) {
    ans = ops;
    vector<int> id;
    
    for (int i = 0; i < k; i++) {
      int ch = v[i][1];
      if (f[ch].size() >= cnt) {
        for (int j = cnt; j < f[ch].size(); j++) {
          id.push_back(f[ch][j]);
        }
      }
    }
    for (int i = k; i < 26; i++) {
      int ch = v[i][1];
      for (int j = 0; j < f[ch].size(); j++) {
        id.push_back(f[ch][j]);
      }
    }
    res = s;
    for (int i = 0; i < k; i++) {
      int ch = v[i][1];
      if (f[ch].size() < cnt) {
        for (int j = (int)f[ch].size() + 1; j <= cnt; j++) {
          res[id.back()] = char(ch + 'a');
          id.pop_back();
        }
      }
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    cin >> n;
    cin >> s;
    ans = n + 1;
    for (int i = 0; i < n; i++) {
      f[s[i] - 'a'].push_back(i);
    }
    for (int k = 1; k <= 26; k++) {
      if (n % k == 0) {
        check(k);
      }
    }
    cout << ans << '\n' << res << '\n';
    for (int i = 0; i < 26; i++) {
      f[i].clear();
    }
  }
  return 0;
}

//copied from YouKnowWho