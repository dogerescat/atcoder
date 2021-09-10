#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll stlen(ll n) {
    string s = to_string(n);
    return s.size();
}

int main() {
    ll x, a, b; cin >> a >> b >> x;
    ll left = 0; ll right = 1000000000;
    while (right - left > 1) {
        ll mid = (left + right) / 2;
        if(x >= a * mid + b * stlen(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout << left << endl;
}