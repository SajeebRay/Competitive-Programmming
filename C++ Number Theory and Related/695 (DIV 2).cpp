
/** //Problem A
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
#include<cmath>
#define lli long long int
#define lli long long int
#define mod 10000007
#define REP(i, n) for (int i = 1; i <= n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator

using namespace std;

int vec[200005];
int main()
{

//	freopen("Input.txt", "r", stdin);
//	freopen("Output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n, t;
	cin >> t;
	vi vec;
	vit it;
	REP(i, t){
        cin >> n;
        vec[n] = 9 - ((n - 1) % 9);
        vec.push_back(n);
        sort(vec.begin(), vec.end());
        it = vec.begin();
        for (int j = 1; j <= i; j++){
            cout << arra[*it];
            it++;
        }
        cout << endl;
	}
    return 0;
}
*/
/** //Problem B
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
    int cnt, flag;
    vi vec;
    vit it;
	cin >> t;
	while (t--){
            cnt = flag = 0;
        lli x;
        cin >> n;
        REP(i, n){
            cin >> x;
            vec.push_back(x);
        }
        //int i = 0;
        REP(i, n-1){
            if (vec[i] < vec[i+1] && vec[i+1] > vec[i+2]){
                cnt++;
                if (vec[i] < vec[i+1] && vec[i+1] > vec[i+2] &&
                    vec[i+2] < vec[i+3] && vec[i+3] > vec[i+4] && i < n)
                        {
                            flag = 2;
                            if (n%2 == 0 && vec[i+4] < vec[i+5] && i < n) flag = 0;
                        }
                i += 2;
            }
            else if (vec[i] > vec[i+1] && vec[i+1] < vec[i+2]){
                cnt++;
                if (vec[i] > vec[i+1] && vec[i+1] < vec[i+2] &&
                    vec[i+2] > vec[i+3] && vec[i+3] < vec[i+4] && i < n)
                        {
                            flag = 2;
                            if (n%2 == 0 && vec[i+4] > vec[i+5] && i < n) flag = 0;
                        }
                i += 2;
            }
            else i += 2;
        }

        if (cnt == 0) cout << cnt << endl;
        else if (flag == 0) cout << (cnt - 1) << endl;
        else  cout << (cnt - 2) << endl;

        vec.clear();
	}
    return 0;
}
*/

 //Problem C
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
#define lli long long int
#define mod 10000007
#define REP(i, n) for (lli i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator

using namespace std;

int main()
{

//	freopen("Input.txt", "r", stdin);
//	freopen("Output.txt", "w", stdout);
    int x, y, z;
    cin >> x >> y >> z;
    vi v1, v2, v3;
    int a;
    REP(i, x) {
        cin >> a;
        v1.push_back(a);
    }
    REP(i, y) {
        cin >> a;
        v2.push_back(a);
    }
    REP(i, z) {
        cin >> a;
        v3.push_back(a);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    while(y--){
        v1[0] -= v2[y];
        v2.erase(v2.begin() + y);
    }
    if (x <= z){
        while(z--){
            v1[0] -= v3[z];
            v3.erase(v3.begin() + y);
        }
        cout << v1[0] << endl;
    }
    else if (x > z){
        while(x--){
            v3[0] -= v1[z];
            v1.erase(v1.begin() + y);
        }
        cout << v3[0] << endl;
    }
    return 0;
}

