#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll h, w; cin >> h >> w;
    if(h % 3 == 0 || w % 3 == 0) {
        cout << 0 << endl;
        return 0;
    }
    if(h < w) swap(h, w);
    ll ans = 1001001001001001;
    for(ll i = 1; i < h; i++) {
        vector<ll> a;
        ll j = h - i;
        a.push_back(i*w);
        a.push_back(j*(w-1)/2);
        a.push_back(j*(w+1)/2);
        sort(a.begin(), a.end());
        ans = min(ans, abs(a[2] - a[0]));
    }
    for(ll i = 1; i < w; i++) {
        vector<ll> a;
        ll j = w - i;
        a.push_back(i*h);
        a.push_back(j*(h-1)/2);
        a.push_back(j*(h+1)/2);
        sort(a.begin(), a.end());
        ans = min(ans, abs(a[2] - a[0]));
    }
    cout << ans << endl;
}