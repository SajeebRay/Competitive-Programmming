#include<iostream>
#define ll long long
//#define endl '\n'

using namespace std;

void file_i_o()
{
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);

}
inline ll modPow(ll a, ll b, ll c)
{
     ll result = 1;
     a %= c;
     while (b > 0){
         if (b & 1){
            result = result * a % c;
            b--;
         }
         a = a * a % c;
         b /= 2;
     }
     return result % c;
}
int main()
{
    file_i_o();
    ll x, y, z;
    while (cin >> x >> y >> z)
        cout << modPow(x, y, z) << endl;

    return 0;
}
