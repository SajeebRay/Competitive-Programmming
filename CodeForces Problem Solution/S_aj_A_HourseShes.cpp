#include<iostream>

using namespace std;

int main()
{
    int a[4], c = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (a[i] == a[i+1])
            c++;
        else if (a[i] == a[i+2])
            c++;
        else if (a[i] == a[i+3])
            c++;
    }
    cout << c << endl;

    return 0;
}
