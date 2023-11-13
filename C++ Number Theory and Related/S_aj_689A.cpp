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
#define ulli unsigned long long int
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

    int t, n, k, flag, ex, elsee;
    string str = "abc";
    cin >> t;
    while(t--){
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cout << str[i%3];
        cout << endl;
    }

    return 0;
}
