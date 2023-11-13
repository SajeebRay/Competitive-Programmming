#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int i, l = s.length();

    while (l >= 0){
        if (s[i] >= '0' && s[i] <= '9')
            cout << s[i];
        else
            cout << endl;
        i++;
        l--;
    }

    return 0;
}
