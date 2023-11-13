/***********JoyGuru************
 *                            *
 *  Author: Sajeeb Kumar Ray  *
 *       User id: s_aj        *
 *                            *
 ******************************/
#include <bits/stdc++.h>
/************** ordered_set headers **************/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define nl "\n"
#define mod 998244353
#define pi 3.141592653589793238
#define l_max LLONG_MAX
#define l_min LLONG_MIN
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define descending(a) sort(a.rbegin(), a.rend())
#define ascending(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
#define loop(i, m, n) for (ll i = m; i <= n; i++)
#define r_loop(i, m, n) for (ll i = m; i >= n; i--)
#define swap(a, b) \
  {                \
    a = a + b;     \
    b = a - b;     \
    a = a - b;     \
  } // b = a+b-b, a = a+b-a
#define c_swap(a, b) \
  {                  \
    char t = a;      \
    a = b;           \
    b = t;           \
  }
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / __gcd(a, b)
#define Sajeeb ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Ray cout.tie(NULL);
#define In freopen("Input.txt", "r", stdin);
#define InOut                       \
  freopen("Input.txt", "r", stdin); \
  freopen("Output.txt", "w", stdout);
#define print(v)        \
  {                     \
    for (auto x : v)    \
      cout << x << " "; \
  }

using namespace std;
using ull = uint64_t;     // 64bit
typedef long long int ll; // 32bit
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<string> vs;
typedef map<int, int> mi;
typedef map<long long, long long> ml;
typedef multiset<long long> msl;
typedef queue<long long> ql;
typedef pair<ll, ll> pl;
typedef vector<pl> vpl;
bool isPrime(ll n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}
ll mod_pow(ll base, ll pow)
{
  ll res = 1;
  while (pow)
  {
    if (pow & 1)
    {
      res = (res * base) % mod;
      pow--;
    }
    base = (base * base) % mod;
    pow /= 2;
  }
  return res % mod;
}
ll factorial(ll x)
{
  if (x == 1)
    return 1;
  return (x * factorial(x - 1)) % mod;
}
bool pairScnd_Element(const pair<int, int> &a, const pair<int, int> &b)
{
  if (a.ff == b.ff)
    a.ss < b.ss;
  return (a.ff > b.ff);
}
bool is_sorted(vector<ll> v)
{
  vl v2 = v;
  ascending(v);
  if (v == v2)
    return true;
  else
    return false;
}

////////////////////* Solution *///////////////////
void solve(){ // both approach will work
  ll n, m, x, y, d, i, ma = -1;
  cin >> n;
  ll a[n];
  vector<int> v;
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  vector<ll> b(n);
  for (i = 0; i < n; i++)
  {
    cin >> b[i];
    ma = max(ma, b[i]);
  }

  for (i = 1; i < n; i++)
  {
    if (a[i] > b[i - 1])
    {
      v.push_back(i);
    }
  }

  ll d1[n];
  ll d2[n];
  for (i = 0; i < n; i++)
  {
    auto it = lower_bound(b.begin(), b.end(), a[i]);

    d1[i] = *it - a[i];
  }

  for (i = 0; i < n; i++)
  {
    auto itr = upper_bound(v.begin(), v.end(), i);
    if (itr == v.end())
    {
      d2[i] = b[n - 1] - a[i];
    }
    else
    {
      d2[i] = b[*itr - 1] - a[i];
    }
  }

  for (i = 0; i < n; i++)
  {
    cout << d1[i] << " ";
  }
  cout << nl;
  for (i = 0; i < n; i++)
  {
    cout << d2[i] << " ";
  }


  // ll n;
  // cin >> n;
  // vl a(n+1), b(n+1), dmi(n+1), dma(n+1);
  // loop(i,1,n) cin >> a[i];
  // loop(i,1,n) cin >> b[i];
  // list<ll> lis;
  // ll bptr = n;

  // r_loop(i,n,1){
  //   while(bptr >= 1 && a[i] <= b[bptr]){
  //     lis.pb(b[bptr]);
  //     bptr--;
  //   }
  //   dmi[i] = lis.back() - a[i];
  //   dma[i] = lis.front() - a[i];

  //   ll c1 = n-(bptr + 1);
  //   ll c2 = n -i;
  //   // cout << c1 << " " << c2 << nl;
  //   if(c1 == c2) lis.clear();
  // }
  // loop(i,1,n) cout << dmi[i] << " ";
  // cout << nl;
  // loop(i,1,n) cout << dma[i] << " ";
}
int main()
{
  Sajeeb Kumar Ray int i = 1, tc = 1;
  cin >> tc;
  while (tc--)
  {
    // cout << "Case#" << i++ << " ";
    solve();
    cout << nl;
  }
  return 0;
}
