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

	int t , para, bara;
	int arra[4];
	string str;
	cin >> t;
	while(t--){
        cin >> str;
        REP(i, 4) arra[i] = 0;
        int len = str.length();
        for (int i = 0; i < len; i++){
            if (str[i] == '(') arra[0]++;
            else if (str[i] == ')'){
                if(arra[0]){
                    arra[1]++;
                    arra[0]--;
                }
            }
            else if (str[i] == '[') arra[2]++;
            else if(str[i] == ']'){
                if(arra[2]){
                    arra[3]++;
                    arra[2]--;
                }
            }
        }

        cout << arra[1]+arra[3] << endl;
	}

    return 0;
}
