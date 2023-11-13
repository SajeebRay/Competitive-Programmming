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
vector<long long> phi(1000001, 0);
void init(long long maxN){
    for (long long i = 1; i < maxN; i++)
        phi[i] = i;
    for (long long i = 2; i < maxN; i++){
        if (phi[i] == i){
            for (long long j = i; j < maxN; j += i){
                phi[j] /= i;
                phi[j] *= (i-1);
            }
        }
    }
}
int main()
{
    faster;
//    file_i_o;

    init(1000000);

    int t;
    cin >> t;
    while(t--){

        long long n;
        cin >> n;
        cout << phi[n] << endl;

    }
    return 0;
}
