#include<iostream>
#define ulli unsigned long long int

using namespace std;

ulli fac(int n)
{
    if (n <= 1)
        return 1;
    else
        return (n * fac(n-1));
}
int main()
{
    int m, n;

    while((cin >> m >> n))
    {
        ulli sum;
        sum = fac(m) + fac(n);
        cout << sum << "\n";
    }

    return 0;
}
