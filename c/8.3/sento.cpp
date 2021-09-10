#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, T; cin >> N >> T;
    vector<ll> t(N);
    for(int i = 0; i < N; i++) cin >> t[i];
    //　↓ この場合はNとTを掛けてからansに代入するからNとTもlong long型でないといけない
    ll ans = N * T;
    // ll ans = 1;
    // ans *= N; ans *= T;
    for(int i = 1; i < N; i++) {
        if(t[i] - t[i-1] < T) {
            ans -= T - (t[i] - t[i-1]);
        }
    }
    cout << ans << endl;
}