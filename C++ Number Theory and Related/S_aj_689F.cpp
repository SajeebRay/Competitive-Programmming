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
/*****************    wrong answer         **********/
int main()
{
//	freopen("Input.txt", "r", stdin);
//	freopen("Output.txt", "w", stdout);
    int n;
    int flag = 1;
    cin >>n;
    int *arra;
    arra = new int[n];
    string str;
    for (int i = 0;i < n; i++)
        cin >> arra[i];
    cin >> str;
    int len = str.length();
    if (len == 1){
        for (int i = 0 ; i < n-1; i++){
            cout << arra[i] << str[0];
        }
        cout << arra[n-1];
    }
    else{
        for (int i = 0 ; i < n; i++){
            cout << arra[i];
            if (i < n-1){
                if ((arra[i] >= 1 && arra[i+1] == 1)||
                    (arra[i] == 1 && arra[i+1] >= 1)){
                    for (int x = 0; x  < len; x++){
                        if(str[x] == '*')
                            {
                                cout << "*";
                                flag = 0;
                                break;
                            }
                    }
                    if (flag == 1)
                        for (int x = 0; x  < len; x++){
                            if(str[x] == '+'){
                                cout << "+";
                                break;
                            }
                        }
                    else if (flag == 1)
                        cout << "-";

                }
               else if (arra[i] == 1 && arra[i+1] == 1){
                    for (int x = 0; x  < len; x++){
                        if(str[x] == '+')
                            {
                                cout << "+";
                                flag = 0;
                                break;
                            }
                    }
                    if (flag == 1)
                        for (int x = 0; x  < len; x++){
                            if(str[x] == '*'){
                                cout << "*";
                                break;
                            }
                        }
                    else if (flag == 1)
                        cout << "-";
                }
                else{
                    for (int x = 0; x  < len; x++){
                        if(str[x] == '+')
                            {
                                cout << "+";
                                flag = 0;
                                break;
                            }
                    }
                    if (flag == 1)
                        for (int x = 0; x  < len; x++){
                            if(str[x] == '-'){
                                if (arra[i] > arra[i+1])
                                    cout << "-";
                                else
                                    cout << "*";
                                break;
                            }
                        }
                }

            }
            flag = 1;
        }
    }
    return 0;
}
