#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    int deep = 0;
    for(ll i = n; i > 0; i /= 2) deep++;
    ll x = 1;
    for(ll i = 1; x <= n; i++) {
        if(deep % 2 == 0) {
            if(i % 2 == 0) {
                x = x * 2 + 1;
            } else {
                x = x * 2;
            }
        } else {
            if(i % 2 == 0) {
                x = x * 2;
            } else {
                x = x * 2 + 1;
            }
        }
        if(x > n) {
            cout << ((i % 2 == 0) ? "Takahashi" : "Aoki") << endl;
            return 0;
        }
    }
}