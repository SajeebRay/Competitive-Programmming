//Problem B
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n, k;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> k;
        long long int w = n, x = 1;
        for (int j = 0; j < k; j++)
        {
            if (w == 1) w = n;
            else w--;

            if (x == n) x = 1;
            else x++;

            if (x == w && x == n) x = 1;
            else if (x == w) x++;
        }
        cout << x << endl;
    }
    return 0;
}
