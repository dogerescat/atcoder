#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    set<ll> a;
    for(ll i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            a.insert(i);
            a.insert(n/i);
        }
    }
    for(auto i : a) {
        cout << i << endl;
    }
}