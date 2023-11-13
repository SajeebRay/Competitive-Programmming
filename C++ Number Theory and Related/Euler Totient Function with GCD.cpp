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
int phi[100001];
void init(int maxN){
    for (int i = 1; i <= maxN; i++){
        phi[i] = i;
    }
    for (int i = 2; i <= maxN; i++){
        if (phi[i] == i){
            for (int j = i; j <= maxN; j += i){
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        }
    }
}
int getcount(int n, int d){
    return phi[n/d];
}
void solve(){
    //Find the sum of all GCD 1 to N with N
    int N, d1, d2, res = 0;
    cin >> N;
    for (int i = 1; i*i <= N; i++){
        if (N % i == 0){
            d1 = i;
            d2 = N/i;
            res += d1 * getcount(N, d1);
            if (i*i != N)
                res += d2 * getcount(N, d2);
        }
    }
    cout << res << endl;
}
int main()
{
    faster;
//    file_i_o;
    init(100000);
    int t;
    cin >> t;
    while(t--){

    solve();

    }
    return 0;
}

