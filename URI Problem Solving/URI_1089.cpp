#include<iostream>
using namespace std;
int main()
{
    int t, ar[10004];
    cin >> t;

    while(t != 0){
        for (int i = 0; i < t; i++)
            cin >> ar[i];

        int cnt = 0;
        for (int i = 0; i < t; i++){

            if (ar[i] > ar[(i+1) % t])
                if (ar[(i+1) % t] < ar[(i+2) % t])
                    cnt++;

            if (ar[i] < ar[(i+1) % t])
                if (ar[(i+1) % t] > ar[(i+2) % t])
                    cnt++;
        }
        cout << cnt << endl;
        cin >> t;
    }

    return 0;
}
