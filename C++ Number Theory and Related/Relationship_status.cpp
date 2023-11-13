#include<bits/stdc++.h>

using namespace std;
    string str1compare = "ajee";
    string str2compare = "aima";
    int flagStr1 = 0, flagStr2 = 0;

faster(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
}

void processing(string s1, int len1, string s2, int len2){
    for (int i = 0; i < len1-4; i++){
        if ((s1[i] == str1compare[0]) && (s1[i+1] == str1compare[1])
            && (s1[i+2] == str1compare[2]) && (s1[i+3] == str1compare[3]))
        {
            flagStr1 = 1;
            break;
        }
        else if ((s1[i] == str2compare[0]) && (s1[i+1] == str2compare[1])
            && (s1[i+2] == str2compare[2]) && (s1[i+3] == str2compare[3]))
        {
            flagStr1 = 1;
            break;
        }
        else continue;
    }
    for (int i = 0; i < len2-4; i++){
        if ((s2[i] == str2compare[0]) && (s2[i+1] == str2compare[1])
            && (s2[i+2] == str2compare[2]) && (s2[i+3] == str2compare[3]))
        {
            flagStr2 = 1;
            break;
        }
        else if ((s2[i] == str1compare[0]) && (s2[i+1] == str1compare[1])
            && (s2[i+2] == str1compare[2]) && (s2[i+3] == str1compare[3]))
        {
            flagStr2 = 1;
            break;
        }
        else continue;
    }
}
void print(){
    if (flagStr1 == 1 && flagStr2 == 1){
        cout << "\a\n\t\t****Relationship status --> Infinity\n";
        cout << "\nThey are going parallel\n";
        cout << "Do you want to know what the meaning of infinity\n Yes(press 1)\n No(press 2)\n";
        int press;
        cin >> press;
        if (press == 1){
            cout << "\aThis means three points are there\n";
        }
    }
    else cout << "\nOpps... bad luck\n";

}
int main()
{
    faster();
    //file_i_o();

    string str1, str2;

    cout << "\n\n\n\a...WELCOME...";
    cout << "\nEnter Your name: ";
    getline(cin, str1);
    cout << "\nEnter your partner name: ";
    getline(cin, str2);
    int len1, len2;
    len1 = str1.length();
    len2 = str2.length();
    for (int i = 0; i < len1; i++){
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < len2; i++){
        str2[i] = tolower(str2[i]);
    }
    processing(str1, len1, str2, len2);
    print();

    return 0;
}

