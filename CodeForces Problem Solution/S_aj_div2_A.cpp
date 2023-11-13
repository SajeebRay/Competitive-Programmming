#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[3];
    int i;
    for (i = 0; i < n; i++)
    {
        a[2] = 0;
        a[1] = 0;
        a[0] = 0;
        int x;
        cin >> x;
            if (x % 7 == 0)
            {
                a[2] = x / 7;
                x = 0;
            }
            else if (x % 5 == 0)
            {
                a[1] = x / 5;
                x = 0;
            }
            else if (x % 3 == 0)
            {
                a[0] = x/3;
                x = 0;
            }
        else
        {
            int z = x / 15;
            x = x % 15;
            a[0] = a[1] = a[2] = z;
            while (x >= 3)
            {
            if (x >= 7)
            {
                a[2]++;
                x = x-7;
            }
            if (x >= 5)
            {
                a[1]++;
                x = x-5;
            }
            if (x >= 3)
            {
                a[0]++;
                x = x-3;
            }
        }
        }
        if (x == 0)
            cout << a[0] << " " << a[1] << " " << a[2] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
