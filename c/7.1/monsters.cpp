#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll res = a[0];
    for(int i = 1; i < n; i++) {
        res = gcd(res, a[i]);
    }
    cout << res << endl;
}
