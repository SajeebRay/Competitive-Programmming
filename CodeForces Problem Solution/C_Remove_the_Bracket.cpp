/***********JoyGuru************
 *                            *
 *  Author: Sajeeb Kumar Ray  *
 *     User id: sajeeb02      *
 *                            *
 ******************************/
#include<bits/stdc++.h>
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
#define loop(i,m,n) for(ll i = m; i <= n; i++)
#define r_loop(i,m,n) for(ll i = m; i >= n; i--)
#define swap(a,b) {a = a+b; b = a-b; a = a-b;} //b = a+b-b, a = a+b-a
#define c_swap(a,b){char t = a; a = b; b = t;}
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
#define print(v) {for(auto x:v) cout << x << " "; cout << nl;}

using namespace std;
using ull = uint64_t; //64bit
typedef long long int ll; //32bit
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<string> vs;
typedef map<int, int> mi;
typedef map<long long, long long> ml;
typedef multiset<long long> msl;
typedef queue<long long> ql;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
ll mod_pow(ll base, ll pow){ ll res = 1; while(pow){ if(pow&1){ res = (res*base)%mod; pow--;} base = (base*base)%mod; pow /= 2;} return res%mod; }
ll factorial(ll x){ if(x == 1) return 1; return (x*factorial(x-1))%mod;  }
bool pairScnd_Element(const pair<int, int> &a, const pair<int, int> &b) { if(a.ff == b.ff) a.ss < b.ss; return (a.ff > b.ff); }
bool is_sorted(vector<ll> v){vl v2 = v; ascending(v); if(v == v2) return true; else return false;}
ll andInRange(ll n, ll m){ ll ans = 0; while(n!=m){ n>>=1; m>>=1; ans++;} return (n<<ans);}
vector<ll> primeFactorization(ll n){ vector<ll> fac; while(n%2 ==  0){fac.push_back(2); n/=2;}for(ll i=3;i*i<=n;i+=2){while(n%i == 0){fac.push_back(i);n /= i;}}if(n > 2){fac.push_back(n);}sort(fac.begin(), fac.end()); return fac;}
////////////////////* Solution *///////////////////
ll dp[200005][2];
vector<ll> v,x,y;
ll n;
ll calc(ll index, ll next, ll turn){
  if(index == n-1){
    return next*v[n-1];
  }
  if(dp[index][turn] != -1){
    return dp[index][turn];
  }
  ll ans1 = (next*x[index]) + calc(index+1, y[index], 0);
  ll ans2 = (next*y[index]) + calc(index+1, x[index], 1);
  return dp[index][turn] = min(ans1,ans2);
}
void solve(){
  ll s;
  cin >> n >> s;
  v.resize(n);
  x.resize(n,0);
  y.resize(n,0);
  loop(i,0,n-1) {
    cin >> v[i];
    dp[i][0] = -1;
    dp[i][1] = -1;
  }
  loop(i,1,n-2){
    if(v[i] >= 2*s){
      x[i] = s;
      y[i] = v[i]-s;
    }
    else if(v[i] >= s && v[i] < 2*s){
      x[i] = v[i]-s;
      y[i] = s;
    }
    else{
      x[i] = 0;
      y[i] = v[i];
    }
  }
  ll ans1, ans2;
  ans1 = (v[0]*x[1])+ calc(2, y[1] ,0);
  ans2 = (v[0]*y[1])+ calc(2, x[1] ,1);
  cout << min(ans1,ans2);
}
int main()
{
  Sajeeb Kumar Ray
  int i = 1, tc = 1;
  cin >> tc;
  while(tc--){
    //cout << "Case " << i++ << ": ";
    solve();
    cout << nl;
  }
  return 0;
}
