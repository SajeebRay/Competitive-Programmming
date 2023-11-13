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
#define ff first
#define ss second
#define decending(a) sort(a.rbegin(), a.rend())
#define acending(a) sort(a.begin(), a.end())
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
ll modpow(ll base, ll pow){ ll res = 1;
  while(pow){ if(pow&1){ res = (res*base)%mod; pow--;} base = (base*base)%mod; pow /= 2;}
  return res%mod; }
ll factorial(ll x){ if(x == 1) return 1; return (x*factorial(x-1))%mod;  }
bool pairScndElmt(const pair<int, int> &a, const pair<int, int> &b) {return (a.second<b.second);}

////////////////////* Solution *///////////////////
void solve(){
  ll n, czf = -1;
  cin >> n;
  vl v(n);
  loop(i,0,n){
    cin>> v[i];
    if(v[i]%10 == 5){
      czf = 1;
      v[i] += 5;
    }
    else if(v[i]%10 == 0) czf = 1;
    else if(v[i]%10 == 1) v[i] += 1;
    else if(v[i]%10 == 3) v[i] += 9;
    else if(v[i]%10 == 4) v[i] += 18;
    else if(v[i]%10 == 6) v[i] += 6;
    else if(v[i]%10 ==7) v[i] += 25;
    else if(v[i]%10 == 8) v[i] += 14;
    else if(v[i]%10 == 9) v[i] += 23;
  }
  if(czf != -1){
    loop(i,1,n)
      if(v[i] != v[i-1]){
        cout << "No";
        return;
      }
  }
  loop(i,0,n-1){
    if(abs(v[i]-v[i+1])%20 != 0){
      cout << "No";
      return;
    }
  }
  cout << "Yes";
}
int main()
{
  //In
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