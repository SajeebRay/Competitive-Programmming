#include<iostream>
#define endl '\n'

using namespace std;

int main()
{
    int t, k, d, j, c, arr[101];
    cin >> t;
    while(t--){
        cin >> j;
        for (int i = 0; i < j; i++)
            arr[i] = i+1;
        cout << j << endl;
        c = k = j;
        d = 0;
        while (c--){
            cout << k << endl;
            for (int x = 1; x <= k; x++){
                cout << x << " ";
                cout << arr[d%k] << " ";
                d++;
                cout << arr[d%k] << endl;
            }
            d++;
        }
    }
    return 0;
}
