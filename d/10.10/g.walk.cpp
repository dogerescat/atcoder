#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, a, b; cin >> n >> a >> b;
    vector<ll> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    ll ans = 0;
    for(int i = 1; i < n; i++) {
        ans += min(b, (x[i]-x[i-1]) * a);
    }
    cout << ans << endl;
}