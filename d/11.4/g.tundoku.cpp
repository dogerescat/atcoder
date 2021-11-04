#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n+1);
    vector<int> b(m+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];
    int ans = 0;
    ll total = 0;
    for(int i = 1; i <= m; i++) total += b[i];
    int ai = 0;
    int bi = m;
    while(bi >= 0) {
        while(total + a[ai] <= k && ai <= n) {
            total += a[ai];
            ai++;
        }
        if(total <= k) ans = max(ans, ai + bi - 1);
        total -= b[bi];
        bi--;
    }
    cout << ans << endl;
}