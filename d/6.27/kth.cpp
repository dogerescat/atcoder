#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, q; cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> b(n);
    for(int i = 1; i <= n; i++) {
        b[i-1] = a[i-1] - i;
    }
    while(q--) {
        ll k; cin >> k;
        ll it = lower_bound(b.begin(), b.end(), k) - b.begin();
        if(it == n) {
            cout << a[n - 1] + (k - b[n-1]) << endl;
        } else {
            cout << a[it] - (b[it] - k + 1) << endl;
        }
    }
}