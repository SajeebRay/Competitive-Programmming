#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t, n, q;
    float s = 0;
    cin >> t;
    while (t--){
        cin >> n >> q;
        if (n == 1001)
            s += 1.50 * q;
        else if (n == 1002)
            s += 2.50*q;
        else if (n == 1003)
            s += 3.50 * q;
        else if (n == 1004)
            s += 4.50 * q;
        else if (n == 1005)
            s += 5.50 * q;
    }
    cout << fixed << setprecision(2) << s << endl;

    return 0;
}
