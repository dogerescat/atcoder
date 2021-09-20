#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    string s; cin >> s;
    int n = s.size();
    string t = "chokudai";
    vector<vector<int>> dp(n+1, vector<int>(9));
    for(int i = 0; i <= n; i++) dp[i][0] = 1;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 8; j++) {
            if(s[i] == t[j]) {
                dp[i+1][j+1] = (dp[i][j] + dp[i][j+1]) % MOD;
            } else {
                dp[i+1][j+1] = dp[i][j+1];
            }
        }
    }
    cout << dp[n][8] << endl;
}