#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll x, k, d; cin >> x >> k >> d;
    x = abs(x);
    ll j = min(k, x / d);
    k -= j;
    x -= d * j;
    if(k % 2 == 0) cout << x << endl;
    else cout << abs(x - d) << endl;
}