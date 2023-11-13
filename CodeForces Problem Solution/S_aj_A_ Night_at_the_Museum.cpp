#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int flag = 97;
    int moves = 0;

    for (int i = 0; i < len; i++)
    {
        int walks = abs(flag - str[i]);
        if (walks < 13) // 26/2 = 26
            moves += walks;
        else
            moves += 26 - walks;
            flag = str[i]; // for next starting
    }
    cout << moves;

    return 0;
}
