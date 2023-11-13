/*#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#define lli unsigned long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str, next;

    while (t--){
            lli n1, n2;
        cin >> str;
        reverse(str.begin(), str.end());
        while(str[0] == 48){
            str.erase(0 , 1);
        }
        reverse(str.begin(), str.end());

        cout << str.length() << "\n";

    }
    return 0;
}




*/
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#define lli long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    lli x, cnt, lcnt, flag = 0;

    while (t--){
        cnt = 0;
        lcnt = 0;
        cin >> x;
        flag = x;
        while (x != cnt){
            lcnt++;
            /*if (x%4 == 0 && flag == 0){
                cnt--;
                flag = 1;
            }*/

            if (flag%4 == 0 && flag > 1){
                cnt--;
                flag /= 4;
            }
            else if ((cnt != (x+1)) && ((cnt+lcnt) < 2*x))
                cnt += lcnt;
            else
                cnt--;

        }
        cout << lcnt << "\n";

    }
    return 0;
}
