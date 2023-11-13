#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
    string dd, mm, yy;
    string s;cin >> s;
    /*char ch;
    stringstream ss;

    ss << s;
    ss >> dd >> ch >> mm >> ch >> yy;*/
    cout << s[3] << s[4] << "/" << s[0] << s[1] << "/" << s[6] << s[7] << endl;
    cout << s[6] << s[7] << "/" << s[3] << s[4] << "/" << s[0] << s[1] << endl;
    cout << s[0] << s[1] << "-" << s[3] << s[4] << "-" << s[6] << s[7] << endl;

    return 0;
}
