#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
    string s1, s2;

    while (cin >> s1 >> s2)
    {
        cout << "$";
        int L = s1.length();
        int l2 = s2.length();
        int x = L-1;
/************************* need to edit  ***********/
        for (int i = 0; i < L; i++)
        {
            cout << s1[i];
            if (x % 3 == 0 && ((i + 1) != L))
                cout << ",";
            x--;
        }

        if (l2 == 1)
            cout << ".0" << s2[0] << " \n";
        else
            cout << "." << s2[0] << s2[1] << "\n";

    }
    return 0;
}
