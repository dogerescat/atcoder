#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1000000007;

ll func2(ll x, ll y) {
    ll res = 1;
    while(y > 0) {
        if(y & 1) res = res * x % MOD;
        x = x * x % MOD;
        y >>= 1;
    }
    return res;
}

ll func(ll x, ll y) {
    ll a = 1;
    ll b = 1;
    for(ll i = 0; i < y; i++) {
        a = a * (x-i) % MOD;
        b = b * (i+1) % MOD;
    }
    return a * func2(b, MOD-2) % MOD;
}

int main() {
    ll x, y; cin >> x >> y;
    if((x + y) % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    ll n = (x + y) / 3;
    ll a = x - n;
    ll b = y - n;
    if(a < 0 || b < 0) {
        cout << 0 << endl;
        return 0;
    }
    cout << func(a+b, a) << endl;

}