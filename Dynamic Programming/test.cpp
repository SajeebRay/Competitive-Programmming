#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    int l, r, k;
    cin >> tt;
    while(tt--){
        cin >> l >> r >> k;
        if(l == r && l == 1)
            cout << "NO" << endl;
        else if(l == r)
            cout  << "YES" << endl;
        else if((l%2 != 0) && (r%2 != 0) && ((r-l+2)/2) <= k)
            cout << "YES" << endl;
        else if((l%2 != r%2 || (l%2 == 0 && r%2 == 0))
                && (r-l+1)/2 <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}