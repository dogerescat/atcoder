#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return !b ? a : gcd(b, a % b);
}

vector<ll> primeFac(ll n) {
    vector<ll> res;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            res.push_back(i);
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n != 1) res.push_back(n);
    return res;
}

int main() {
    ll a, b; cin >> a >> b;
    vector<ll> ans;
    ans = primeFac(gcd(a, b));
    cout << ans.size() + 1 << endl;
}