#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll k, ll n) {
    ll res = 0;
    ll x = 1;
    while(n) {
        res += (n % 10) * x;
        x *= k;
        n /= 10;
    }
    return res;
}

int main() {
    ll k, a, b; cin >> k >> a >> b;
    ll A = func(k, a);
    ll B = func(k, b);
    cout << A * B << endl;
}