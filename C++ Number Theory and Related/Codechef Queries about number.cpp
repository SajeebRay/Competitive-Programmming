// map and pair
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
map<lli, lli> mp;
lli total = 1;
void factorize(lli N){
    lli cnt;
    for(lli i = 2; i*i <= N; i++){
        cnt = 0;
        while(N%i == 0){
            cnt++;
            N /= i;
        }
        if (cnt > 0){
            mp[i] = cnt;
            total *= cnt+1;
        }
    }
    if (N > 1){
        mp[N] = 1;
        total *= 2;
    }
}
void solve(){
    lli t, k;
    lli totalCmn = 1, cnt;
    cin >> t >> k;
    if (t == 1){
        for (auto x : mp){
            cnt = 0;
            while (k % x.first == 0){
                cnt++;
                k /= x.first;
            }
            if(cnt > 0)
                totalCmn *= min(cnt, x.second) + 1;
        }
        cout << totalCmn << endl;
    }
    else if(t == 2){
        lli res = 1;
        for (auto x : mp){
            cnt = 0;
            while (k % x.first == 0){
                cnt++;
                k /= x.first;
            }
            if (x.second < cnt){
                res = 0;
                break;
            }
            res *= (x.second - cnt + 1);
        }
        if (k > 1){
            res = 0;
        }
        cout << res << endl;
    }
    else{
        lli res = 1;
        for (auto x : mp){
            cnt = 0;
            while (k % x.first == 0){
                cnt++;
                k /= x.first;
            }
            if (x.second < cnt){
                res = 0;
                break;
            }
            res *= (x.second - cnt + 1);
        }
        if (k > 1){
            res = 0;
        }
        cout << total - res << endl;
    }
}
int main()
{
    faster;
//    file_i_o;
    lli n, q;
    cin >> n >> q;
    factorize(n);

    while(q--){

        solve();

    }
    return 0;
}

