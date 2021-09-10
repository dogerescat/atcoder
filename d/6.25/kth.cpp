#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, q; cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> c(n);
    for(int i = 0; i < n; i++) {
        c[i] = a[i] - (i+1);
    }
    while(q--) {
        ll k; cin >> k;
        ll it = lower_bound(c.begin(), c.end(), k) - c.begin();
        cout << "it" << it << endl;

        if(it == n) {
            cout << a[n - 1] + (k - c[n - 1]) << endl;
        } else {
            cout << a[it] - (c[it] - k + 1) << endl;
        }
    }
}