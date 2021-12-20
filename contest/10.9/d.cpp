#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;
int main() {
    int n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    ll cnt = 0;
    ll ans = 1;
    ll pre = 0;
    for(int i = 0; i < n; i++) {
        ans = ans * (b[i] - a[i] + 1) % MOD;
        cnt = (cnt + max(0LL, pre - a[i])) % MOD;
        pre = b[i];
    }
    ans = (ans - cnt) % MOD;
    if(ans < 0) {
      ans += MOD; 
    } 
    cout << ans << endl;
    //不正解
}
