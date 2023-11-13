#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr[2];
        cin >> arr[0] >> arr[1];
        if (arr[0] != arr[1]) {
            cout << "Happy Alex";
            exit(0);
        }
    }
        cout << "Poor Alex";

    return 0;
}
