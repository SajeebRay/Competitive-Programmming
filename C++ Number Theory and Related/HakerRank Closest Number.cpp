#include<iostream>
#include<cmath>
#define lli long long int
using namespace std;

/*lli closestNumber(lli a, lli b, lli x) {
    lli res = 1;
    if (b < 0)
        return 0;
    while (b){
        if (b&1){
            res *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    res += (x/2);
    if (res < x)
        return 0;
    lli m = res % x;

    return res - m;
}*/
int main()
{
//    freopen("Input.txt", "r", stdin);
//    freopen("Output.txt", "w", stdout);

    lli t, a, b, c;
    cin >> t;
    while (t--){
        cin >> a >> b >> c;
        unsigned long long int d = pow(a, b) + c/2;
        cout << d - (d % c) << endl;
    }
}
