#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, cz = 0, cn = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z')
            cz++;
        else if (s[i] == 'n')
            cn++;
    }
    if (cn != 0)
    {
        for (int i = 0; i < cn; i++)
            cout << "1" << " ";
        if (cz != 0)
        {
            for (int i = 0; i < cz; i++)
                cout << "0" << " ";
        }
    }
    else if (cz != 0)
    {
        for (int i = 0; i < cz; i++)
            cout << "0" << " ";
    }

    return 0;
}
