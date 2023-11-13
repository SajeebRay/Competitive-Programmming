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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, arra[3], cnt, flag;
	lli num;
	cin >> t;
	while(t--){
            flag = 0;
        cin >> num;
        int num2=num;
        cnt = arra[0] = arra[1] = arra[2] = 0;
        for (lli i = 2; i*i <= num2; i++){
            if (num2%i == 0){
                arra[cnt] = i;
                cnt++;
                num2/=i;
            }
            if (cnt == 2){
                arra[2] = num / (arra[0] * arra[1]);
                break;
            }
        }
        if (cnt<2 || arra[0] == arra[1] || arra[0] == arra[2] ||
             arra[1] == arra[2] || arra[2] == 1)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            REP(i, 3) cout << arra[i] << " ";
            cout << endl;
        }
	}

    return 0;
}
