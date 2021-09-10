#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 1e9;
    for(int i = 0; i < n - k + 1; i++) {
        ll l = a[i], r = a[i+k-1];
        ans = min(ans, min(abs(l), abs(r)) + r - l);
    }
    cout << ans << endl;
}