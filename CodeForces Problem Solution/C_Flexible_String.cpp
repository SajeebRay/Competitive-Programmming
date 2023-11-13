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
typedef long long ll; //32bit
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
void makeComb(string& diffs,vector<string>& dp,ll index,ll k,string& curr){
    if(curr.size()==k){
        dp.push_back(curr);
        return;
    }
    if(index==diffs.size()) return;
    makeComb(diffs,dp,index+1,k,curr);
    curr.push_back(diffs[index]);
    makeComb(diffs,dp,index+1,k,curr);
    curr.pop_back();
        
}
void solve(){
    ll n = 1, k = 0;
    string a,b;
    cin>>n>>k;
    cin>>a>>b;
    string diffs;
    set<char> as;
    ll ans=0;
    for(auto c:a)  as.insert(c);
    for(auto c:as) diffs.push_back(c);
    sort(diffs.begin(),diffs.end());
    string  curr="";

    k=min(k,(ll)diffs.size());
    vector<string> allS;
    makeComb(diffs,allS,0,k,curr);
    
    for(auto s:allS){
        set<char> useChars;
        for(auto c:s) useChars.insert(c);
        ll res=0;
        for(ll i=0,c=0;i<=n;i++){
            if(i<n && ((a[i]==b[i]) || useChars.count(a[i]))){
                // cout<<i<<" ";
                c++;
            }
            else{
                res+=(c*(c+1))/2;
                c=0;
            }
        }
        // cout<<res<<"\n";
        ans=max(res,ans);
    }


    cout<<ans;
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
//copied;