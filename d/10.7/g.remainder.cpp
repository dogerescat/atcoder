#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll x = max(0, i-k);
        ll y = n / i;
        ll z = max(0, (n % i) - k + 1); 
        ans += x * y + z;
        if(k == 0) ans--;
    }
    cout << ans << endl;
}