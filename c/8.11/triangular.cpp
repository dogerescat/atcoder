#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    ll cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(i % k == 0) cnt++;
    }
    ll ans = cnt * cnt * cnt;
    if(k % 2 == 0) {
        ll c = 0;
        for(int i = 1; i <= n; i++) {
            if(i % k == k / 2) c++;
        }
        ans += c * c * c;
    }
    cout << ans << endl;
}