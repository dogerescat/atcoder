#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 1e9;
    for(int i = 0; i <= n - k; i++) {
        int x = a[i+k-1] - a[i];
        ans = min(ans, x);
    }
    cout << ans << endl;
}