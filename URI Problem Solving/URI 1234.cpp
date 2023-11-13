#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int i, len, flag;
    while (getline(cin, str)){
        flag = 1;
        len = str.length();
        for (i = 0; i < len; i++)
            str[i] = toupper(str[i]);

        for (i = 0; i < len; i++){
            if ((str[i] <= 'Z' && str[i] >= 'A') ||
                 str[i] <= 'z' && str[i] >= 'a'){
                    if (flag){
                        cout << str[i];
                        flag = 0;
                    }
                    else{
                        str[i] = tolower(str[i]);
                        cout << str[i];
                        flag = 1;
                    }
            }
            else
                cout << str[i];
        }
        cout << "\n";
    }
    return 0;
}
