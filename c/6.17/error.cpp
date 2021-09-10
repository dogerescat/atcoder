#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<ll> a(401, 0);
    for(ll i = 0; i < n; i++) {
        ll b; cin >> b;
        b += 200;
        a[b]++;
    }
    ll ans = 0;
    for(ll i = 0; i < 400; i++) {
        for(ll j = i+1; j < 401; j++) {
            ll x = (i - 200) - (j - 200);
            ll y = x * x; 
            ans += y * a[i] * a[j];
        }
    }
    cout << ans << endl;
}