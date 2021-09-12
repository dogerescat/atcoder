#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x, y, a, b; cin >> x >> y >> a >> b;
    ll ans = 0;
    while((double)a*x <= 2e18 && (x * a) <= (x + b) && a * x < y) {
        x *= a;
        ans++;
    }
    ans += ((y - x - 1) / b);
    cout << ans << endl;
}