#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> h(n);
    vector<int> dp(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    dp[1] = dp[0] + abs(h[1]-h[0]);
    for(int i = 1; i < n-1; i++) {
        dp[i+1] = min(dp[i-1] + abs(h[i+1] - h[i-1]), dp[i] + abs(h[i+1] - h[i]));
    }
    cout << dp[n-1] << endl;
}