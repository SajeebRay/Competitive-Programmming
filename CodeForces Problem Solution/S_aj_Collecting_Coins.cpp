#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b , c, d;
        cin >> a >> b >> c >> d;
        int x, D, n1 , n2 , n3;
        x = (a + b + c + d) / 3;
        n1 = (x - a);
        n2 = (x - b);
        n3 = (x - c);
        D = n1 + n2 + n3;
        if (D != d )
            cout << "NO" << endl;
        else if (n1 < 0 || n2 < 0 || n3 < 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
