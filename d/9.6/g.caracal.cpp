#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll i, map<ll, ll> &m) {
    if(i == 1) return 1;
    if(m.count(i)) return m[i];
    ll res = 0;
    res += func(i/2, m);
    res += func(i/2, m);
    return m[i] = res+1;
}

int main() {
    ll h; cin >> h;
    map<ll, ll> m;
    ll ans = func(h, m);
    cout << ans << endl;
}