#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}
int main() {
    int n; cin >> n;
    vector<ll> a(n+1);    
    for(int i = 1; i <= n; i++) {
        ll x; cin >> x;
        a[i] = a[i-1] + x;
    }
    vector<ll> b(n+1);
    for(int i = 1; i <= n; i++) {
        b[i] = b[i-1] + a[i];
    }
    vector<ll> M(n+1);
    for(int i = 1; i <= n; i++) {
        M[i] = max(M[i-1], a[i]);
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        chmax(ans, b[i] + M[i+1]);
    }
    chmax(ans, b[n]);
    cout << ans << endl;
}
