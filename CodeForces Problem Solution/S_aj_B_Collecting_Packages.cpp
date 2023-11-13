#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int **arr = new int*[n];
        arr[0] = new int[2];
        arr[1] = new int[2];

        for (int j = 0; j < n; j++)
            for (int k = 0; k < 2; k++)
                cin >> arr[j][k];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < 2; k++)
                cout << arr[j][k] << " ";
            cout << endl;
        }

    }

    return 0;
}
