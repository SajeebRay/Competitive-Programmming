#include<bits/stdc++.h>
#define maxN 100000009
#define REP(i, n) for(int i = 0; i < n; i++)


using namespace std;
using uli = uint64_t;
int ara[1000];

int main()
{
    uli num;
    while(1){
        cin >> num;
        int cnt = 0;
        while (num%2 == 0){
            num = num/2;
            cnt++;
        }
        int k = 0;
        if (cnt) ara[k++] = cnt;

        for(int i = 3; i*i <= num; i +=2){
            cnt = 0;
            while(num%i == 0){
                num /= i;
                cnt++;
            }
            if (cnt) ara[k++] = cnt;
        }
        if (num > 1) ara[k++] = 1;

        int number_of_devisor = 1;
        REP(i, k) number_of_devisor *= (ara[i] + 1);
        cout << "Number of divisor: " << number_of_devisor << endl;
    }
    return 0;
}
