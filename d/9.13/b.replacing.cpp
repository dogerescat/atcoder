#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q; cin >> n;
    map<ll, ll> m;
    ll total = 0;
    for(int i = 0; i < n; i++) {
        ll a; cin >> a;
        m[a]++;
        total += a;
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        ll b, c; cin >> b >> c;
        if(!m.count(b)) {
            cout << total << endl;
            continue;
        }
        total += m[b] * (c - b);
        cout << total << endl;
        m[c] += m[b];
        m.erase(b);
    }
}