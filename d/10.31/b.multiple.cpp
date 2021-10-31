#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
    return !b ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
int main() {
    int n; cin >> n;
    vector<ll> T(n);
    for(int i = 0; i < n; i++) cin >> T[i];
    ll ans = T[0];
    for(int i = 0; i < n; i++) {
        ans = lcm(ans, T[i]);
    }
    cout << ans << endl; 
}