#include<iostream>
#define mod 1000000007
#define ulli  long long int

using namespace std;
ulli arraFibo[2][2];
ulli I[2][2];

void mul(ulli, ulli);
void power(ulli, ulli);
void fibo(ulli);
int main()
{
    freopen("Input.txt", "r", stdin);
   freopen("Output.txt", "w", stdout);
    ulli  n;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        if (n == 0)
            cout << 0 << endl;
        else if (n == 1)
            cout << 2 << endl;
        else
            fibo(n+2);
    }
    return 0;
}
void mul(ulli A[][2], ulli B[][2])
{
    ulli res[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            res[i][j] = 0;
            for (int k = 0; k < 2; k++){
                ulli x =  A[i][k] * B[k][j] % mod;
                res[i][j] = res[i][j] + x;
            }
        }
    }
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            A[i][j] = res[i][j];
}
void power(ulli arraFibo[][2], ulli n)
{
    I[0][0] = I[1][1] = 0;
    I[0][1] = I[1][0] = 1;
    arraFibo[0][0] = 0;
    arraFibo[0][1] = arraFibo[1][0] = arraFibo[1][1] = 1;

    while(n){
        if (n & 1){
            mul(I, arraFibo);
            n--;
        }
        else{
            mul(arraFibo, arraFibo);
            n /= 2;
        }
    }
}
void fibo(ulli n)
{
    power(arraFibo, n);
    cout << (I[0][0] + I[1][0]) % mod << endl;
}
