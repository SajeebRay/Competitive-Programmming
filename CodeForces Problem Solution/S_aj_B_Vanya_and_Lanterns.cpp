#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
    typedef long long ll;
    ll n;
    ll d;
    cin >> n;
    cin >> d;
    ll *arra, *sortAr;
    arra = new ll[n];
    sortAr = new ll[n - 1];

    for (ll i  = 0; i < n; i++)
        cin >> arra[i];
    if (n == 1)
    {
        double x = arra[0] - 0;
        double y = d - arra[0];
        cout << fixed << setprecision(10) << max(x, y);
        exit(0);
    }

    sort(arra, arra + n); // sort first arra
    for (ll i = 0 ;i < n - 1; i++)
        sortAr[i] = arra[i+1] - arra[i]; // distance of every elements

    ll *m;
    m = max_element(sortAr, sortAr + n - 1); // max distance
    double dob = (double)*m / 2;
    double ini = arra[0] - 0; //if first point don't have lentern
    double large = max(dob, ini); // max between them
    double en = d - arra[n-1]; // if last point don't have lentern
    double large2 = max(large, en);
    cout << fixed << setprecision(10) << large2;

    return 0;
}
