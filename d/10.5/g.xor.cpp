#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll a) {
    if(a <= 0) return 0;
    ll ans = 0;
    a++;
    for(int i = 0; i < 50; i++) {
        ll loop = 1LL << (i+1);
        ll cnt = (a / loop) * (loop / 2);
        cnt += max(0LL, (a % loop) - (loop / 2));
        if(cnt % 2 != 0) {
            ans += (1LL << i);
        }
    }
    return ans;
}

int main() {
    ll a, b; cin >> a >> b;
    ll ans = calc(b) ^ calc(a-1);
    cout << ans << endl;
}