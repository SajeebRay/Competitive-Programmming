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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    bool flag[d+1];
    REP(i, d+1) flag[i] = 0;

    for (int i = k; i <= d; i += k){
        if(flag[i] == 0)
            flag[i] = 1;
    }
    for (int i = l; i <= d; i += l){
        if(flag[i] == 0)
            flag[i] = 1;
    }
    for (int i = m; i <= d; i += m){
        if(flag[i] == 0)
            flag[i] = 1;
    }
    for (int i = n; i <= d; i += n){
        if(flag[i] == 0)
            flag[i] = 1;
    }
    int cnt = 0;
    for(int i = 0; i <= d+1; i++) if(flag[i]) cnt++;
    cout << cnt << endl;
}
int main()
{
    faster;
//    file_i_o;

    solve();

    return 0;
}
