#include<iostream>
#define mod 1000000007

using namespace std;

int main()
{
    int t, m, n;
    cin >> t;
    while (t--){
        cin >> m >> n;
        long long int fib, f = 0, s = 1, sum = 1;
        for (long long int i = 1; i <= n; i++){
            fib = f + s;
            f = s;
            s = fib;
            if (m <= i) sum = (sum + fib) % mod;
            cout << f << " " << s << " " << sum << endl;
        }
        cout << sum << endl;
    }
    return 0;
}

/* problem F
int find_prime(int n)
{
    int i, temp;

    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    for (i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int t, flag;
    unsigned long long int N;
    cin >> t;
    while (t--){
            flag = 0;
        cin >> N;
        if (find_prime(N)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
*/
/* Problem B
int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int cnt = 0, cnt2 = 0;
    for (int i = 0; i < len; i++){
        if (str[i] >= 97 && 122 >= str[i]){
            cnt++;
        }
        else cnt2++;
    }
    if (cnt >= cnt2){
        for (int i = 0; i < len; i++) str[i] = tolower(str[i]);
    }
    else
        for (int i = 0; i < len; i++) str[i] = toupper(str[i]);
    cout << str << endl;
    return 0;
}
*/
/* // Problem A
int main()
{
    int n;
    while(1){
        cin >> n;
        if (n == 42)
            break;
        cout << n << endl;
    }
    return 0;
}
*/
