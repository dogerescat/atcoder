#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<ll> T(n);
    vector<ll> A(n);
    for(int i = 0; i < n; i++) cin >> T[i] >> A[i];
    ll x = 1, y = 1;
    for(int i = 0; i < n; i++) {
        ll a = T[i], b = A[i];
        ll r = max((x + a - 1)/a, (y + b - 1)/b);
        x = a * r; y = b * r;
    }
    ll ans = x + y;
    cout << ans << endl;
}