#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return !b ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
ll func(ll x, ll a, ll b) {
    ll res = x;
    res -= x / a;
    res -= x / b;
    res += x / lcm(a, b);
    return res;
}
int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll ans = func(b, c, d) - func(a-1, c, d);
    cout << ans << endl;
}