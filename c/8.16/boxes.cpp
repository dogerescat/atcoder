#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    if(a[0] > x) {
        ans += a[0] - x;
        a[0] = x;
    }

    for(int i = 1; i < n; i++) {
        if(a[i-1] + a[i] > x) {
            ans += (a[i-1] + a[i] - x);
            a[i] = x - a[i-1];
        }
    }
    cout << ans << endl;
}