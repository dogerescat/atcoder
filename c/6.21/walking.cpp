#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x, k, d; cin >> x >> k >> d;
    x = abs(x);
    ll m = min(k, x/d);
    k -= m; 
    x -= m * d;
    if(k % 2 == 0) {
        cout << x << endl;
    } else {
        cout << abs(x - d) << endl;
    }

}