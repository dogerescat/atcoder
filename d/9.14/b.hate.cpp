#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x; cin >> x;
    for(ll i = -118; i <= 119; i++) {
        for(ll j = -118; j <= 119; j++) {
            ll a5 = 1, b5 = 1;
            for(int k = 0; k < 5; k++) {
                a5 *= i;
                b5 *= j;
            }
            if((a5 - b5) == x) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}