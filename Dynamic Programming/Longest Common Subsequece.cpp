#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s1,s2;
ll tab[1000][1000], l1, l2;
void dp(){
    l1 = s1.length();
    l2 = s2.length();
    for(int i= 1; i<= l1; i++){
        for(int j = 1; j <= l2; j++){
            tab[i][j] = max(tab[i-1][j], tab[i][j-1]);
            if(s1[i-1] == s2[j-1]) tab[i][j]++;
        }
    }
}
void retrieve(){
    string ans;
    int j = l2;
    for(int i = l1; i > 0; i--){
        if(tab[i][j] > max(tab[i-1][j],tab[i][j-1]))
            ans.push_back(s1[i-1]);
        else if(tab[i-1][j] >= tab[i][j-1]){
            continue; // same column ei uporer row te jabe
        }
        else i++; // same row tei previous column e jete
        if(j == 0) break;
        j--; // previous column check korar jonne
    }
    reverse(ans.begin(), ans.end());
    cout << "LCS size: " << ans.length() << endl;
    cout << ans << endl;
    
}
int main()
{
    s1 = "wqwKurftgyhjmar Rrayh";
    s2 = "eKumarlkl Ray";
    dp();
    retrieve();

    return 0;
}

/*
Output:
LCS size: 9
Kumar Ray
*/