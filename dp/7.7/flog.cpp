#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n+1, INF);
    dp[0] = 0;
    for(int i = 0; i < n; i++) {
        dp[i+1] = min(dp[i+1], dp[i] + abs(a[i]-a[i+1]));
        dp[i+2] = min(dp[i+2], dp[i] + abs(a[i]-a[i+2]));
    }
    cout << dp[n-1] << endl;
}