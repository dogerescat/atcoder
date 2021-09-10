#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

ll func(ll a, ll b) {
    string sa = to_string(a);
    string sb = to_string(b);
    ll res; 
    return res = max(sa.size(), sb.size());
}

int main() {
    ll n; cin >> n;
    ll ans = 1001001001001;
    for(ll i = 1; i <= 100000; i++) {
        if(n % i == 0) {
            chmin(ans, func(i, n/i));
        }
    }
    cout << ans << endl;
}