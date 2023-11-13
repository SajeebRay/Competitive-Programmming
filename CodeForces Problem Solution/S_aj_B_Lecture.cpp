#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void findMin(string input, string &small)
{
    int len = input.length();
    int i = 0, j = 0;
    int minSt = 0, minLen = len;
    int lenth;

    while (i <= len)
    {
        if (i < len && input[i] != ' ')
            i++;
        else
        {
            lenth = i - j;
            if (lenth < minLen)
            {
                minLen = lenth;
                minSt = j;
            }
            i++;
            j = i;
        }
    }
    small = input.substr(minSt, minLen);
}
int main()
{
    int m, n, index = 0;
    cin >> m >> n;
    string str[m];

    for (int i = 0; i < n; i++)
    {
        string lec;
        getline(cin, lec);
        string word;
        findMin(lec, word);

        str[index] = word;
        index++;
    }
    for (int i = 0; i < m; i++)
        cout << str[i] << " ";

    return 0;
}
