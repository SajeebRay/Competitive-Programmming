#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string str = "asdfghjASDFGH FGHgh";
    cout <<str << endl;

    int l = str.length();
    for (int i = 0; i < l; i++)
        str[i] = toupper(str[i]);
    cout <<str << endl;

    for (int i = 0; i < l; i++)
        str[i] = toupper(str[i]);
    cout <<str << endl;

    sort(str.begin(), str.end());
    cout <<str << endl;

    char *ch;
    ch = max(str, str + (l-1));
    cout << *ch;
}
