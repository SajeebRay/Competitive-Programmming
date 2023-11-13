/***********JoyGuru************
 *                            *
 *  Author: Sajeeb Kumar Ray  *
 *       User id: s_aj        *
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
#define print(v) {for(auto x:v) cout << x << " ";}

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

// ////////////////////* Solution *///////////////////
// vector<bool> prime(1000006+1, true);
// void seive(){
//   ll maxx = 1000006;
//   prime[0] = prime[1] = false;
//   for(ll i = 2; i*i <= maxx; i++)
//     if(prime[i])
//       for(ll j = i*i; j <= maxx; j += i)
//         prime[j] = false;
// }
// ll sol(vl &a){
//   ll prev = 0, next, ans = 0;
//   ll n = a.size();
//   loop(i,0,n-1){
//     if(!prime[a[i]]){
//       if(a[i] == 1) prev++;
//       else prev = 0;
//       continue;
//     }
//     ll j = i+1;
//     next = 0;
//     while(a[j] == 1 && j < n){
//       next++;
//       j++;
//     }
//     ans += (prev+1)*(next+1) -1;
//     prev = next;
//     i = j-1;
//   }
//   return ans;
// }
// void solve(){
//   ll n, e, ans = 0;
//   cin >> n >> e;
//   vl v(n);
//   loop(i,0,n-1) cin >> v[i];
//   loop(j,1,e-1){
//     vl a;
//     for(ll i = 0; i < n; i += e)
//       a.pb(v[i]);
//     ans += sol(a);
//   }
//   cout << ans;
// }
// int main()
// {
//   Sajeeb Kumar Ray
//   int i = 1, tc = 1;
//   cin >> tc;
//   seive();
//   while(tc--){
//     //cout << "Case#" << i++ << " ";
//     solve();
//     cout << nl;
//   }
//   return 0;
// }
///////////////////////////////////////////////////////////// START CODE HERE /////////////////////////////////////////////////////////////

constexpr int N = 2e6;
vector<bool> pr(N+1, true);

void preSolve()
{
    pr[0] = pr[1] = false;
    for (int i = 2; i <= N; i++) {
        if (pr[i]) {
            for (int j = 2 * i; j <= N; j += i)
                pr[j] = false;
        }
    }
}

ll solve2(vector<ll> &a)
{
    ll n = a.size();
    map<ll, ll> f;
    ll ans = 0;
    ll prev = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!pr[a[i]])
        {
            if (a[i] == 1) prev++;
            else prev = 0;
            continue;
        }
        ll j = i + 1;
        ll next = 0;
        while (j < n && a[j] == 1)
        {
            j++;
            next++;
        }
        ans += (prev + 1) * (next + 1) - 1;
        prev = next;
        i = j - 1;
    }
    return ans;
}

void solve(ll tc)
{
    ll n, e;
    cin >> n >> e;
    vector<ll> a(n);
    loop(i,0,n-1) cin >> a[i];
    ll ans = 0;
    for (ll i = 0; i < e; i++)
    {
        vector<ll> curr;
        for (ll j = i; j < n; j += e)
            curr.push_back(a[j]);
        ans += solve2(curr);
    }
    cout << ans << endl;
}

int main()  
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;

    preSolve();
    ll tests = 1;
    cin >> tests;
    for (ll tt = 1; tt <= tests; tt++)
        solve(tt);
    return 0;
}