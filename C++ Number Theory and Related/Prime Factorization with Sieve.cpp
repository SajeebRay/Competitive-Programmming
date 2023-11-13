#include<iostream>
#include<vector>
#include<cmath>
#define REP(i, n) for (int i = 0; i <= n; i++)
#define lli long long
#define vi vector<int>

using namespace std;

vi vec;
int ar[1000001];
void sieve()
{
    int maxN = 1000000;
    for (lli i = 1; i <= maxN; i++)
        ar[i] = -1;
    for (lli i = 2; i <= maxN; i++)
        if (ar[i] == -1)
            for (lli j = i; j <= maxN; j += i)
                if (ar[j] == -1)
                    ar[j] = i;
    /*for (lli i = 0; i < maxN; i++)
        cout << ar[i] << " ";
    cout << "end of arra" << endl;*/

}
void primeFactor(lli n)
{
    lli num;
    while (n > 1){
        num = ar[n];
        vec.push_back(num);
        n = n / num;
    }
}
int main()
{
    sieve();
    lli n;
    while (cin >> n){
        primeFactor(n);
        cout << "Prime factors are: ";
        for (auto x : vec)
            cout << x << " ";
        cout << endl;
        // vec.erase(); for deleting one number
        vec.clear();
        cout << "input another number ";
    }

    return 0;
}
