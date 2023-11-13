#include<iostream>

using namespace std;

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef sajeeb
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // sajeeb
}

int power(int n, int p);
int main()
{
    file_i_o();
    int n, p;
    cin >> n >> p;

    cout << "The largest power of " << p << " that divides " << n << " is! " << power(n, p) << endl;

    return 0;
}
int power(int n, int p)
{
    int res = 0;
    while (n)
    {
        n /= p;
        res += n;
    }
    return res;
}
