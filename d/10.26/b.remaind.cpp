#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 2019;
int main() {
    ll l, r; cin >> l >> r;
    r = min(r, l + 2 * MOD);
    ll ans = 2018;
    for(ll i = l; i <= r; i++) {
        for(ll j = i + 1; j <= r; j++) {
            ll x = i * j % MOD;
            ans = min(ans, x);
        }
    }
    cout << ans << endl;
}