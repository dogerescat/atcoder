#include <bits/stdc++.h>
using namespace std;

const int INF = 1001001001;
int main() {
    int n; cin >> n;
    int a, b, c; cin >> a >> b >> c;
    vector<int> dp(n+1, INF);
    dp[n] = 0;
    for(int i = n; i >= 0; i--) {
        if(i == a || i == b || i == c) continue;
        for(int j = 1; j <= 3; j++) {
            if(i >= j) dp[i - j] = min(dp[i] + 1, dp[i - j]);
        }
    }
    if(dp[0] <= 100) cout << "YES" << endl;
    else cout << "NO" << endl;
}