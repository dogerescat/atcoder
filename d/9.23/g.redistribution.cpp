#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<int> dp(n+1);
    dp[0] = 1;
    for(int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1]+dp[i-3]) % MOD;
    }
    cout << dp[n] << endl;
}