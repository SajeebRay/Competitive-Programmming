#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int i;
    for (i = 0 ; i < t; i++)
    {
        int n, k, l;
        cin >> n >> k;
        int *arr;
        arr = new int[n];
        for (l = 0; l < n; l++)
            cin >> arr[l];
        arr[n-1] += arr[k];
        arr[k] = 0;
        int max = 0, min = arr[0];

        for (l = 0; l < n; l++)
        {
            if (arr[l] > max)
                max = arr[l];
        }
        for (l = 0; l < n; l++)
        {
            if (arr[l] < min)
                min = arr[l];
        }
        cout << (max - min) << endl;
    }

    return 0;
}
