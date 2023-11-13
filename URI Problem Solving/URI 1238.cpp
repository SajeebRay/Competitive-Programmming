#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t, i, j, len1, len2;
    string str1, str2;
    cin >> t;
    while (t--){
        i = j = 0;
        cin >> str1 >> str2;
        len1 = str1.length();
        len2 = str2.length();
        if (len1 < len2){
            for (i = 0; i < len2; i++){
                if (i < len1)
                    cout << str1[i] << str2[i];
                else
                    cout << str2[i];
            }
        }
        else {
            for (i = 0; i < len1; i++){
                if (i < len2)
                    cout << str1[i] << str2[i];
                else
                    cout << str1[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
