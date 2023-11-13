
#include<bits/stdc++.h>
#define pb push_back()

using namespace std;

int main()
{
    int t, n, sum, sumOdd;
    cin >> t;
    while(t--){
        sum = 0;
        sumOdd = 0;
        cin >> n;
        if (n%2 != 0 || ((n/2)%2 != 0))
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for (int i = 1, j = 2; i <= n/2; i++, j += 2){
                cout << j << " ";
                sum += j;
            }
            for (int i = 0, k = 1; i < (n/2)-1; i++, k += 2){
                cout << k << " ";
                sumOdd += k;
            }
            cout << sum - sumOdd << endl;
        }
    }
    return 0;
}
