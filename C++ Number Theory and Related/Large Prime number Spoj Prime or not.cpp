#include<bits/stdc++.h>

#define pb push_back
#define lli long long
#define endl '\n'
#define REP(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator
#define pi 3.1415926535
#define faster ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define file_i_o freopen("Input.txt", "r", stdin), freopen("Output.txt", "w", stdout);

using namespace std;
using ui = uint64_t;
lli mulMod(lli a, lli b, lli mod){
    lli x = 0, y = a%mod;
    while(b > 0){
        if (b % 2 == 1)
            x = (x+y) % mod;
        y = (y * 2LL) % mod;
        b /= 2;
     }
     return x % mod;
}
lli binPower(lli a, lli b, lli mod){
    lli res = 1;

    while (b){
        if (b & 1)
            res = mulMod(res, a, mod);
        b >>= 1;
        a = mulMod(a, a, mod);
    }

    return res % mod;
}
bool isprime(lli p, lli iter = 5)
{   if (p <= 4)
        return p == 2 || p == 3;

    for (int i = 0; i < iter; i++){
        lli a = 2 + rand() % (p-3);
        lli res = binPower(a, p-1, p);

        if (res != 1)
            return false;
    }

    return true;
}
void solve(){
    lli n;
    cin >> n;
    if(isprime(n)) cout << "YES" << endl;
    else           cout << "NO" << endl;
}
int main()
{
    faster;
//    file_i_o;
    int t;
    cin >> t;
    while(t--){

    solve();

    }
    return 0;
}
