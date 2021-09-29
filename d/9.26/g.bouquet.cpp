#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1000000007;

ll func(ll x, ll n) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = res * x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}

ll func2(ll n, ll a) {
    ll x = 1, y = 1;
    for(ll i = 0; i < a; i++) {
        x = x * (n - i) % MOD;
        y = y * (i + 1) % MOD;
    }
    return x * func(y, MOD-2) % MOD;
}

int main() {
    ll n, a, b; cin >> n >> a >> b;
    ll ans = func(2, n);
    ans = (ans - 1) % MOD;
    if(ans < 0) ans += MOD;
    ans = (ans - func2(n, a)) % MOD;
    if(ans < 0) ans += MOD;
    ans = (ans - func2(n, b)) % MOD;
    if(ans < 0) ans += MOD;
    cout << ans << endl;
}