//Fibonacci Series using Recursion
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

/****** let's apply dp *****/
lli fibo(lli n){
    lli tebulation[n+1];
    tebulation[0] = 0, tebulation[1] = 1;
    for (int i = 2; i <= n; i++){
        tebulation[i] = tebulation[i-1] + tebulation[i-2];
    }
    return tebulation[n];
}
/** normal form
lli fibo(lli n){
    if (n <= 1)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}*/
int main()
{
    freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
    int i = 3;
    while(i--){
        lli x;
        cin >> x;
        cout << fibo(x) << endl;
    }
    return 0;
}



