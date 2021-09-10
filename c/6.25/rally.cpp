#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 1e9;
    for(int p = 1; p < 101; p++) {
        int total = 0;
        for(int i = 0; i < n; i++) {
            total += (a[i] - p) * (a[i] - p);
        }
        ans = min(ans, total);
    }
    cout << ans << endl;
}