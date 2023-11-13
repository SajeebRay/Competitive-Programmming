//copied my code on the last
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll unsigned long long
#define sett tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update >  /// cout<<*os.find_by_order(val)<<endl; // k-th element it /// less_equal = multiset, less = set, greater_equal = multiset decreasing, greater = set decreaseing ///  cout<<os.order_of_key(val)<<endl;  // strictly smaller or greater
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define plg(x)	printf("%lld ",x)
#define ps(s)	printf("%s\n",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define MONE printf("-1\n")
#define vi vector<int>
#define pb push_back
#define pf push_front
#define F first
#define S second
#define clr(x,y) memset(x, y, sizeof(x))
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sq(x)  ( (x)*(x) )
#define s(x)   x.size()
#define all(x) x.begin(),x.end()
#define allg(x) x.begin(),x.end(),greater<int>()
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl printf("\n");
#define endl "\n"
#define w(t) int t; cin >> t; while(t--){ solve(); }
#define MAX 1000006

int g;
struct{
    template<class T> operator T() {
        T x;
        cin >> x;
        return x;
    }
}in;

bool f(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

int Case;
void solve()
{
    int i=0,j=0,m=0,n=0,k=0,ans=0,cnt=0,odd=0,even=0;
    n = in;
    int a = in, b = in, c = in;
    vector<pair<int,int> > maths(n);
    vector<pair<int,int> > english(n);
    vector<pair<int,int> > total(n);

    fo(i,n)
    {
        int x = in;
        maths[i] = make_pair(x,i+1);
    }
    fo(i,n)
    {
        int x = in;
        english[i] = make_pair(x,i+1);
        total[i] = make_pair(english[i].first+maths[i].first,i+1);
    }

    sort(all(maths),f); // sort(maths.begin(),maths.end(),f); decreasing
    sort(all(english),f);
    sort(all(total),f);

    vi out;
    map<int,int> mp;
    fo(i,a)
    {
        out.pb(maths[i].second);
        mp[maths[i].second]++;
    }
    // deb(out.size());
    fo(i,b)
    {
        if(mp[english[i].second])
        {
            b++;
            continue;
        }
        mp[english[i].second]++;
        out.pb(english[i].second);
    }
    // deb(out.size());

    fo(i,c)
    {
        if(mp[total[i].second])
        {
            c++;
            continue;
        }
        mp[total[i].second]++;
        out.pb(total[i].second);
    }
    sort(all(out));
    for(auto x : out) cout << x << endl;


}

int32_t main()
{
      //        Bismillah
    // fileInput();
    // BOOST
    // w(t)
    solve();
    // f();
}
// /***********JoyGuru************
//  *                            *
//  *  Author: Sajeeb Kumar Ray  *
//  *       User id: s_aj        *
//  *                            *
//  ******************************/
// #include<bits/stdc++.h>
// #define nl "\n"
// #define mod 998244353
// #define pi 3.141592653589793238
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define decending(a) sort(a.rbegin(), a.rend())
// #define acending(a) sort(a.begin(), a.end())
// #define reverse(a) reverse(a.begin(), a.end())
// #define loop(i,m,n) for(int i = m; i < n; i++)
// #define swap(a,b) {a = a+b; b = a-b; a = a-b;} //b = a+b-b, a = a+b-a
// #define min3(a,b,c) min(a, min(b,c))
// #define min4(a,b,c,d) min(a, min(b, min(c,d)))
// #define max3(a,b,c) max(a, max(b,c))
// #define max4(a,b,c,d) max(a, max(b, max(c,d)))
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) (a*b)/__gcd(a,b)
// #define Sajeeb ios_base::sync_with_stdio(false);
// #define Kumar cin.tie(NULL);
// #define Ray cout.tie(NULL);
// #define In freopen("Input.txt", "r", stdin);
// #define InOut freopen("Input.txt", "r", stdin); freopen("Output.txt", "w", stdout);

// using namespace std;
// using ull = uint64_t; //64bit
// typedef long long int ll; //32bit
// typedef vector<int> vi;
// typedef vector<long long> vl;
// typedef map<int, int> mi;
// typedef map<long long, long long> ml;
// typedef pair<ll,ll> pl;
// typedef vector<pl> vpl;
// bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
// ll modpow(ll base, ll pow){ ll res = 1;
//   while(pow){ if(pow&1){ res = (res*base)%mod; pow--;} base = (base*base)%mod; pow /= 2;}
//   return res%mod; }
// ll factorial(ll x){ if(x == 1) return 1; return (x*factorial(x-1))%mod;  }
// bool pairScndElmt(const pair<int, int> &a, const pair<int, int> &b) {
//   if(a.ff == b.ff) a.ss < b.ss;
//   return (a.ff > b.ff);
// }

// ////////////////////* Solution *///////////////////
// void solve(){
//   int n, x, y, z, cnt;
//   cin >> n >> x >> y >> z;
//   vi v1(n+1), v2(n+1), vt(n+1);
//   vector<pair<int, int> > pm, pe,pt;
//   loop(i,1,n+1) {
//     cin >> v1[i];
//     pm.pb(mp(v1[i], i));
//     vt[i] = v1[i];
//   }
//   loop(i,1,n+1) {
//     cin >> v2[i];
//     pe.pb(mp(v2[i], i));
//     vt[i] += v2[i];
//     pt.pb(mp(vt[i],i));
//   }
//   // decending(pm);
//   // decending(pe);
//   // decending(pt);
//   sort(pm.begin(), pm.end(), pairScndElmt);
//   sort(pe.begin(), pe.end(), pairScndElmt);
//   sort(pt.begin(), pt.end(), pairScndElmt);
//   // loop(i,0,n) cout << pm[i].ff << " m " << pm[i].ss <<nl;
//   // loop(i,0,n) cout << pe[i].ff << " e " << pe[i].ss <<nl;
//   // loop(i,0,n) cout << pt[i].ff << " t " << pt[i].ss <<nl;
//   map<int, int> m;
//   vi v;
//   loop(i,0,x){
//     m[pm[i].ss]++;
//     v.pb(pm[i].ss);
//   }
//   loop(i,0,y){
//     if(m[pe[i].ss]){
//       y++;
//       continue;
//     }
//     m[pe[i].ss]++;
//     v.pb(pe[i].ss);
//   }
//   loop(i,0,z){
//     if(m[pt[i].ss]){
//       z++;
//       continue;
//     }
//     m[pt[i].ss]++;
//     v.pb(pt[i].ss);
//   }
//   acending(v);
//   for(auto x: v) cout << x << nl;
// }
// int main()
// {
//   Sajeeb Kumar Ray
//   int i = 1, tc = 1;
//   //cin >> tc;
//   while(tc--){
//     //cout << "Case#" << i++ << " ";
//     solve();
//    // cout << nl;
//   }
//   return 0;
// }
