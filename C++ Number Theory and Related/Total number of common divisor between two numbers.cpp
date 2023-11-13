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
vector<lli> devisor;
int ncnt[10004];
int index = 0;
void devisorOfN(lli N){

    if(N%2 == 0){
        devisor.pb(2);
        while(N%2 == 0){
            ncnt[0]++;
            N /= 2;
        }
        index++;
    }
    for (lli i = 3; i*i <= N; i += 2){
        if(N%i == 0){
            devisor.pb(i);
            while(N%i == 0){
                ncnt[index]++;
                N /= i;
            }
            index++;
        }
    }
    if(N > 1){
        devisor.pb(N);
        ncnt[index]++;
        index++;
    }
    for (auto x : devisor)
        cout << x << endl;
    for (int i = 0; i < index; i++)
        cout << ncnt[i] << " ";

}
void solve(){
    lli num;
    cin >> num;
    int j = 0, cnt;
    int numcnt[10004];
    for (int i = 0; i < 10004; i++)
        numcnt[i] = 0;
    for (auto x : devisor){
        cnt = 0;
        if (num%x == 0){
            while(num%x == 0){
                cnt++;
                num /= x;
            }
            if (cnt <= ncnt[j]) //if count of divisor is greater main number
                numcnt[j] = cnt;
            else
                numcnt[j] = ncnt[j];
        }
        j++; //go to next divisor
    }
    cout << endl;
    for (int i = 0; i < index; i++)
        cout << numcnt[i] << " ";
}
int main()
{
    faster;
    file_i_o;
    lli N, t;
    cin >> N >> t;
    devisorOfN(N);
    while(t--){

    solve();

    }
    return 0;
}

