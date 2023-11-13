//Fibonacci Series using Recursion
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

/****** lel's apply dp*****/
lli memory[100005];
lli fibo(lli n){
    if(memory[n] == 0){
        if (n <= 1)
            memory[n] = n;
        else
            memory[n] = fibo(n-1) + fibo(n-2);
    }
    return memory[n];
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
    while(1){
        lli x;
        cin >> x;
        cout << fibo(x) << endl;
    }
    return 0;
}


