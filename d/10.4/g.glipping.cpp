#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            cnt++;
            a[i] *= -1;
        }
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += a[i];
    }
    if(cnt % 2 == 0) cout << ans << endl;
    else cout << ans - 2 * a[0] << endl;
}