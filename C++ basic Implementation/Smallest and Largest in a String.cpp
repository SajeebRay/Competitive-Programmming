#include<iostream>
#include<cstring>

using namespace std;

void findMaxMin(string str, string &minStr, string &maxStr)
{
    int len = str.length();
    int i = 0, j = 0;
    int maxLen = 0, maxSt = 0, minSt = 0, minLen = len;

    while (str)
    {
        if (i < len && str[i] != ' ')
            i++;
        else
        {
            int lenth = i - j;
            if (lenth > maxLen)
            {
                maxLen = lenth;
                maxSt = j;
            }
            if (lenth < minLen)
            {
                minLen = lenth;
                minSt = j;
            }
            i++;
            j = i;
        }
    }
    cout << "max: " << maxLen << " " << maxSt << "min is: " << minLen << minSt;
    minStr = str.substr(minSt, minLen);
    maxStr = str.substr(maxSt, maxLen);
    //cout << minStr << maxStr;
}
int main()
{
    string str, strMin, strMax;
    getline(cin, str);
    findMaxMin(str, strMin, strMax);
    cout << strMin << endl;
    cout << strMax << endl;

    return 0;
}

