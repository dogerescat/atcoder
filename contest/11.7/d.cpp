#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return !b ? a : gcd(b, a % b);
}
int main() {
    int n; cin >> n;
    vector<ll> x(n);
    vector<ll> y(n);
    vector<pair<ll, ll>> p;
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            p.push_back(make_pair(x[i] - x[j], y[i] - y[j]));
        }
    }
    set<pair<ll, ll>> s;
    for(int i = 0; i < p.size(); i++) {
        ll a = gcd(p[i].first, p[i].second);
        if(!s.count(make_pair(p[i].first/a, p[i].second/a))) {
            s.insert(make_pair(p[i].first/a, p[i].second/a));
        }
    }
    cout << s.size() * 2 << endl;
}