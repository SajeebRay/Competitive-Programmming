#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ulli unsigned long long int

using namespace std;

ulli power(ulli, ulli, ulli);
int main()
{
    ulli a, b, c, B;
    int t;
    cout << "Enter test cases. ";
    cin >> t;
    while (t--){
        cout << "Calculate (a/b) % c " << endl;
        cout << "Enter elements ";
        cin >> a >> b >> c;
        int flag = __gcd(b, c);
        if (flag == 1)
            B = power(b, c-2, c);
        cout << B << endl;
        cout << "Answer is: " <<
            ((a % c) *(B % c) % c) << endl;

    }

    return 0;
}
ulli power(ulli a, ulli b, ulli c)
{
    ulli res = 1;
    while (b){
        if (b & 1){
            res = (res% c) * (a%c) % c;
            b--;
        }
        a = (a%c) * (a%c) % c;
        b /= 2;
    }
    return res % c;
}
