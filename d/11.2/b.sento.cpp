#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N, T; cin >> N >> T;
    vector<int> t(N);
    for(int i = 0; i < N; i++) cin >> t[i];
    ll ans = 0;
    for(int i = 1; i < N; i++) {
        ans += min(T, t[i] - t[i-1]);
    }
    cout << ans + T << endl;
}