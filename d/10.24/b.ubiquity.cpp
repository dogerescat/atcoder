#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
ll p(ll x, ll n) {
    ll res = 1;
    while(n) {
        if(n % 2 != 0) res = res * x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}
int main() {
    ll n; cin >> n;
    ll ans = p(10, n);
    ans = (ans - p(9, n)) % MOD;
    if(ans < 0) ans += MOD;
    ans = (ans - p(9, n)) % MOD;
    if(ans < 0) ans += MOD;
    ans = (ans + p(8, n)) % MOD;
    cout << ans << endl; 
}