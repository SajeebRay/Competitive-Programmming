/***********JoyGuru************
 *                            *
 *  Author: Sajeeb Kumar Ray  *
 *       User id: s_aj        *
 *                            *
 ******************************/
#include<bits/stdc++.h>
#define nl "\n"
#define mod 998244353
#define pi 3.141592653589793238
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define descending(a) sort(a.rbegin(), a.rend())
#define ascending(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
#define loop(i,m,n) for(int i = m; i < n; i++)
#define swap(a,b) {a = a+b; b = a-b; a = a-b;} //b = a+b-b, a = a+b-a
#define min3(a,b,c) min(a, min(b,c))
#define min4(a,b,c,d) min(a, min(b, min(c,d)))
#define max3(a,b,c) max(a, max(b,c))
#define max4(a,b,c,d) max(a, max(b, max(c,d)))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define Sajeeb ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Ray cout.tie(NULL);
#define In freopen("Input.txt", "r", stdin);
#define InOut freopen("Input.txt", "r", stdin); freopen("Output.txt", "w", stdout);

using namespace std;
using ull = uint64_t; //64bit
typedef long long int ll; //32bit
typedef vector<int> vi;
typedef vector<long long> vl;
typedef map<int, int> mi;
typedef map<long long, long long> ml;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
ll mod_pow(ll base, ll pow){ ll res = 1;
  while(pow){ if(pow&1){ res = (res*base)%mod; pow--;} base = (base*base)%mod; pow /= 2;}
  return res%mod; }
ll factorial(ll x){ if(x == 1) return 1; return (x*factorial(x-1))%mod;  }
bool pairScndElmt(const pair<int, int> &a, const pair<int, int> &b) {return (a.second<b.second);}

////////////////////* Solution *///////////////////
void solve(){
  ll n, m, k;
  cin >> n >> m;
  vl vec(n);
  vpl v1, v2;
  loop(i,0,n){
    cin >> vec[i];
    ll x = vec[i], ans = 0, cnt = 0;
    while(x%m == 0){
      cnt++;
      x /= m;
    }
    ans = pow(m,cnt);
    if(v1.size() == 0){
      v1.pb(make_pair(x,ans));
    }
    else {
      ll sz = v1.size() -1;
      if(x == v1[sz].ff) v1[sz].ss += ans;
      else v1.pb(mp(x,ans));
    }
  }
  cin >> k;
  vl vec2(k);
  loop(i,0,k){
    cin >> vec2[i];
    ll x = vec2[i], ans = 0, cnt = 0;
    while(x%m == 0){
      cnt++;
      x /= m;
    }
    ans = pow(m,cnt);
    if(v2.size() == 0){
      v2.pb(make_pair(x,ans));
    }
    else {
      ll sz = v2.size() -1;
      if(x == v2[sz].ff) v2[sz].ss += ans;
      else v2.pb(mp(x,ans));
    }
  }
  if(v1.size() != v2.size()) {
    cout << "NO";
    return;
  }
  loop(i,0,v1.size()){
    if(v1[i].ff != v2[i].ff || v1[i].ss != v2[i].ss) {
      cout << "NO";
      return;
    }
  }
  cout << "YES";
}
int main()
{
  Sajeeb Kumar Ray
  int i = 1, tc = 1;
  cin >> tc;
  while(tc--){
    //cout << "Case#" << i++ << " ";
    solve();
    cout << nl;
  }
  return 0;
}
