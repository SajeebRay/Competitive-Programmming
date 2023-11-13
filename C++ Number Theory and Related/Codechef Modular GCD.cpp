#include<bits/stdc++.h>
#define mod 1000000007
#define lli  long long int
#define REP(i, n) for (lli i = 0; i < n; i++)

using namespace std;

lli power(lli a, lli n, lli d);
lli GCD(lli a, lli b, lli n);
int main()
{
    int t;
    lli a, b, n, gcd;
    cin >> t;
    while(t--){
        cin >> a >> b >> n;
        gcd = GCD(a, b, n);
        cout << gcd << "\n";
    }

    return 0;
}
lli GCD(lli a, lli b, lli n){
    lli candidate = 1;
    lli num = abs(a-b);
    if (a == b)
        return(power(a, n, mod) + power(b, n, mod)) % mod;

    for (lli i = 1; i*i <= num; i++){
        if(num % i == 0){
            lli temp = (power(a, n, i) + power(b, n, i))  % i;

            if (temp == 0)
                candidate = max(candidate, i);
            lli tmp = (power(a, n, num/i) + power(b, n, num/i)) % (num/i);
            if (tmp == 0)
                candidate = max(candidate, num/i);
        }
    }

    return candidate % mod;
}
lli power(lli a, lli n, lli d)
{
    lli reslt = 1;
    while(n){
        if (n % 2){
            reslt = ((a % d) * (reslt % d)) % d;
            n--;
        }
        else{
            a = ((a% d) * (a%d)) % d;
            n /= 2;
        }
    }
    return reslt;
}
