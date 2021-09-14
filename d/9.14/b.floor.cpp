#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, n; cin >> a >> b >> n;
    ll x;
    x = min(b-1, n);
    // if(b > n) {
    //     x = n;
    // } else {
    //     ll left = 0;
    //     ll right = b;
    //     while(right - left > 1) {
    //         int mid = (right - left) / 2 + left;
    //         if(b > mid) {
    //             left = mid;
    //         } else {
    //             right = mid;
    //         }
    //     }
    //     x = left;
    // }
    ll ans = ((a * x) / b) - (a * (x / b));
    cout << ans << endl;
}