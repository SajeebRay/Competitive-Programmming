#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str, str2 = "CORONA";
    getline(cin, str);
    int word1, word2, word3, len;
    char ch;

    stringstream ss;
    ss << str;
    ss >> word1 >> ch >> word2 >> ch >> word3;

    len = str2.length();
    for (int i = 0; i < len; i++)
    {
        int value = (str2[i] - 'A') + 65;
        int x = word3 % value;
        if ((x + 15) >= 100){
            cout << "CORONA POSITIVE!\n";
            break;
        }
    }
    cout << "CORONA NEGATIVE!\n";

    return 0;
}
