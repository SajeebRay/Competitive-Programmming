#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int tc = 1; 
    cin >> tc; 
    while (tc--) { 
        int n; 
        cin >> n; 
        vector<int> junk; 
        int s = 0; 
        for (int t, x = 0; x < n; x++) { 
            cin >> t; 
            if (t == 2) { 
                junk.push_back(s); 
                s = 0; 
            } else { 
                s++; 
            } 
        } 
        junk.push_back(s); 
        int res = 0, sum = 0; 
        for (int x = 0; x < junk.size(); x++) { 
            int a = sum > 0 ? sum - 1 : 0, b = sum > 0 ? 1 : 0; 
            int p = ((a % 2 == 0) ? a / 2 : a / 2 + 1) + 
                    ((b % 2 == 0) ? b / 2 : b / 2 + 1); 
            res = max({res, p + junk[x]}); 
            sum += junk[x]; 
        } 
        cout << res << '\n'; 
    } 
    return 0; 
}
