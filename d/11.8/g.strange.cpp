#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
int main() {
    int n; cin >> n;
    vector<int> dp(n+1, INF);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        int m = 1;
        while(m <= i) {
            dp[i] = min(dp[i], dp[i - m] + 1);
            m *= 6;
        }
        m = 9;
        while(m <= i) {
            dp[i] = min(dp[i], dp[i-m] + 1);
            m *= 9;
        }
    }
    cout << dp[n] << endl;
}