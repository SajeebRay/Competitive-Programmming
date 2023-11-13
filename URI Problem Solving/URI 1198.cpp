#include<iostream>
#define ulli unsigned long long int

using namespace std;

int main()
{
    ulli m, n;

    while((cin >> m >> n)){
        if (m < n){
            ulli temp = m;
            m = n;
            n = temp;
        }
        cout << (m-n) << "\n";
    }

    return 0;
}

