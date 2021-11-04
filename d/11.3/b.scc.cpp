#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m; cin >> n >> m;
    m /= 2;
    ll ans = 0;
    if(n >= m) {
        ans += m;
    } else {
        ans += n;
        m -= n;
        ans += m/2;
    }
    cout << ans << endl;
}