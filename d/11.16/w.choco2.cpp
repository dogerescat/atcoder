#include <bits/stdc++.h>
using namespace std;
using ll = long long;
pair<ll, ll> func(ll h, ll w) {
    if(h % 2 == 0  || w % 2 == 0) return {h * w / 2, h * w / 2};
    if(h > w) swap(h, w);
    return {h * (w+1) / 2, h * (w-1) / 2};
}

int main() {
    ll H, W; cin >> H >> W;
    if(H % 3 == 0 || W % 3 == 0) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 1001001001001001;    
    for(ll h = 1; h < H; h++) {
        vector<ll> a(3);
        a[0] = h * W; 
        auto p = func(H-h, W);
        a[1] = p.first;
        a[2] = p.second;
        sort(a.begin(), a.end());
        ans = min(ans, a[2] - a[0]);
    }
    for(ll w = 1; w < W; w++) {
        vector<ll> a(3);
        a[0] = w * H; 
        auto p = func(H, W-w);
        a[1] = p.first;
        a[2] = p.second;
        sort(a.begin(), a.end());
        ans = min(ans, a[2] - a[0]);
    }
    cout << ans << endl;
}