#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

template<class T> void chmax(T& a, T b) {
    if(a < b) a = b;
}

const int INF = 1001001001;

int main() {
    int n, w; cin >> n >> w;
    vector<int> weight(n), value(n);
    for(int i = 0; i < n; i++) cin >> weight[i] >> value[i];
    vector<vector<int>> dp(n+1, vector<int>(201010, INF));
    dp[0][0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n*1001; j++) {
            chmin(dp[i+1][j], dp[i][j]);
            chmin(dp[i+1][j+value[i]], dp[i][j] + weight[i]);
        }
    }
    int ans = 0;
    for(int i = 0; i < n*1001; i++) if(dp[n][i] <= w) chmax(ans, i);
    cout << ans << endl;
}