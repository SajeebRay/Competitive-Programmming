#include<iostream>
#define lli long long

using namespace std;

int main()
{
    int t;
    lli i, j, n, cnt;
    cin >> t;
    while (t--){
            cnt = 0;
        cin >> n;
        while (n > 1){
            if (n == 3){
                cnt = cnt + 2;
                n = 1;
            }
            while (n % 2 == 0){
                n /= 2;
                cnt++;
            }
            for (i = 3; i <= n; i++){
                if (n % i == 0){
                    n /= i;
                    cnt++;
                }
            }
            if ((n % 2 == 1) && (n > 1)){
                cnt++;
                n--;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
