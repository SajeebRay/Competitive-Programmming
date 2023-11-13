#include<iostream>
#define lli long long int

using namespace std;

int main()
{
//    freopen("Input.txt", "r", stdin);
//    freopen("Output.txt", "w", stdout);
    int t;
    lli L1, R1, L2, R2;
    cin >> t;
    while (t--){
        cin >> L1 >> R1 >> L2 >> R2;
        if (L1 == L2 && L2 < R2)
            cout << L1 << " " << L2 + 1  << endl;
        else if (L1 == L2 && L2 == R2)
            cout << L1 - 1 << " " << L2  << endl;
        else
            cout << L1 << " " << L2  << endl;
    }
    return 0;
}
