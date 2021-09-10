#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        auto ai = lower_bound(a.begin(), a.end(), b[i]);
        ll aindex = distance(a.begin(), ai);
        auto ci = upper_bound(c.begin(), c.end(), b[i]);
        ll cindex = n - distance(c.begin(), ci);
        ans += aindex * cindex;
    }
    cout << ans << endl;
}