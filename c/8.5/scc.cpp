#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m; cin >> n >> m;
    ll l = m / 2;
    if(n >= l) {
        cout << l << endl;
        return 0;
    }
    ll s = abs(l-n) / 2;
    cout << n + s << endl;
}