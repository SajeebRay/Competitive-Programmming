#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main() {
    string S;
    cin >> S;
    int Q;
    cin >> Q;
    vector<char> A;
    vector<int> B;
    vector<bool> insert(Q);
    for (int i = 0; i < Q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            insert[i] = false;
        }
        else {
            int f;
            char c;
            cin >> f >> c;
            A.push_back(c);
            B.push_back(f);
            insert[i] = true;
        }
    }
    int rev_sum = 0;
    for (int i = 0; i < Q; i++) {
        if (!insert[i]) rev_sum++;
    }
    int ord = 0;
    int rev = 0;
    for (int i = 0; i < Q; i++) {
        if (insert[i]) {
            if (B[ord] == 1) {
                if ((rev_sum - rev) % 2 == 1) {
                    B[ord] = 2;
                }
            }
            else {
                if ((rev_sum - rev) % 2 == 1) {
                    B[ord] = 1;
                }
            }
            ord++;
        }
        else {
            rev++;
        }
    }
    if (rev_sum % 2 == 1) reverse(S.begin(), S.end());
    for (int i = 0; i < ord; i++) {
        if (B[i] == 1) {
            S.insert(0, string({A[i]}));
        }
        else {
            S.push_back(A[i]);
        }
    }
    cout << S << endl;
}
