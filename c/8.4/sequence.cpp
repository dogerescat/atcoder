#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    bool sign = true;
    ll ans = 1000000000;
    ll cnt = 0;
    vector<ll> b(n+1);
    for(ll i = 0; i < n; i++) {
        b[i+1] = a[i] + b[i];
        if(sign) {
            if(b[i+1] <= 0) {
                cnt += abs(1 - b[i+1]);
                b[i+1] += abs(1 - b[i+1]);
            }
        } else {
            if(b[i+1] >= 0) {
                cnt += abs(-1 - b[i+1]);
                b[i+1] -= abs(-1 - b[i+1]);
            }
        }
        sign = !sign;
    }
    chmin(ans, cnt);
    b.assign(n+1,0);
    cnt = 0;
    sign = false;
    for(int i = 0; i < n; i++) {
        b[i+1] = a[i] + b[i];
        if(sign) {
            if(b[i+1] <= 0) {
                cnt += abs(1 - b[i+1]);
                b[i+1] += abs(1 - b[i+1]);
            } 
        } else {
            if(b[i+1] >= 0) {
                cnt += abs(-1 - b[i+1]);
                b[i+1] -= abs(-1 - b[i+1]);
            }
        }
        sign = !sign;
    }    
    chmin(ans, cnt);
    cout << ans << endl;
}