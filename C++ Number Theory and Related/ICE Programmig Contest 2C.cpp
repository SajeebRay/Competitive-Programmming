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
    int cnt, t, flag;
    string str2, str3;
    cin >> t;
    while (t--){
        cin >> str;
        str2 = str;
        reverse(str2.begin(), str2.end());
        flag = 1;
        cnt = 0;
        if (str2 != str)
            cout << str << endl;
        else {
            int len = str.length();
            if (len == 2)
                cout << -1 << endl;
            else {
                for (int i = 0; i < len; i++){
                    if (str[0] == str[i])
                        cnt++;
                    if (cnt == len){
                        flag = 0;
                    }

                }
                if (flag == 1){
                        for (int i = 0; i < len; i++)
                            cout << str[(i +1) % len];
                        cout << endl;
                    }
                else
                    cout << -1 << endl;
            }
        }
    }
    return 0;
}
