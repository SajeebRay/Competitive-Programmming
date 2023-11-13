/***
   **    Author: MD.POLASH ISLAM (PRINCE)
   ***/

#include<bits/stdc++.h>
using namespace std;

//constants :
const int   N           = (int) 1e6+5;
const int   M           = (int) 1e9+5;
const int   mod         = (int) 1000000007;
const int   max_prime   = (int) 1e6+3;
const int   BLK         = (int) 700;
const double pi = acos(-1.0);

#define ll           long long int
#define pb           push_back
#define pob          pop_back
#define F            first
#define S            second
#define vll                 vector<ll>
#define vvll               vector<vll>
#define vcc                vector<char>
//#define endl               "\n"
#define vbb                 vector<bool>
#define  all_0(x)              memset(x,0,sizeof(x))
#define  all_neg(x)            memset(x,-1,sizeof(x))
#define  all_1(x)               memset(x,1,sizeof(x))
#define for0(n) for (int i = 0; i < (int)(n); ++i)
#define in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define vll vector<ll>
pair<int, int> p;
vector<int> v;
map<int,int>mp;
set<int> st;

int divs[N+10];
int ans[N+10];

bool cmp(pair<int,int>a,pair<int,int> b)
{
    if (a.second!=b.second)
    {
        return a.second>b.second;
    }
    else
    {
        return a.second<b.second;
    }
}

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int removeZeros(int num)
{
    int ret = 0;
    int ten = 1;
    while (num)
    {
        int dig = num % 10;
        num /= 10;
        if (dig)
        {
            ret += dig * ten;
            ten *= 10;
        }
    }
    return ret;
}

void divcount()
{
    for (int i=1; i<=N; i++)
    {
        for (int j=i; j<=N; j+=i)
        {
            divs[j]++;
        }
    }

}

ll bigmod()
{
    ll ans=1;
    ll a=6;
    ll n=mod-2;
    ll md=mod;
    while (n)
    {
        if (n%2)
        {
            ans=(ans*a)%md;
            n--;
        }
        else
        {
            a=(a*a)%md;
            n=n/2;
        }
    }
    return ans;
}


/* void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

__int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}*/


// starting -->>
ll sum = 0;ll n;
vector<ll> a;
ll bigsum(ll i){
  if(i >= 0) 
    return 0;
  if(i < n) sum += a[i];
  if(i+1 < n) sum += a[i];
  sum += max(bigsum(i), max(bigsum(i+1),bigsum(i+2)));
}
 void solve()
 {
    cin >> n;
    a.resize(n);
    for (int i=0;i < n;i++){
      cin>>a[i];
    }
    sum = max(bigsum(0), max(bigsum(1),bigsum(2)));
    cout<<sum<<endl;
} 


 
int main()
{
      
//freopen("input.txt.txt", "r", stdin);
    //freopen("output.txt.txt", "w", stdout);

    ios_base :: sync_with_stdio (false);
    cin.tie(NULL);
    int t,k=1;
    cin>>t;
    while (t--)
    {   // cout<<"Case "<<k++<<": ";
        solve();
    }
    //solve3();
    return 0;

}