#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll total = 0;
    for(int i = 0; i < n; i++) total += a[i];
    ll total2 = a[0];
    total -= a[0];
    ll ans = 1001001001001001001;
    ans = min(ans, abs(total2 - total));
    for(int i = 1; i < n-1; i++) {
        total -= a[i];
        total2 += a[i];
        ans = min(ans, abs(total2 - total));
    }
    cout << ans << endl;
}