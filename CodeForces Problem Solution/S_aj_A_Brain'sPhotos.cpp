#include<iostream>

using namespace std;

int main()
{
    char arr[100][100];
    int m, n;
    cin >> m >> n;

    //arr = new char*[m];
    //for (int i = 0; i < m; i++)
       // arr[m] = new char[n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int c = 0, b = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 'W' || arr[i][j] == 'B' || arr[i][j] == 'G')
                b++;
            else if (arr[i][j] == 'Y' || arr[i][j] == 'M' || arr[i][j] == 'C')
                c++;
        }
    if (c == 0)
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;

    return 0;
}
