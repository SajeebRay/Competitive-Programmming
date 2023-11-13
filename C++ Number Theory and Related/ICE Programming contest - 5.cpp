
// B t-prime

#include<bits/stdc++.h>

using namespace std;
using ull = uint64_t;
const ull maxN = 1000006;
vector<bool> isPrime(maxN, true);

void sieve()
{
    isPrime[1] = isPrime[0] = false;
    for(ull i = 2; i*i <= maxN; i++){
        if (isPrime[i]){
            for(ull j = i*i; j <= maxN; j += i)
                isPrime[j] = false;
        }
    }
}
void check_prime(ull n)
{
    ull m = sqrt(n);
    if (m*m == n && isPrime[m] == true)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    sieve();
    ull x, tt;
    cin >> tt;
    while(tt--){
        cin >> x;
        check_prime(x);
    }
    return 0;
}
