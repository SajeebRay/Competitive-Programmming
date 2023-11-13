#include<bits/stdc++.h>

#define pb push_back
#define lli long long
#define mod 10000007
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
void solve(){
    int n;
    vi vec;
    cin >> n;
    int res, cop;
    res = cop = n;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            vec.pb(i);
            res /= i;
            res *= (i-1);
            while(n % i == 0)
                n /= i;
        }
    }
    if (n > 1){
        res /= n;
        res *= (n-1);
        vec.pb(n);
    }
    cout << "Phi(" << cop << ")= " << res << endl;
    for (auto x : vec)
        cout << x << " ";
    cout << endl;
}
int main()
{
    faster;
    file_i_o;
    int t;
    cin >> t;
    while(t--){

    solve();

    }
    return 0;
}
