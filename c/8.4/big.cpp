#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k; cin >> n >> k;
    vector<pair<ll, ll>> p(n);
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        p[i].first = a;
        p[i].second = b;
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < n; i++) {
        k -= p[i].second;
        if(k <= 0) {
            cout << p[i].first << endl;
            return 0;
        }
    }
}