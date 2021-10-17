#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<vector<int>> dp(n+1, vector<int>(k+1));
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++) {
        vector<int> cnt(k+2);
        for(int j = 1; j <= k+1; j++) {
            cnt[j] = (cnt[j-1] + dp[i-1][j-1]) % MOD;
        }
        for(int j = 0; j <= k; j++) {
            dp[i][j] = (cnt[j+1] - cnt[max(0, j - a[i-1])] + MOD) % MOD;
        }
    }
    cout << dp[n][k] << endl;
}