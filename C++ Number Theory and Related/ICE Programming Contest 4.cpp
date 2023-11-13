/** //Problem E
#include<iostream>
#include<string>
#include<vector>
#define maxN 90000007
#define lli long long int

using namespace std;

vector<int> vec;
bool arraN[maxN+1];
void seive()
{
    long long int cnt = 0, x = 1;
    lli i, j;
    for (i = 2; i*i <= maxN; i++){
        if (arraN[i] == 0){
            for (j = i*i; j <= maxN; j += i){
                arraN[j] = 1;
            }
        }
    }
    for (i = 2; i <= maxN ;i++){
        if (arraN[i] == 0){
            vec.push_back(i);
        }
    }
}
int main()
{
    seive();
    int t;
    long long int x;
    cin >> t;
    while(t--){
        cin >> x;
        cout << vec[x-1] << endl;
    }
    return 0;
}
*/
/** Problem D
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int x, y , n , k, i, flag, cnt;
    int t;
    cin >> t;
    while(t--){
        flag = 1, cnt = 0;
        cin >> n >> k >> x >> y;
        for (i = x; ; i = (i + k) % n){
            if (i == y){
                flag = 0;
                break;
            }
            if (cnt == n) break;
            cnt++;
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
*/
 // Problem C
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int flag = 0;
    long long int str;
    cin >> str;
    while(str){
        if(str%10 != 1 && str%100 != 14 && str%1000 != 144)
            flag = 1;
        str/= 10;
    }
    if (flag) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
/** Problem B
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t, sum, i;
    string str;
    cin >> t;
    while(t--){
        sum = i = 0;
        cin >> str;
        while(str[i] != '\0'){
            sum += str[i] - 48;
            i++;
        }
        cout << sum << endl;
    }


    return 0;
}
*/
/** Problem A
#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    x = (a*d) - (b*c);
    cout << x << endl;

    return 0;
}
*/
