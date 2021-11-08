#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, k; cin >> n >> k;
    ll cnt = 0;
    ll cnt2 = 0;
    for(int i = 1; i <= n; i++) {
        if(i % k == 0) cnt++;
        if(i % k == k / 2 && k % 2 == 0) cnt2++;
    }
    ll ans = 0;
    ans += cnt * cnt * cnt;
    ans += cnt2 * cnt2 * cnt2;
    cout << ans << endl;
}