
/*
#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<cmath>
#define mod 1000000007

using namespace std;

long long int factorial(long long int N)
{
    if (N == 1)
        return 1;
    else return((N * factorial(N-1)) % mod);
}
void divisor(long long int num)
{
    int cnt = 0, ara[1000];
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
        if (num > 1){
            cnt = 0;
            while(num % 2 == 0){
                num /= 2;
                cnt++;
            }
            ara[k++] = cnt;
        }

        int number_of_devisor = 1;
        for(int i = 0; i < k; i++)
            number_of_devisor *= (ara[i] + 1);

        cout << number_of_devisor << endl;
}
int main()
{
    long long int N, X;
    cin >> N;
    X = factorial(N);
    cout << X << endl;
    divisor(X);

    return 0;
}
*/
#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int flag = 0, len = str.length();

    char ch, ch2;
    for (ch = 'a', ch2 = 'A'; ch <= 'z', ch2 <= 'Z'; ch++, ch2++){
        flag = 0;
        for(int i = 0; i < len; i++){
            if (ch == str[i] || ch2 == str[i]){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            break;
        }
    }
    if(flag) cout << "pangram" << endl;
    else cout << "not pangram" << endl;

    return 0;
}
