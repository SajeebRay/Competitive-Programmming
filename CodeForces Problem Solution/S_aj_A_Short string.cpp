#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        string str;
        cin >> str;
        int l = str.length();
        if (l > 2)
        {
            cout << str[0];
            for (int i = 1; i < l-1; i = i+2)
                cout << str[i];
            cout << str[l-1];
        }
        else
            cout << str;
        cout << endl;

    }

    return 0;
}
