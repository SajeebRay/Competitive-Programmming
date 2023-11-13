#include<iostream>
#include<string>

using namespace std;

void sub(string str1, string str2, int l, int l2);
int main()
{
    string str1, str2;
    int l, l2;
    getline(cin, str1);
    while(getline(cin, str2)){
        l = str1.length();
        l2 = str2.length();
        if (l <= l2)
            sub(str1, str2, l, l2);
        else
            sub(str2, str1, l2, l);

        getline(cin, str1);
    }
    return 0;
}
void sub(string str1, string str2, int l, int l2)
{
    int  i, j, k, k2, m , n;
        k2 = 0;
       for (i = 0; i < l; i++){
            for (j = 0; j < l2; j++){
                k = 0;
                for (m = i, n = j; m < l, n < l2; m++, n++){
                    if(str1[m] != str2[n])
                        break;
                    k++;
                }
                if (k > k2)
                    k2 = k;
            }
        }
        cout << k2 << "\n";
}
