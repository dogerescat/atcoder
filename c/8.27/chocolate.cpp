#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<ll, ll> func(ll h, ll w) {
    if(h % 2 == 0 || w % 2 == 0) return {h * w / 2, h * w / 2};
    if(h > w) swap(h, w);
    return {h * (w + 1) / 2, h * (w - 1) / 2};
}

int main() {
    ll h, w; cin >> h >> w;
    if(h % 3 == 0 || w % 3 == 0) {
        cout << 0 << endl; 
        return 0;
    }
    ll ans = h * w;
    for(ll i = 1; i < h; i++) {
        vector<ll> a(3);
        a[0] = i * w;
        auto p = func(h - i, w);
        a[1] = p.first; a[2] = p.second;
        sort(a.begin(), a.end());
        ans = min(ans, a[2] - a[0]);
    }

    for(ll i = 1; i < w; i++) {
        vector<ll> a(3);
        a[0] = h * i;
        auto p = func(h, w - i);
        a[1] = p.first; a[2] = p.second;
        sort(a.begin(), a.end());
        ans = min(ans, a[2] - a[0]);
    }
    cout << ans << endl;
}