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
bool flag[100001];
lli x;
vector<lli> vec;
void seive(lli maxN){

    for (lli i = 2; i < maxN; i++){
        if(flag[i] == 0){
            for (lli j = i*i; j < maxN; j += i)
                flag[j] = 1;
        }
    }
    for (lli i = 2; i < maxN; i++){
        if(flag[i] == 0)
            vec.pb(i);
    }
}
void solve(){
    lli m, n;
    cin >> m >> n;
    if (m == 1) m++; // 1 is not a prime number
    lli maxN = n - m + 1;
    vector<lli> ar(maxN, 0);

    for (lli x : vec){
    if (x*x <= n){
        lli i = (m/x) * x;
        if (i < m) i += x;

        for (; i <= n; i += x){

            if (i != x)
                ar[i-m] = 1;
        }
    }}
    for (lli i = 0; i < maxN; i++)
        if(ar[i] == 0)
            cout << m + i << endl;
}
int main()
{
    faster;
//    file_i_o;
    seive(100000);
    int t;
    cin >> t;
    while(t--){

    solve();
    cout << endl;
    }
    return 0;
}

