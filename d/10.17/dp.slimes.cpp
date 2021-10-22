#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;
template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

ll func(vector<vector<ll>> &dp, vector<vector<ll>> &vis, vector<ll> b, ll l, ll r) {
    if(l == r) return 0;
    if(vis[l][r]) return dp[l][r];
    vis[l][r] = 1;
    ll res = INF;
    for(int i = l; i < r; i++) {
       if(l) chmin(res, func(dp, vis, b, l, i) + func(dp, vis, b, i+1, r) + b[r]-b[l-1]);
       else chmin(res, func(dp, vis, b, l, i) + func(dp, vis, b, i+1, r) + b[r]);
    }
    return dp[l][r] = res;
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<vector<ll>> dp(n+1, vector<ll>(n+1));
    vector<vector<ll>> vis(n+1, vector<ll> (n+1));
    for(int i = 1; i < n; i++) {
        a[i] += a[i-1];
    }
    cout << func(dp, vis, a, 0, n-1) << endl;
}
