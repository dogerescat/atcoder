#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return a % b == 0 ? b : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}

ll func2(ll x, ll y) {
    ll res = x / y;
    return res;
}

ll func(ll x, ll c, ll d) {
    ll lc = lcm(c, d);
    return x - func2(x, c) - func2(x, d) + func2(x, lc);
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << func(b, c, d) - func(a-1, c, d) << endl;
}