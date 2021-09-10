#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll , ll>> a(n);
    for(int i = 0; i < n; i++) {
        ll x, y; cin >> x >> y;
        a[i].first = x;
        a[i].second = y;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(k - a[i].first < 0) break;
        else {
            k += a[i].second;
        }
    }
    cout << k << endl;
}