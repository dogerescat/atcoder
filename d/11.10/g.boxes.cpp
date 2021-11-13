#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; ll x; cin >> n >> x; 
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    for(int i = 1; i < n; i++) {
        ll prev1 = a[i];
        ll prev2 = a[i-1];
        if(a[i] + a[i-1] > x) {
            a[i] = max(0LL, a[i] - (a[i] - (x - a[i-1])));
        }
        if(a[i] + a[i-1] > x) {
            a[i-1] = max(0LL, a[i-1] - (a[i-1] - x));
        }
        ans += (prev1 - a[i]) + (prev2 - a[i-1]);
    }
    cout << ans << endl;
}