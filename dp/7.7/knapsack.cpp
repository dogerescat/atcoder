#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> void chmax(T& a, T b) {
    if(a < b) a = b;
}

int main() {
    int N, W; cin >> N >> W;
    vector<int> w(N), v(N);
    for(int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }
    vector<vector<ll>> dp(N+1, vector<ll>(W+1));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < W; j++) {
            chmax(dp[i+1][j], dp[i][j]);
            chmax(dp[i+1][j+w[i]], dp[i][j]+v[i]);
        }
    }
    ll ans = 0;
    for(int j = 0; j < W+1; j++) chmax(ans, dp[N][j]);
    cout << ans << endl;
}