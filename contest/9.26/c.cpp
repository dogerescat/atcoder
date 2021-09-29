#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll m = 0;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) m += a[i];
    ll x; cin >> x;
    ll w = x / m;
    ll y = x % m;
    ll ans = w * n;
    for(int i = 0; i < n; i++) {
        y -= a[i];
        if(y < 0) {
            ans += i+1;
            break;
        }
    }
    cout << ans << endl;
}