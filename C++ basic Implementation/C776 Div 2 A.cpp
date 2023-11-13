#include<iostream>
#include<iterator>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        int resul = a^b;

        cout << resul << endl;
    }

    return 0;
}
