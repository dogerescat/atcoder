#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;
    vector<int> x(m);
    vector<int> sp(m-1);
    for(int i = 0; i < m; i++) cin >> x[i];
    sort(x.begin(), x.end());
    for(int i = 0; i < m - 1; i++) {
        sp[i] = x[i+1] - x[i];
    }
    sort(sp.begin(), sp.end());
    ll ans = 0;
    ll cnt = max(0, m - n);
    for(int i = 0; i < cnt; i++) ans += sp[i];
    cout << ans << endl;
}