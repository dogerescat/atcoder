#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1000000007;

int main() {
    ll n; cin >> n;
    vector<ll> a(n+1, 0);
    vector<ll> b(n);
    for(int i = 1; i <= n; i++) {
        ll x; cin >> x;
        b[i-1] = x;
        a[i] = a[i-1] + x;
    }
    ll ans = 0;
    for(int i = 0; i < n - 1; i++) {
        ll sum = (a[n] - a[i+1]) % INF;
        ans += b[i] * sum;
        ans %= INF;
    }
    cout << ans << endl;
}