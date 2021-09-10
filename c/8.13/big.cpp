#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k; cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        k -= v[i].second;
        if(k <= 0) {
            cout << v[i].first << endl;
            return 0;
        }
    }
}