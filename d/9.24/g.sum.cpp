#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> a(n+1, 1);
    for(int i = 2; i <= n; i++) {
        int j = 1;
        while (i * j <= n) {
            a[i*j]++;
            j++;
        }
    }
    ll ans = 0;
    for(ll i = 1; i <= n; i++) {
        ans += i * a[i];
    }
    cout << ans << endl;
}