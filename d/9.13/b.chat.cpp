#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<ll>());
    ll ans = 0;
    ans += a[0];
    int l = 0;
    for(int i = 1; i < (n+1)/2; i++) {
        ans += (a[i] * 2);
        l = a[i];
    }
    if(n % 2 != 0) ans -= l;
    cout << ans << endl;
}