#include<iostream>>
#include<vector>
#include<iterator>
#define vi vector<int>
#define endl '\n'
#define ll long long int

using namespace std;

void file_i_o()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef sajeeb
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // sajeeb
}

bool arr[10000001];
vi vec; //this is integer type vector
void sieve()
{
    int maxN = 10000000;
    arr[0] = arr[1] = true;

    for (int i = 2; i*i <= maxN; i++)
    {
        if (!arr[i])
            for (int j = i*i; j <= maxN; j += i)
                arr[j] = true;
    }
    for (int i = 0; i <= maxN; i++)
        if (!arr[i])
            vec.push_back(i);
    /*for (auto x : vec)
        cout << x << " ";
    cout << "\n";*/

}

int main()
{
//    file_i_o();

    int t;
    int n;
    cin >> t;
    sieve();
    while(t--)
    {
        cin >> n;
        cout << vec[n-1] << endl;
    }

    return 0;
}
