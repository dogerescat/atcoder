#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s; cin >> s;
    ll ans = 0;
    int n = s.size();
    for(int bit = 0; bit < 1 << (n-1); bit++) {
        ll total = 0;
        ll cnt = 0;
        for(int j = 0; j < n; j++) {
            cnt = 10 * cnt + (s[j] - '0');
            if(bit & (1 << j)) {
                total += cnt;
                cnt = 0;
            }
        }
        ans += total + cnt;
    }
    cout << ans << endl;
}