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
ll mod_pow(ll base, ll pow){ ll res = 1; while(pow){ if(pow&1){ res = (res*base)%mod; pow--;} base = (base*base)%mod; pow /= 2;} return res%mod; }
ll factorial(ll x){ if(x == 1) return 1; return (x*factorial(x-1))%mod;  }
bool pairScnd_Elmt(const pair<int, int> &a, const pair<int, int> &b) { if(a.ff == b.ff) a.ss < b.ss; return (a.ff > b.ff); }
bool is_sorted(vector<ll> v){vl v2 = v; ascending(v); if(v == v2) return true; else return false;}

////////////////////* Solution *///////////////////
void solve(){
  ll n,m;
  cin >>n >> m;
  vector<vector<ll> > v(n, vector<ll> (m));
  loop(i,0,n) loop(j,0,m) cin>> v[i][j];
  ll x = 0; 
  while(x < n && is_sorted(v[x])){
    x++;
  }
  if(x == n) {
    cout << "1 1";
    return;
  }
  vl idx, vc = v[x];
  ascending(vc);
  loop(i,0,m){
    if(vc[i] != v[x][i]) idx.pb(i);
  }
  if(idx.size()>2){
    cout << -1;
    return;
  }
  loop(i,0,n){
    swap(v[i][idx[0]], v[i][idx[1]]);
    if(is_sorted(v[i])) continue;
    else{
      cout << -1;
      return;
    }
  }
  cout << idx[0]+1 << " " << idx[1]+1;
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
