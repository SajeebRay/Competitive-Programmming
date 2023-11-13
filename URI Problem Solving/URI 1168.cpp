#include<iostream>
#include<string>
#define ulli unsigned long long

using namespace std;

int main()
{
    ulli cnt;
    string str;
    int t;
    cin >> t;
    while (t--){
        cnt = 0;
        cin >> str;
        int l = str.length();
        for (int i = 0; i < l; i++){
            switch(str[i]){
            case 48:
                cnt += 6;
                break;
            case 49:
                cnt += 2;
                break;
            case 50:
                cnt += 5;
                break;
            case 51:
                cnt += 5;
                break;
            case 52:
                cnt += 4;
                break;
            case 53:
                cnt += 5;
                break;
            case 54:
                cnt += 6;
                break;
            case 55:
                cnt += 3;
                break;
            case 56:
                cnt += 7;
                break;
            case 57:
                cnt += 6;
                break;
            }
        }
    cout << cnt << " leds\n";
    }

}
