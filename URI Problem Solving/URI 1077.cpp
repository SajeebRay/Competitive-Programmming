#include<iostream>
#include<stack>
#include<map>

using namespace std;

map<char, int> mp;
void sieve()
{
    mp['-'] = 1;
    mp['+'] = 1;
    mp['/'] = 2;
    mp['*'] = 2;
    mp['^'] = 5;
}
int main()
{
    sieve();
    stack<char> pq;
    string str;
    int t, i, l;
    cin >> t;
    while(t--){
        cin >> str;
        l = str.length();
        for (i = 0; i < l; i++){
            if(isalnum(str[i])) cout<<str[i];

            else if (str[i] == '+' || str[i] == '-' ||
                str[i] == '*' || str[i] == '/' || str[i] == '^'){
                    if (!pq.empty()){
                        while (mp[str[i]] <= mp[pq.top()] ){
                            cout << pq.top();
                            pq.pop();
                            if (pq.empty())
                                break;
                        }
                    }
                    pq.push(str[i]);
            }

            else if (str[i] == '(' )
                pq.push(str[i]);
            else if (str[i] == ')' ){
                while (pq.top() != '(' ){
                    cout << pq.top();
                    pq.pop();
                }
                pq.pop();
            }

        }
        while (!pq.empty()){
            cout << pq.top();
            pq.pop();
        }
        cout << "\n";
    }
    return 0;
}
