#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> a(k);
    for(int i = 1; i <= n; i++) {
        a[i%k]++;
    }
    ll ans = 0;
    ans += a[0] * a[0] * a[0];
    if(k % 2 == 0) {
        ans += a[k/2] * a[k/2] * a[k/2];
    }
    cout << ans << endl;
}