#include<bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2, int l){
    int table[l+1][l+1];
    for(int i = 0; i <= l; i++){
        for(int j = 0; j <= l; j++){
            if(i == 0 || j == 0)
                table[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                table[i][j] = table[i-1][j-1] + 1;
            else
                table[i][j] = max(table[i-1][j], table[i][j-1]);
        }
    }
    return table[l][l];
}
void LPS(string s){
    string s2 = s;
    reverse(s.begin(), s.end());
    int l = s.length();
    int length = LCS(s, s2, l);
    cout << "The LPS is: " << length << endl;
}
int main()
{
    string str;
    cin >> str;
    LPS(str);

    return 0;
}
