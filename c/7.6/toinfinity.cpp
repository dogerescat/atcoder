#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll inf = 5000000000000000;

int main() {
    string n;
    ll k; cin >> n >> k;
    vector<pair<ll, ll>> a(n.size());
    for(int i = 0; i < n.size(); i++) {
        int x = n[i] - '0';
        a[i].first = x;
        a[i].second = pow(x,inf);
    }
    for(int i = 0; i < n.size(); i++) {
        k -= a[i].second;
        if(k <= 0) {
            cout << a[i].first << endl;
            return 0;
        }
    }
}