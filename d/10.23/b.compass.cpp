#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll r, x ,y; cin >> r >> x >> y;
    ll d2 = x * x + y * y;
    ll ans = 1;
    while(1) {
        if(r * r * ans * ans >= d2) break;
        ans++;
    }
    if(ans == 1) {
        if(r * r != d2) ans = 2;
    }
    cout << ans << endl;
}