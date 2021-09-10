#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

int main() {
    int d, g; cin >> d >> g;
    g /= 100;
    vector<int> p(d), c(d);
    for(int i = 0; i < d; i++) {
        int cc;
        cin >> p[i] >> cc;
        c[i] = cc/100;
    }
    vector<vector<int>> dp(d+1, vector<int>(401010));
    for(int i = 0; i < d+1; i++) {
        for(int j = 0; j < 201010; j++) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;
    for(int i = 0; i < d; i++) {
        for(int j = 0; j < 201010; j++) {
            for(int k = 0; k < p[i]; k++) { 
                chmin(dp[i+1][j+(i+1) * k], dp[i][j]+k);
            }
            chmin(dp[i+1][j+(i+1)*p[i]+c[i]], dp[i][j]+p[i]);
        }
    }

    int ans = INF;
    for(int j = g; j < 201010; j++) {
        chmin(ans, dp[d][j]);
    }
    cout << ans << endl;
}