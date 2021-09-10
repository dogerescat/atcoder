#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> r(n);
    for(int i = 0; i < n; i++) cin >> r[i];
    sort(r.begin(), r.end(), greater<int>());
    double ans = 0.0;
    for(int i = k-1; i >= 0; i--) {
        ans = (ans + (double)r[i]) / 2.0;
    }
    cout << fixed << setprecision(6) << ans << endl;
}