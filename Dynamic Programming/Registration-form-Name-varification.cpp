/*
    Athor: Sajeeb Kumar Ray
    verdict ok, if the name is first time for the server
    Input:
6
first
first
second
second
third
third
    Output:
OK
first1
OK
second1
OK
third1
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    int tt, n;
    cin >> tt;
    string s;
    map<string, int> mp;
    map<string, int>:: iterator it;
    int i = 0;
    while(tt--){
        cin >> s;
        mp[s]++;
        if(mp[s] > 1)
            cout << s << mp[s]-1 << endl;
        else
            cout << "OK" << endl;
    }

    return 0;
}
