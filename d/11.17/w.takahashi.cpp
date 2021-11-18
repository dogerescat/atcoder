#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, A; cin >> n >> A;
    vector<int> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    int m = A;
    for(int i = 0; i < n; i++) m = max(m, x[i]);
    vector<vector<vector<ll>>> dp(n+1, vector<vector<ll>> (n+1, vector<ll>(n*m+1)));
    dp[0][0][0] = 1;
    for(int j = 0; j < n; j++) for(int k = 0; k < n; k++) {
        for(int s = 0; s < n * m; s++) {
            if(dp[j][k][s]) {
                dp[j+1][k][s] += dp[j][k][s];
                dp[j+1][k+1][s+x[j]] += dp[j][k][s];
            }
        }
    }
    ll ans = 0;
    for(int k = 1; k <= n; k++) {
        ans += dp[n][k][A*k];
    }
    cout << ans << endl;
}