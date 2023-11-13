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
lli hcf(lli n1, lli n2){
    if (n2 > n1)
        return hcf(n2, n1);
    else if (n2 != 0)
        return hcf(n2, n1%n2);
    else
        return n1;
}
void solve(){
    lli x, y;
    cin >> x >> y;
    lli h = hcf(x, y);
    int cnt = 0;
    for (lli i = 1; i*i <= h; i++){
        if (h%i == 0){
            cnt++;
            if ((h/i) != i){
                cnt++;
            }
        }
    }


    cout << cnt << endl;
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

