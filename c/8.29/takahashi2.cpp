#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, a; cin >> n >> a;
    vector<int> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    vector<vector<vector<ll>>> dp(n+1, vector<vector<ll>>(n+1, vector<ll>(3010, 0)));
    dp[0][0][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n*a; k++) {
                if(dp[i][j][k]) {
                    dp[i+1][j][k] += dp[i][j][k];
                    dp[i+1][j+1][k+x[i]] += dp[i][j][k];
                }
            }
        }
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += dp[n][i][i*a];
    }
    cout << ans << endl;
}