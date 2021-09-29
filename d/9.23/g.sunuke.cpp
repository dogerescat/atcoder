#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, C; cin >> N >> C;
    vector<pair<ll, ll>> A;
    for(int i = 0; i < N; i++) {
        ll a, b, c; cin >> a >> b >> c;
        A.push_back({a-1, c});
        A.push_back({b, -c});
    }
    sort(A.begin(), A.end());
    ll ans = 0, f = 0, t = 0; 
    for(auto [x, y] : A) {
        if(x != t) {
            ans += min(C, f) * (x - t);
            t = x;
        }
        f += y;
    }
    cout << ans << endl;
}