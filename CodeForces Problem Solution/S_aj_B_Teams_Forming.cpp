#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int i, n;
    cin >> n;
    int *ar;
    ar = new int[n];
    for (i = 0; i < n; i++)
        cin >> ar[i];
    sort (ar, ar+n);
    int result = 0;
    for (int i = 0; i < n-1; i += 2)
    {
        if (ar[i] != ar[i+1])
            result += abs(ar[i] - ar[i+1]);
    }
    cout << result << endl;

    return 0;
}
