#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

const int INF = 1001001001;

int main() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> A(n);
    vector<int> B(n);
    for(int i = 0; i < n; i++) cin >> A[i] >> B[i];
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(x+1, vector<int>(y+1, INF)));
    dp[0][0][0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= x; j++) {
            for(int k = 0; k <= y; k++) {
                chmin(dp[i+1][min(j+A[i],x)][min(k+B[i],y)], dp[i][j][k]+1);
                chmin(dp[i+1][j][k], dp[i][j][k]);
            }
        }
    }
    if(dp[n][x][y] != INF) cout << dp[n][x][y] << endl;
    else cout << -1 << endl;
}