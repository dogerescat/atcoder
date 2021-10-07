#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll a) {
    ll cnt1 = (a + 1) / 2;
    ll ans = cnt1 % 2;
    if(a % 2 == 0) ans ^= a;
    return ans;
}

int main() {
    ll a, b; cin >> a >> b;
    ll ans = calc(b) ^ calc(a-1);
    cout << ans << endl;
}