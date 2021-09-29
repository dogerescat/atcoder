#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll j = n / i;
        ans += i * (j+1) * j / 2;
    }
    cout << ans << endl;
}