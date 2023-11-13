#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 998244353;

int N, K, max_A;
int A[2005], nxt[2005][2005], fact[2005], inv_fact[2005];
int dp[2005][2005];

int add(int a, int b) {
a += b;
if (a >= MOD) a -= MOD;
return a;
}

int mul(int a, int b) {
return (ll)a * b % MOD;
}

int pow_mod(int a, int b) {
int res = 1;
while (b) {
if (b & 1) res = mul(res, a);
a = mul(a, a);
b >>= 1;
}
return res;
}

int inv(int x) {
return pow_mod(x, MOD-2);
}

int choose(int n, int k) {
int res = 1;
for (int i = 1; i <= k; i++) {
res = mul(res, n-i+1);
res = mul(res, inv(i));
}
return res;
}

int main() {
cin >> N >> K;
for (int i = 0; i < N; i++) {
cin >> A[i];
max_A = max(max_A, A[i]);
}
// Precompute nxt array
sort(A, A+N);
for (int j = 0; j <= max_A; j++) {
    for (int k = max_A; k >= j; k--) {
        if (j < k && A[0] <= j && j < A[N-1]) {
            nxt[j][k] = j+1;
        } else {
            auto it = lower_bound(A, A+N, j+1);
            if (it == A || *prev(it) != j+1) {
                nxt[j][k] = j+1;
            } else {
                nxt[j][k] = nxt[j+1][k];
            }
        }
    }
}

// Precompute factorials and inverse factorials
fact[0] = 1;
for (int i = 1; i <= max_A; i++) {
    fact[i] = mul(fact[i-1], i);
}
inv_fact[max_A] = inv(fact[max_A]);
for (int i = max_A-1; i >= 0; i--) {
    inv_fact[i] = mul(inv_fact[i+1], i+1);
}

// Compute dp array
dp[0][0] = 1;
for (int i = 1; i <= K; i++) {
    for (int j = 0; j <= max_A; j++) {
        for (int k = j; k <= max_A; k++) {
            dp[i][j] = add(dp[i][j], mul(dp[i-1][nxt[j][k]], choose(k-j+N-1, N-1)));
        }
    }
}

// Compute final answer
int ans = 0;
for (int j = 0; j <= max_A; j++) {
    ans = add(ans, dp[K][j]);
}
cout << mul(ans, fact[N]) << endl;

return 0;
}