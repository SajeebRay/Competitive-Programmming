#include<iostream>
#define lli unsigned long long int

using namespace std;

int main()
{
    lli res;
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        res = 1;
        for (int i = 1; i <= n; i++){
            res *= 2;
        }
        if(n == 64)
            cout << "1537228672809129 kg\n";
        else
            cout << res/12000 << " kg\n";
    }

    return 0;
}
