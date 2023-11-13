#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string twoGram;
    int c, compare = 0;

    for (int i = 0; i < n-1; i++)
    {
        c = 0;                        //11 GGRRAATTZZZ
        for (int j = 0; j < n-1; j++)
        {
            if ((str[i] == str[j]) && (str[i+1] == str[j+1]))
            {
                c++;
                if (c > compare)
                {
                    compare = c;
                    twoGram = string(1, str[i]) + string(1, str[i+1]);
                }
            }

        }
    }
    cout << twoGram;

    return 0;
}
