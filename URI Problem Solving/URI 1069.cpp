#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> str;

        int l = str.length();
        int m = 0, n = 0;
        for (int i = 0; i < l; i++)
        {
            if (str[i] == '<')
                m++;
            if (str[i] == '>'){
                if (m > 0){
                    n++;
                    m--;
                }
            }
        }
        cout << n << "\n";
    }

    return 0;
}
