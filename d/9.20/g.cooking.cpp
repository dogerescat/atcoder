#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];
    int T = 0;
    for(int i = 0; i < n; i++) T += t[i];
    vector<vector<int>> dp(n+1, vector<int> (T+1));
    for(int i = 0; i <= n; i++) dp[i][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= T; j++) {
            if(dp[i][j]) {
                dp[i+1][j+t[i]] = 1;
                dp[i+1][j] = 1;
            }
        }
    }
    int a = 0;
    for(int i = 0; i <= T / 2; i++) {
        if(dp[n][i]) a = i;
    }
    cout << T - a << endl;
}