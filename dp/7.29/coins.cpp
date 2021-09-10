#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<double> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    vector<vector<double>> dp(n+1, vector<double>(n+1));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n+1; j++) {
            dp[i+1][j] += dp[i][j] * (1 - p[i]);
            dp[i+1][j+1] += dp[i][j] * p[i];
        }
    }
    double ans = 0;
    for(int j = 0; j < n+1; j++) {
        if(n - j < j) {
            ans += dp[n][j];
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
}