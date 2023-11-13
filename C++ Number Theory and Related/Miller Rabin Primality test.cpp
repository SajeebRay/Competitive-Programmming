/// for format's primality test "Large Prime number Spoj Prime or not" open this file
/// https://cp-algorithms.com/algebra/primality_tests.html

#include<bits/stdc++.h>
using namespace std;
using u64 = uint64_t;
using u128 = __uint128_t;
u64 mulMod(int a, u64 d, u64 n){
    u64 x = 0;
    u64 y = d % n;
    while(a){
        if (a & 1)
            x = (x+y) % n;
        y = y*(2LL) % n;
        a /= 2;
    }
    return x;
}
u64 binPower(int a, u64 d, u64 n){
    u64 res = 1;
    while (d){
        if (d&1)
            res = mulMod(res, a, n);
        a = mulMod(a, a, n);
        d /= 2;
    }
    return res;
}
bool checkComposite(u64 n, u64 a, u64 d, int s){
    u64 x = binPower(a, d, n);
    if (x == (n-1) || x == 1)
        return false;
    for (int r = 1; r < s; r++){
        x = (u128)x * x % n;
        if (x == n-1)
            return false;
    }
    return true;
}
bool MillerRabin(u64 n){
    if (n < 2)
        return false;
    u64 d = n - 1;
    int s = 0;
    while ((d & 1) == 0){
        s++;
        d >>= 1;
    }
    for(int a : {2,3,5,7,11,13,17,19,23,29,31,37}){
        if(n == a)
            return true;
        if(checkComposite(n, a, d, s))
            return false;
    }
    return true;
}
int main()
{
    u64 n;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        if(MillerRabin(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
