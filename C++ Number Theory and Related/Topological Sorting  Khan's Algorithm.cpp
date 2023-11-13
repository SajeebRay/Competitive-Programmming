//Problem B
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<numeric>
#include<iterator>
#include<algorithm>
#include<cstdlib>
#define lli long long int
#define lli long long int
#define mod 10000007
#define REP(i, n) for (lli i = 0; i < n; i++)
#define vi vector<long long int>
#define vc vector<char>
#define vit vector<long long int>::iterator
#define vct vector<char>::iterator

using namespace std;

int main()
{

//	freopen("Input.txt", "r", stdin);
//	freopen("Output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t;
	lli x;
	cin >> t;
	while (t--){
        cin >> n >> x;
        vi vec;
        vit it;
        long long int val;
        REP(i, n) {
            cin >> val;
            vec.push_back(val);
        }
        bool flag = 1;
        int cnt = 0;
        while (flag){
            it = vec.begin();
            it += cnt;
            if(*it % x != 0) flag = 0;
            if(*it % x == 0){
                int m = *it/x;
                REP(j, x) vec.push_back(m);
                it++;
            }
            cnt++;
        }
        cout << accumulate(vec.begin(), vec.end(), 0) << endl;
	}
    return 0;
}
