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
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);

    int N, cnt = 0;
    string str;
    cin >> N >> str;

    for (int i = 0; i < N-1; i++){
        if (str[i] != str[i+1])
            cnt++;
    }
    cout << cnt+1 << endl;

    return 0;
}
