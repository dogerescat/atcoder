#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    int n; cin >> n;
    vector<pair<ll, ll>> p(n);
    ll aoki = 0;
    for(int i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        p[i] = {a, b};
        aoki += a;
    }
    sort(p.begin(), p.end(), greater<pair<ll, ll>>());
    ll takahashi = 0;
    for(int i = 0; i < n; i++) {
        aoki -= p[i].first;
        takahashi += p[i].first + p[i].second;
        if(aoki < takahashi) {
            cout << i+1 << endl;
            return 0;
        }
    }
}