#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
int main() {
    int n, m; cin >> n >> m;
    set<int> s;
    for(int i = 0; i < m; i++) {
        int a; cin >> a;
        s.insert(a);
    }
    vector<int> dp(n+1);
    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        if(!s.count(i+1)) dp[i+1] = (dp[i+1] + dp[i]) % MOD;
        if(!s.count(i+2) && i != n-1) dp[i+2] = (dp[i+2] + dp[i]) % MOD;
    }
    cout << dp[n] << endl;
}