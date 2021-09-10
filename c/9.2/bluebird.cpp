#include <bits/stdc++.h>
using namespace std;

const int INF = 1001001001;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(n, INF));
    vector<int> a;
    for(int i = 0; i < m; i++) {
        int u, v, l;
        cin >> u >> v >> l;
        dp[u-1][v-1] = l;
        dp[v-1][u-1] = l;
        if(u == 1) a.push_back(v-1);
        if(v == 1) a.push_back(u-1);
    }
    for(int i = 0; i < n; i++) dp[i][i] = 0;
    for(int k = 1; k < n; k++) {
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < n; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    int ans = 1001001001;
    for(int i = 0; i < a.size() - 1; i++) {
        for(int j = i+1; j < a.size(); j++) {
            int cnt = dp[a[i]][a[j]] + dp[0][a[i]] + dp[0][a[j]];
            ans = min(ans, cnt);
        }
    }
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}