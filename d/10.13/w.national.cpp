#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    int h, w; ll c; cin >> h >> w >> c;
    vector<vector<ll>> a(h, vector<ll>(w));
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    ll ans = INF;
    for(int r = 0; r < 2; r++) {
        vector<vector<ll>> dp(h, vector<ll>(w, INF));
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                chmin(dp[i][j], a[i][j]);
                if(i) chmin(dp[i][j], dp[i-1][j] + c);
                if(j) chmin(dp[i][j], dp[i][j-1] + c);
            }
        }
        vector<vector<ll>> x(h, vector<ll>(w, INF));
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                if(i) chmin(x[i][j], dp[i-1][j] + c + a[i][j]);
                if(j) chmin(x[i][j], dp[i][j-1] + c + a[i][j]);
                chmin(ans, x[i][j]);
            }
        }
        reverse(a.begin(), a.end());
    }
    cout << ans << endl;
}