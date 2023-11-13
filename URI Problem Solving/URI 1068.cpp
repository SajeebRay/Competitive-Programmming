
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    while(getline(cin, str))
    {

        int l = str.length();
        int identify[2] = {0, 0};
        int flag = 1;
        for (int i = 0; i < l; i++)
        {
            if (str[0] == ')' || str[0] == '*' || str[0] == '/' ||
                    str[l-1] == '+' || str[l-1] == '-' ||
                    str[l-1] == '*' || str[l-1] == '/' || str[l-1] == '(' )
            {
                flag = 0;
                break;
            }
            if (identify[0] == identify[1])
            {
                if (str[i] == ')' )
                {
                    flag = 0;
                    break;
                }
            }
            if ((str[i] == '+' && str[i+1] == '+' && i != 0) ||
                    (str[i] == '-' && str[i+1] == '-' && i != 0) ||
                    (str[i] == '*' && str[i+1] == '*') ||
                    (str[i] == '/' && str[i+1] == '/'))
            {
                flag = 0;
                break;
            }
            if (str[i] == '(' )
                identify[0]++;
            else if (str[i] == ')' )
                identify[1]++;
        }
        if ((identify[0] == identify[1]) && flag == 1)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }

    return 0;
}
