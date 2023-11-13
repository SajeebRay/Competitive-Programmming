#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++)
        str[i] = tolower(str[i]);
    sort(str.begin(), str.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[i+1])
            count++;
    }
    if (count == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
