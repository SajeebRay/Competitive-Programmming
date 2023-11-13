#include<iostream>

using namespace std;

int main()
{
    int n, h, cnt = 0;
    cin >> n >> h;
    int arra[1001];
    for (int i = 0; i < n; i++)
        cin >> arra[i];
    for (int i = 0; i < n; i++){
        if (arra[i] > h){
            while (arra[i] > h){
                cnt++;
                arra[i] -= h;
            }
            cnt++;
        }
        else cnt++;
    }
    cout << cnt << endl;

    return 0;
}
