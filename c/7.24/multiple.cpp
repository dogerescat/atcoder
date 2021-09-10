#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x, y; cin >> x >> y;
    int ans = 0;
    while(x <= y) {
        x *= 2;
        ans++;
    }
    cout << ans  << endl;
}