#include<iostream>

using namespace std;

int power(int a, int n, int m)
{
    int res = 1;
    while(n){
        if(n&1){
            res = (res%m) * (a%m) % m;
            n--;
        }
        else {
            a = (a%m) * (a%m) % m;
            n /= 2;
        }
    }
    return res % m;
}
int main()
{
    int a, m;
    int t;
    cin >> t;
    while(t--){
        cin >> a >> m;
        cout << "a^m-2 = " << power(a,  m-2, m) << endl;
    }
    return 0;
}
