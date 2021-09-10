#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> void chmax(T &a, T b) {
    if(a < b) {
        a = b;
    }
}

int main() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    ll total = 1;
    ll right = 0;
    for(ll left = 0; left < n; left++) {
        while(total * a[right] <= k && right < n) {
            if(a[right] == 0) {
                cout << n << endl;
                return 0;
            }
            total *= a[right];
            right++;
        }
        chmax(ans, right - left);
        if(right == left) right++;
        else total /= a[left];
    }
    cout << ans << endl;
}