#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
    return y ? gcd(y, x % y) : x;
}

ll lcm(ll x, ll y) {
    ll z = gcd(x, y);
    return (y / z) * x;
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = a[0];
    ll x;
    for(int i = 1; i < n; i++) {
        ans = lcm(ans, a[i]);
    }
    cout << ans << endl;
}