#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        if(i == 1) {
            dp[i] = dp[i-1] + abs(a[i]-a[i-1]);
            continue;
        }
        dp[i] = min(dp[i-1] + abs(a[i]-a[i-1]), dp[i-2] + abs(a[i] - a[i-2]));
    }
    cout << dp[n-1] << endl;
}