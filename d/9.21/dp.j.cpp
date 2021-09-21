#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(3);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x-1]++;
    }
    vector<vector<vector<double>>> dp(n+3, vector<vector<double>>(n+3, vector<double>(n+3)));
    for(int k = 0; k <= n; k++) {
        for(int j = 0; j <= n; j++) {
            for(int i = 0; i <= n; i++) {
                int sm = i + j + k;
                if(!sm) continue;
                dp[i][j][k] = 1.0 * n / sm;
                if(i) dp[i][j][k] += dp[i-1][j][k] * i / sm;
                if(j) dp[i][j][k] += dp[i+1][j-1][k] * j / sm;
                if(k) dp[i][j][k] += dp[i][j+1][k-1] * k / sm;
            }
        }
    }
    cout << fixed << setprecision(10) << dp[a[0]][a[1]][a[2]] << endl;
}