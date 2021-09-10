#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if(a < b) a = b;
}

int main() {
    int n; cin >> n;
    vector<vector<int>> h(n, vector<int>(3)),  dp(n+1, vector<int>(3));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> h[i][j];
        }
    }
    for(int i = 0; i < 3; i++) dp[1][i] = h[0][i];

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(j != k) {
                    chmax(dp[i+1][k], dp[i][j] + h[i][k]);
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < 3; i++) chmax(ans, dp[n][i]);
    cout << ans << endl;
}