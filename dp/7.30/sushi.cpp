#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> c(4);
    vector<vector<vector<double>>> dp(n+3, vector<vector<double>> (n+3, vector<double>(n+3)));
    for(int i = 0; i < n; i++) c[a[i]]++;
    for(int k = 0; k < n+1; k++) for(int j = 0; j < n+1; j++) for(int i = 0; i < n+1; i++) {
        int sm = i + j + k;
        if(sm == 0) continue;
        dp[i][j][k] = 1.0 * n / sm;
        if(i) dp[i][j][k] += dp[i-1][j][k] * i / sm;
        if(j) dp[i][j][k] += dp[i+1][j-1][k] * j / sm;
        if(k) dp[i][j][k] += dp[i][j+1][k-1] * k / sm;
    }
    cout << dp[c[1]][c[2]][c[3]] << endl;
}