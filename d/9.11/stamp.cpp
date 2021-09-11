#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;
    if(m == 0) {
        cout << 1 << endl;
        return 0;
    }
    vector<ll> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];
    vector<ll> b;
    sort(a.begin(), a.end());
    if(a[0] != 1) b.push_back(a[0] - 1);
    for(int i = 0; i < m-1; i++) b.push_back(a[i+1]-a[i]-1);
    if(a[m-1] != n) b.push_back(n - a[m-1]);
    sort(b.begin(), b.end());
    ll ans = 0;
    ll k;
    for(auto i : b) {
        k = i;
        if(k) break;
    }
    if(!k) {
        cout << 0 << endl;
        return 0;
    }
    for(auto i : b) {
        ans += (i + (k - 1)) / k;
    }
    cout << ans << endl;
}