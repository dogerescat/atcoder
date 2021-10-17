#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}
template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}
const ll INF = 1e18;
ll func(vector<vector<ll>> &dp, vector<vector<int>> &vis ,vector<ll> &a, int n, int l, int r) {
    if(l > r) return 0;
    if(vis[l][r]) return dp[l][r];
    vis[l][r] = 1;
    ll res = 0;
    int diff = n - (r - l + 1);
    if(diff % 2 == 0) {
        res = -INF;
        chmax(res, func(dp, vis, a, n, l, r-1) + a[r]);
        chmax(res, func(dp, vis, a, n, l+1, r) + a[l]);
    } else {
        res = INF;
        chmin(res, func(dp, vis, a, n, l, r-1) - a[r]);
        chmin(res, func(dp, vis, a, n, l+1, r) - a[l]);
    }
    return dp[l][r] = res;
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<vector<ll>> dp(n, vector<ll>(n));
    vector<vector<int>> vis(n, vector<int>(n));
    cout << func(dp, vis, a, n, 0, n-1) << endl;
}