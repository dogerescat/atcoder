#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    set<ll> s;
    for(ll i = 2; ; i++) {
        if(sqrt(n) < i) {
            cout << n - s.size() << endl;
            return 0;
        }
        ll h = 1;
        while(h < n) {
            h *= i;
            if(h <= n && h != i) s.insert(h);
        }
    }
}