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



 

int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, q;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    vector<ll> pre(n+1, 0);
    for (int i = 0; i < n; i++) {
            int count = __builtin_popcountll(a[i]);
        pre[i+1] = pre[i] +count%2;
    }

    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
       ll even = pre[r] - pre[l-1];
        ll odd = (r - l + 1) - even;
        cout <<odd<<" "<<even << endl;
    }

    return 0;
}