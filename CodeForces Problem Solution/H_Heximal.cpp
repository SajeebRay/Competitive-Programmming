/***********JoyGuru************
 *                            *
 *  Author: Sajeeb Kumar Ray  *
 *     User id: sajeeb02      *
 *                            *
 ******************************/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first 
#define ss second
#define mp make_pair
using namespace std;

bool pairScnd_Element(const pair<int, int> &a, const pair<int, int> &b)
{
  if (a.ff == b.ff)
    a.ss < b.ss;
  return (a.ff > b.ff);
}
////////////////////* Solution *///////////////////
void solve()
{
  vector<ll> vp = {5,8,5,4,8,2,4,8,2,4};
  // vector<pair<ll, ll> > vp;
  // vp.pb(mp(1,5));
  // vp.pb(mp(1,3));
  // vp.pb(mp(1,1));
  // vp.pb(mp(3,5));
  // vp.pb(mp(4,2));
  // vp.pb(mp(4,5));
  // sort(vp.begin(), vp.end(), pairScnd_Element);
  
  vector<int>::iterator lower, upper;
  lower = lower_bound(vp.begin(), vp.end(), 1);
  upper = upper_bound(vp.begin(), vp.end(), 1);
  cout << (vp.begin()-lower+1) << endl;
  cout << (vp.begin()-upper+1) << endl;
}
int main()
{
  int i = 1, tc = 1;
  while (tc--)
  {
    // cout << "Case " << i++ << ": ";
    solve();
  }
  return 0;
}
