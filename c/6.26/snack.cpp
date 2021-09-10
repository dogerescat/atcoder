#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll x, ll y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

int main() {
    ll a, b; cin >> a >> b;
    ll ans = (a * b) / gcd(a, b);
    cout << ans << endl;
}