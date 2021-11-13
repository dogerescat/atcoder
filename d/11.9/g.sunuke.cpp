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
        int ac = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        int cc = n - (upper_bound(c.begin(), c.end(), b[i]) - c.begin());
        ans += (ll)ac * cc;
    }
    cout << ans << endl;
}