#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<vector<ll>> dp(n+1, vector<ll> (2));
    dp[0][0] = 1;
    dp[0][1] = 1;
    for(int i = 1; i <= n; i++) {
        string s; cin >> s;
        if(s == "AND") {
            dp[i][0] = dp[i-1][1] + 2 * dp[i-1][0];
            dp[i][1] = dp[i-1][1];
        } else {
            dp[i][0] = dp[i-1][0];
            dp[i][1] = dp[i-1][0] + 2 * dp[i-1][1];
        }
    }
    cout << dp[n][1] << endl;
}