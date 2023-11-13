#include<iostream>
#define endl '\n'

using namespace std;

int distrinctPrimeDivisor(int n)
{
    bool arr[3001];
    int arr2[3000] = {0};
    int count = 0;

    for (int i = 2; i <= n; i++){
        if (!arr[i]){
            for (int j = i+i; j <= n; j += i){
                arr[j] = true;
                arr2[j] += 1;
            }
        }
        if (arr2[i] == 2)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;

    cout << distrinctPrimeDivisor(n) << endl;

    return 0;
}
