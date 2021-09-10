#include <bits/stdc++.h>
using namespace std;
using ll = long long;
pair<ll, ll> func(ll h, ll w) {
    if(h % 2 == 0 || w % 2 == 0) return {h*w/2, h*w/2};
    if(h > w) swap(h, w);
    return {h * (w+1)/2, h * (w-1)/2};
}

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    ll H, W; cin >> H >> W;
    if(H % 3 == 0 || W % 3 == 0) {
        cout << 0 << endl;
        return 0;
    }
    ll res = H * W;
    for(ll h = 0; h < H; h++) {
        vector<ll> a(3);
        a[0] = h * W;
        auto p = func(H-h, W);
        a[1] = p.first; a[2] = p.second;
        sort(a.begin(), a.end());
        chmin(res, a[2] - a[0]);
    }
    for(ll w = 0; w < W; w++) {
        vector<ll> a(3);
        a[0] = H * w;
        auto p = func(H, W-w);
        a[1] = p.first; a[2] = p.second;
        sort(a.begin(), a.end());
        chmin(res, a[2] - a[0]);
    }
    cout << res << endl;
}