#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0, f = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        if (i == 0 && input == -1)
            c++;
        else if (input >= 1)
            f = f + input;
        else if (input == -1)
        {
            if (f == 0)
                c++;
            else
                f--;
        }
    }
    cout << c;

    return 0;
}
