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
  ll n, m;
  ll cnt = 0, ans = 0, t = 0;
  string str;
  cin >> n>> m;
  cin >> str;
  loop(i,0,n){
    if(str[i]=='1')
      cnt++;
  }
  if(cnt==0){
    cout << n*m;
    return;
  }
  if(cnt*m%2==1){
    cout << 0;
    return;
  }
  if(m%2==0){
    loop(i,0,n){
        if(str[i]=='1')break;
        ans++;
    }
    for(ll i = n-1; i >= 0; i--){
        if(str[i]=='1')break;
        ans++;
    }
    cout << (ans+1);
    return;
  }
  loop(i,0,n){
    if(str[i]=='1') t++;
    if(t==cnt/2) ans++;
  }
  cout << ans;
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
