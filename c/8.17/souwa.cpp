#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> a(n);
    vector<ll> v(n+1);
    for(int i = 0; i < n; i++) cin >> a[i];
    v[0] = 0;
    for(int i = 0; i < n; i++) v[i+1] = v[i] + a[i];
    ll ans = 0;
    for(int i = 0; i <= n - k; i++) {
        ans += v[k+i] - v[i];
    }
    cout << ans << endl;
}