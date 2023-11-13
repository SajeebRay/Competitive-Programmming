#include<iostream>

using namespace std;

int main()
{
    string s;
    for (int i = 1; i <= 10; i++)
    {
        cin >> s;
        if (i == 3 || i == 7 || i == 9)
            cout << s << endl;
    }

    return 0;
}
