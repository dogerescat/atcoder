#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

int main() {
    ll n, m; cin >> n >> m;
    vector<ll> dp(n+m+1);
    vector<ll> dp2(n+m+1);
    dp[0] = 1;
    ll a = n, b = m;
    for(int i = 1; i <= n+m; i++) {
        if(i % 2 != 0) {
            dp[i] += dp[i-1] * a % MOD;
            a = max(0LL, a-1);
        } else {
            dp[i] += dp[i-1] * b % MOD;
            b = max(0LL, b-1);
        }
    }
    dp2[0] = 1;
    a = n; b = m;
    for(int i = 1; i <= n+m; i++) {
        if(i % 2 != 0) {
            dp2[i] += dp2[i-1] * b % MOD;
            b = max(0LL, b-1);
        } else {
            dp2[i] += dp2[i-1] * a % MOD;
            a = max(0LL, a-1);
        }
    }
    ll ans = (dp[n+m] + dp2[n+m]) % MOD;
    cout << ans << endl;
}