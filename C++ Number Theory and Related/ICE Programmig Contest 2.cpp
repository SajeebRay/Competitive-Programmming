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

    string str;
    int cnt = 0, cntR = 0, cntL = 0;
    cin >> str;
    int len = str.length();
    REP(i, len){
        if (str[i] == 'R' && ((i+1) % 2 != 1))
        {
            cout << "No" << endl;
                exit(0);
        }
        if (str[i] == 'L' && ((i+1) % 2 != 0))
        {
            cout << "No" << endl;
                exit(0);
        }
    }
    cout << "Yes" << endl;
    return 0;
}
