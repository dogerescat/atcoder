#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool fugo = true;
    ll total = 0;
    ll ans = 1001001001001001;
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        if(fugo) {
            if((total + a[i]) <= 0) {
                cnt += 1 - (total + a[i]);
                total = 1;
            } else {
                total += a[i];
            }
            fugo = false;
        } else {
            if((total + a[i]) >= 0) {
                cnt += 1 + total + a[i];
                total = -1;
            } else {
                total += a[i];
            }
            fugo = true;
        }
    }
    chmin(ans, cnt);
    fugo = false;
    cnt = 0;
    total = 0;
    for(int i = 0; i < n; i++) {
        if(fugo) {
            if((total + a[i]) <= 0) {
                cnt += 1 - (total + a[i]);
                total = 1;
            } else {
                total += a[i];
            }
            fugo = false;
        } else {
            if((total + a[i]) >= 0) {
                cnt += 1 + total + a[i];
                total = -1;
            } else {
                total += a[i];
            }
            fugo = true;
        }
    }
    chmin(ans, cnt);
    cout << ans << endl;
}