#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1000000007;

ll sum(ll l, ll r) {
    return (l + r) * (r - l + 1) / 2;
}

int main() {
    int n, k; cin >> n >> k;
    ll ans = 0;
    for(int i = k; i <= n+1; i++) {
        ll m = sum(0, i-1);
        ll M = sum(n-i+1, n);
        ans = ((ans % MOD) + (M - m + 1) % MOD) % MOD;
    }
    cout << ans << endl;
}