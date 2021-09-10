#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    for(int i = sqrt(n); i >= 2; i--) {
        if(n % i == 0) {
            ll x = i;
            ll y = n/i;
            cout << x + y - 2 << endl;
            return 0;
        }
    }
    cout << n - 1 << endl;
}