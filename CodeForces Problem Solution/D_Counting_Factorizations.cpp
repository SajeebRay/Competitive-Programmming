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
#define YES cout << "YES";
#define Yes cout << "Yes";
#define NO cout << "NO";
#define No cout << "No";
#define watch(x) cout << (#x) << " = " << (x) << endl

using namespace std;
using ull = uint64_t; //64bit
typedef long long int ll; //32bit
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<string> vs;
typedef map<int, int> mi;
typedef map<long long, long long> ml;
typedef multiset<long long> msl;
typedef multiset<char> msc;
typedef set<long long> sl;
typedef set<char> sc;
typedef queue<long long> ql;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;

const ll mod = 998244353;
const double pi = 3.141592653589793238;
const ll l_max = 1e18;
const ll l_min = -1e18;

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
ll mod_pow(ll base, ll pow, ll mod){ ll res = 1; while(pow){ if(pow&1){ res = (res*base)%mod; pow--;} base = (base*base)%mod; pow /= 2;} return res%mod; }
ll factorial(ll x){ if(x == 1) return 1; return (x*factorial(x-1))%mod;  }
bool pairScnd_Element(const pair<int, int> &a, const pair<int, int> &b) { if(a.ff == b.ff) a.ss < b.ss; return (a.ff > b.ff); }
bool is_sorted(vector<ll> v){vl v2 = v; ascending(v); if(v == v2) return true; else return false;}
ll andInRange(ll n, ll m){ ll ans = 0; while(n!=m){ n>>=1; m>>=1; ans++;} return (n<<ans);}
vector<ll> primeFactorization(ll n){ vector<ll> fac; while(n%2 ==  0){fac.push_back(2); n/=2;}for(ll i=3;i*i<=n;i+=2){while(n%i == 0){fac.push_back(i);n /= i;}}if(n > 2){fac.push_back(n);}sort(fac.begin(), fac.end()); return fac;}
vector<ll> divisors(ll n){ vector<ll> v; for(ll i = 1; i*i <= n; i++){ if(n%i == 0){ v.push_back(i); if(i != n/i) v.push_back(n/i); } } ascending(v); return v; }

////////////////////* Solution *///////////////////
vector<ll> sieve(ll n){
  vector<ll> v;
  bool Nprim[n+1] = {false};
  Nprim[0] = Nprim[1] = true;
  for(ll i = 2; i*i <= n; i++){
    if(Nprim[i] == false){
      v.push_back(i);
      for(ll j = i+i; j <= n; j += i){
        Nprim[j] = true;
      }
    }  
  }
  return v;
}
vl primes = sieve(1e6+1);
vector<bool> prime(1e6+1);
vector<ll> facts(1e4+1,1);
vector<ll> ifacts(1e4+1,1);
vector<vector<ll> > dp(4050, vector<ll>(5000, -1));
ll n;
ll helper(ll index, ll used, vector<pair<ll, ll> > &v){
  if(used > n) return 0;
  if(index == v.size()){
    if(used == n) return facts[n];
    else return 0;
  }
  if(dp[index][used] != -1) return dp[index][used];
  if(prime[v[index].first]){
    ll ans1 = (helper(index+1, used+v[index].second-1, v)* ifacts[v[index].second -1]) %mod;
    ll ans2 = (helper(index+1, used+v[index].second, v)* ifacts[v[index].second])%mod;
    return dp[index][used] = (ans1+ans2)%mod;
  }
  else return dp[index][used] = (helper(index+1, used+v[index].second, v)*ifacts[v[index].second])%mod;
}
void solve(){
  loop(i,1,1e4) facts[i] = (facts[i-1]*i) %mod;
  r_loop(i,1e4,0) ifacts[i] = mod_pow(facts[i], mod -2, mod);
  for(auto i : primes) prime[i] = true;
  cin >> n;
  map<ll, ll> freq;
  
  loop(i,0,2*n -1){
    ll a; cin >> a;
    freq[a]++;
  }
  vector<pair<ll,ll> > v;
  for(auto i : freq){
    v.pb(i);
  }
  ll n1 = v.size();
  cout << helper(0,0, v) << nl;
}
int main()
{
  Sajeeb Kumar Ray
  int i = 1, tc = 1;
  while(tc--){
    //cout << "Case " << i++ << ": ";
    solve();
  }
  return 0;
}
