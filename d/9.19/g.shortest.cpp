#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

const int INF = 1001001001;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(n, INF));
    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        a--; b--;
        dp[a][b] = c;
    }
    for(int i = 0; i < n; i++) dp[i][i] = 0;
    long long ans = 0;
    for(int k = 0; k < n; k++) {
        for(int s = 0; s < n; s++) {
            for(int t = 0; t < n; t++) {
                chmin(dp[s][t], dp[s][k] + dp[k][t]);
                if(dp[s][t] != INF) ans += dp[s][t];
            }
        }
    }
    cout << ans << endl;
}