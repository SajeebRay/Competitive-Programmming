
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

	char c, d;
	cin >> c >> d;
	int cnt = 0;
	if (c == 'a' || c == 'h')
        cnt++;
	if (d == '1' || d == '8')
        cnt++;
    if (cnt == 0)
        cout << 8 << endl;
    if (cnt == 2)
        cout << 3 << endl;
    if (cnt == 1)
        cout << 5 << endl;

    return 0;
}
