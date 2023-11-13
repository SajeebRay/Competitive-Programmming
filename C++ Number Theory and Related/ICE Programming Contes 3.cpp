#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<utility>
#include<iterator>
#include<algorithm>
#include<cstdlib>
#define lli long long int
#define mod 10000007
#define REP(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator

using namespace std;

int main()
{
//	freopen("Input.txt", "r", stdin);
//	freopen("Output.txt", "w", stdout);

    int t, n, arra[101], sum, mul, flag;
    cin >> t;
    while(t--){
            int cnt = 0;
            sum = 0;
            mul = 1;
        cin >> n;
        REP(i, n) cin >> arra[i];
        REP(i, n){
            if (arra[i] == 0){
                arra[i]++;
                cnt++;
            }
        }
        while(1){
            REP(i, n){
                sum += arra[i];
            }
            if (sum != 0)
                break;
            else{
                if (arra > 0)
                    arra[0]++;
                else
                    arra[0]--;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
