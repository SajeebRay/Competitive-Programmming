#include<iostream>
#include<vector>
#include<iterator>
#define lli long long int

using namespace std;

int main()
{
    vector<lli> vec;
    lli arr[100];
    lli a, flag, index, divisor;
    int t;
    cin >> t;
    while (t--){
        for (int i = 0; i < 100; i++)
        arr[i] = 0;
        index = -1;
        flag = 0;
        divisor = 1;
        cin >> a;
        while(a % 2 == 0){
            vec.push_back(2);
            a /= 2;
            arr[0]++;
        }
        if (arr[0] != 0) index = 0;
        for (lli i = 3; i*i <= a; i += 2){
            while(a % i == 0){
                vec.push_back(i);
                a /= i;
                if (flag != i){
                    index++;
                    arr[index]++;
                    flag = i;
                }
                else arr[index]++;
            }
        }
        if (a > 1){
            vec.push_back(a);
            index++;
            arr[index]++;
        }
        for (int i = 0; i <= index; i++)
            divisor *= (arr[i] + 1);
        cout << divisor << endl;
        for (auto x : vec)
            cout << x << " ";
        cout << endl;
        vec.clear();
    }
    return 0;
}
