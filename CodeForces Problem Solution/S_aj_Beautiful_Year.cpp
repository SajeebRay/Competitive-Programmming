#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c, d, e;

    while (true)
    {
        a = n+1;

        b = a / 1000;
        c = a/100 %10;
        d = a / 10 %10;
        e = a % 10;

        if (b != c  && b != d && b != e && c != d && c != e && d != e)
        {
            break;
        }
        n = a;
    }
    cout << a << endl;

    return 0;
}
