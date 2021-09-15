#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    vector<ll> x(n);
    for(int i = 0; i < n; i++) {
        ll b; cin >> b;
        a[i] = b;
        x[b-1]++;
    }
    ll total = 0; 
    for(auto i : x) {
        total +=  (i * (i-1)) / 2;
    }
    for(int i = 0; i < n; i++) {
        ll ans = total;
        ans -= (x[a[i]-1] * (x[a[i]-1]-1)) / 2;
        if(x[a[i]-1] != 0) ans += ((x[a[i]-1]-1) * (x[a[i]-1]-2)) / 2;
        cout << ans << endl;
    }
}