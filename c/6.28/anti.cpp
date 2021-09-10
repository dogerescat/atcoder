#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

ll lcm(ll x, ll y) {
    return (x/gcd(x, y))*y;
}

ll func(ll x, ll y, ll z) {
    ll res = x - (x / y + x / z - x / lcm(y, z));
    return res;
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << func(b, c, d) - func(a-1, c, d) << endl;
}