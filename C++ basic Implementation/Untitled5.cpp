#include<iostream>

using namespace std;

int main()
{
    int n;


    cin >> n;
    int j, c;
    for (j = 0; j < n; j++)
    {
        int k;
        cin >> k;
        int *a, *m;
        a = new int[k];
        m = new int[k];
        int i;
        for (i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        c = 0;
        for (i = 0; i < k - 1; i++)
        {
            if (a[i] == a[i+1])
                c++;
        }
        int sum = 0, l;
        int index = 0, d;
        if (c == k-1)
            cout << "NO";
        else
        {
            cout << "YES" << endl;
            for (i = 0; i < k; i++)
            {
                int f = 1, l;
                while ((sum + a[i]) == 0)
                {
                    int flag = 0;
                    l = (i + f) % (k -1);
                    for (d = 0; d <= index; d++)
                    {
                        if (m[d] != a[l])
                        {
                            swap(a[i], a[l]);
                            break;
                        }
                    }
                    f++;
                }
                m[index] = a[i];
                index++;
                sum = sum + a[i];
            }
        }
        for (d = 0; d < k; d++)
        {
            cout << m[d] << " ";
        }
        cout << endl;

    }

    return 0;
}
